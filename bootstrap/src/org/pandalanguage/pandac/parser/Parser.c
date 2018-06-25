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
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
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
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn31)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn41)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn61)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn64)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn65)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn143)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn150)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn151)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn195)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn196)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn294)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn361)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn483)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn563)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn571)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn580)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn588)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn694)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn778)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn786)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn795)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn810)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn837)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn845)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn860)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn877)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1360)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1361)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1367)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1369)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$Position (*$fn2089)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2343)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3603)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3630)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3680)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4115)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4118)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn4807)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x28\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27\x54\x27", 27, 251182849216656286, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    self->syntaxHighlighter = NULL;
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
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn31) self->syntaxHighlighter->$class->vtable[2])(self->syntaxHighlighter);
    }
    }
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp33;
    panda$core$Int64 idx35;
    panda$core$Int64 $tmp37;
    org$pandalanguage$pandac$parser$Token result39;
    org$pandalanguage$pandac$parser$Token $returnValue42;
    org$pandalanguage$pandac$parser$Token result44;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp50;
    panda$core$Object* $tmp53;
    panda$core$Int64 $tmp54;
    panda$core$Int64 $tmp56;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp59;
    panda$core$Int64 $tmp60;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp62;
    panda$core$Int64 $tmp63;
    panda$core$Int64 $tmp32 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp33, 0);
    panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp32, $tmp33);
    if ($tmp34.value) {
    {
        panda$core$Int64 $tmp36 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp37, 1);
        panda$core$Int64 $tmp38 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp36, $tmp37);
        idx35 = $tmp38;
        org$pandalanguage$pandac$parser$Token $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx35);
        result39 = $tmp40;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx35);
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn41) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result39);
        }
        }
        $returnValue42 = result39;
        return $returnValue42;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp45 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result44 = $tmp45;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp46, 12);
        panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result44.kind.$rawValue, $tmp46);
        if ($tmp47.value) {
        {
            panda$core$Int64 $tmp49 = panda$collections$Stack$get_count$R$panda$core$Int64(self->syntaxHighlighter->stack);
            panda$core$Int64$init$builtin_int64(&$tmp50, 0);
            panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
            bool $tmp48 = $tmp51.value;
            if ($tmp48) goto $l52;
            panda$core$Int64$init$builtin_int64(&$tmp54, 0);
            panda$core$Object* $tmp55 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->syntaxHighlighter->stack, $tmp54);
            $tmp53 = $tmp55;
            panda$core$Int64$init$builtin_int64(&$tmp56, 2);
            panda$core$Bit $tmp57 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp53)->value.$rawValue, $tmp56);
            $tmp48 = $tmp57.value;
            panda$core$Panda$unref$panda$core$Object($tmp53);
            $l52:;
            panda$core$Bit $tmp58 = { $tmp48 };
            if ($tmp58.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp60, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp59, $tmp60);
                (($fn61) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp59);
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp63, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp62, $tmp63);
                (($fn64) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp62);
            }
            }
        }
        }
        (($fn65) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result44);
    }
    }
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result44);
    }
    }
    $returnValue42 = result44;
    return $returnValue42;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result69;
    org$pandalanguage$pandac$parser$Token$Kind $match$108_1371;
    panda$core$Int64 $tmp72;
    panda$core$Int64 $tmp74;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto79 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp80;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp81;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp83;
    panda$core$Int64 $tmp84;
    org$pandalanguage$pandac$parser$Token t87;
    org$pandalanguage$pandac$parser$Token$Kind $match$115_2589;
    panda$core$Int64 $tmp90;
    panda$core$String* $tmp92;
    panda$core$Char8 $tmp94;
    panda$core$UInt8 $tmp95;
    panda$core$Int64 $tmp97;
    org$pandalanguage$pandac$parser$Token $returnValue99;
    panda$core$Int64 $tmp103;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto108 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp109;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp110;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp112;
    panda$core$Int64 $tmp113;
    org$pandalanguage$pandac$parser$Token t116;
    org$pandalanguage$pandac$parser$Token$Kind $match$128_25118;
    panda$core$Int64 $tmp119;
    panda$core$Int64 $tmp121;
    panda$core$Bit $tmp124;
    $l67:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp70 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result69 = $tmp70;
        {
            $match$108_1371 = result69.kind;
            panda$core$Int64$init$builtin_int64(&$tmp72, 13);
            panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp72);
            if ($tmp73.value) {
            {
                goto $l67;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp74, 9);
            panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp74);
            if ($tmp75.value) {
            {
                int $tmp78;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp82 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp84, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp83, $tmp84);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp82, self, $tmp83);
                    $tmp81 = $tmp82;
                    $tmp80 = $tmp81;
                    auto79 = $tmp80;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
                    $l85:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp88 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        t87 = $tmp88;
                        {
                            $match$115_2589 = t87.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp90, 13);
                            panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2589.$rawValue, $tmp90);
                            if ($tmp91.value) {
                            {
                                panda$core$String* $tmp93 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t87);
                                $tmp92 = $tmp93;
                                panda$core$UInt8$init$builtin_uint8(&$tmp95, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, $tmp95);
                                panda$core$Bit $tmp96 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp92, $tmp94);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
                                if ($tmp96.value) {
                                {
                                    goto $l86;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp97, 0);
                            panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2589.$rawValue, $tmp97);
                            if ($tmp98.value) {
                            {
                                $returnValue99 = t87;
                                $tmp78 = 0;
                                goto $l76;
                                $l100:;
                                return $returnValue99;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l86:;
                }
                $tmp78 = -1;
                goto $l76;
                $l76:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto79));
                auto79 = NULL;
                switch ($tmp78) {
                    case 0: goto $l100;
                    case -1: goto $l102;
                }
                $l102:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp103, 10);
            panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp103);
            if ($tmp104.value) {
            {
                int $tmp107;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp111 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp113, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp112, $tmp113);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp111, self, $tmp112);
                    $tmp110 = $tmp111;
                    $tmp109 = $tmp110;
                    auto108 = $tmp109;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                    $l114:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp117 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        t116 = $tmp117;
                        {
                            $match$128_25118 = t116.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp119, 11);
                            panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25118.$rawValue, $tmp119);
                            if ($tmp120.value) {
                            {
                                goto $l115;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp121, 0);
                            panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25118.$rawValue, $tmp121);
                            if ($tmp122.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result69, &$s123);
                                panda$core$Bit$init$builtin_bit(&$tmp124, false);
                                self->reportErrors = $tmp124;
                                $returnValue99 = t116;
                                $tmp107 = 0;
                                goto $l105;
                                $l125:;
                                return $returnValue99;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l115:;
                }
                $tmp107 = -1;
                goto $l105;
                $l105:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto108));
                auto108 = NULL;
                switch ($tmp107) {
                    case -1: goto $l127;
                    case 0: goto $l125;
                }
                $l127:;
            }
            }
            else {
            {
                $returnValue99 = result69;
                return $returnValue99;
            }
            }
            }
            }
        }
    }
    }
    $l68:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp132;
    panda$core$Object* $tmp133;
    panda$core$Int64 $tmp135;
    panda$core$String* $tmp139;
    panda$core$Object* $tmp145;
    panda$core$Int64 $tmp147;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        $l129:;
        panda$core$Int64 $tmp134 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
        panda$core$Int64$init$builtin_int64(&$tmp135, 1);
        panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp134, $tmp135);
        panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp136);
        $tmp133 = $tmp137;
        panda$core$String* $tmp138 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp133)->first)->value);
        $tmp132 = $tmp138;
        panda$core$String* $tmp140 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, p_token);
        $tmp139 = $tmp140;
        ITable* $tmp141 = ((panda$core$Equatable*) $tmp132)->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[1];
        panda$core$Bit $tmp144 = $tmp142(((panda$core$Equatable*) $tmp132), ((panda$core$Equatable*) $tmp139));
        bool $tmp131 = $tmp144.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$core$Panda$unref$panda$core$Object($tmp133);
        if (!$tmp131) goto $l130;
        {
            panda$core$Int64 $tmp146 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
            panda$core$Int64$init$builtin_int64(&$tmp147, 1);
            panda$core$Int64 $tmp148 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp146, $tmp147);
            panda$core$Object* $tmp149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp148);
            $tmp145 = $tmp149;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp145)->first)->value);
            panda$core$Panda$unref$panda$core$Object($tmp145);
            (($fn150) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l129;
        $l130:;
        (($fn151) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp153;
    org$pandalanguage$pandac$parser$Token $returnValue156;
    panda$core$Int64 $tmp158;
    panda$core$Int64 $tmp152 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp153, 0);
    panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, $tmp153);
    if ($tmp154.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp155 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp155);
    }
    }
    panda$core$Int64 $tmp157 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp158, 1);
    panda$core$Int64 $tmp159 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp157, $tmp158);
    org$pandalanguage$pandac$parser$Token $tmp160 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp159);
    $returnValue156 = $tmp160;
    return $returnValue156;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result162;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue165;
    org$pandalanguage$pandac$parser$Token $tmp163 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result162 = $tmp163;
    panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result162.kind.$rawValue, p_kind.$rawValue);
    if ($tmp164.value) {
    {
        $returnValue165 = ((org$pandalanguage$pandac$parser$Token$nullable) { result162, true });
        return $returnValue165;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result162);
    $returnValue165 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue165;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result168;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue171;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp181;
    org$pandalanguage$pandac$parser$Token $tmp169 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result168 = $tmp169;
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result168.kind.$rawValue, p_kind.$rawValue);
    if ($tmp170.value) {
    {
        $returnValue171 = ((org$pandalanguage$pandac$parser$Token$nullable) { result168, true });
        return $returnValue171;
    }
    }
    panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, p_expected);
    $tmp176 = $tmp178;
    panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
    $tmp175 = $tmp180;
    panda$core$String* $tmp182 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result168);
    $tmp181 = $tmp182;
    panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, $tmp181);
    $tmp174 = $tmp183;
    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s184);
    $tmp173 = $tmp185;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result168, $tmp173);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    $returnValue171 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue171;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp191;
    panda$core$Bit $tmp188 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp187 = $tmp188.value;
    if (!$tmp187) goto $l189;
    $tmp187 = self->reportErrors.value;
    $l189:;
    panda$core$Bit $tmp190 = { $tmp187 };
    if ($tmp190.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp192 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp192, self->path, p_token.position, p_msg);
        $tmp191 = $tmp192;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
        panda$core$Bit $tmp194 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_msg, &$s193);
        if ($tmp194.value) {
        {
            panda$io$Console$printLine$panda$core$String(p_msg);
            panda$core$System$crash();
        }
        }
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn195) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn196) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp209;
    int $tmp199;
    {
        panda$core$Bit $tmp200 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp200.value) goto $l201; else goto $l202;
        $l202:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s203, (panda$core$Int64) { 205 }, &$s204);
        abort();
        $l201:;
        panda$core$Bit $tmp205 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp205.value) goto $l206; else goto $l207;
        $l207:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s208, (panda$core$Int64) { 206 });
        abort();
        $l206:;
        panda$core$Bit$init$builtin_bit(&$tmp209, true);
        self->inSpeculative = $tmp209;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp199 = -1;
    goto $l197;
    $l197:;
    if (self->inSpeculative.value) goto $l211; else goto $l212;
    $l212:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s213, (panda$core$Int64) { 205 }, &$s214);
    abort();
    $l211:;
    switch ($tmp199) {
        case -1: goto $l210;
    }
    $l210:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp222;
    int $tmp217;
    {
        if (self->inSpeculative.value) goto $l218; else goto $l219;
        $l219:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s220, (panda$core$Int64) { 214 }, &$s221);
        abort();
        $l218:;
        panda$core$Bit$init$builtin_bit(&$tmp222, false);
        self->inSpeculative = $tmp222;
    }
    $tmp217 = -1;
    goto $l215;
    $l215:;
    panda$core$Bit $tmp224 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp224.value) goto $l225; else goto $l226;
    $l226:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s227, (panda$core$Int64) { 214 }, &$s228);
    abort();
    $l225:;
    switch ($tmp217) {
        case -1: goto $l223;
    }
    $l223:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp236;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp237;
    panda$core$Int64 $tmp239;
    panda$core$Int64 $tmp241;
    panda$core$Int64 $tmp242;
    panda$core$Bit $tmp243;
    int $tmp231;
    {
        if (self->inSpeculative.value) goto $l232; else goto $l233;
        $l233:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s234, (panda$core$Int64) { 220 }, &$s235);
        abort();
        $l232:;
        panda$core$Bit$init$builtin_bit(&$tmp236, false);
        self->inSpeculative = $tmp236;
        panda$core$Int64 $tmp238 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp239, 1);
        panda$core$Int64 $tmp240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp238, $tmp239);
        panda$core$Int64$init$builtin_int64(&$tmp241, 0);
        panda$core$Int64$init$builtin_int64(&$tmp242, -1);
        panda$core$Bit$init$builtin_bit(&$tmp243, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp237, $tmp240, $tmp241, $tmp242, $tmp243);
        int64_t $tmp245 = $tmp237.start.value;
        panda$core$Int64 i244 = { $tmp245 };
        int64_t $tmp247 = $tmp237.end.value;
        int64_t $tmp248 = $tmp237.step.value;
        bool $tmp249 = $tmp237.inclusive.value;
        bool $tmp256 = $tmp248 > 0;
        if ($tmp256) goto $l254; else goto $l255;
        $l254:;
        if ($tmp249) goto $l257; else goto $l258;
        $l257:;
        if ($tmp245 <= $tmp247) goto $l250; else goto $l252;
        $l258:;
        if ($tmp245 < $tmp247) goto $l250; else goto $l252;
        $l255:;
        if ($tmp249) goto $l259; else goto $l260;
        $l259:;
        if ($tmp245 >= $tmp247) goto $l250; else goto $l252;
        $l260:;
        if ($tmp245 > $tmp247) goto $l250; else goto $l252;
        $l250:;
        {
            org$pandalanguage$pandac$parser$Token $tmp262 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i244);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp262);
        }
        $l253:;
        if ($tmp256) goto $l264; else goto $l265;
        $l264:;
        int64_t $tmp266 = $tmp247 - i244.value;
        if ($tmp249) goto $l267; else goto $l268;
        $l267:;
        if ((uint64_t) $tmp266 >= $tmp248) goto $l263; else goto $l252;
        $l268:;
        if ((uint64_t) $tmp266 > $tmp248) goto $l263; else goto $l252;
        $l265:;
        int64_t $tmp270 = i244.value - $tmp247;
        if ($tmp249) goto $l271; else goto $l272;
        $l271:;
        if ((uint64_t) $tmp270 >= -$tmp248) goto $l263; else goto $l252;
        $l272:;
        if ((uint64_t) $tmp270 > -$tmp248) goto $l263; else goto $l252;
        $l263:;
        i244.value += $tmp248;
        goto $l250;
        $l252:;
    }
    $tmp231 = -1;
    goto $l229;
    $l229:;
    panda$core$Bit $tmp275 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp275.value) goto $l276; else goto $l277;
    $l277:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s278, (panda$core$Int64) { 220 }, &$s279);
    abort();
    $l276:;
    switch ($tmp231) {
        case -1: goto $l274;
    }
    $l274:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue280;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp283;
    panda$core$Bit $tmp284;
    panda$core$Bit$init$builtin_bit(&$tmp284, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp283, p_token.start, p_token.end, $tmp284);
    panda$core$String* $tmp285 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp283);
    $tmp282 = $tmp285;
    $tmp281 = $tmp282;
    $returnValue280 = $tmp281;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
    return $returnValue280;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue287;
    org$pandalanguage$pandac$ASTNode* $tmp288;
    org$pandalanguage$pandac$ASTNode* $tmp290;
    org$pandalanguage$pandac$ASTNode* $tmp291;
    panda$core$Int64 $tmp293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp296;
    panda$core$Int64 $tmp297;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp288 = p_chunk;
        $returnValue287 = $tmp288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
        return $returnValue287;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp292 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp293, 4);
    org$pandalanguage$pandac$Position $tmp295 = (($fn294) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp297, 52);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp296, $tmp297);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp292, $tmp293, $tmp295, p_string, $tmp296, p_chunk);
    $tmp291 = $tmp292;
    $tmp290 = $tmp291;
    $returnValue287 = $tmp290;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
    return $returnValue287;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result302 = NULL;
    panda$core$MutableString* $tmp303;
    panda$core$MutableString* $tmp304;
    org$pandalanguage$pandac$parser$Token token308;
    org$pandalanguage$pandac$parser$Token$Kind $match$242_13310;
    panda$core$Int64 $tmp311;
    panda$core$String* str316 = NULL;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$core$Char8 $tmp320;
    panda$core$UInt8 $tmp321;
    panda$core$String* $returnValue324;
    panda$core$String* $tmp325;
    panda$core$Int64 $tmp330;
    panda$core$String* $tmp333;
    panda$core$Int64 $tmp336;
    org$pandalanguage$pandac$parser$Token escape341;
    panda$core$Int64 $tmp343;
    panda$core$String* $tmp346;
    panda$core$String* escapeText350 = NULL;
    panda$core$String* $tmp351;
    panda$core$String* $tmp352;
    panda$core$Char8 c354;
    panda$core$Object* $tmp355;
    panda$collections$ListView* $tmp356;
    panda$core$Int64 $tmp358;
    panda$core$Char8 $match$261_21363;
    panda$core$Char8 $tmp364;
    panda$core$UInt8 $tmp365;
    panda$core$Char8 $tmp367;
    panda$core$UInt8 $tmp368;
    panda$core$Char8 $tmp369;
    panda$core$UInt8 $tmp370;
    panda$core$Char8 $tmp372;
    panda$core$UInt8 $tmp373;
    panda$core$Char8 $tmp374;
    panda$core$UInt8 $tmp375;
    panda$core$Char8 $tmp377;
    panda$core$UInt8 $tmp378;
    panda$core$Char8 $tmp379;
    panda$core$UInt8 $tmp380;
    panda$core$Char8 $tmp382;
    panda$core$UInt8 $tmp383;
    panda$core$Char8 $tmp384;
    panda$core$UInt8 $tmp385;
    panda$core$Char8 $tmp387;
    panda$core$UInt8 $tmp388;
    panda$core$Char8 $tmp389;
    panda$core$UInt8 $tmp390;
    panda$core$Char8 $tmp392;
    panda$core$UInt8 $tmp393;
    panda$core$Char8 $tmp394;
    panda$core$UInt8 $tmp395;
    panda$core$Char8 $tmp397;
    panda$core$UInt8 $tmp398;
    panda$core$String* $tmp400;
    panda$core$String* $tmp404;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp405;
    panda$core$Bit $tmp408;
    panda$core$Int64 $tmp411;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* $tmp418;
    int $tmp301;
    {
        panda$core$MutableString* $tmp305 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp305);
        $tmp304 = $tmp305;
        $tmp303 = $tmp304;
        result302 = $tmp303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
        $l306:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp309 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token308 = $tmp309;
            {
                $match$242_13310 = token308.kind;
                panda$core$Int64$init$builtin_int64(&$tmp311, 13);
                panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13310.$rawValue, $tmp311);
                if ($tmp312.value) {
                {
                    int $tmp315;
                    {
                        panda$core$String* $tmp319 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token308);
                        $tmp318 = $tmp319;
                        $tmp317 = $tmp318;
                        str316 = $tmp317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                        panda$core$UInt8$init$builtin_uint8(&$tmp321, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp320, $tmp321);
                        panda$core$Bit $tmp322 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str316, $tmp320);
                        if ($tmp322.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token308, &$s323);
                            $tmp325 = NULL;
                            $returnValue324 = $tmp325;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
                            $tmp315 = 0;
                            goto $l313;
                            $l326:;
                            $tmp301 = 0;
                            goto $l299;
                            $l327:;
                            return $returnValue324;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result302, str316);
                    }
                    $tmp315 = -1;
                    goto $l313;
                    $l313:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str316));
                    str316 = NULL;
                    switch ($tmp315) {
                        case 0: goto $l326;
                        case -1: goto $l329;
                    }
                    $l329:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp330, 0);
                panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13310.$rawValue, $tmp330);
                if ($tmp331.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token308, &$s332);
                    $tmp333 = NULL;
                    $returnValue324 = $tmp333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                    $tmp301 = 1;
                    goto $l299;
                    $l334:;
                    return $returnValue324;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp336, 107);
                panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13310.$rawValue, $tmp336);
                if ($tmp337.value) {
                {
                    int $tmp340;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp342 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape341 = $tmp342;
                        panda$core$Int64$init$builtin_int64(&$tmp343, 0);
                        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape341.kind.$rawValue, $tmp343);
                        if ($tmp344.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token308, &$s345);
                            $tmp346 = NULL;
                            $returnValue324 = $tmp346;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                            $tmp340 = 0;
                            goto $l338;
                            $l347:;
                            $tmp301 = 2;
                            goto $l299;
                            $l348:;
                            return $returnValue324;
                        }
                        }
                        panda$core$String* $tmp353 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape341);
                        $tmp352 = $tmp353;
                        $tmp351 = $tmp352;
                        escapeText350 = $tmp351;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                        panda$collections$ListView* $tmp357 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText350);
                        $tmp356 = $tmp357;
                        panda$core$Int64$init$builtin_int64(&$tmp358, 0);
                        ITable* $tmp359 = $tmp356->$class->itable;
                        while ($tmp359->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp359 = $tmp359->next;
                        }
                        $fn361 $tmp360 = $tmp359->methods[0];
                        panda$core$Object* $tmp362 = $tmp360($tmp356, $tmp358);
                        $tmp355 = $tmp362;
                        c354 = ((panda$core$Char8$wrapper*) $tmp355)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp355);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                        {
                            $match$261_21363 = c354;
                            panda$core$UInt8$init$builtin_uint8(&$tmp365, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp364, $tmp365);
                            panda$core$Bit $tmp366 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp364);
                            if ($tmp366.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp368, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp367, $tmp368);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp367);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp370, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp369, $tmp370);
                            panda$core$Bit $tmp371 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp369);
                            if ($tmp371.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp373, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp372, $tmp373);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp372);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp375, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp374, $tmp375);
                            panda$core$Bit $tmp376 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp374);
                            if ($tmp376.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp378, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp377, $tmp378);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp377);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp380, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp379, $tmp380);
                            panda$core$Bit $tmp381 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp379);
                            if ($tmp381.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp383, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp382, $tmp383);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp382);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp385, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp384, $tmp385);
                            panda$core$Bit $tmp386 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp384);
                            if ($tmp386.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp388, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp387, $tmp388);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp387);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp390, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp389, $tmp390);
                            panda$core$Bit $tmp391 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp389);
                            if ($tmp391.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp393, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp392, $tmp393);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp392);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp395, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp394, $tmp395);
                            panda$core$Bit $tmp396 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21363, $tmp394);
                            if ($tmp396.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp398, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp397, $tmp398);
                                panda$core$MutableString$append$panda$core$Char8(result302, $tmp397);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token308, &$s399);
                                $tmp400 = NULL;
                                $returnValue324 = $tmp400;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                                $tmp340 = 1;
                                goto $l338;
                                $l401:;
                                $tmp301 = 3;
                                goto $l299;
                                $l402:;
                                return $returnValue324;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp406 = panda$core$String$start$R$panda$core$String$Index(escapeText350);
                        panda$core$String$Index $tmp407 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText350, $tmp406);
                        panda$core$Bit$init$builtin_bit(&$tmp408, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp405, ((panda$core$String$Index$nullable) { $tmp407, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp408);
                        panda$core$String* $tmp409 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText350, $tmp405);
                        $tmp404 = $tmp409;
                        panda$core$MutableString$append$panda$core$String(result302, $tmp404);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                    }
                    $tmp340 = -1;
                    goto $l338;
                    $l338:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText350));
                    escapeText350 = NULL;
                    switch ($tmp340) {
                        case 1: goto $l401;
                        case -1: goto $l410;
                        case 0: goto $l347;
                    }
                    $l410:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp411, 101);
                panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13310.$rawValue, $tmp411);
                if ($tmp412.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token308);
                    panda$core$String* $tmp415 = panda$core$MutableString$finish$R$panda$core$String(result302);
                    $tmp414 = $tmp415;
                    $tmp413 = $tmp414;
                    $returnValue324 = $tmp413;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                    $tmp301 = 4;
                    goto $l299;
                    $l416:;
                    return $returnValue324;
                }
                }
                else {
                {
                    panda$core$String* $tmp419 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token308);
                    $tmp418 = $tmp419;
                    panda$core$MutableString$append$panda$core$String(result302, $tmp418);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
                }
                }
                }
                }
                }
            }
        }
        }
        $l307:;
    }
    $tmp301 = -1;
    goto $l299;
    $l299:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result302));
    result302 = NULL;
    switch ($tmp301) {
        case 2: goto $l348;
        case 3: goto $l402;
        case -1: goto $l420;
        case 4: goto $l416;
        case 1: goto $l334;
        case 0: goto $l327;
    }
    $l420:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result424 = NULL;
    panda$core$MutableString* $tmp425;
    panda$core$MutableString* $tmp426;
    org$pandalanguage$pandac$parser$Token token430;
    org$pandalanguage$pandac$parser$Token$Kind $match$287_13432;
    panda$core$Int64 $tmp433;
    panda$core$String* str438 = NULL;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$Char8 $tmp442;
    panda$core$UInt8 $tmp443;
    panda$core$String* $returnValue446;
    panda$core$String* $tmp447;
    panda$core$Int64 $tmp452;
    panda$core$String* $tmp455;
    panda$core$Int64 $tmp458;
    org$pandalanguage$pandac$parser$Token escape463;
    panda$core$Int64 $tmp465;
    panda$core$String* $tmp468;
    panda$core$String* escapeText472 = NULL;
    panda$core$String* $tmp473;
    panda$core$String* $tmp474;
    panda$core$Char8 c476;
    panda$core$Object* $tmp477;
    panda$collections$ListView* $tmp478;
    panda$core$Int64 $tmp480;
    panda$core$Char8 $match$306_21485;
    panda$core$Char8 $tmp486;
    panda$core$UInt8 $tmp487;
    panda$core$Char8 $tmp489;
    panda$core$UInt8 $tmp490;
    panda$core$Char8 $tmp491;
    panda$core$UInt8 $tmp492;
    panda$core$Char8 $tmp494;
    panda$core$UInt8 $tmp495;
    panda$core$Char8 $tmp496;
    panda$core$UInt8 $tmp497;
    panda$core$Char8 $tmp499;
    panda$core$UInt8 $tmp500;
    panda$core$Char8 $tmp501;
    panda$core$UInt8 $tmp502;
    panda$core$Char8 $tmp504;
    panda$core$UInt8 $tmp505;
    panda$core$Char8 $tmp506;
    panda$core$UInt8 $tmp507;
    panda$core$Char8 $tmp509;
    panda$core$UInt8 $tmp510;
    panda$core$Char8 $tmp511;
    panda$core$UInt8 $tmp512;
    panda$core$Char8 $tmp514;
    panda$core$UInt8 $tmp515;
    panda$core$Char8 $tmp516;
    panda$core$UInt8 $tmp517;
    panda$core$Char8 $tmp519;
    panda$core$UInt8 $tmp520;
    panda$core$Char8 $tmp521;
    panda$core$UInt8 $tmp522;
    panda$core$Char8 $tmp524;
    panda$core$UInt8 $tmp525;
    panda$core$String* $tmp527;
    panda$core$String* $tmp531;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp532;
    panda$core$Bit $tmp535;
    panda$core$Int64 $tmp538;
    panda$core$String* $tmp540;
    panda$core$String* $tmp541;
    panda$core$Int64 $tmp545;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp552;
    int $tmp423;
    {
        panda$core$MutableString* $tmp427 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp427);
        $tmp426 = $tmp427;
        $tmp425 = $tmp426;
        result424 = $tmp425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
        $l428:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp431 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token430 = $tmp431;
            {
                $match$287_13432 = token430.kind;
                panda$core$Int64$init$builtin_int64(&$tmp433, 13);
                panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13432.$rawValue, $tmp433);
                if ($tmp434.value) {
                {
                    int $tmp437;
                    {
                        panda$core$String* $tmp441 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token430);
                        $tmp440 = $tmp441;
                        $tmp439 = $tmp440;
                        str438 = $tmp439;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                        panda$core$UInt8$init$builtin_uint8(&$tmp443, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp442, $tmp443);
                        panda$core$Bit $tmp444 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str438, $tmp442);
                        if ($tmp444.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token430, &$s445);
                            $tmp447 = NULL;
                            $returnValue446 = $tmp447;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                            $tmp437 = 0;
                            goto $l435;
                            $l448:;
                            $tmp423 = 0;
                            goto $l421;
                            $l449:;
                            return $returnValue446;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result424, str438);
                    }
                    $tmp437 = -1;
                    goto $l435;
                    $l435:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str438));
                    str438 = NULL;
                    switch ($tmp437) {
                        case -1: goto $l451;
                        case 0: goto $l448;
                    }
                    $l451:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp452, 0);
                panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13432.$rawValue, $tmp452);
                if ($tmp453.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token430, &$s454);
                    $tmp455 = NULL;
                    $returnValue446 = $tmp455;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                    $tmp423 = 1;
                    goto $l421;
                    $l456:;
                    return $returnValue446;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp458, 107);
                panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13432.$rawValue, $tmp458);
                if ($tmp459.value) {
                {
                    int $tmp462;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp464 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape463 = $tmp464;
                        panda$core$Int64$init$builtin_int64(&$tmp465, 0);
                        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape463.kind.$rawValue, $tmp465);
                        if ($tmp466.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token430, &$s467);
                            $tmp468 = NULL;
                            $returnValue446 = $tmp468;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                            $tmp462 = 0;
                            goto $l460;
                            $l469:;
                            $tmp423 = 2;
                            goto $l421;
                            $l470:;
                            return $returnValue446;
                        }
                        }
                        panda$core$String* $tmp475 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape463);
                        $tmp474 = $tmp475;
                        $tmp473 = $tmp474;
                        escapeText472 = $tmp473;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                        panda$collections$ListView* $tmp479 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText472);
                        $tmp478 = $tmp479;
                        panda$core$Int64$init$builtin_int64(&$tmp480, 0);
                        ITable* $tmp481 = $tmp478->$class->itable;
                        while ($tmp481->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp481 = $tmp481->next;
                        }
                        $fn483 $tmp482 = $tmp481->methods[0];
                        panda$core$Object* $tmp484 = $tmp482($tmp478, $tmp480);
                        $tmp477 = $tmp484;
                        c476 = ((panda$core$Char8$wrapper*) $tmp477)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp477);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
                        {
                            $match$306_21485 = c476;
                            panda$core$UInt8$init$builtin_uint8(&$tmp487, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp486, $tmp487);
                            panda$core$Bit $tmp488 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp486);
                            if ($tmp488.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp490, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp489, $tmp490);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp489);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp492, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp491, $tmp492);
                            panda$core$Bit $tmp493 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp491);
                            if ($tmp493.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp495, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp494, $tmp495);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp494);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp497, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp496, $tmp497);
                            panda$core$Bit $tmp498 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp496);
                            if ($tmp498.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp500, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp499, $tmp500);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp499);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp502, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp501, $tmp502);
                            panda$core$Bit $tmp503 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp501);
                            if ($tmp503.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp505, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp504, $tmp505);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp504);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp507, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp506, $tmp507);
                            panda$core$Bit $tmp508 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp506);
                            if ($tmp508.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp510, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp509, $tmp510);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp509);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp512, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp511, $tmp512);
                            panda$core$Bit $tmp513 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp511);
                            if ($tmp513.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp515, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp514, $tmp515);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp514);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp517, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp516, $tmp517);
                            panda$core$Bit $tmp518 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp516);
                            if ($tmp518.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp520, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp519, $tmp520);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp519);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp522, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp521, $tmp522);
                            panda$core$Bit $tmp523 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21485, $tmp521);
                            if ($tmp523.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp525, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp524, $tmp525);
                                panda$core$MutableString$append$panda$core$Char8(result424, $tmp524);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token430, &$s526);
                                $tmp527 = NULL;
                                $returnValue446 = $tmp527;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                                $tmp462 = 1;
                                goto $l460;
                                $l528:;
                                $tmp423 = 3;
                                goto $l421;
                                $l529:;
                                return $returnValue446;
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
                        panda$core$String$Index $tmp533 = panda$core$String$start$R$panda$core$String$Index(escapeText472);
                        panda$core$String$Index $tmp534 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText472, $tmp533);
                        panda$core$Bit$init$builtin_bit(&$tmp535, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp532, ((panda$core$String$Index$nullable) { $tmp534, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp535);
                        panda$core$String* $tmp536 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText472, $tmp532);
                        $tmp531 = $tmp536;
                        panda$core$MutableString$append$panda$core$String(result424, $tmp531);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
                    }
                    $tmp462 = -1;
                    goto $l460;
                    $l460:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText472));
                    escapeText472 = NULL;
                    switch ($tmp462) {
                        case -1: goto $l537;
                        case 0: goto $l469;
                        case 1: goto $l528;
                    }
                    $l537:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp538, 96);
                panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13432.$rawValue, $tmp538);
                if ($tmp539.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token430);
                    panda$core$String* $tmp542 = panda$core$MutableString$finish$R$panda$core$String(result424);
                    $tmp541 = $tmp542;
                    $tmp540 = $tmp541;
                    $returnValue446 = $tmp540;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                    $tmp423 = 4;
                    goto $l421;
                    $l543:;
                    return $returnValue446;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp545, 101);
                panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13432.$rawValue, $tmp545);
                if ($tmp546.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token430);
                    panda$core$String* $tmp549 = panda$core$MutableString$finish$R$panda$core$String(result424);
                    $tmp548 = $tmp549;
                    $tmp547 = $tmp548;
                    $returnValue446 = $tmp547;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
                    $tmp423 = 5;
                    goto $l421;
                    $l550:;
                    return $returnValue446;
                }
                }
                else {
                {
                    panda$core$String* $tmp553 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token430);
                    $tmp552 = $tmp553;
                    panda$core$MutableString$append$panda$core$String(result424, $tmp552);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l429:;
    }
    $tmp423 = -1;
    goto $l421;
    $l421:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result424));
    result424 = NULL;
    switch ($tmp423) {
        case 5: goto $l550;
        case 3: goto $l529;
        case 1: goto $l456;
        case 0: goto $l449;
        case 2: goto $l470;
        case -1: goto $l554;
        case 4: goto $l543;
    }
    $l554:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot558 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    org$pandalanguage$pandac$ASTNode* $tmp560;
    panda$core$Int64 $tmp562;
    org$pandalanguage$pandac$ASTNode* call566 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp567;
    org$pandalanguage$pandac$ASTNode* $tmp568;
    panda$core$Int64 $tmp570;
    panda$collections$ImmutableArray* $tmp573;
    org$pandalanguage$pandac$ASTNode* stringType575 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp576;
    org$pandalanguage$pandac$ASTNode* $tmp577;
    panda$core$Int64 $tmp579;
    org$pandalanguage$pandac$ASTNode* $returnValue583;
    org$pandalanguage$pandac$ASTNode* $tmp584;
    org$pandalanguage$pandac$ASTNode* $tmp585;
    panda$core$Int64 $tmp587;
    org$pandalanguage$pandac$parser$Token$Kind $tmp590;
    panda$core$Int64 $tmp591;
    int $tmp557;
    {
        org$pandalanguage$pandac$ASTNode* $tmp561 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp562, 15);
        org$pandalanguage$pandac$Position $tmp564 = (($fn563) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp561, $tmp562, $tmp564, p_expr, &$s565);
        $tmp560 = $tmp561;
        $tmp559 = $tmp560;
        dot558 = $tmp559;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
        org$pandalanguage$pandac$ASTNode* $tmp569 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp570, 8);
        org$pandalanguage$pandac$Position $tmp572 = (($fn571) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp574 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp574);
        $tmp573 = $tmp574;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp569, $tmp570, $tmp572, dot558, $tmp573);
        $tmp568 = $tmp569;
        $tmp567 = $tmp568;
        call566 = $tmp567;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
        org$pandalanguage$pandac$ASTNode* $tmp578 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp579, 42);
        org$pandalanguage$pandac$Position $tmp581 = (($fn580) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp578, $tmp579, $tmp581, &$s582);
        $tmp577 = $tmp578;
        $tmp576 = $tmp577;
        stringType575 = $tmp576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
        org$pandalanguage$pandac$ASTNode* $tmp586 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp587, 4);
        org$pandalanguage$pandac$Position $tmp589 = (($fn588) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp591, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp590, $tmp591);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp586, $tmp587, $tmp589, call566, $tmp590, stringType575);
        $tmp585 = $tmp586;
        $tmp584 = $tmp585;
        $returnValue583 = $tmp584;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        $tmp557 = 0;
        goto $l555;
        $l592:;
        return $returnValue583;
    }
    $l555:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType575));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call566));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot558));
    dot558 = NULL;
    call566 = NULL;
    stringType575 = NULL;
    switch ($tmp557) {
        case 0: goto $l592;
    }
    $l594:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1598;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto602 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp603;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp604;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp606;
    panda$core$Int64 $tmp607;
    org$pandalanguage$pandac$parser$Token start608;
    panda$core$Int64 $tmp611;
    panda$core$Int64 $tmp614;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* $tmp620;
    org$pandalanguage$pandac$ASTNode* $returnValue625;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    org$pandalanguage$pandac$ASTNode* result630 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp631;
    panda$core$MutableString* chunk632 = NULL;
    panda$core$MutableString* $tmp633;
    panda$core$MutableString* $tmp634;
    org$pandalanguage$pandac$parser$Token token638;
    org$pandalanguage$pandac$parser$Token$Kind $match$355_13641;
    panda$core$Int64 $tmp642;
    panda$core$String* str647 = NULL;
    panda$core$String* $tmp648;
    panda$core$String* $tmp649;
    panda$core$Char8 $tmp651;
    panda$core$UInt8 $tmp652;
    org$pandalanguage$pandac$ASTNode* $tmp655;
    panda$core$Int64 $tmp661;
    org$pandalanguage$pandac$ASTNode* $tmp664;
    panda$core$Int64 $tmp668;
    org$pandalanguage$pandac$parser$Token escape673;
    panda$core$Int64 $tmp675;
    org$pandalanguage$pandac$ASTNode* $tmp678;
    panda$core$String* escapeText683 = NULL;
    panda$core$String* $tmp684;
    panda$core$String* $tmp685;
    panda$core$Char8 c687;
    panda$core$Object* $tmp688;
    panda$collections$ListView* $tmp689;
    panda$core$Int64 $tmp691;
    panda$core$Char8 $match$374_21696;
    panda$core$Char8 $tmp697;
    panda$core$UInt8 $tmp698;
    panda$core$Char8 $tmp700;
    panda$core$UInt8 $tmp701;
    panda$core$Char8 $tmp702;
    panda$core$UInt8 $tmp703;
    panda$core$Char8 $tmp705;
    panda$core$UInt8 $tmp706;
    panda$core$Char8 $tmp707;
    panda$core$UInt8 $tmp708;
    panda$core$Char8 $tmp710;
    panda$core$UInt8 $tmp711;
    panda$core$Char8 $tmp712;
    panda$core$UInt8 $tmp713;
    panda$core$Char8 $tmp715;
    panda$core$UInt8 $tmp716;
    panda$core$Char8 $tmp717;
    panda$core$UInt8 $tmp718;
    panda$core$Char8 $tmp720;
    panda$core$UInt8 $tmp721;
    panda$core$Char8 $tmp722;
    panda$core$UInt8 $tmp723;
    panda$core$Char8 $tmp725;
    panda$core$UInt8 $tmp726;
    panda$core$Char8 $tmp727;
    panda$core$UInt8 $tmp728;
    panda$core$Bit oldAllow733;
    panda$core$Bit $tmp734;
    org$pandalanguage$pandac$ASTNode* expr735 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp736;
    org$pandalanguage$pandac$ASTNode* $tmp737;
    org$pandalanguage$pandac$ASTNode* $tmp739;
    panda$core$String* align745 = NULL;
    panda$core$String* $tmp746;
    panda$core$String* format747 = NULL;
    panda$core$String* $tmp748;
    org$pandalanguage$pandac$parser$Token$Kind $tmp749;
    panda$core$Int64 $tmp750;
    panda$core$String* $tmp752;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    org$pandalanguage$pandac$parser$Token$Kind $tmp756;
    panda$core$Int64 $tmp757;
    panda$core$String* $tmp762;
    panda$core$String* $tmp763;
    panda$core$String* $tmp764;
    org$pandalanguage$pandac$ASTNode* $tmp766;
    org$pandalanguage$pandac$ASTNode* formattable773 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp774;
    org$pandalanguage$pandac$ASTNode* $tmp775;
    panda$core$Int64 $tmp777;
    org$pandalanguage$pandac$ASTNode* cast781 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp782;
    org$pandalanguage$pandac$ASTNode* $tmp783;
    panda$core$Int64 $tmp785;
    org$pandalanguage$pandac$parser$Token$Kind $tmp788;
    panda$core$Int64 $tmp789;
    org$pandalanguage$pandac$ASTNode* dot790 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp791;
    org$pandalanguage$pandac$ASTNode* $tmp792;
    panda$core$Int64 $tmp794;
    panda$collections$Array* callArgs798 = NULL;
    panda$collections$Array* $tmp799;
    panda$collections$Array* $tmp800;
    org$pandalanguage$pandac$ASTNode* $tmp802;
    panda$core$Int64 $tmp804;
    org$pandalanguage$pandac$ASTNode* $tmp805;
    org$pandalanguage$pandac$ASTNode* $tmp806;
    org$pandalanguage$pandac$ASTNode* $tmp807;
    panda$core$Int64 $tmp809;
    panda$collections$ImmutableArray* $tmp812;
    org$pandalanguage$pandac$parser$Token$Kind $tmp815;
    panda$core$Int64 $tmp816;
    org$pandalanguage$pandac$ASTNode* $tmp819;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    org$pandalanguage$pandac$ASTNode* $tmp830;
    org$pandalanguage$pandac$ASTNode* pandaType832 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp833;
    org$pandalanguage$pandac$ASTNode* $tmp834;
    panda$core$Int64 $tmp836;
    org$pandalanguage$pandac$ASTNode* callTarget840 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp841;
    org$pandalanguage$pandac$ASTNode* $tmp842;
    panda$core$Int64 $tmp844;
    panda$collections$Array* callArgs848 = NULL;
    panda$collections$Array* $tmp849;
    panda$collections$Array* $tmp850;
    org$pandalanguage$pandac$ASTNode* $tmp852;
    panda$core$Int64 $tmp854;
    org$pandalanguage$pandac$ASTNode* $tmp855;
    org$pandalanguage$pandac$ASTNode* $tmp856;
    org$pandalanguage$pandac$ASTNode* $tmp857;
    panda$core$Int64 $tmp859;
    panda$collections$ImmutableArray* $tmp862;
    panda$core$String* text865 = NULL;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$MutableString* $tmp869;
    panda$core$MutableString* $tmp870;
    panda$core$MutableString* $tmp871;
    org$pandalanguage$pandac$ASTNode* $tmp881;
    org$pandalanguage$pandac$ASTNode* $tmp882;
    org$pandalanguage$pandac$ASTNode* $tmp883;
    org$pandalanguage$pandac$ASTNode* $tmp884;
    panda$core$Int64 $tmp886;
    org$pandalanguage$pandac$ASTNode* $tmp888;
    org$pandalanguage$pandac$ASTNode* $tmp889;
    org$pandalanguage$pandac$ASTNode* $tmp890;
    org$pandalanguage$pandac$ASTNode* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp893;
    org$pandalanguage$pandac$ASTNode* $tmp894;
    org$pandalanguage$pandac$ASTNode* $tmp898;
    panda$core$String* $tmp903;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp904;
    panda$core$Bit $tmp907;
    panda$core$String* $tmp910;
    org$pandalanguage$pandac$ASTNode* $tmp912;
    org$pandalanguage$pandac$ASTNode* $tmp913;
    org$pandalanguage$pandac$ASTNode* $tmp914;
    panda$core$Int64 $tmp916;
    panda$core$String* $tmp917;
    int $tmp597;
    {
        $atPre1598 = self->allowLambdas;
        int $tmp601;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp605 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp607, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp606, $tmp607);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp605, self, $tmp606);
            $tmp604 = $tmp605;
            $tmp603 = $tmp604;
            auto602 = $tmp603;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
            org$pandalanguage$pandac$parser$Token $tmp609 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start608 = $tmp609;
            panda$core$Int64$init$builtin_int64(&$tmp611, 8);
            panda$core$Bit $tmp612 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start608.kind.$rawValue, $tmp611);
            bool $tmp610 = $tmp612.value;
            if (!$tmp610) goto $l613;
            panda$core$Int64$init$builtin_int64(&$tmp614, 7);
            panda$core$Bit $tmp615 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start608.kind.$rawValue, $tmp614);
            $tmp610 = $tmp615.value;
            $l613:;
            panda$core$Bit $tmp616 = { $tmp610 };
            if ($tmp616.value) {
            {
                panda$core$String* $tmp621 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start608);
                $tmp620 = $tmp621;
                panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s619, $tmp620);
                $tmp618 = $tmp622;
                panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s623);
                $tmp617 = $tmp624;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start608, $tmp617);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                $tmp626 = NULL;
                $returnValue625 = $tmp626;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                $tmp601 = 0;
                goto $l599;
                $l627:;
                $tmp597 = 0;
                goto $l595;
                $l628:;
                return $returnValue625;
            }
            }
            $tmp631 = NULL;
            result630 = $tmp631;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
            panda$core$MutableString* $tmp635 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp635);
            $tmp634 = $tmp635;
            $tmp633 = $tmp634;
            chunk632 = $tmp633;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
            $l636:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp639 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token638 = $tmp639;
                panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token638.kind.$rawValue, start608.kind.$rawValue);
                if ($tmp640.value) {
                {
                    goto $l637;
                }
                }
                {
                    $match$355_13641 = token638.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp642, 13);
                    panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13641.$rawValue, $tmp642);
                    if ($tmp643.value) {
                    {
                        int $tmp646;
                        {
                            panda$core$String* $tmp650 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token638);
                            $tmp649 = $tmp650;
                            $tmp648 = $tmp649;
                            str647 = $tmp648;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                            panda$core$UInt8$init$builtin_uint8(&$tmp652, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp651, $tmp652);
                            panda$core$Bit $tmp653 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str647, $tmp651);
                            if ($tmp653.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start608, &$s654);
                                $tmp655 = NULL;
                                $returnValue625 = $tmp655;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp655));
                                $tmp646 = 0;
                                goto $l644;
                                $l656:;
                                $tmp601 = 1;
                                goto $l599;
                                $l657:;
                                $tmp597 = 1;
                                goto $l595;
                                $l658:;
                                return $returnValue625;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk632, str647);
                        }
                        $tmp646 = -1;
                        goto $l644;
                        $l644:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str647));
                        str647 = NULL;
                        switch ($tmp646) {
                            case 0: goto $l656;
                            case -1: goto $l660;
                        }
                        $l660:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp661, 0);
                    panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13641.$rawValue, $tmp661);
                    if ($tmp662.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start608, &$s663);
                        $tmp664 = NULL;
                        $returnValue625 = $tmp664;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
                        $tmp601 = 2;
                        goto $l599;
                        $l665:;
                        $tmp597 = 2;
                        goto $l595;
                        $l666:;
                        return $returnValue625;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp668, 107);
                    panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13641.$rawValue, $tmp668);
                    if ($tmp669.value) {
                    {
                        int $tmp672;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp674 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape673 = $tmp674;
                            panda$core$Int64$init$builtin_int64(&$tmp675, 0);
                            panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape673.kind.$rawValue, $tmp675);
                            if ($tmp676.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start608, &$s677);
                                $tmp678 = NULL;
                                $returnValue625 = $tmp678;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
                                $tmp672 = 0;
                                goto $l670;
                                $l679:;
                                $tmp601 = 3;
                                goto $l599;
                                $l680:;
                                $tmp597 = 3;
                                goto $l595;
                                $l681:;
                                return $returnValue625;
                            }
                            }
                            panda$core$String* $tmp686 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape673);
                            $tmp685 = $tmp686;
                            $tmp684 = $tmp685;
                            escapeText683 = $tmp684;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                            panda$collections$ListView* $tmp690 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText683);
                            $tmp689 = $tmp690;
                            panda$core$Int64$init$builtin_int64(&$tmp691, 0);
                            ITable* $tmp692 = $tmp689->$class->itable;
                            while ($tmp692->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp692 = $tmp692->next;
                            }
                            $fn694 $tmp693 = $tmp692->methods[0];
                            panda$core$Object* $tmp695 = $tmp693($tmp689, $tmp691);
                            $tmp688 = $tmp695;
                            c687 = ((panda$core$Char8$wrapper*) $tmp688)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp688);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                            {
                                $match$374_21696 = c687;
                                panda$core$UInt8$init$builtin_uint8(&$tmp698, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp697, $tmp698);
                                panda$core$Bit $tmp699 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp697);
                                if ($tmp699.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp701, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp700, $tmp701);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp700);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp703, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp702, $tmp703);
                                panda$core$Bit $tmp704 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp702);
                                if ($tmp704.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp706, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp705, $tmp706);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp705);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp708, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp707, $tmp708);
                                panda$core$Bit $tmp709 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp707);
                                if ($tmp709.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp711, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp710, $tmp711);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp710);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp713, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp712, $tmp713);
                                panda$core$Bit $tmp714 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp712);
                                if ($tmp714.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp716, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp715, $tmp716);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp715);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp718, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp717, $tmp718);
                                panda$core$Bit $tmp719 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp717);
                                if ($tmp719.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp721, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp720, $tmp721);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp720);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp723, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp722, $tmp723);
                                panda$core$Bit $tmp724 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp722);
                                if ($tmp724.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp726, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp725, $tmp726);
                                    panda$core$MutableString$append$panda$core$Char8(chunk632, $tmp725);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp728, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp727, $tmp728);
                                panda$core$Bit $tmp729 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21696, $tmp727);
                                if ($tmp729.value) {
                                {
                                    {
                                        int $tmp732;
                                        {
                                            oldAllow733 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp734, false);
                                            self->allowLambdas = $tmp734;
                                            org$pandalanguage$pandac$ASTNode* $tmp738 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp737 = $tmp738;
                                            $tmp736 = $tmp737;
                                            expr735 = $tmp736;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                                            self->allowLambdas = oldAllow733;
                                            if (((panda$core$Bit) { expr735 == NULL }).value) {
                                            {
                                                $tmp739 = NULL;
                                                $returnValue625 = $tmp739;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                                                $tmp732 = 0;
                                                goto $l730;
                                                $l740:;
                                                $tmp672 = 1;
                                                goto $l670;
                                                $l741:;
                                                $tmp601 = 4;
                                                goto $l599;
                                                $l742:;
                                                $tmp597 = 4;
                                                goto $l595;
                                                $l743:;
                                                return $returnValue625;
                                            }
                                            }
                                            $tmp746 = NULL;
                                            align745 = $tmp746;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                                            $tmp748 = NULL;
                                            format747 = $tmp748;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                                            panda$core$Int64$init$builtin_int64(&$tmp750, 106);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp749, $tmp750);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp751 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp749);
                                            if (((panda$core$Bit) { $tmp751.nonnull }).value) {
                                            {
                                                {
                                                    $tmp752 = align745;
                                                    panda$core$String* $tmp755 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start608);
                                                    $tmp754 = $tmp755;
                                                    $tmp753 = $tmp754;
                                                    align745 = $tmp753;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp757, 96);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp756, $tmp757);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp756);
                                            if (((panda$core$Bit) { $tmp758.nonnull }).value) {
                                            {
                                                int $tmp761;
                                                {
                                                    {
                                                        $tmp762 = format747;
                                                        panda$core$String* $tmp765 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start608);
                                                        $tmp764 = $tmp765;
                                                        $tmp763 = $tmp764;
                                                        format747 = $tmp763;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                                                    }
                                                    if (((panda$core$Bit) { format747 == NULL }).value) {
                                                    {
                                                        $tmp766 = NULL;
                                                        $returnValue625 = $tmp766;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                                                        $tmp761 = 0;
                                                        goto $l759;
                                                        $l767:;
                                                        $tmp732 = 1;
                                                        goto $l730;
                                                        $l768:;
                                                        $tmp672 = 2;
                                                        goto $l670;
                                                        $l769:;
                                                        $tmp601 = 5;
                                                        goto $l599;
                                                        $l770:;
                                                        $tmp597 = 5;
                                                        goto $l595;
                                                        $l771:;
                                                        return $returnValue625;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp776 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp777, 42);
                                                    org$pandalanguage$pandac$Position $tmp779 = (($fn778) expr735->$class->vtable[2])(expr735);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp776, $tmp777, $tmp779, &$s780);
                                                    $tmp775 = $tmp776;
                                                    $tmp774 = $tmp775;
                                                    formattable773 = $tmp774;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                                    org$pandalanguage$pandac$ASTNode* $tmp784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp785, 4);
                                                    org$pandalanguage$pandac$Position $tmp787 = (($fn786) expr735->$class->vtable[2])(expr735);
                                                    panda$core$Int64$init$builtin_int64(&$tmp789, 90);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp788, $tmp789);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp784, $tmp785, $tmp787, expr735, $tmp788, formattable773);
                                                    $tmp783 = $tmp784;
                                                    $tmp782 = $tmp783;
                                                    cast781 = $tmp782;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
                                                    org$pandalanguage$pandac$ASTNode* $tmp793 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp794, 15);
                                                    org$pandalanguage$pandac$Position $tmp796 = (($fn795) expr735->$class->vtable[2])(expr735);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp793, $tmp794, $tmp796, cast781, &$s797);
                                                    $tmp792 = $tmp793;
                                                    $tmp791 = $tmp792;
                                                    dot790 = $tmp791;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
                                                    panda$collections$Array* $tmp801 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp801);
                                                    $tmp800 = $tmp801;
                                                    $tmp799 = $tmp800;
                                                    callArgs798 = $tmp799;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp799));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                                                    org$pandalanguage$pandac$ASTNode* $tmp803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp804, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp803, $tmp804, start608.position, format747);
                                                    $tmp802 = $tmp803;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs798, ((panda$core$Object*) $tmp802));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                                                    {
                                                        $tmp805 = expr735;
                                                        org$pandalanguage$pandac$ASTNode* $tmp808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp809, 8);
                                                        org$pandalanguage$pandac$Position $tmp811 = (($fn810) expr735->$class->vtable[2])(expr735);
                                                        panda$collections$ImmutableArray* $tmp813 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs798);
                                                        $tmp812 = $tmp813;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp808, $tmp809, $tmp811, dot790, $tmp812);
                                                        $tmp807 = $tmp808;
                                                        $tmp806 = $tmp807;
                                                        expr735 = $tmp806;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                                                    }
                                                }
                                                $tmp761 = -1;
                                                goto $l759;
                                                $l759:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs798));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot790));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast781));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable773));
                                                formattable773 = NULL;
                                                cast781 = NULL;
                                                dot790 = NULL;
                                                callArgs798 = NULL;
                                                switch ($tmp761) {
                                                    case 0: goto $l767;
                                                    case -1: goto $l814;
                                                }
                                                $l814:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp816, 101);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp815, $tmp816);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp818 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp815, &$s817);
                                            if (((panda$core$Bit) { !$tmp818.nonnull }).value) {
                                            {
                                                $tmp819 = NULL;
                                                $returnValue625 = $tmp819;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp819));
                                                $tmp732 = 2;
                                                goto $l730;
                                                $l820:;
                                                $tmp672 = 3;
                                                goto $l670;
                                                $l821:;
                                                $tmp601 = 6;
                                                goto $l599;
                                                $l822:;
                                                $tmp597 = 6;
                                                goto $l595;
                                                $l823:;
                                                return $returnValue625;
                                            }
                                            }
                                            if (((panda$core$Bit) { align745 != NULL }).value) {
                                            {
                                                int $tmp827;
                                                {
                                                    if (((panda$core$Bit) { format747 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp828 = expr735;
                                                            org$pandalanguage$pandac$ASTNode* $tmp831 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr735);
                                                            $tmp830 = $tmp831;
                                                            $tmp829 = $tmp830;
                                                            expr735 = $tmp829;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp835 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp836, 42);
                                                    org$pandalanguage$pandac$Position $tmp838 = (($fn837) expr735->$class->vtable[2])(expr735);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp835, $tmp836, $tmp838, &$s839);
                                                    $tmp834 = $tmp835;
                                                    $tmp833 = $tmp834;
                                                    pandaType832 = $tmp833;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
                                                    org$pandalanguage$pandac$ASTNode* $tmp843 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp844, 15);
                                                    org$pandalanguage$pandac$Position $tmp846 = (($fn845) expr735->$class->vtable[2])(expr735);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp843, $tmp844, $tmp846, pandaType832, &$s847);
                                                    $tmp842 = $tmp843;
                                                    $tmp841 = $tmp842;
                                                    callTarget840 = $tmp841;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                                                    panda$collections$Array* $tmp851 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp851);
                                                    $tmp850 = $tmp851;
                                                    $tmp849 = $tmp850;
                                                    callArgs848 = $tmp849;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs848, ((panda$core$Object*) expr735));
                                                    org$pandalanguage$pandac$ASTNode* $tmp853 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp854, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp853, $tmp854, start608.position, align745);
                                                    $tmp852 = $tmp853;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs848, ((panda$core$Object*) $tmp852));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
                                                    {
                                                        $tmp855 = expr735;
                                                        org$pandalanguage$pandac$ASTNode* $tmp858 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp859, 8);
                                                        org$pandalanguage$pandac$Position $tmp861 = (($fn860) expr735->$class->vtable[2])(expr735);
                                                        panda$collections$ImmutableArray* $tmp863 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs848);
                                                        $tmp862 = $tmp863;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp858, $tmp859, $tmp861, callTarget840, $tmp862);
                                                        $tmp857 = $tmp858;
                                                        $tmp856 = $tmp857;
                                                        expr735 = $tmp856;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp856));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                                                    }
                                                }
                                                $tmp827 = -1;
                                                goto $l825;
                                                $l825:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs848));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget840));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType832));
                                                pandaType832 = NULL;
                                                callTarget840 = NULL;
                                                callArgs848 = NULL;
                                                switch ($tmp827) {
                                                    case -1: goto $l864;
                                                }
                                                $l864:;
                                            }
                                            }
                                            panda$core$String* $tmp868 = panda$core$MutableString$finish$R$panda$core$String(chunk632);
                                            $tmp867 = $tmp868;
                                            $tmp866 = $tmp867;
                                            text865 = $tmp866;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                                            {
                                                $tmp869 = chunk632;
                                                panda$core$MutableString* $tmp872 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp872);
                                                $tmp871 = $tmp872;
                                                $tmp870 = $tmp871;
                                                chunk632 = $tmp870;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                                            }
                                            ITable* $tmp875 = ((panda$core$Equatable*) text865)->$class->itable;
                                            while ($tmp875->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                                                $tmp875 = $tmp875->next;
                                            }
                                            $fn877 $tmp876 = $tmp875->methods[1];
                                            panda$core$Bit $tmp878 = $tmp876(((panda$core$Equatable*) text865), ((panda$core$Equatable*) &$s874));
                                            bool $tmp873 = $tmp878.value;
                                            if ($tmp873) goto $l879;
                                            $tmp873 = ((panda$core$Bit) { result630 != NULL }).value;
                                            $l879:;
                                            panda$core$Bit $tmp880 = { $tmp873 };
                                            if ($tmp880.value) {
                                            {
                                                {
                                                    $tmp881 = result630;
                                                    org$pandalanguage$pandac$ASTNode* $tmp885 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp886, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp885, $tmp886, start608.position, text865);
                                                    $tmp884 = $tmp885;
                                                    org$pandalanguage$pandac$ASTNode* $tmp887 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result630, $tmp884);
                                                    $tmp883 = $tmp887;
                                                    $tmp882 = $tmp883;
                                                    result630 = $tmp882;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                                                }
                                                {
                                                    $tmp888 = result630;
                                                    org$pandalanguage$pandac$ASTNode* $tmp891 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result630, expr735);
                                                    $tmp890 = $tmp891;
                                                    $tmp889 = $tmp890;
                                                    result630 = $tmp889;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp892 = result630;
                                                    org$pandalanguage$pandac$ASTNode* $tmp895 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr735);
                                                    $tmp894 = $tmp895;
                                                    $tmp893 = $tmp894;
                                                    result630 = $tmp893;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                                                }
                                            }
                                            }
                                        }
                                        $tmp732 = -1;
                                        goto $l730;
                                        $l730:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text865));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format747));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align745));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr735));
                                        expr735 = NULL;
                                        text865 = NULL;
                                        switch ($tmp732) {
                                            case 1: goto $l768;
                                            case 2: goto $l820;
                                            case 0: goto $l740;
                                            case -1: goto $l896;
                                        }
                                        $l896:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token638, &$s897);
                                    $tmp898 = NULL;
                                    $returnValue625 = $tmp898;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp898));
                                    $tmp672 = 4;
                                    goto $l670;
                                    $l899:;
                                    $tmp601 = 7;
                                    goto $l599;
                                    $l900:;
                                    $tmp597 = 7;
                                    goto $l595;
                                    $l901:;
                                    return $returnValue625;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp905 = panda$core$String$start$R$panda$core$String$Index(escapeText683);
                            panda$core$String$Index $tmp906 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText683, $tmp905);
                            panda$core$Bit$init$builtin_bit(&$tmp907, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp904, ((panda$core$String$Index$nullable) { $tmp906, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp907);
                            panda$core$String* $tmp908 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText683, $tmp904);
                            $tmp903 = $tmp908;
                            panda$core$MutableString$append$panda$core$String(chunk632, $tmp903);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
                        }
                        $tmp672 = -1;
                        goto $l670;
                        $l670:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText683));
                        escapeText683 = NULL;
                        switch ($tmp672) {
                            case 2: goto $l769;
                            case 0: goto $l679;
                            case -1: goto $l909;
                            case 3: goto $l821;
                            case 4: goto $l899;
                            case 1: goto $l741;
                        }
                        $l909:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp911 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token638);
                        $tmp910 = $tmp911;
                        panda$core$MutableString$append$panda$core$String(chunk632, $tmp910);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l637:;
            org$pandalanguage$pandac$ASTNode* $tmp915 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp916, 38);
            panda$core$String* $tmp918 = panda$core$MutableString$finish$R$panda$core$String(chunk632);
            $tmp917 = $tmp918;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp915, $tmp916, start608.position, $tmp917);
            $tmp914 = $tmp915;
            org$pandalanguage$pandac$ASTNode* $tmp919 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result630, $tmp914);
            $tmp913 = $tmp919;
            $tmp912 = $tmp913;
            $returnValue625 = $tmp912;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
            $tmp601 = 8;
            goto $l599;
            $l920:;
            $tmp597 = 8;
            goto $l595;
            $l921:;
            return $returnValue625;
        }
        $l599:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto602));
        auto602 = NULL;
        chunk632 = NULL;
        switch ($tmp601) {
            case 6: goto $l822;
            case 5: goto $l770;
            case 8: goto $l920;
            case 0: goto $l627;
            case 3: goto $l680;
            case 1: goto $l657;
            case 7: goto $l900;
            case 4: goto $l742;
            case 2: goto $l665;
        }
        $l923:;
    }
    $tmp597 = -1;
    goto $l595;
    $l595:;
    panda$core$Bit $tmp925 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1598);
    if ($tmp925.value) goto $l926; else goto $l927;
    $l927:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s928, (panda$core$Int64) { 341 }, &$s929);
    abort();
    $l926:;
    switch ($tmp597) {
        case 3: goto $l681;
        case -1: goto $l924;
        case 5: goto $l771;
        case 8: goto $l921;
        case 6: goto $l823;
        case 2: goto $l666;
        case 7: goto $l901;
        case 1: goto $l658;
        case 4: goto $l743;
        case 0: goto $l628;
    }
    $l924:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start933;
    org$pandalanguage$pandac$parser$Token$Kind $tmp934;
    panda$core$Int64 $tmp935;
    org$pandalanguage$pandac$ASTNode* $returnValue938;
    org$pandalanguage$pandac$ASTNode* $tmp939;
    org$pandalanguage$pandac$ASTNode* expr942 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp943;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    org$pandalanguage$pandac$ASTNode* $tmp946;
    org$pandalanguage$pandac$ASTNode* $match$460_9952 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp953;
    panda$core$Int64 $tmp954;
    org$pandalanguage$pandac$Position firstPosition956;
    panda$core$String* firstName958 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp960;
    panda$core$Int64 $tmp961;
    panda$collections$Array* parameters966 = NULL;
    panda$collections$Array* $tmp967;
    panda$collections$Array* $tmp968;
    org$pandalanguage$pandac$ASTNode* firstType970 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp971;
    org$pandalanguage$pandac$ASTNode* $tmp972;
    org$pandalanguage$pandac$ASTNode* $tmp974;
    org$pandalanguage$pandac$ASTNode* $tmp979;
    panda$core$Int64 $tmp981;
    org$pandalanguage$pandac$parser$Token$Kind $tmp985;
    panda$core$Int64 $tmp986;
    org$pandalanguage$pandac$parser$Token$nullable nextName991;
    org$pandalanguage$pandac$parser$Token$Kind $tmp992;
    panda$core$Int64 $tmp993;
    org$pandalanguage$pandac$parser$Token$Kind $tmp996;
    panda$core$Int64 $tmp997;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    org$pandalanguage$pandac$ASTNode* nextType1006 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1007;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    org$pandalanguage$pandac$ASTNode* $tmp1010;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    panda$core$Int64 $tmp1018;
    panda$core$String* $tmp1019;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1022;
    panda$core$Int64 $tmp1023;
    org$pandalanguage$pandac$ASTNode* $tmp1026;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1031;
    panda$core$Int64 $tmp1032;
    org$pandalanguage$pandac$ASTNode* $tmp1035;
    org$pandalanguage$pandac$ASTNode* body1040 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1041;
    org$pandalanguage$pandac$ASTNode* $tmp1042;
    org$pandalanguage$pandac$ASTNode* $tmp1044;
    org$pandalanguage$pandac$ASTNode* $tmp1049;
    org$pandalanguage$pandac$ASTNode* $tmp1050;
    panda$core$Int64 $tmp1052;
    panda$collections$ImmutableArray* $tmp1053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1060;
    panda$core$Int64 $tmp1061;
    panda$collections$Array* parameters1066 = NULL;
    panda$collections$Array* $tmp1067;
    panda$collections$Array* $tmp1068;
    panda$core$Bit validLambda1070;
    panda$core$Bit $tmp1071;
    org$pandalanguage$pandac$ASTNode* nextExpr1077 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1078;
    org$pandalanguage$pandac$ASTNode* $tmp1079;
    org$pandalanguage$pandac$ASTNode* $tmp1081;
    org$pandalanguage$pandac$ASTNode* $tmp1089;
    panda$core$Int64 $tmp1094;
    panda$core$Bit $tmp1096;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1100;
    panda$core$Int64 $tmp1101;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1103;
    panda$core$Int64 $tmp1104;
    org$pandalanguage$pandac$ASTNode* $tmp1107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1114;
    panda$core$Int64 $tmp1115;
    org$pandalanguage$pandac$ASTNode* body1121 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1122;
    org$pandalanguage$pandac$ASTNode* $tmp1123;
    org$pandalanguage$pandac$ASTNode* $tmp1125;
    org$pandalanguage$pandac$ASTNode* $tmp1131;
    org$pandalanguage$pandac$ASTNode* $tmp1132;
    panda$core$Int64 $tmp1134;
    panda$collections$ImmutableArray* $tmp1135;
    org$pandalanguage$pandac$ASTNode* $tmp1144;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1150;
    panda$core$Int64 $tmp1151;
    org$pandalanguage$pandac$ASTNode* $tmp1154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1158;
    panda$core$Int64 $tmp1159;
    panda$collections$Array* parameters1164 = NULL;
    panda$collections$Array* $tmp1165;
    panda$collections$Array* $tmp1166;
    org$pandalanguage$pandac$ASTNode* body1168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1169;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    org$pandalanguage$pandac$ASTNode* $tmp1172;
    org$pandalanguage$pandac$ASTNode* $tmp1177;
    org$pandalanguage$pandac$ASTNode* $tmp1178;
    panda$core$Int64 $tmp1180;
    panda$collections$ImmutableArray* $tmp1181;
    org$pandalanguage$pandac$ASTNode* $tmp1188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1195;
    panda$core$Int64 $tmp1196;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1198;
    panda$core$Int64 $tmp1199;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    panda$collections$Array* arguments1206 = NULL;
    panda$collections$Array* $tmp1207;
    panda$collections$Array* $tmp1208;
    org$pandalanguage$pandac$ASTNode* nextExpr1215 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1216;
    org$pandalanguage$pandac$ASTNode* $tmp1217;
    org$pandalanguage$pandac$ASTNode* $tmp1219;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1227;
    panda$core$Int64 $tmp1228;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1230;
    panda$core$Int64 $tmp1231;
    org$pandalanguage$pandac$ASTNode* $tmp1234;
    int $tmp932;
    {
        panda$core$Int64$init$builtin_int64(&$tmp935, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp934, $tmp935);
        org$pandalanguage$pandac$parser$Token$nullable $tmp937 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp934, &$s936);
        start933 = $tmp937;
        if (((panda$core$Bit) { !start933.nonnull }).value) {
        {
            $tmp939 = NULL;
            $returnValue938 = $tmp939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp939));
            $tmp932 = 0;
            goto $l930;
            $l940:;
            return $returnValue938;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp945 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp944 = $tmp945;
        $tmp943 = $tmp944;
        expr942 = $tmp943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
        if (((panda$core$Bit) { expr942 == NULL }).value) {
        {
            $tmp946 = NULL;
            $returnValue938 = $tmp946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
            $tmp932 = 1;
            goto $l930;
            $l947:;
            return $returnValue938;
        }
        }
        int $tmp951;
        {
            $tmp953 = expr942;
            $match$460_9952 = $tmp953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
            panda$core$Int64$init$builtin_int64(&$tmp954, 20);
            panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_9952->$rawValue, $tmp954);
            if ($tmp955.value) {
            {
                org$pandalanguage$pandac$Position* $tmp957 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_9952->$data + 0));
                firstPosition956 = *$tmp957;
                panda$core$String** $tmp959 = ((panda$core$String**) ((char*) $match$460_9952->$data + 16));
                firstName958 = *$tmp959;
                panda$core$Int64$init$builtin_int64(&$tmp961, 96);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp960, $tmp961);
                org$pandalanguage$pandac$parser$Token$nullable $tmp962 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp960);
                if (((panda$core$Bit) { $tmp962.nonnull }).value) {
                {
                    int $tmp965;
                    {
                        panda$collections$Array* $tmp969 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp969);
                        $tmp968 = $tmp969;
                        $tmp967 = $tmp968;
                        parameters966 = $tmp967;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
                        org$pandalanguage$pandac$ASTNode* $tmp973 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp972 = $tmp973;
                        $tmp971 = $tmp972;
                        firstType970 = $tmp971;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp971));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
                        if (((panda$core$Bit) { firstType970 == NULL }).value) {
                        {
                            $tmp974 = NULL;
                            $returnValue938 = $tmp974;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
                            $tmp965 = 0;
                            goto $l963;
                            $l975:;
                            $tmp951 = 0;
                            goto $l949;
                            $l976:;
                            $tmp932 = 2;
                            goto $l930;
                            $l977:;
                            return $returnValue938;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp980 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp981, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp980, $tmp981, firstPosition956, firstName958, firstType970);
                        $tmp979 = $tmp980;
                        panda$collections$Array$add$panda$collections$Array$T(parameters966, ((panda$core$Object*) $tmp979));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
                        $l982:;
                        panda$core$Int64$init$builtin_int64(&$tmp986, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp985, $tmp986);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp987 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp985);
                        bool $tmp984 = ((panda$core$Bit) { $tmp987.nonnull }).value;
                        if (!$tmp984) goto $l983;
                        {
                            int $tmp990;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp993, 49);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp992, $tmp993);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp995 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp992, &$s994);
                                nextName991 = $tmp995;
                                panda$core$Int64$init$builtin_int64(&$tmp997, 96);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp996, $tmp997);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp999 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp996, &$s998);
                                if (((panda$core$Bit) { !$tmp999.nonnull }).value) {
                                {
                                    $tmp1000 = NULL;
                                    $returnValue938 = $tmp1000;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                                    $tmp990 = 0;
                                    goto $l988;
                                    $l1001:;
                                    $tmp965 = 1;
                                    goto $l963;
                                    $l1002:;
                                    $tmp951 = 1;
                                    goto $l949;
                                    $l1003:;
                                    $tmp932 = 3;
                                    goto $l930;
                                    $l1004:;
                                    return $returnValue938;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1009 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1008 = $tmp1009;
                                $tmp1007 = $tmp1008;
                                nextType1006 = $tmp1007;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                                if (((panda$core$Bit) { nextType1006 == NULL }).value) {
                                {
                                    $tmp1010 = NULL;
                                    $returnValue938 = $tmp1010;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                                    $tmp990 = 1;
                                    goto $l988;
                                    $l1011:;
                                    $tmp965 = 2;
                                    goto $l963;
                                    $l1012:;
                                    $tmp951 = 2;
                                    goto $l949;
                                    $l1013:;
                                    $tmp932 = 4;
                                    goto $l930;
                                    $l1014:;
                                    return $returnValue938;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1017 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1018, 31);
                                panda$core$String* $tmp1020 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName991.value));
                                $tmp1019 = $tmp1020;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1017, $tmp1018, ((org$pandalanguage$pandac$parser$Token) nextName991.value).position, $tmp1019, nextType1006);
                                $tmp1016 = $tmp1017;
                                panda$collections$Array$add$panda$collections$Array$T(parameters966, ((panda$core$Object*) $tmp1016));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1016));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                            }
                            $tmp990 = -1;
                            goto $l988;
                            $l988:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType1006));
                            nextType1006 = NULL;
                            switch ($tmp990) {
                                case -1: goto $l1021;
                                case 0: goto $l1001;
                                case 1: goto $l1011;
                            }
                            $l1021:;
                        }
                        goto $l982;
                        $l983:;
                        panda$core$Int64$init$builtin_int64(&$tmp1023, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1022, $tmp1023);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1025 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1022, &$s1024);
                        if (((panda$core$Bit) { !$tmp1025.nonnull }).value) {
                        {
                            $tmp1026 = NULL;
                            $returnValue938 = $tmp1026;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1026));
                            $tmp965 = 3;
                            goto $l963;
                            $l1027:;
                            $tmp951 = 3;
                            goto $l949;
                            $l1028:;
                            $tmp932 = 5;
                            goto $l930;
                            $l1029:;
                            return $returnValue938;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1032, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1031, $tmp1032);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1034 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1031, &$s1033);
                        if (((panda$core$Bit) { !$tmp1034.nonnull }).value) {
                        {
                            $tmp1035 = NULL;
                            $returnValue938 = $tmp1035;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
                            $tmp965 = 4;
                            goto $l963;
                            $l1036:;
                            $tmp951 = 4;
                            goto $l949;
                            $l1037:;
                            $tmp932 = 6;
                            goto $l930;
                            $l1038:;
                            return $returnValue938;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1043 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1042 = $tmp1043;
                        $tmp1041 = $tmp1042;
                        body1040 = $tmp1041;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1042));
                        if (((panda$core$Bit) { body1040 == NULL }).value) {
                        {
                            $tmp1044 = NULL;
                            $returnValue938 = $tmp1044;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                            $tmp965 = 5;
                            goto $l963;
                            $l1045:;
                            $tmp951 = 5;
                            goto $l949;
                            $l1046:;
                            $tmp932 = 7;
                            goto $l930;
                            $l1047:;
                            return $returnValue938;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1052, 43);
                        panda$collections$ImmutableArray* $tmp1054 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters966);
                        $tmp1053 = $tmp1054;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1051, $tmp1052, ((org$pandalanguage$pandac$parser$Token) start933.value).position, $tmp1053, body1040);
                        $tmp1050 = $tmp1051;
                        $tmp1049 = $tmp1050;
                        $returnValue938 = $tmp1049;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1053));
                        $tmp965 = 6;
                        goto $l963;
                        $l1055:;
                        $tmp951 = 6;
                        goto $l949;
                        $l1056:;
                        $tmp932 = 8;
                        goto $l930;
                        $l1057:;
                        return $returnValue938;
                    }
                    $l963:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1040));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType970));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters966));
                    parameters966 = NULL;
                    firstType970 = NULL;
                    body1040 = NULL;
                    switch ($tmp965) {
                        case 6: goto $l1055;
                        case 1: goto $l1002;
                        case 3: goto $l1027;
                        case 2: goto $l1012;
                        case 4: goto $l1036;
                        case 5: goto $l1045;
                        case 0: goto $l975;
                    }
                    $l1059:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1061, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1060, $tmp1061);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1060);
                if (((panda$core$Bit) { $tmp1062.nonnull }).value) {
                {
                    int $tmp1065;
                    {
                        panda$collections$Array* $tmp1069 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1069);
                        $tmp1068 = $tmp1069;
                        $tmp1067 = $tmp1068;
                        parameters1066 = $tmp1067;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1066, ((panda$core$Object*) expr942));
                        panda$core$Bit$init$builtin_bit(&$tmp1071, true);
                        validLambda1070 = $tmp1071;
                        $l1072:;
                        {
                            int $tmp1076;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1080 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1079 = $tmp1080;
                                $tmp1078 = $tmp1079;
                                nextExpr1077 = $tmp1078;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
                                if (((panda$core$Bit) { nextExpr1077 == NULL }).value) {
                                {
                                    $tmp1081 = NULL;
                                    $returnValue938 = $tmp1081;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1081));
                                    $tmp1076 = 0;
                                    goto $l1074;
                                    $l1082:;
                                    $tmp1065 = 0;
                                    goto $l1063;
                                    $l1083:;
                                    $tmp951 = 7;
                                    goto $l949;
                                    $l1084:;
                                    $tmp932 = 9;
                                    goto $l930;
                                    $l1085:;
                                    return $returnValue938;
                                }
                                }
                                bool $tmp1087 = validLambda1070.value;
                                if (!$tmp1087) goto $l1088;
                                $tmp1089 = nextExpr1077;
                                panda$core$Bit $tmp1093;
                                if (((panda$core$Bit) { $tmp1089 != NULL }).value) goto $l1090; else goto $l1091;
                                $l1090:;
                                panda$core$Int64$init$builtin_int64(&$tmp1094, 20);
                                panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1089->$rawValue, $tmp1094);
                                $tmp1093 = $tmp1095;
                                goto $l1092;
                                $l1091:;
                                panda$core$Bit$init$builtin_bit(&$tmp1096, false);
                                $tmp1093 = $tmp1096;
                                goto $l1092;
                                $l1092:;
                                $tmp1087 = $tmp1093.value;
                                $l1088:;
                                panda$core$Bit $tmp1097 = { $tmp1087 };
                                validLambda1070 = $tmp1097;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1066, ((panda$core$Object*) nextExpr1077));
                            }
                            $tmp1076 = -1;
                            goto $l1074;
                            $l1074:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1077));
                            nextExpr1077 = NULL;
                            switch ($tmp1076) {
                                case 0: goto $l1082;
                                case -1: goto $l1098;
                            }
                            $l1098:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1101, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1100, $tmp1101);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1102 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1100);
                        bool $tmp1099 = ((panda$core$Bit) { $tmp1102.nonnull }).value;
                        if ($tmp1099) goto $l1072;
                        $l1073:;
                        panda$core$Int64$init$builtin_int64(&$tmp1104, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1103, $tmp1104);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1103, &$s1105);
                        if (((panda$core$Bit) { !$tmp1106.nonnull }).value) {
                        {
                            $tmp1107 = NULL;
                            $returnValue938 = $tmp1107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1107));
                            $tmp1065 = 1;
                            goto $l1063;
                            $l1108:;
                            $tmp951 = 8;
                            goto $l949;
                            $l1109:;
                            $tmp932 = 10;
                            goto $l930;
                            $l1110:;
                            return $returnValue938;
                        }
                        }
                        bool $tmp1112 = validLambda1070.value;
                        if (!$tmp1112) goto $l1113;
                        panda$core$Int64$init$builtin_int64(&$tmp1115, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1114, $tmp1115);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1116 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1114);
                        $tmp1112 = ((panda$core$Bit) { $tmp1116.nonnull }).value;
                        $l1113:;
                        panda$core$Bit $tmp1117 = { $tmp1112 };
                        if ($tmp1117.value) {
                        {
                            int $tmp1120;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1124 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1123 = $tmp1124;
                                $tmp1122 = $tmp1123;
                                body1121 = $tmp1122;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
                                if (((panda$core$Bit) { body1121 == NULL }).value) {
                                {
                                    $tmp1125 = NULL;
                                    $returnValue938 = $tmp1125;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                                    $tmp1120 = 0;
                                    goto $l1118;
                                    $l1126:;
                                    $tmp1065 = 2;
                                    goto $l1063;
                                    $l1127:;
                                    $tmp951 = 9;
                                    goto $l949;
                                    $l1128:;
                                    $tmp932 = 11;
                                    goto $l930;
                                    $l1129:;
                                    return $returnValue938;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1133 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1134, 45);
                                panda$collections$ImmutableArray* $tmp1136 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1066);
                                $tmp1135 = $tmp1136;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1133, $tmp1134, ((org$pandalanguage$pandac$parser$Token) start933.value).position, $tmp1135, body1121);
                                $tmp1132 = $tmp1133;
                                $tmp1131 = $tmp1132;
                                $returnValue938 = $tmp1131;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1131));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
                                $tmp1120 = 1;
                                goto $l1118;
                                $l1137:;
                                $tmp1065 = 3;
                                goto $l1063;
                                $l1138:;
                                $tmp951 = 10;
                                goto $l949;
                                $l1139:;
                                $tmp932 = 12;
                                goto $l930;
                                $l1140:;
                                return $returnValue938;
                            }
                            $l1118:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1121));
                            body1121 = NULL;
                            switch ($tmp1120) {
                                case 0: goto $l1126;
                                case 1: goto $l1137;
                            }
                            $l1142:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start933.value), &$s1143);
                        $tmp1144 = NULL;
                        $returnValue938 = $tmp1144;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                        $tmp1065 = 4;
                        goto $l1063;
                        $l1145:;
                        $tmp951 = 11;
                        goto $l949;
                        $l1146:;
                        $tmp932 = 13;
                        goto $l930;
                        $l1147:;
                        return $returnValue938;
                    }
                    $l1063:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1066));
                    parameters1066 = NULL;
                    switch ($tmp1065) {
                        case 1: goto $l1108;
                        case 3: goto $l1138;
                        case 2: goto $l1127;
                        case 0: goto $l1083;
                        case 4: goto $l1145;
                    }
                    $l1149:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1151, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1150, $tmp1151);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1153 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1150, &$s1152);
                if (((panda$core$Bit) { !$tmp1153.nonnull }).value) {
                {
                    $tmp1154 = NULL;
                    $returnValue938 = $tmp1154;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                    $tmp951 = 12;
                    goto $l949;
                    $l1155:;
                    $tmp932 = 14;
                    goto $l930;
                    $l1156:;
                    return $returnValue938;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1159, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1158, $tmp1159);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1160 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1158);
                if (((panda$core$Bit) { $tmp1160.nonnull }).value) {
                {
                    int $tmp1163;
                    {
                        panda$collections$Array* $tmp1167 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1167);
                        $tmp1166 = $tmp1167;
                        $tmp1165 = $tmp1166;
                        parameters1164 = $tmp1165;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1166));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1164, ((panda$core$Object*) expr942));
                        org$pandalanguage$pandac$ASTNode* $tmp1171 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1170 = $tmp1171;
                        $tmp1169 = $tmp1170;
                        body1168 = $tmp1169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                        if (((panda$core$Bit) { body1168 == NULL }).value) {
                        {
                            $tmp1172 = NULL;
                            $returnValue938 = $tmp1172;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1172));
                            $tmp1163 = 0;
                            goto $l1161;
                            $l1173:;
                            $tmp951 = 13;
                            goto $l949;
                            $l1174:;
                            $tmp932 = 15;
                            goto $l930;
                            $l1175:;
                            return $returnValue938;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1179 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1180, 45);
                        panda$collections$ImmutableArray* $tmp1182 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1164);
                        $tmp1181 = $tmp1182;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1179, $tmp1180, ((org$pandalanguage$pandac$parser$Token) start933.value).position, $tmp1181, body1168);
                        $tmp1178 = $tmp1179;
                        $tmp1177 = $tmp1178;
                        $returnValue938 = $tmp1177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                        $tmp1163 = 1;
                        goto $l1161;
                        $l1183:;
                        $tmp951 = 14;
                        goto $l949;
                        $l1184:;
                        $tmp932 = 16;
                        goto $l930;
                        $l1185:;
                        return $returnValue938;
                    }
                    $l1161:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1164));
                    parameters1164 = NULL;
                    body1168 = NULL;
                    switch ($tmp1163) {
                        case 1: goto $l1183;
                        case 0: goto $l1173;
                    }
                    $l1187:;
                }
                }
                $tmp1188 = expr942;
                $returnValue938 = $tmp1188;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                $tmp951 = 15;
                goto $l949;
                $l1189:;
                $tmp932 = 17;
                goto $l930;
                $l1190:;
                return $returnValue938;
            }
            }
            else {
            {
                int $tmp1194;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1196, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1195, $tmp1196);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1197 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1195);
                    if (((panda$core$Bit) { !$tmp1197.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1199, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1198, $tmp1199);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1198, &$s1200);
                        $tmp1201 = expr942;
                        $returnValue938 = $tmp1201;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
                        $tmp1194 = 0;
                        goto $l1192;
                        $l1202:;
                        $tmp951 = 16;
                        goto $l949;
                        $l1203:;
                        $tmp932 = 18;
                        goto $l930;
                        $l1204:;
                        return $returnValue938;
                    }
                    }
                    panda$collections$Array* $tmp1209 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1209);
                    $tmp1208 = $tmp1209;
                    $tmp1207 = $tmp1208;
                    arguments1206 = $tmp1207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1206, ((panda$core$Object*) expr942));
                    $l1210:;
                    {
                        int $tmp1214;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1218 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1217 = $tmp1218;
                            $tmp1216 = $tmp1217;
                            nextExpr1215 = $tmp1216;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                            if (((panda$core$Bit) { nextExpr1215 == NULL }).value) {
                            {
                                $tmp1219 = NULL;
                                $returnValue938 = $tmp1219;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1219));
                                $tmp1214 = 0;
                                goto $l1212;
                                $l1220:;
                                $tmp1194 = 1;
                                goto $l1192;
                                $l1221:;
                                $tmp951 = 17;
                                goto $l949;
                                $l1222:;
                                $tmp932 = 19;
                                goto $l930;
                                $l1223:;
                                return $returnValue938;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1206, ((panda$core$Object*) nextExpr1215));
                        }
                        $tmp1214 = -1;
                        goto $l1212;
                        $l1212:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1215));
                        nextExpr1215 = NULL;
                        switch ($tmp1214) {
                            case 0: goto $l1220;
                            case -1: goto $l1225;
                        }
                        $l1225:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1228, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1227, $tmp1228);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1229 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1227);
                    bool $tmp1226 = ((panda$core$Bit) { $tmp1229.nonnull }).value;
                    if ($tmp1226) goto $l1210;
                    $l1211:;
                    panda$core$Int64$init$builtin_int64(&$tmp1231, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1230, $tmp1231);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1230, &$s1232);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start933.value), &$s1233);
                    $tmp1234 = NULL;
                    $returnValue938 = $tmp1234;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
                    $tmp1194 = 2;
                    goto $l1192;
                    $l1235:;
                    $tmp951 = 18;
                    goto $l949;
                    $l1236:;
                    $tmp932 = 20;
                    goto $l930;
                    $l1237:;
                    return $returnValue938;
                }
                $l1192:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1206));
                arguments1206 = NULL;
                switch ($tmp1194) {
                    case 1: goto $l1221;
                    case 0: goto $l1202;
                    case 2: goto $l1235;
                }
                $l1239:;
            }
            }
        }
        $tmp951 = -1;
        goto $l949;
        $l949:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
        switch ($tmp951) {
            case 18: goto $l1236;
            case 17: goto $l1222;
            case 11: goto $l1146;
            case 12: goto $l1155;
            case 3: goto $l1028;
            case 16: goto $l1203;
            case 15: goto $l1189;
            case 13: goto $l1174;
            case 4: goto $l1037;
            case 5: goto $l1046;
            case 1: goto $l1003;
            case 14: goto $l1184;
            case 0: goto $l976;
            case 10: goto $l1139;
            case 8: goto $l1109;
            case 2: goto $l1013;
            case 7: goto $l1084;
            case -1: goto $l1240;
            case 9: goto $l1128;
            case 6: goto $l1056;
        }
        $l1240:;
    }
    $tmp932 = -1;
    goto $l930;
    $l930:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr942));
    expr942 = NULL;
    switch ($tmp932) {
        case 20: goto $l1237;
        case 13: goto $l1147;
        case -1: goto $l1241;
        case 19: goto $l1223;
        case 18: goto $l1204;
        case 15: goto $l1175;
        case 5: goto $l1029;
        case 6: goto $l1038;
        case 16: goto $l1185;
        case 14: goto $l1156;
        case 3: goto $l1004;
        case 12: goto $l1140;
        case 2: goto $l977;
        case 7: goto $l1047;
        case 1: goto $l947;
        case 17: goto $l1190;
        case 4: goto $l1014;
        case 9: goto $l1085;
        case 10: goto $l1110;
        case 0: goto $l940;
        case 11: goto $l1129;
        case 8: goto $l1057;
    }
    $l1241:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1245;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1246;
    panda$core$Int64 $tmp1247;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1250;
    panda$core$Int64 $tmp1251;
    org$pandalanguage$pandac$ASTNode* t1256 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1257;
    org$pandalanguage$pandac$ASTNode* $tmp1258;
    org$pandalanguage$pandac$ASTNode* $returnValue1260;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    panda$collections$Array* parameters1265 = NULL;
    panda$collections$Array* $tmp1266;
    panda$collections$Array* $tmp1267;
    org$pandalanguage$pandac$ASTNode* $tmp1269;
    panda$core$Int64 $tmp1271;
    panda$core$String* $tmp1272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1274;
    panda$core$Int64 $tmp1275;
    org$pandalanguage$pandac$ASTNode* $tmp1278;
    org$pandalanguage$pandac$ASTNode* expr1282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1283;
    org$pandalanguage$pandac$ASTNode* $tmp1284;
    org$pandalanguage$pandac$ASTNode* $tmp1286;
    org$pandalanguage$pandac$ASTNode* $tmp1290;
    org$pandalanguage$pandac$ASTNode* $tmp1291;
    panda$core$Int64 $tmp1293;
    panda$collections$ImmutableArray* $tmp1294;
    panda$collections$Array* parameters1300 = NULL;
    panda$collections$Array* $tmp1301;
    panda$collections$Array* $tmp1302;
    org$pandalanguage$pandac$ASTNode* $tmp1304;
    panda$core$Int64 $tmp1306;
    panda$core$String* $tmp1307;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1309;
    panda$core$Int64 $tmp1310;
    org$pandalanguage$pandac$ASTNode* $tmp1313;
    org$pandalanguage$pandac$ASTNode* expr1316 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1317;
    org$pandalanguage$pandac$ASTNode* $tmp1318;
    org$pandalanguage$pandac$ASTNode* $tmp1320;
    org$pandalanguage$pandac$ASTNode* $tmp1323;
    org$pandalanguage$pandac$ASTNode* $tmp1324;
    panda$core$Int64 $tmp1326;
    panda$collections$ImmutableArray* $tmp1327;
    int $tmp1244;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1247, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1246, $tmp1247);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1249 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1246, &$s1248);
        start1245 = $tmp1249;
        panda$core$Int64$init$builtin_int64(&$tmp1251, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1250, $tmp1251);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1252 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1250);
        if (((panda$core$Bit) { $tmp1252.nonnull }).value) {
        {
            int $tmp1255;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1259 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1258 = $tmp1259;
                $tmp1257 = $tmp1258;
                t1256 = $tmp1257;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1258));
                if (((panda$core$Bit) { t1256 == NULL }).value) {
                {
                    $tmp1261 = NULL;
                    $returnValue1260 = $tmp1261;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                    $tmp1255 = 0;
                    goto $l1253;
                    $l1262:;
                    $tmp1244 = 0;
                    goto $l1242;
                    $l1263:;
                    return $returnValue1260;
                }
                }
                panda$collections$Array* $tmp1268 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1268);
                $tmp1267 = $tmp1268;
                $tmp1266 = $tmp1267;
                parameters1265 = $tmp1266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                org$pandalanguage$pandac$ASTNode* $tmp1270 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1271, 31);
                panda$core$String* $tmp1273 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1245.value));
                $tmp1272 = $tmp1273;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1270, $tmp1271, ((org$pandalanguage$pandac$parser$Token) start1245.value).position, $tmp1272, t1256);
                $tmp1269 = $tmp1270;
                panda$collections$Array$add$panda$collections$Array$T(parameters1265, ((panda$core$Object*) $tmp1269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
                panda$core$Int64$init$builtin_int64(&$tmp1275, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1274, $tmp1275);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1274, &$s1276);
                if (((panda$core$Bit) { !$tmp1277.nonnull }).value) {
                {
                    $tmp1278 = NULL;
                    $returnValue1260 = $tmp1278;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                    $tmp1255 = 1;
                    goto $l1253;
                    $l1279:;
                    $tmp1244 = 1;
                    goto $l1242;
                    $l1280:;
                    return $returnValue1260;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1285 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1284 = $tmp1285;
                $tmp1283 = $tmp1284;
                expr1282 = $tmp1283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
                if (((panda$core$Bit) { expr1282 == NULL }).value) {
                {
                    $tmp1286 = NULL;
                    $returnValue1260 = $tmp1286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                    $tmp1255 = 2;
                    goto $l1253;
                    $l1287:;
                    $tmp1244 = 2;
                    goto $l1242;
                    $l1288:;
                    return $returnValue1260;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1292 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1293, 43);
                panda$collections$ImmutableArray* $tmp1295 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1265);
                $tmp1294 = $tmp1295;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1292, $tmp1293, ((org$pandalanguage$pandac$parser$Token) start1245.value).position, $tmp1294, expr1282);
                $tmp1291 = $tmp1292;
                $tmp1290 = $tmp1291;
                $returnValue1260 = $tmp1290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
                $tmp1255 = 3;
                goto $l1253;
                $l1296:;
                $tmp1244 = 3;
                goto $l1242;
                $l1297:;
                return $returnValue1260;
            }
            $l1253:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1256));
            t1256 = NULL;
            parameters1265 = NULL;
            expr1282 = NULL;
            switch ($tmp1255) {
                case 2: goto $l1287;
                case 3: goto $l1296;
                case 1: goto $l1279;
                case 0: goto $l1262;
            }
            $l1299:;
        }
        }
        panda$collections$Array* $tmp1303 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1303);
        $tmp1302 = $tmp1303;
        $tmp1301 = $tmp1302;
        parameters1300 = $tmp1301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
        org$pandalanguage$pandac$ASTNode* $tmp1305 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1306, 20);
        panda$core$String* $tmp1308 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1245.value));
        $tmp1307 = $tmp1308;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1305, $tmp1306, ((org$pandalanguage$pandac$parser$Token) start1245.value).position, $tmp1307);
        $tmp1304 = $tmp1305;
        panda$collections$Array$add$panda$collections$Array$T(parameters1300, ((panda$core$Object*) $tmp1304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
        panda$core$Int64$init$builtin_int64(&$tmp1310, 91);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1309, $tmp1310);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1312 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1309, &$s1311);
        if (((panda$core$Bit) { !$tmp1312.nonnull }).value) {
        {
            $tmp1313 = NULL;
            $returnValue1260 = $tmp1313;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1313));
            $tmp1244 = 4;
            goto $l1242;
            $l1314:;
            return $returnValue1260;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1319 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1318 = $tmp1319;
        $tmp1317 = $tmp1318;
        expr1316 = $tmp1317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
        if (((panda$core$Bit) { expr1316 == NULL }).value) {
        {
            $tmp1320 = NULL;
            $returnValue1260 = $tmp1320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
            $tmp1244 = 5;
            goto $l1242;
            $l1321:;
            return $returnValue1260;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1325 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1326, 45);
        panda$collections$ImmutableArray* $tmp1328 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1300);
        $tmp1327 = $tmp1328;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1325, $tmp1326, ((org$pandalanguage$pandac$parser$Token) start1245.value).position, $tmp1327, expr1316);
        $tmp1324 = $tmp1325;
        $tmp1323 = $tmp1324;
        $returnValue1260 = $tmp1323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
        $tmp1244 = 6;
        goto $l1242;
        $l1329:;
        return $returnValue1260;
    }
    $l1242:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1300));
    parameters1300 = NULL;
    expr1316 = NULL;
    switch ($tmp1244) {
        case 5: goto $l1321;
        case 4: goto $l1314;
        case 2: goto $l1288;
        case 3: goto $l1297;
        case 1: goto $l1280;
        case 0: goto $l1263;
        case 6: goto $l1329;
    }
    $l1331:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1335;
    panda$core$Int64 $tmp1336;
    org$pandalanguage$pandac$ASTNode* $returnValue1339;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    panda$core$Int64 start1343;
    panda$core$Int64 $tmp1344;
    org$pandalanguage$pandac$ASTNode* regex1346 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1347;
    org$pandalanguage$pandac$ASTNode* $tmp1348;
    org$pandalanguage$pandac$ASTNode* $tmp1350;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1353;
    panda$core$Int64 $tmp1354;
    org$pandalanguage$pandac$ASTNode* $tmp1357;
    org$pandalanguage$pandac$parser$Token $tmp1362;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1363;
    panda$core$Int64 $tmp1364;
    panda$core$String$Index $tmp1365;
    panda$core$String$Index $tmp1366;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    int $tmp1334;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1336, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1335, $tmp1336);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1338 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1335, &$s1337);
        if (((panda$core$Bit) { !$tmp1338.nonnull }).value) {
        {
            $tmp1340 = NULL;
            $returnValue1339 = $tmp1340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
            $tmp1334 = 0;
            goto $l1332;
            $l1341:;
            return $returnValue1339;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1344, 1);
        panda$core$Int64 $tmp1345 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp1344);
        start1343 = $tmp1345;
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1349 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1348 = $tmp1349;
        $tmp1347 = $tmp1348;
        regex1346 = $tmp1347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1346 == NULL }).value) {
        {
            $tmp1350 = NULL;
            $returnValue1339 = $tmp1350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
            $tmp1334 = 1;
            goto $l1332;
            $l1351:;
            return $returnValue1339;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1354, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1353, $tmp1354);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1356 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1353, &$s1355);
        if (((panda$core$Bit) { !$tmp1356.nonnull }).value) {
        {
            $tmp1357 = NULL;
            $returnValue1339 = $tmp1357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
            $tmp1334 = 2;
            goto $l1332;
            $l1358:;
            return $returnValue1339;
        }
        }
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn1360) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            (($fn1361) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            panda$core$Int64$init$builtin_int64(&$tmp1364, 2);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1363, $tmp1364);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1365, start1343);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1366, self->lexer->dfa->offset);
            org$pandalanguage$pandac$Position $tmp1368 = (($fn1367) regex1346->$class->vtable[2])(regex1346);
            org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(&$tmp1362, $tmp1363, $tmp1365, $tmp1366, $tmp1368);
            (($fn1369) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp1362);
        }
        }
        $tmp1370 = regex1346;
        $returnValue1339 = $tmp1370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
        $tmp1334 = 3;
        goto $l1332;
        $l1371:;
        return $returnValue1339;
    }
    $l1332:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1346));
    regex1346 = NULL;
    switch ($tmp1334) {
        case 2: goto $l1358;
        case 3: goto $l1371;
        case 1: goto $l1351;
        case 0: goto $l1341;
    }
    $l1373:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1374;
    org$pandalanguage$pandac$parser$Token$Kind $match$632_91376;
    panda$core$Int64 $tmp1377;
    org$pandalanguage$pandac$parser$Token$Kind check1379;
    panda$core$Int64 $tmp1384;
    panda$core$Int64 $tmp1388;
    org$pandalanguage$pandac$ASTNode* $returnValue1391;
    org$pandalanguage$pandac$ASTNode* $tmp1392;
    org$pandalanguage$pandac$ASTNode* $tmp1393;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1397;
    panda$core$Int64 $tmp1399;
    panda$core$String* $tmp1400;
    panda$core$Int64 $tmp1403;
    org$pandalanguage$pandac$ASTNode* $tmp1405;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    panda$core$Int64 $tmp1408;
    panda$core$String* $tmp1409;
    panda$core$Int64 $tmp1413;
    org$pandalanguage$pandac$ASTNode* $tmp1415;
    org$pandalanguage$pandac$ASTNode* $tmp1416;
    panda$core$Int64 $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1422;
    panda$core$Int64 $tmp1423;
    panda$core$Bit $tmp1424;
    panda$core$Int64 $tmp1426;
    panda$core$Int64 $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    panda$core$Int64 $tmp1434;
    panda$core$String* $tmp1435;
    panda$core$String* $tmp1436;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1438;
    panda$core$Int64 $tmp1439;
    panda$core$Bit $tmp1440;
    panda$core$Int64 $tmp1442;
    panda$core$Int64 $tmp1445;
    org$pandalanguage$pandac$ASTNode* $tmp1447;
    org$pandalanguage$pandac$ASTNode* $tmp1448;
    panda$core$Int64 $tmp1450;
    panda$core$String* $tmp1451;
    panda$core$Int64 $tmp1455;
    org$pandalanguage$pandac$ASTNode* $tmp1457;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    panda$core$Int64 $tmp1460;
    panda$core$Int64 $tmp1462;
    org$pandalanguage$pandac$ASTNode* $tmp1464;
    org$pandalanguage$pandac$ASTNode* $tmp1465;
    panda$core$Int64 $tmp1467;
    panda$core$Int64 $tmp1469;
    org$pandalanguage$pandac$ASTNode* $tmp1471;
    org$pandalanguage$pandac$ASTNode* $tmp1472;
    panda$core$Int64 $tmp1474;
    panda$core$Int64 $tmp1476;
    org$pandalanguage$pandac$ASTNode* $tmp1478;
    org$pandalanguage$pandac$ASTNode* $tmp1479;
    panda$core$Int64 $tmp1481;
    panda$core$Bit $tmp1482;
    panda$core$Int64 $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    org$pandalanguage$pandac$ASTNode* $tmp1487;
    panda$core$Int64 $tmp1489;
    panda$core$Bit $tmp1490;
    panda$core$Int64 $tmp1493;
    panda$core$Int64 $tmp1496;
    org$pandalanguage$pandac$ASTNode* $tmp1499;
    org$pandalanguage$pandac$ASTNode* $tmp1500;
    panda$core$Int64 $tmp1503;
    org$pandalanguage$pandac$ASTNode* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1506;
    panda$core$Int64 $tmp1509;
    panda$core$String* name1514 = NULL;
    panda$core$String* $tmp1515;
    panda$core$String* $tmp1516;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1523;
    panda$core$Int64 $tmp1524;
    org$pandalanguage$pandac$ASTNode* expr1526 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1527;
    org$pandalanguage$pandac$ASTNode* $tmp1528;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1530;
    panda$core$Int64 $tmp1531;
    org$pandalanguage$pandac$ASTNode* $tmp1533;
    org$pandalanguage$pandac$ASTNode* $tmp1534;
    panda$core$Int64 $tmp1536;
    org$pandalanguage$pandac$ASTNode* $tmp1543;
    org$pandalanguage$pandac$ASTNode* $tmp1544;
    panda$core$Int64 $tmp1546;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1550;
    org$pandalanguage$pandac$ASTNode* $tmp1555;
    panda$core$Int64 $tmp1560;
    panda$core$Int64 $tmp1563;
    org$pandalanguage$pandac$ASTNode* $tmp1566;
    org$pandalanguage$pandac$ASTNode* $tmp1567;
    panda$core$Int64 $tmp1570;
    org$pandalanguage$pandac$ASTNode* $tmp1572;
    org$pandalanguage$pandac$ASTNode* $tmp1573;
    panda$core$String* $tmp1576;
    panda$core$String* $tmp1577;
    panda$core$String* $tmp1579;
    org$pandalanguage$pandac$ASTNode* $tmp1584;
    org$pandalanguage$pandac$parser$Token $tmp1375 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1374 = $tmp1375;
    {
        $match$632_91376 = t1374.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1377, 49);
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1377);
        if ($tmp1378.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1380 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1379 = $tmp1380.kind;
            bool $tmp1382 = self->allowLambdas.value;
            if (!$tmp1382) goto $l1383;
            panda$core$Int64$init$builtin_int64(&$tmp1384, 96);
            panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1379.$rawValue, $tmp1384);
            $tmp1382 = $tmp1385.value;
            $l1383:;
            panda$core$Bit $tmp1386 = { $tmp1382 };
            bool $tmp1381 = $tmp1386.value;
            if ($tmp1381) goto $l1387;
            panda$core$Int64$init$builtin_int64(&$tmp1388, 91);
            panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1379.$rawValue, $tmp1388);
            $tmp1381 = $tmp1389.value;
            $l1387:;
            panda$core$Bit $tmp1390 = { $tmp1381 };
            if ($tmp1390.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1374);
                org$pandalanguage$pandac$ASTNode* $tmp1394 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1393 = $tmp1394;
                $tmp1392 = $tmp1393;
                $returnValue1391 = $tmp1392;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                return $returnValue1391;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1398 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1399, 20);
            panda$core$String* $tmp1401 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1400 = $tmp1401;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1398, $tmp1399, t1374.position, $tmp1400);
            $tmp1397 = $tmp1398;
            $tmp1396 = $tmp1397;
            $returnValue1391 = $tmp1396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1403, 3);
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1403);
        if ($tmp1404.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1407 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1408, 22);
            panda$core$String* $tmp1410 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1409 = $tmp1410;
            panda$core$UInt64$nullable $tmp1411 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1409);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1407, $tmp1408, t1374.position, ((panda$core$UInt64) $tmp1411.value));
            $tmp1406 = $tmp1407;
            $tmp1405 = $tmp1406;
            $returnValue1391 = $tmp1405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1413, 4);
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1413);
        if ($tmp1414.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1417 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1418, 22);
            panda$core$String* $tmp1421 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1420 = $tmp1421;
            panda$core$Int64$init$builtin_int64(&$tmp1423, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1424, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1422, ((panda$core$Int64$nullable) { $tmp1423, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1424);
            panda$core$String* $tmp1425 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1420, $tmp1422);
            $tmp1419 = $tmp1425;
            panda$core$Int64$init$builtin_int64(&$tmp1426, 2);
            panda$core$UInt64$nullable $tmp1427 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1419, $tmp1426);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1417, $tmp1418, t1374.position, ((panda$core$UInt64) $tmp1427.value));
            $tmp1416 = $tmp1417;
            $tmp1415 = $tmp1416;
            $returnValue1391 = $tmp1415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1429, 5);
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1429);
        if ($tmp1430.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1433 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1434, 22);
            panda$core$String* $tmp1437 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1436 = $tmp1437;
            panda$core$Int64$init$builtin_int64(&$tmp1439, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1440, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1438, ((panda$core$Int64$nullable) { $tmp1439, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1440);
            panda$core$String* $tmp1441 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1436, $tmp1438);
            $tmp1435 = $tmp1441;
            panda$core$Int64$init$builtin_int64(&$tmp1442, 16);
            panda$core$UInt64$nullable $tmp1443 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1435, $tmp1442);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1433, $tmp1434, t1374.position, ((panda$core$UInt64) $tmp1443.value));
            $tmp1432 = $tmp1433;
            $tmp1431 = $tmp1432;
            $returnValue1391 = $tmp1431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1445, 6);
        panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1445);
        if ($tmp1446.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1449 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1450, 34);
            panda$core$String* $tmp1452 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1451 = $tmp1452;
            panda$core$Real64$nullable $tmp1453 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1451);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1449, $tmp1450, t1374.position, ((panda$core$Real64) $tmp1453.value));
            $tmp1448 = $tmp1449;
            $tmp1447 = $tmp1448;
            $returnValue1391 = $tmp1447;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1455, 47);
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1455);
        if ($tmp1456.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1460, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1459, $tmp1460, t1374.position);
            $tmp1458 = $tmp1459;
            $tmp1457 = $tmp1458;
            $returnValue1391 = $tmp1457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1462, 48);
        panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1462);
        if ($tmp1463.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1466 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1467, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1466, $tmp1467, t1374.position);
            $tmp1465 = $tmp1466;
            $tmp1464 = $tmp1465;
            $returnValue1391 = $tmp1464;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1469, 44);
        panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1469);
        if ($tmp1470.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1473 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1474, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1473, $tmp1474, t1374.position);
            $tmp1472 = $tmp1473;
            $tmp1471 = $tmp1472;
            $returnValue1391 = $tmp1471;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1476, 42);
        panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1476);
        if ($tmp1477.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1481, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1482, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1480, $tmp1481, t1374.position, $tmp1482);
            $tmp1479 = $tmp1480;
            $tmp1478 = $tmp1479;
            $returnValue1391 = $tmp1478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1484, 43);
        panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1484);
        if ($tmp1485.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1488 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1489, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1490, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1488, $tmp1489, t1374.position, $tmp1490);
            $tmp1487 = $tmp1488;
            $tmp1486 = $tmp1487;
            $returnValue1391 = $tmp1486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1493, 8);
        panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1493);
        bool $tmp1492 = $tmp1494.value;
        if ($tmp1492) goto $l1495;
        panda$core$Int64$init$builtin_int64(&$tmp1496, 7);
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1496);
        $tmp1492 = $tmp1497.value;
        $l1495:;
        panda$core$Bit $tmp1498 = { $tmp1492 };
        if ($tmp1498.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1374);
            org$pandalanguage$pandac$ASTNode* $tmp1501 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1500 = $tmp1501;
            $tmp1499 = $tmp1500;
            $returnValue1391 = $tmp1499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1503, 104);
        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1503);
        if ($tmp1504.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1374);
            org$pandalanguage$pandac$ASTNode* $tmp1507 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1506 = $tmp1507;
            $tmp1505 = $tmp1506;
            $returnValue1391 = $tmp1505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1509, 14);
        panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1509);
        if ($tmp1510.value) {
        {
            int $tmp1513;
            {
                panda$core$String* $tmp1517 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
                $tmp1516 = $tmp1517;
                $tmp1515 = $tmp1516;
                name1514 = $tmp1515;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                panda$core$Bit $tmp1519 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1514, &$s1518);
                if ($tmp1519.value) {
                {
                    int $tmp1522;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1524, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1523, $tmp1524);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1523, &$s1525);
                        org$pandalanguage$pandac$ASTNode* $tmp1529 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1528 = $tmp1529;
                        $tmp1527 = $tmp1528;
                        expr1526 = $tmp1527;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
                        panda$core$Int64$init$builtin_int64(&$tmp1531, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1530, $tmp1531);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1530, &$s1532);
                        org$pandalanguage$pandac$ASTNode* $tmp1535 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1536, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1535, $tmp1536, t1374.position, expr1526);
                        $tmp1534 = $tmp1535;
                        $tmp1533 = $tmp1534;
                        $returnValue1391 = $tmp1533;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                        $tmp1522 = 0;
                        goto $l1520;
                        $l1537:;
                        $tmp1513 = 0;
                        goto $l1511;
                        $l1538:;
                        return $returnValue1391;
                    }
                    $l1520:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1526));
                    expr1526 = NULL;
                    switch ($tmp1522) {
                        case 0: goto $l1537;
                    }
                    $l1540:;
                }
                }
                else {
                panda$core$Bit $tmp1542 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1514, &$s1541);
                if ($tmp1542.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1545 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1546, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1545, $tmp1546, t1374.position);
                    $tmp1544 = $tmp1545;
                    $tmp1543 = $tmp1544;
                    $returnValue1391 = $tmp1543;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1544));
                    $tmp1513 = 1;
                    goto $l1511;
                    $l1547:;
                    return $returnValue1391;
                }
                }
                }
                panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1551, name1514);
                $tmp1550 = $tmp1552;
                panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1553);
                $tmp1549 = $tmp1554;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1374, $tmp1549);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
                $tmp1555 = NULL;
                $returnValue1391 = $tmp1555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
                $tmp1513 = 2;
                goto $l1511;
                $l1556:;
                return $returnValue1391;
            }
            $l1511:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1514));
            name1514 = NULL;
            switch ($tmp1513) {
                case 1: goto $l1547;
                case 0: goto $l1538;
                case 2: goto $l1556;
            }
            $l1558:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1560, 21);
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1560);
        bool $tmp1559 = $tmp1561.value;
        if ($tmp1559) goto $l1562;
        panda$core$Int64$init$builtin_int64(&$tmp1563, 22);
        panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1563);
        $tmp1559 = $tmp1564.value;
        $l1562:;
        panda$core$Bit $tmp1565 = { $tmp1559 };
        if ($tmp1565.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1374);
            org$pandalanguage$pandac$ASTNode* $tmp1568 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1567 = $tmp1568;
            $tmp1566 = $tmp1567;
            $returnValue1391 = $tmp1566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1566));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
            return $returnValue1391;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1570, 55);
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91376.$rawValue, $tmp1570);
        if ($tmp1571.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1374);
            org$pandalanguage$pandac$ASTNode* $tmp1574 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1573 = $tmp1574;
            $tmp1572 = $tmp1573;
            $returnValue1391 = $tmp1572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
            return $returnValue1391;
        }
        }
        else {
        {
            panda$core$String* $tmp1580 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1374);
            $tmp1579 = $tmp1580;
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1578, $tmp1579);
            $tmp1577 = $tmp1581;
            panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1577, &$s1582);
            $tmp1576 = $tmp1583;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1374, $tmp1576);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1579));
            $tmp1584 = NULL;
            $returnValue1391 = $tmp1584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
            return $returnValue1391;
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
    org$pandalanguage$pandac$ASTNode* $match$691_91589 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1590;
    panda$core$Int64 $tmp1591;
    panda$core$String* text1593 = NULL;
    panda$core$String* $returnValue1595;
    panda$core$String* $tmp1596;
    panda$core$Int64 $tmp1599;
    org$pandalanguage$pandac$ASTNode* base1601 = NULL;
    panda$core$String* field1603 = NULL;
    panda$core$String* result1608 = NULL;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1615;
    panda$core$String* $tmp1616;
    panda$core$String* $tmp1620;
    panda$core$String* $tmp1625;
    int $tmp1588;
    {
        $tmp1590 = p_expr;
        $match$691_91589 = $tmp1590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
        panda$core$Int64$init$builtin_int64(&$tmp1591, 20);
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91589->$rawValue, $tmp1591);
        if ($tmp1592.value) {
        {
            panda$core$String** $tmp1594 = ((panda$core$String**) ((char*) $match$691_91589->$data + 16));
            text1593 = *$tmp1594;
            $tmp1596 = text1593;
            $returnValue1595 = $tmp1596;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
            $tmp1588 = 0;
            goto $l1586;
            $l1597:;
            return $returnValue1595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1599, 15);
        panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91589->$rawValue, $tmp1599);
        if ($tmp1600.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1602 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$691_91589->$data + 16));
            base1601 = *$tmp1602;
            panda$core$String** $tmp1604 = ((panda$core$String**) ((char*) $match$691_91589->$data + 24));
            field1603 = *$tmp1604;
            int $tmp1607;
            {
                panda$core$String* $tmp1611 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1601);
                $tmp1610 = $tmp1611;
                $tmp1609 = $tmp1610;
                result1608 = $tmp1609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                if (((panda$core$Bit) { result1608 != NULL }).value) {
                {
                    {
                        $tmp1613 = result1608;
                        $tmp1612 = $tmp1613;
                        panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1617, field1603);
                        $tmp1616 = $tmp1618;
                        panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1608, $tmp1616);
                        $tmp1615 = $tmp1619;
                        $tmp1614 = $tmp1615;
                        result1608 = $tmp1614;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                    }
                }
                }
                $tmp1620 = result1608;
                $returnValue1595 = $tmp1620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                $tmp1607 = 0;
                goto $l1605;
                $l1621:;
                $tmp1588 = 1;
                goto $l1586;
                $l1622:;
                return $returnValue1595;
            }
            $l1605:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1608));
            result1608 = NULL;
            switch ($tmp1607) {
                case 0: goto $l1621;
            }
            $l1624:;
        }
        }
        else {
        {
            $tmp1625 = NULL;
            $returnValue1595 = $tmp1625;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
            $tmp1588 = 2;
            goto $l1586;
            $l1626:;
            return $returnValue1595;
        }
        }
        }
    }
    $tmp1588 = -1;
    goto $l1586;
    $l1586:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
    switch ($tmp1588) {
        case 1: goto $l1622;
        case 2: goto $l1626;
        case -1: goto $l1628;
        case 0: goto $l1597;
    }
    $l1628:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1629;
    org$pandalanguage$pandac$parser$Token$Kind $match$711_91631;
    panda$core$Int64 $tmp1653;
    panda$core$Int64 $tmp1656;
    panda$core$Int64 $tmp1660;
    panda$core$Int64 $tmp1664;
    panda$core$Int64 $tmp1668;
    panda$core$Int64 $tmp1672;
    panda$core$Int64 $tmp1676;
    panda$core$Int64 $tmp1680;
    panda$core$Int64 $tmp1684;
    panda$core$Int64 $tmp1688;
    panda$core$Int64 $tmp1692;
    panda$core$Int64 $tmp1696;
    panda$core$Int64 $tmp1700;
    panda$core$Int64 $tmp1704;
    panda$core$Int64 $tmp1708;
    panda$core$Int64 $tmp1712;
    panda$core$Int64 $tmp1716;
    panda$core$Int64 $tmp1720;
    panda$core$Int64 $tmp1724;
    panda$core$Int64 $tmp1728;
    panda$core$Int64 $tmp1732;
    panda$core$Int64 $tmp1736;
    panda$core$String* $returnValue1739;
    panda$core$String* $tmp1740;
    panda$core$String* $tmp1741;
    panda$core$Int64 $tmp1744;
    org$pandalanguage$pandac$parser$Token token1746;
    panda$core$Int64 $tmp1748;
    panda$core$String* $tmp1750;
    panda$core$String* $tmp1753;
    panda$core$Int64 $tmp1756;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1758;
    panda$core$Int64 $tmp1759;
    panda$core$String* $tmp1762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1764;
    panda$core$Int64 $tmp1765;
    panda$core$String* $tmp1767;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1776;
    panda$core$String* $tmp1781;
    org$pandalanguage$pandac$parser$Token $tmp1630 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1629 = $tmp1630;
    {
        $match$711_91631 = name1629.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1653, 49);
        panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1653);
        bool $tmp1652 = $tmp1654.value;
        if ($tmp1652) goto $l1655;
        panda$core$Int64$init$builtin_int64(&$tmp1656, 52);
        panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1656);
        $tmp1652 = $tmp1657.value;
        $l1655:;
        panda$core$Bit $tmp1658 = { $tmp1652 };
        bool $tmp1651 = $tmp1658.value;
        if ($tmp1651) goto $l1659;
        panda$core$Int64$init$builtin_int64(&$tmp1660, 53);
        panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1660);
        $tmp1651 = $tmp1661.value;
        $l1659:;
        panda$core$Bit $tmp1662 = { $tmp1651 };
        bool $tmp1650 = $tmp1662.value;
        if ($tmp1650) goto $l1663;
        panda$core$Int64$init$builtin_int64(&$tmp1664, 54);
        panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1664);
        $tmp1650 = $tmp1665.value;
        $l1663:;
        panda$core$Bit $tmp1666 = { $tmp1650 };
        bool $tmp1649 = $tmp1666.value;
        if ($tmp1649) goto $l1667;
        panda$core$Int64$init$builtin_int64(&$tmp1668, 55);
        panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1668);
        $tmp1649 = $tmp1669.value;
        $l1667:;
        panda$core$Bit $tmp1670 = { $tmp1649 };
        bool $tmp1648 = $tmp1670.value;
        if ($tmp1648) goto $l1671;
        panda$core$Int64$init$builtin_int64(&$tmp1672, 56);
        panda$core$Bit $tmp1673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1672);
        $tmp1648 = $tmp1673.value;
        $l1671:;
        panda$core$Bit $tmp1674 = { $tmp1648 };
        bool $tmp1647 = $tmp1674.value;
        if ($tmp1647) goto $l1675;
        panda$core$Int64$init$builtin_int64(&$tmp1676, 58);
        panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1676);
        $tmp1647 = $tmp1677.value;
        $l1675:;
        panda$core$Bit $tmp1678 = { $tmp1647 };
        bool $tmp1646 = $tmp1678.value;
        if ($tmp1646) goto $l1679;
        panda$core$Int64$init$builtin_int64(&$tmp1680, 59);
        panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1680);
        $tmp1646 = $tmp1681.value;
        $l1679:;
        panda$core$Bit $tmp1682 = { $tmp1646 };
        bool $tmp1645 = $tmp1682.value;
        if ($tmp1645) goto $l1683;
        panda$core$Int64$init$builtin_int64(&$tmp1684, 60);
        panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1684);
        $tmp1645 = $tmp1685.value;
        $l1683:;
        panda$core$Bit $tmp1686 = { $tmp1645 };
        bool $tmp1644 = $tmp1686.value;
        if ($tmp1644) goto $l1687;
        panda$core$Int64$init$builtin_int64(&$tmp1688, 63);
        panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1688);
        $tmp1644 = $tmp1689.value;
        $l1687:;
        panda$core$Bit $tmp1690 = { $tmp1644 };
        bool $tmp1643 = $tmp1690.value;
        if ($tmp1643) goto $l1691;
        panda$core$Int64$init$builtin_int64(&$tmp1692, 66);
        panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1692);
        $tmp1643 = $tmp1693.value;
        $l1691:;
        panda$core$Bit $tmp1694 = { $tmp1643 };
        bool $tmp1642 = $tmp1694.value;
        if ($tmp1642) goto $l1695;
        panda$core$Int64$init$builtin_int64(&$tmp1696, 65);
        panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1696);
        $tmp1642 = $tmp1697.value;
        $l1695:;
        panda$core$Bit $tmp1698 = { $tmp1642 };
        bool $tmp1641 = $tmp1698.value;
        if ($tmp1641) goto $l1699;
        panda$core$Int64$init$builtin_int64(&$tmp1700, 57);
        panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1700);
        $tmp1641 = $tmp1701.value;
        $l1699:;
        panda$core$Bit $tmp1702 = { $tmp1641 };
        bool $tmp1640 = $tmp1702.value;
        if ($tmp1640) goto $l1703;
        panda$core$Int64$init$builtin_int64(&$tmp1704, 67);
        panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1704);
        $tmp1640 = $tmp1705.value;
        $l1703:;
        panda$core$Bit $tmp1706 = { $tmp1640 };
        bool $tmp1639 = $tmp1706.value;
        if ($tmp1639) goto $l1707;
        panda$core$Int64$init$builtin_int64(&$tmp1708, 68);
        panda$core$Bit $tmp1709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1708);
        $tmp1639 = $tmp1709.value;
        $l1707:;
        panda$core$Bit $tmp1710 = { $tmp1639 };
        bool $tmp1638 = $tmp1710.value;
        if ($tmp1638) goto $l1711;
        panda$core$Int64$init$builtin_int64(&$tmp1712, 69);
        panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1712);
        $tmp1638 = $tmp1713.value;
        $l1711:;
        panda$core$Bit $tmp1714 = { $tmp1638 };
        bool $tmp1637 = $tmp1714.value;
        if ($tmp1637) goto $l1715;
        panda$core$Int64$init$builtin_int64(&$tmp1716, 70);
        panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1716);
        $tmp1637 = $tmp1717.value;
        $l1715:;
        panda$core$Bit $tmp1718 = { $tmp1637 };
        bool $tmp1636 = $tmp1718.value;
        if ($tmp1636) goto $l1719;
        panda$core$Int64$init$builtin_int64(&$tmp1720, 71);
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1720);
        $tmp1636 = $tmp1721.value;
        $l1719:;
        panda$core$Bit $tmp1722 = { $tmp1636 };
        bool $tmp1635 = $tmp1722.value;
        if ($tmp1635) goto $l1723;
        panda$core$Int64$init$builtin_int64(&$tmp1724, 72);
        panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1724);
        $tmp1635 = $tmp1725.value;
        $l1723:;
        panda$core$Bit $tmp1726 = { $tmp1635 };
        bool $tmp1634 = $tmp1726.value;
        if ($tmp1634) goto $l1727;
        panda$core$Int64$init$builtin_int64(&$tmp1728, 50);
        panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1728);
        $tmp1634 = $tmp1729.value;
        $l1727:;
        panda$core$Bit $tmp1730 = { $tmp1634 };
        bool $tmp1633 = $tmp1730.value;
        if ($tmp1633) goto $l1731;
        panda$core$Int64$init$builtin_int64(&$tmp1732, 51);
        panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1732);
        $tmp1633 = $tmp1733.value;
        $l1731:;
        panda$core$Bit $tmp1734 = { $tmp1633 };
        bool $tmp1632 = $tmp1734.value;
        if ($tmp1632) goto $l1735;
        panda$core$Int64$init$builtin_int64(&$tmp1736, 73);
        panda$core$Bit $tmp1737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1736);
        $tmp1632 = $tmp1737.value;
        $l1735:;
        panda$core$Bit $tmp1738 = { $tmp1632 };
        if ($tmp1738.value) {
        {
            panda$core$String* $tmp1742 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1629);
            $tmp1741 = $tmp1742;
            $tmp1740 = $tmp1741;
            $returnValue1739 = $tmp1740;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1740));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
            return $returnValue1739;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1744, 64);
        panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1744);
        if ($tmp1745.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1747 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1746 = $tmp1747;
            panda$core$Int64$init$builtin_int64(&$tmp1748, 64);
            panda$core$Bit $tmp1749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1746.kind.$rawValue, $tmp1748);
            if ($tmp1749.value) {
            {
                $tmp1750 = &$s1751;
                $returnValue1739 = $tmp1750;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                return $returnValue1739;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1746);
                $tmp1753 = &$s1754;
                $returnValue1739 = $tmp1753;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                return $returnValue1739;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1756, 102);
        panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91631.$rawValue, $tmp1756);
        if ($tmp1757.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1759, 103);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1758, $tmp1759);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1761 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1758, &$s1760);
            if (((panda$core$Bit) { !$tmp1761.nonnull }).value) {
            {
                $tmp1762 = NULL;
                $returnValue1739 = $tmp1762;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                return $returnValue1739;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1765, 74);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1764, $tmp1765);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1766 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1764);
            if (((panda$core$Bit) { $tmp1766.nonnull }).value) {
            {
                $tmp1767 = &$s1768;
                $returnValue1739 = $tmp1767;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1767));
                return $returnValue1739;
            }
            }
            $tmp1770 = &$s1771;
            $returnValue1739 = $tmp1770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
            return $returnValue1739;
        }
        }
        else {
        {
            panda$core$String* $tmp1777 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1629);
            $tmp1776 = $tmp1777;
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1775, $tmp1776);
            $tmp1774 = $tmp1778;
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1779);
            $tmp1773 = $tmp1780;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1629, $tmp1773);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
            $tmp1781 = NULL;
            $returnValue1739 = $tmp1781;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1781));
            return $returnValue1739;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1783;
    org$pandalanguage$pandac$ASTNode* $tmp1784;
    org$pandalanguage$pandac$ASTNode* $tmp1785;
    panda$core$Bit $tmp1786;
    panda$core$Bit$init$builtin_bit(&$tmp1786, true);
    org$pandalanguage$pandac$ASTNode* $tmp1787 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1786);
    $tmp1785 = $tmp1787;
    $tmp1784 = $tmp1785;
    $returnValue1783 = $tmp1784;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
    return $returnValue1783;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1792;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1793;
    panda$core$Int64 $tmp1794;
    org$pandalanguage$pandac$ASTNode* $returnValue1797;
    org$pandalanguage$pandac$ASTNode* $tmp1798;
    panda$collections$Array* subtypes1801 = NULL;
    panda$collections$Array* $tmp1802;
    panda$collections$Array* $tmp1803;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1805;
    panda$core$Int64 $tmp1806;
    org$pandalanguage$pandac$ASTNode* t1811 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1812;
    org$pandalanguage$pandac$ASTNode* $tmp1813;
    org$pandalanguage$pandac$ASTNode* $tmp1815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1822;
    panda$core$Int64 $tmp1823;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    org$pandalanguage$pandac$ASTNode* $tmp1826;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1833;
    panda$core$Int64 $tmp1834;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    org$pandalanguage$pandac$parser$Token yields1842;
    org$pandalanguage$pandac$parser$Token$Kind $match$775_91844;
    panda$core$Int64 $tmp1848;
    panda$core$Int64 $tmp1851;
    panda$core$Int64 $tmp1855;
    panda$core$Int64 $tmp1859;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1865;
    panda$core$Int64 $tmp1866;
    org$pandalanguage$pandac$ASTNode* $tmp1869;
    panda$collections$Array* returnTypes1873 = NULL;
    panda$collections$Array* $tmp1874;
    panda$collections$Array* $tmp1875;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1877;
    panda$core$Int64 $tmp1878;
    org$pandalanguage$pandac$ASTNode* t1883 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1884;
    org$pandalanguage$pandac$ASTNode* $tmp1885;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1895;
    panda$core$Int64 $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    org$pandalanguage$pandac$ASTNode* $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1907;
    panda$core$Int64 $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* returnType1917 = NULL;
    panda$core$Int64 $tmp1919;
    org$pandalanguage$pandac$ASTNode* $tmp1921;
    org$pandalanguage$pandac$ASTNode* $tmp1922;
    panda$core$Int64 $tmp1924;
    org$pandalanguage$pandac$ASTNode* $tmp1926;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    panda$core$Object* $tmp1928;
    panda$core$Int64 $tmp1929;
    org$pandalanguage$pandac$ASTNode* $tmp1932;
    org$pandalanguage$pandac$ASTNode* $tmp1936;
    org$pandalanguage$pandac$ASTNode* $tmp1937;
    panda$core$Int64 $tmp1939;
    panda$collections$ImmutableArray* $tmp1940;
    org$pandalanguage$pandac$ASTNode* $tmp1947;
    int $tmp1791;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1794, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1793, $tmp1794);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1796 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1793, &$s1795);
        start1792 = $tmp1796;
        if (((panda$core$Bit) { !start1792.nonnull }).value) {
        {
            $tmp1798 = NULL;
            $returnValue1797 = $tmp1798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
            $tmp1791 = 0;
            goto $l1789;
            $l1799:;
            return $returnValue1797;
        }
        }
        panda$collections$Array* $tmp1804 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1804);
        $tmp1803 = $tmp1804;
        $tmp1802 = $tmp1803;
        subtypes1801 = $tmp1802;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
        panda$core$Int64$init$builtin_int64(&$tmp1806, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1805, $tmp1806);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1807 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1805);
        if (((panda$core$Bit) { !$tmp1807.nonnull }).value) {
        {
            int $tmp1810;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1814 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1813 = $tmp1814;
                $tmp1812 = $tmp1813;
                t1811 = $tmp1812;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1813));
                if (((panda$core$Bit) { t1811 == NULL }).value) {
                {
                    $tmp1815 = NULL;
                    $returnValue1797 = $tmp1815;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
                    $tmp1810 = 0;
                    goto $l1808;
                    $l1816:;
                    $tmp1791 = 1;
                    goto $l1789;
                    $l1817:;
                    return $returnValue1797;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1801, ((panda$core$Object*) t1811));
                $l1819:;
                panda$core$Int64$init$builtin_int64(&$tmp1823, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1822, $tmp1823);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1824 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1822);
                bool $tmp1821 = ((panda$core$Bit) { $tmp1824.nonnull }).value;
                if (!$tmp1821) goto $l1820;
                {
                    {
                        $tmp1825 = t1811;
                        org$pandalanguage$pandac$ASTNode* $tmp1828 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1827 = $tmp1828;
                        $tmp1826 = $tmp1827;
                        t1811 = $tmp1826;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
                    }
                    if (((panda$core$Bit) { t1811 == NULL }).value) {
                    {
                        $tmp1829 = NULL;
                        $returnValue1797 = $tmp1829;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                        $tmp1810 = 1;
                        goto $l1808;
                        $l1830:;
                        $tmp1791 = 2;
                        goto $l1789;
                        $l1831:;
                        return $returnValue1797;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1801, ((panda$core$Object*) t1811));
                }
                goto $l1819;
                $l1820:;
                panda$core$Int64$init$builtin_int64(&$tmp1834, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1833, $tmp1834);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1836 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1833, &$s1835);
                if (((panda$core$Bit) { !$tmp1836.nonnull }).value) {
                {
                    $tmp1837 = NULL;
                    $returnValue1797 = $tmp1837;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
                    $tmp1810 = 2;
                    goto $l1808;
                    $l1838:;
                    $tmp1791 = 3;
                    goto $l1789;
                    $l1839:;
                    return $returnValue1797;
                }
                }
            }
            $tmp1810 = -1;
            goto $l1808;
            $l1808:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1811));
            t1811 = NULL;
            switch ($tmp1810) {
                case 1: goto $l1830;
                case 0: goto $l1816;
                case 2: goto $l1838;
                case -1: goto $l1841;
            }
            $l1841:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1843 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1842 = $tmp1843;
        {
            $match$775_91844 = yields1842.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1848, 91);
            panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91844.$rawValue, $tmp1848);
            bool $tmp1847 = $tmp1849.value;
            if ($tmp1847) goto $l1850;
            panda$core$Int64$init$builtin_int64(&$tmp1851, 92);
            panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91844.$rawValue, $tmp1851);
            $tmp1847 = $tmp1852.value;
            $l1850:;
            panda$core$Bit $tmp1853 = { $tmp1847 };
            bool $tmp1846 = $tmp1853.value;
            if ($tmp1846) goto $l1854;
            panda$core$Int64$init$builtin_int64(&$tmp1855, 93);
            panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91844.$rawValue, $tmp1855);
            $tmp1846 = $tmp1856.value;
            $l1854:;
            panda$core$Bit $tmp1857 = { $tmp1846 };
            bool $tmp1845 = $tmp1857.value;
            if ($tmp1845) goto $l1858;
            panda$core$Int64$init$builtin_int64(&$tmp1859, 94);
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91844.$rawValue, $tmp1859);
            $tmp1845 = $tmp1860.value;
            $l1858:;
            panda$core$Bit $tmp1861 = { $tmp1845 };
            if ($tmp1861.value) {
            {
                int $tmp1864;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1866, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1865, $tmp1866);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1868 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1865, &$s1867);
                    if (((panda$core$Bit) { !$tmp1868.nonnull }).value) {
                    {
                        $tmp1869 = NULL;
                        $returnValue1797 = $tmp1869;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1869));
                        $tmp1864 = 0;
                        goto $l1862;
                        $l1870:;
                        $tmp1791 = 4;
                        goto $l1789;
                        $l1871:;
                        return $returnValue1797;
                    }
                    }
                    panda$collections$Array* $tmp1876 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1876);
                    $tmp1875 = $tmp1876;
                    $tmp1874 = $tmp1875;
                    returnTypes1873 = $tmp1874;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                    panda$core$Int64$init$builtin_int64(&$tmp1878, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1877, $tmp1878);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1879 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1877);
                    if (((panda$core$Bit) { !$tmp1879.nonnull }).value) {
                    {
                        int $tmp1882;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1886 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1885 = $tmp1886;
                            $tmp1884 = $tmp1885;
                            t1883 = $tmp1884;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                            if (((panda$core$Bit) { t1883 == NULL }).value) {
                            {
                                $tmp1887 = NULL;
                                $returnValue1797 = $tmp1887;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
                                $tmp1882 = 0;
                                goto $l1880;
                                $l1888:;
                                $tmp1864 = 1;
                                goto $l1862;
                                $l1889:;
                                $tmp1791 = 5;
                                goto $l1789;
                                $l1890:;
                                return $returnValue1797;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1873, ((panda$core$Object*) t1883));
                            $l1892:;
                            panda$core$Int64$init$builtin_int64(&$tmp1896, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1895, $tmp1896);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1897 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1895);
                            bool $tmp1894 = ((panda$core$Bit) { $tmp1897.nonnull }).value;
                            if (!$tmp1894) goto $l1893;
                            {
                                {
                                    $tmp1898 = t1883;
                                    org$pandalanguage$pandac$ASTNode* $tmp1901 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1900 = $tmp1901;
                                    $tmp1899 = $tmp1900;
                                    t1883 = $tmp1899;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                                }
                                if (((panda$core$Bit) { t1883 == NULL }).value) {
                                {
                                    $tmp1902 = NULL;
                                    $returnValue1797 = $tmp1902;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                                    $tmp1882 = 1;
                                    goto $l1880;
                                    $l1903:;
                                    $tmp1864 = 2;
                                    goto $l1862;
                                    $l1904:;
                                    $tmp1791 = 6;
                                    goto $l1789;
                                    $l1905:;
                                    return $returnValue1797;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1873, ((panda$core$Object*) t1883));
                            }
                            goto $l1892;
                            $l1893:;
                            panda$core$Int64$init$builtin_int64(&$tmp1908, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1907, $tmp1908);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1910 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1907, &$s1909);
                            if (((panda$core$Bit) { !$tmp1910.nonnull }).value) {
                            {
                                $tmp1911 = NULL;
                                $returnValue1797 = $tmp1911;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                                $tmp1882 = 2;
                                goto $l1880;
                                $l1912:;
                                $tmp1864 = 3;
                                goto $l1862;
                                $l1913:;
                                $tmp1791 = 7;
                                goto $l1789;
                                $l1914:;
                                return $returnValue1797;
                            }
                            }
                        }
                        $tmp1882 = -1;
                        goto $l1880;
                        $l1880:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1883));
                        t1883 = NULL;
                        switch ($tmp1882) {
                            case 1: goto $l1903;
                            case 2: goto $l1912;
                            case 0: goto $l1888;
                            case -1: goto $l1916;
                        }
                        $l1916:;
                    }
                    }
                    memset(&returnType1917, 0, sizeof(returnType1917));
                    panda$core$Int64 $tmp1918 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1873);
                    panda$core$Int64$init$builtin_int64(&$tmp1919, 0);
                    panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1918, $tmp1919);
                    if ($tmp1920.value) {
                    {
                        {
                            $tmp1921 = returnType1917;
                            $tmp1922 = NULL;
                            returnType1917 = $tmp1922;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1923 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1873);
                    panda$core$Int64$init$builtin_int64(&$tmp1924, 1);
                    panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1923, $tmp1924);
                    if ($tmp1925.value) {
                    {
                        {
                            $tmp1926 = returnType1917;
                            panda$core$Int64$init$builtin_int64(&$tmp1929, 0);
                            panda$core$Object* $tmp1930 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1873, $tmp1929);
                            $tmp1928 = $tmp1930;
                            $tmp1927 = ((org$pandalanguage$pandac$ASTNode*) $tmp1928);
                            returnType1917 = $tmp1927;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
                            panda$core$Panda$unref$panda$core$Object($tmp1928);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1792.value), &$s1931);
                        $tmp1932 = NULL;
                        $returnValue1797 = $tmp1932;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                        $tmp1864 = 4;
                        goto $l1862;
                        $l1933:;
                        $tmp1791 = 8;
                        goto $l1789;
                        $l1934:;
                        return $returnValue1797;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1938 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1939, 27);
                    panda$collections$ImmutableArray* $tmp1941 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1801);
                    $tmp1940 = $tmp1941;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1938, $tmp1939, ((org$pandalanguage$pandac$parser$Token) start1792.value).position, yields1842.kind, $tmp1940, returnType1917);
                    $tmp1937 = $tmp1938;
                    $tmp1936 = $tmp1937;
                    $returnValue1797 = $tmp1936;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
                    $tmp1864 = 5;
                    goto $l1862;
                    $l1942:;
                    $tmp1791 = 9;
                    goto $l1789;
                    $l1943:;
                    return $returnValue1797;
                }
                $l1862:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1917));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1873));
                returnTypes1873 = NULL;
                switch ($tmp1864) {
                    case 3: goto $l1913;
                    case 0: goto $l1870;
                    case 5: goto $l1942;
                    case 4: goto $l1933;
                    case 2: goto $l1904;
                    case 1: goto $l1889;
                }
                $l1945:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1792.value), &$s1946);
                $tmp1947 = NULL;
                $returnValue1797 = $tmp1947;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
                $tmp1791 = 10;
                goto $l1789;
                $l1948:;
                return $returnValue1797;
            }
            }
        }
    }
    $tmp1791 = -1;
    goto $l1789;
    $l1789:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1801));
    subtypes1801 = NULL;
    switch ($tmp1791) {
        case 7: goto $l1914;
        case 8: goto $l1934;
        case -1: goto $l1950;
        case 1: goto $l1817;
        case 9: goto $l1943;
        case 10: goto $l1948;
        case 5: goto $l1890;
        case 6: goto $l1905;
        case 3: goto $l1839;
        case 4: goto $l1871;
        case 2: goto $l1831;
        case 0: goto $l1799;
    }
    $l1950:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1954 = NULL;
    panda$core$Int64 $tmp1956;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    org$pandalanguage$pandac$ASTNode* $tmp1960;
    org$pandalanguage$pandac$ASTNode* $returnValue1962;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$parser$Token$nullable start1969;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1970;
    panda$core$Int64 $tmp1971;
    org$pandalanguage$pandac$ASTNode* $tmp1974;
    panda$core$MutableString* name1978 = NULL;
    panda$core$MutableString* $tmp1979;
    panda$core$MutableString* $tmp1980;
    panda$core$String* $tmp1982;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1987;
    panda$core$Int64 $tmp1988;
    org$pandalanguage$pandac$parser$Token$nullable id1990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1991;
    panda$core$Int64 $tmp1992;
    org$pandalanguage$pandac$ASTNode* $tmp1995;
    panda$core$Char8 $tmp1999;
    panda$core$UInt8 $tmp2000;
    panda$core$String* $tmp2001;
    panda$core$String* finalName2003 = NULL;
    panda$core$String* $tmp2004;
    panda$core$String* $tmp2005;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    panda$core$Int64 $tmp2011;
    panda$core$Int64 $tmp2013;
    panda$collections$Array* children2018 = NULL;
    panda$collections$Array* $tmp2019;
    panda$collections$Array* $tmp2020;
    org$pandalanguage$pandac$ASTNode* t2022 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2024;
    panda$core$Bit $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2040;
    panda$core$Int64 $tmp2041;
    org$pandalanguage$pandac$ASTNode* $tmp2043;
    org$pandalanguage$pandac$ASTNode* $tmp2044;
    org$pandalanguage$pandac$ASTNode* $tmp2045;
    panda$core$Bit $tmp2046;
    org$pandalanguage$pandac$ASTNode* $tmp2048;
    org$pandalanguage$pandac$ASTNode* $tmp2053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2058;
    panda$core$Int64 $tmp2059;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2067;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2073;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    panda$core$Int64 $tmp2076;
    panda$collections$ImmutableArray* $tmp2077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2081;
    panda$core$Int64 $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2085;
    org$pandalanguage$pandac$ASTNode* $tmp2086;
    panda$core$Int64 $tmp2088;
    org$pandalanguage$pandac$ASTNode* $tmp2091;
    int $tmp1953;
    {
        memset(&result1954, 0, sizeof(result1954));
        org$pandalanguage$pandac$parser$Token $tmp1955 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1956, 104);
        panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1955.kind.$rawValue, $tmp1956);
        if ($tmp1957.value) {
        {
            {
                $tmp1958 = result1954;
                org$pandalanguage$pandac$ASTNode* $tmp1961 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1960 = $tmp1961;
                $tmp1959 = $tmp1960;
                result1954 = $tmp1959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
            }
            if (((panda$core$Bit) { result1954 == NULL }).value) {
            {
                $tmp1963 = NULL;
                $returnValue1962 = $tmp1963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
                $tmp1953 = 0;
                goto $l1951;
                $l1964:;
                return $returnValue1962;
            }
            }
        }
        }
        else {
        {
            int $tmp1968;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1971, 49);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1970, $tmp1971);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1973 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1970, &$s1972);
                start1969 = $tmp1973;
                if (((panda$core$Bit) { !start1969.nonnull }).value) {
                {
                    $tmp1974 = NULL;
                    $returnValue1962 = $tmp1974;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                    $tmp1968 = 0;
                    goto $l1966;
                    $l1975:;
                    $tmp1953 = 1;
                    goto $l1951;
                    $l1976:;
                    return $returnValue1962;
                }
                }
                panda$core$MutableString* $tmp1981 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1983 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1969.value));
                $tmp1982 = $tmp1983;
                panda$core$MutableString$init$panda$core$String($tmp1981, $tmp1982);
                $tmp1980 = $tmp1981;
                $tmp1979 = $tmp1980;
                name1978 = $tmp1979;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                $l1984:;
                panda$core$Int64$init$builtin_int64(&$tmp1988, 99);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1987, $tmp1988);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1989 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1987);
                bool $tmp1986 = ((panda$core$Bit) { $tmp1989.nonnull }).value;
                if (!$tmp1986) goto $l1985;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1992, 49);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1991, $tmp1992);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1994 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1991, &$s1993);
                    id1990 = $tmp1994;
                    if (((panda$core$Bit) { !id1990.nonnull }).value) {
                    {
                        $tmp1995 = NULL;
                        $returnValue1962 = $tmp1995;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1995));
                        $tmp1968 = 1;
                        goto $l1966;
                        $l1996:;
                        $tmp1953 = 2;
                        goto $l1951;
                        $l1997:;
                        return $returnValue1962;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp2000, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1999, $tmp2000);
                    panda$core$MutableString$append$panda$core$Char8(name1978, $tmp1999);
                    panda$core$String* $tmp2002 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1990.value));
                    $tmp2001 = $tmp2002;
                    panda$core$MutableString$append$panda$core$String(name1978, $tmp2001);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
                }
                goto $l1984;
                $l1985:;
                panda$core$String* $tmp2006 = panda$core$MutableString$finish$R$panda$core$String(name1978);
                $tmp2005 = $tmp2006;
                $tmp2004 = $tmp2005;
                finalName2003 = $tmp2004;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                {
                    $tmp2007 = result1954;
                    org$pandalanguage$pandac$ASTNode* $tmp2010 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2011, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2010, $tmp2011, ((org$pandalanguage$pandac$parser$Token) start1969.value).position, finalName2003);
                    $tmp2009 = $tmp2010;
                    $tmp2008 = $tmp2009;
                    result1954 = $tmp2008;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
                }
                org$pandalanguage$pandac$parser$Token $tmp2012 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp2013, 63);
                panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2012.kind.$rawValue, $tmp2013);
                if ($tmp2014.value) {
                {
                    int $tmp2017;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp2021 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2021);
                        $tmp2020 = $tmp2021;
                        $tmp2019 = $tmp2020;
                        children2018 = $tmp2019;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                        panda$core$Bit$init$builtin_bit(&$tmp2025, false);
                        org$pandalanguage$pandac$ASTNode* $tmp2026 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2025);
                        $tmp2024 = $tmp2026;
                        $tmp2023 = $tmp2024;
                        t2022 = $tmp2023;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
                        if (((panda$core$Bit) { t2022 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2027 = result1954;
                                $returnValue1962 = $tmp2027;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2027));
                                $tmp2017 = 0;
                                goto $l2015;
                                $l2028:;
                                $tmp1968 = 2;
                                goto $l1966;
                                $l2029:;
                                $tmp1953 = 3;
                                goto $l1951;
                                $l2030:;
                                return $returnValue1962;
                            }
                            }
                            $tmp2032 = NULL;
                            $returnValue1962 = $tmp2032;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                            $tmp2017 = 1;
                            goto $l2015;
                            $l2033:;
                            $tmp1968 = 3;
                            goto $l1966;
                            $l2034:;
                            $tmp1953 = 4;
                            goto $l1951;
                            $l2035:;
                            return $returnValue1962;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children2018, ((panda$core$Object*) t2022));
                        $l2037:;
                        panda$core$Int64$init$builtin_int64(&$tmp2041, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2040, $tmp2041);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2042 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2040);
                        bool $tmp2039 = ((panda$core$Bit) { $tmp2042.nonnull }).value;
                        if (!$tmp2039) goto $l2038;
                        {
                            {
                                $tmp2043 = t2022;
                                panda$core$Bit$init$builtin_bit(&$tmp2046, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2047 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2046);
                                $tmp2045 = $tmp2047;
                                $tmp2044 = $tmp2045;
                                t2022 = $tmp2044;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2043));
                            }
                            if (((panda$core$Bit) { t2022 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2048 = result1954;
                                    $returnValue1962 = $tmp2048;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
                                    $tmp2017 = 2;
                                    goto $l2015;
                                    $l2049:;
                                    $tmp1968 = 4;
                                    goto $l1966;
                                    $l2050:;
                                    $tmp1953 = 5;
                                    goto $l1951;
                                    $l2051:;
                                    return $returnValue1962;
                                }
                                }
                                $tmp2053 = NULL;
                                $returnValue1962 = $tmp2053;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
                                $tmp2017 = 3;
                                goto $l2015;
                                $l2054:;
                                $tmp1968 = 5;
                                goto $l1966;
                                $l2055:;
                                $tmp1953 = 6;
                                goto $l1951;
                                $l2056:;
                                return $returnValue1962;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children2018, ((panda$core$Object*) t2022));
                        }
                        goto $l2037;
                        $l2038:;
                        panda$core$Int64$init$builtin_int64(&$tmp2059, 64);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2058, $tmp2059);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2061 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2058, &$s2060);
                        if (((panda$core$Bit) { !$tmp2061.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2062 = result1954;
                                $returnValue1962 = $tmp2062;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                                $tmp2017 = 4;
                                goto $l2015;
                                $l2063:;
                                $tmp1968 = 6;
                                goto $l1966;
                                $l2064:;
                                $tmp1953 = 7;
                                goto $l1951;
                                $l2065:;
                                return $returnValue1962;
                            }
                            }
                            $tmp2067 = NULL;
                            $returnValue1962 = $tmp2067;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
                            $tmp2017 = 5;
                            goto $l2015;
                            $l2068:;
                            $tmp1968 = 7;
                            goto $l1966;
                            $l2069:;
                            $tmp1953 = 8;
                            goto $l1951;
                            $l2070:;
                            return $returnValue1962;
                        }
                        }
                        {
                            $tmp2072 = result1954;
                            org$pandalanguage$pandac$ASTNode* $tmp2075 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2076, 19);
                            panda$collections$ImmutableArray* $tmp2078 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children2018);
                            $tmp2077 = $tmp2078;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2075, $tmp2076, ((org$pandalanguage$pandac$parser$Token) start1969.value).position, finalName2003, $tmp2077);
                            $tmp2074 = $tmp2075;
                            $tmp2073 = $tmp2074;
                            result1954 = $tmp2073;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp2017 = -1;
                    goto $l2015;
                    $l2015:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2018));
                    children2018 = NULL;
                    t2022 = NULL;
                    switch ($tmp2017) {
                        case 4: goto $l2063;
                        case -1: goto $l2079;
                        case 0: goto $l2028;
                        case 2: goto $l2049;
                        case 3: goto $l2054;
                        case 1: goto $l2033;
                        case 5: goto $l2068;
                    }
                    $l2079:;
                }
                }
            }
            $tmp1968 = -1;
            goto $l1966;
            $l1966:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName2003));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1978));
            name1978 = NULL;
            finalName2003 = NULL;
            switch ($tmp1968) {
                case 4: goto $l2050;
                case 0: goto $l1975;
                case 7: goto $l2069;
                case 2: goto $l2029;
                case 1: goto $l1996;
                case 5: goto $l2055;
                case 6: goto $l2064;
                case -1: goto $l2080;
                case 3: goto $l2034;
            }
            $l2080:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2082, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2081, $tmp2082);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2083 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2081);
        if (((panda$core$Bit) { $tmp2083.nonnull }).value) {
        {
            {
                $tmp2084 = result1954;
                org$pandalanguage$pandac$ASTNode* $tmp2087 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2088, 29);
                org$pandalanguage$pandac$Position $tmp2090 = (($fn2089) result1954->$class->vtable[2])(result1954);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2087, $tmp2088, $tmp2090, result1954);
                $tmp2086 = $tmp2087;
                $tmp2085 = $tmp2086;
                result1954 = $tmp2085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
            }
        }
        }
        $tmp2091 = result1954;
        $returnValue1962 = $tmp2091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
        $tmp1953 = 9;
        goto $l1951;
        $l2092:;
        return $returnValue1962;
    }
    $l1951:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1954));
    switch ($tmp1953) {
        case 1: goto $l1976;
        case 9: goto $l2092;
        case 8: goto $l2070;
        case 6: goto $l2056;
        case 3: goto $l2030;
        case 7: goto $l2065;
        case 5: goto $l2051;
        case 2: goto $l1997;
        case 4: goto $l2035;
        case 0: goto $l1964;
    }
    $l2094:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2098 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2100;
    org$pandalanguage$pandac$ASTNode* $returnValue2102;
    org$pandalanguage$pandac$ASTNode* $tmp2103;
    org$pandalanguage$pandac$parser$Token token2108;
    org$pandalanguage$pandac$parser$Token$Kind $match$913_132110;
    panda$core$Int64 $tmp2111;
    panda$core$Object* $tmp2116;
    panda$core$Bit $tmp2117;
    panda$collections$Array* args2119 = NULL;
    panda$collections$Array* $tmp2120;
    panda$collections$Array* $tmp2121;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2123;
    panda$core$Int64 $tmp2124;
    org$pandalanguage$pandac$ASTNode* expr2129 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2130;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    panda$core$Object* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2143;
    panda$core$Int64 $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2147;
    org$pandalanguage$pandac$ASTNode* $tmp2148;
    panda$core$Object* $tmp2150;
    org$pandalanguage$pandac$ASTNode* $tmp2152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2157;
    panda$core$Int64 $tmp2158;
    panda$core$Object* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    panda$core$Object* $tmp2169;
    org$pandalanguage$pandac$ASTNode* $tmp2171;
    org$pandalanguage$pandac$ASTNode* $tmp2172;
    org$pandalanguage$pandac$ASTNode* $tmp2173;
    panda$core$Int64 $tmp2175;
    panda$collections$ImmutableArray* $tmp2176;
    panda$core$Int64 $tmp2179;
    org$pandalanguage$pandac$ASTNode* arg2184 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2185;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    org$pandalanguage$pandac$ASTNode* $tmp2188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2192;
    panda$core$Int64 $tmp2193;
    org$pandalanguage$pandac$ASTNode* $tmp2196;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2202;
    panda$core$Int64 $tmp2204;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2205;
    panda$core$Int64 $tmp2206;
    panda$core$Int64 $tmp2208;
    panda$core$String* name2213 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2214;
    panda$core$Int64 $tmp2215;
    panda$core$String* $tmp2217;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2222;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    panda$core$Int64 $tmp2232;
    panda$core$Int64 $tmp2234;
    org$pandalanguage$pandac$ASTNode* target2239 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2243;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2249;
    panda$core$Int64 $tmp2251;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2252;
    panda$core$Int64 $tmp2253;
    panda$core$Int64 $tmp2255;
    panda$core$String* name2260 = NULL;
    panda$core$String* $tmp2261;
    panda$core$String* $tmp2262;
    panda$collections$Array* types2267 = NULL;
    panda$collections$Array* $tmp2268;
    panda$collections$Array* $tmp2269;
    org$pandalanguage$pandac$ASTNode* t2271 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2272;
    org$pandalanguage$pandac$ASTNode* $tmp2273;
    panda$core$Bit $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2276;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2284;
    panda$core$Int64 $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    panda$core$Bit $tmp2290;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$parser$Token$nullable gt2297;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2298;
    panda$core$Int64 $tmp2299;
    org$pandalanguage$pandac$ASTNode* $tmp2302;
    panda$core$Bit shouldAccept2307;
    panda$core$Object* $tmp2308;
    panda$core$Int64 $tmp2309;
    org$pandalanguage$pandac$parser$Token n2311;
    org$pandalanguage$pandac$parser$Token$Kind $match$1026_292313;
    panda$core$Int64 $tmp2316;
    panda$core$Int64 $tmp2319;
    panda$core$Int64 $tmp2323;
    panda$core$Bit $tmp2326;
    panda$core$Int64 $tmp2327;
    panda$core$Int64 $tmp2332;
    panda$core$Bit $tmp2336;
    panda$core$Bit $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$ASTNode* $tmp2340;
    panda$core$Int64 $tmp2342;
    panda$collections$ImmutableArray* $tmp2345;
    org$pandalanguage$pandac$ASTNode* $tmp2349;
    org$pandalanguage$pandac$ASTNode* $tmp2355;
    org$pandalanguage$pandac$ASTNode* $tmp2360;
    int $tmp2097;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2101 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2100 = $tmp2101;
        $tmp2099 = $tmp2100;
        result2098 = $tmp2099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
        if (((panda$core$Bit) { result2098 == NULL }).value) {
        {
            $tmp2103 = NULL;
            $returnValue2102 = $tmp2103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
            $tmp2097 = 0;
            goto $l2095;
            $l2104:;
            return $returnValue2102;
        }
        }
        $l2106:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2109 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2108 = $tmp2109;
            {
                $match$913_132110 = token2108.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2111, 104);
                panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132110.$rawValue, $tmp2111);
                if ($tmp2112.value) {
                {
                    int $tmp2115;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2117, true);
                        panda$core$Bit$wrapper* $tmp2118;
                        $tmp2118 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2118->value = $tmp2117;
                        $tmp2116 = ((panda$core$Object*) $tmp2118);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2116);
                        panda$core$Panda$unref$panda$core$Object($tmp2116);
                        panda$collections$Array* $tmp2122 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2122);
                        $tmp2121 = $tmp2122;
                        $tmp2120 = $tmp2121;
                        args2119 = $tmp2120;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                        panda$core$Int64$init$builtin_int64(&$tmp2124, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2123, $tmp2124);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2125 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2123);
                        if (((panda$core$Bit) { !$tmp2125.nonnull }).value) {
                        {
                            int $tmp2128;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2132 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2131 = $tmp2132;
                                $tmp2130 = $tmp2131;
                                expr2129 = $tmp2130;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                                if (((panda$core$Bit) { expr2129 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2134 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2133 = $tmp2134;
                                    panda$core$Panda$unref$panda$core$Object($tmp2133);
                                    $tmp2135 = NULL;
                                    $returnValue2102 = $tmp2135;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
                                    $tmp2128 = 0;
                                    goto $l2126;
                                    $l2136:;
                                    $tmp2115 = 0;
                                    goto $l2113;
                                    $l2137:;
                                    $tmp2097 = 1;
                                    goto $l2095;
                                    $l2138:;
                                    return $returnValue2102;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2119, ((panda$core$Object*) expr2129));
                                $l2140:;
                                panda$core$Int64$init$builtin_int64(&$tmp2144, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2143, $tmp2144);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2145 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2143);
                                bool $tmp2142 = ((panda$core$Bit) { $tmp2145.nonnull }).value;
                                if (!$tmp2142) goto $l2141;
                                {
                                    {
                                        $tmp2146 = expr2129;
                                        org$pandalanguage$pandac$ASTNode* $tmp2149 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2148 = $tmp2149;
                                        $tmp2147 = $tmp2148;
                                        expr2129 = $tmp2147;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                                    }
                                    if (((panda$core$Bit) { expr2129 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2151 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2150 = $tmp2151;
                                        panda$core$Panda$unref$panda$core$Object($tmp2150);
                                        $tmp2152 = NULL;
                                        $returnValue2102 = $tmp2152;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
                                        $tmp2128 = 1;
                                        goto $l2126;
                                        $l2153:;
                                        $tmp2115 = 1;
                                        goto $l2113;
                                        $l2154:;
                                        $tmp2097 = 2;
                                        goto $l2095;
                                        $l2155:;
                                        return $returnValue2102;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2119, ((panda$core$Object*) expr2129));
                                }
                                goto $l2140;
                                $l2141:;
                                panda$core$Int64$init$builtin_int64(&$tmp2158, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2157, $tmp2158);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2160 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2157, &$s2159);
                                if (((panda$core$Bit) { !$tmp2160.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2162 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2161 = $tmp2162;
                                    panda$core$Panda$unref$panda$core$Object($tmp2161);
                                    $tmp2163 = NULL;
                                    $returnValue2102 = $tmp2163;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                                    $tmp2128 = 2;
                                    goto $l2126;
                                    $l2164:;
                                    $tmp2115 = 2;
                                    goto $l2113;
                                    $l2165:;
                                    $tmp2097 = 3;
                                    goto $l2095;
                                    $l2166:;
                                    return $returnValue2102;
                                }
                                }
                            }
                            $tmp2128 = -1;
                            goto $l2126;
                            $l2126:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2129));
                            expr2129 = NULL;
                            switch ($tmp2128) {
                                case 0: goto $l2136;
                                case -1: goto $l2168;
                                case 1: goto $l2153;
                                case 2: goto $l2164;
                            }
                            $l2168:;
                        }
                        }
                        panda$core$Object* $tmp2170 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2169 = $tmp2170;
                        panda$core$Panda$unref$panda$core$Object($tmp2169);
                        {
                            $tmp2171 = result2098;
                            org$pandalanguage$pandac$ASTNode* $tmp2174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2175, 8);
                            panda$collections$ImmutableArray* $tmp2177 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2119);
                            $tmp2176 = $tmp2177;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2174, $tmp2175, token2108.position, result2098, $tmp2176);
                            $tmp2173 = $tmp2174;
                            $tmp2172 = $tmp2173;
                            result2098 = $tmp2172;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2172));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2171));
                        }
                    }
                    $tmp2115 = -1;
                    goto $l2113;
                    $l2113:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2119));
                    args2119 = NULL;
                    switch ($tmp2115) {
                        case 2: goto $l2165;
                        case 0: goto $l2137;
                        case 1: goto $l2154;
                        case -1: goto $l2178;
                    }
                    $l2178:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2179, 102);
                panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132110.$rawValue, $tmp2179);
                if ($tmp2180.value) {
                {
                    int $tmp2183;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2187 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2186 = $tmp2187;
                        $tmp2185 = $tmp2186;
                        arg2184 = $tmp2185;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
                        if (((panda$core$Bit) { arg2184 == NULL }).value) {
                        {
                            $tmp2188 = NULL;
                            $returnValue2102 = $tmp2188;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
                            $tmp2183 = 0;
                            goto $l2181;
                            $l2189:;
                            $tmp2097 = 4;
                            goto $l2095;
                            $l2190:;
                            return $returnValue2102;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2193, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2192, $tmp2193);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2192, &$s2194);
                        if (((panda$core$Bit) { !$tmp2195.nonnull }).value) {
                        {
                            $tmp2196 = NULL;
                            $returnValue2102 = $tmp2196;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                            $tmp2183 = 1;
                            goto $l2181;
                            $l2197:;
                            $tmp2097 = 5;
                            goto $l2095;
                            $l2198:;
                            return $returnValue2102;
                        }
                        }
                        {
                            $tmp2200 = result2098;
                            org$pandalanguage$pandac$ASTNode* $tmp2203 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2204, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2206, 102);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2205, $tmp2206);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2203, $tmp2204, token2108.position, result2098, $tmp2205, arg2184);
                            $tmp2202 = $tmp2203;
                            $tmp2201 = $tmp2202;
                            result2098 = $tmp2201;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                        }
                    }
                    $tmp2183 = -1;
                    goto $l2181;
                    $l2181:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2184));
                    arg2184 = NULL;
                    switch ($tmp2183) {
                        case 1: goto $l2197;
                        case 0: goto $l2189;
                        case -1: goto $l2207;
                    }
                    $l2207:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2208, 99);
                panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132110.$rawValue, $tmp2208);
                if ($tmp2209.value) {
                {
                    int $tmp2212;
                    {
                        memset(&name2213, 0, sizeof(name2213));
                        panda$core$Int64$init$builtin_int64(&$tmp2215, 23);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2214, $tmp2215);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2216 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2214);
                        if (((panda$core$Bit) { $tmp2216.nonnull }).value) {
                        {
                            {
                                $tmp2217 = name2213;
                                $tmp2218 = &$s2219;
                                name2213 = $tmp2218;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2220 = name2213;
                                panda$core$String* $tmp2223 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2222 = $tmp2223;
                                $tmp2221 = $tmp2222;
                                name2213 = $tmp2221;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
                            }
                            if (((panda$core$Bit) { name2213 == NULL }).value) {
                            {
                                $tmp2224 = NULL;
                                $returnValue2102 = $tmp2224;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
                                $tmp2212 = 0;
                                goto $l2210;
                                $l2225:;
                                $tmp2097 = 6;
                                goto $l2095;
                                $l2226:;
                                return $returnValue2102;
                            }
                            }
                        }
                        }
                        {
                            $tmp2228 = result2098;
                            org$pandalanguage$pandac$ASTNode* $tmp2231 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2232, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2231, $tmp2232, token2108.position, result2098, name2213);
                            $tmp2230 = $tmp2231;
                            $tmp2229 = $tmp2230;
                            result2098 = $tmp2229;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                        }
                    }
                    $tmp2212 = -1;
                    goto $l2210;
                    $l2210:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2213));
                    switch ($tmp2212) {
                        case -1: goto $l2233;
                        case 0: goto $l2225;
                    }
                    $l2233:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2234, 90);
                panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132110.$rawValue, $tmp2234);
                if ($tmp2235.value) {
                {
                    int $tmp2238;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2242 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2241 = $tmp2242;
                        $tmp2240 = $tmp2241;
                        target2239 = $tmp2240;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
                        if (((panda$core$Bit) { target2239 == NULL }).value) {
                        {
                            $tmp2243 = NULL;
                            $returnValue2102 = $tmp2243;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
                            $tmp2238 = 0;
                            goto $l2236;
                            $l2244:;
                            $tmp2097 = 7;
                            goto $l2095;
                            $l2245:;
                            return $returnValue2102;
                        }
                        }
                        {
                            $tmp2247 = result2098;
                            org$pandalanguage$pandac$ASTNode* $tmp2250 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2251, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2253, 90);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2252, $tmp2253);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2250, $tmp2251, token2108.position, result2098, $tmp2252, target2239);
                            $tmp2249 = $tmp2250;
                            $tmp2248 = $tmp2249;
                            result2098 = $tmp2248;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
                        }
                    }
                    $tmp2238 = -1;
                    goto $l2236;
                    $l2236:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2239));
                    target2239 = NULL;
                    switch ($tmp2238) {
                        case -1: goto $l2254;
                        case 0: goto $l2244;
                    }
                    $l2254:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2255, 63);
                panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132110.$rawValue, $tmp2255);
                if ($tmp2256.value) {
                {
                    int $tmp2259;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2108);
                        panda$core$String* $tmp2263 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2098);
                        $tmp2262 = $tmp2263;
                        $tmp2261 = $tmp2262;
                        name2260 = $tmp2261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                        if (((panda$core$Bit) { name2260 != NULL }).value) {
                        {
                            int $tmp2266;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2270 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2270);
                                $tmp2269 = $tmp2270;
                                $tmp2268 = $tmp2269;
                                types2267 = $tmp2268;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
                                panda$core$Bit$init$builtin_bit(&$tmp2274, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2275 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2274);
                                $tmp2273 = $tmp2275;
                                $tmp2272 = $tmp2273;
                                t2271 = $tmp2272;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                                if (((panda$core$Bit) { t2271 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2276 = result2098;
                                    $returnValue2102 = $tmp2276;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
                                    $tmp2266 = 0;
                                    goto $l2264;
                                    $l2277:;
                                    $tmp2259 = 0;
                                    goto $l2257;
                                    $l2278:;
                                    $tmp2097 = 8;
                                    goto $l2095;
                                    $l2279:;
                                    return $returnValue2102;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2267, ((panda$core$Object*) t2271));
                                $l2281:;
                                panda$core$Int64$init$builtin_int64(&$tmp2285, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2284, $tmp2285);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2286 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2284);
                                bool $tmp2283 = ((panda$core$Bit) { $tmp2286.nonnull }).value;
                                if (!$tmp2283) goto $l2282;
                                {
                                    {
                                        $tmp2287 = t2271;
                                        panda$core$Bit$init$builtin_bit(&$tmp2290, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2291 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2290);
                                        $tmp2289 = $tmp2291;
                                        $tmp2288 = $tmp2289;
                                        t2271 = $tmp2288;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                                    }
                                    if (((panda$core$Bit) { t2271 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2292 = result2098;
                                        $returnValue2102 = $tmp2292;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
                                        $tmp2266 = 1;
                                        goto $l2264;
                                        $l2293:;
                                        $tmp2259 = 1;
                                        goto $l2257;
                                        $l2294:;
                                        $tmp2097 = 9;
                                        goto $l2095;
                                        $l2295:;
                                        return $returnValue2102;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2267, ((panda$core$Object*) t2271));
                                }
                                goto $l2281;
                                $l2282:;
                                panda$core$Int64$init$builtin_int64(&$tmp2299, 64);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2298, $tmp2299);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2301 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2298, &$s2300);
                                gt2297 = $tmp2301;
                                if (((panda$core$Bit) { !gt2297.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2302 = result2098;
                                    $returnValue2102 = $tmp2302;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
                                    $tmp2266 = 2;
                                    goto $l2264;
                                    $l2303:;
                                    $tmp2259 = 2;
                                    goto $l2257;
                                    $l2304:;
                                    $tmp2097 = 10;
                                    goto $l2095;
                                    $l2305:;
                                    return $returnValue2102;
                                }
                                }
                                memset(&shouldAccept2307, 0, sizeof(shouldAccept2307));
                                panda$core$Int64$init$builtin_int64(&$tmp2309, 0);
                                panda$core$Object* $tmp2310 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2309);
                                $tmp2308 = $tmp2310;
                                panda$core$Panda$unref$panda$core$Object($tmp2308);
                                if (((panda$core$Bit$wrapper*) $tmp2308)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2312 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2311 = $tmp2312;
                                    {
                                        $match$1026_292313 = n2311.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2316, 99);
                                        panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292313.$rawValue, $tmp2316);
                                        bool $tmp2315 = $tmp2317.value;
                                        if ($tmp2315) goto $l2318;
                                        panda$core$Int64$init$builtin_int64(&$tmp2319, 106);
                                        panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292313.$rawValue, $tmp2319);
                                        $tmp2315 = $tmp2320.value;
                                        $l2318:;
                                        panda$core$Bit $tmp2321 = { $tmp2315 };
                                        bool $tmp2314 = $tmp2321.value;
                                        if ($tmp2314) goto $l2322;
                                        panda$core$Int64$init$builtin_int64(&$tmp2323, 90);
                                        panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292313.$rawValue, $tmp2323);
                                        $tmp2314 = $tmp2324.value;
                                        $l2322:;
                                        panda$core$Bit $tmp2325 = { $tmp2314 };
                                        if ($tmp2325.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2326, true);
                                            shouldAccept2307 = $tmp2326;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2327, 104);
                                        panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292313.$rawValue, $tmp2327);
                                        if ($tmp2328.value) {
                                        {
                                            panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2311.position.line, ((org$pandalanguage$pandac$parser$Token) gt2297.value).position.line);
                                            bool $tmp2329 = $tmp2330.value;
                                            if (!$tmp2329) goto $l2331;
                                            panda$core$Int64$init$builtin_int64(&$tmp2332, 1);
                                            panda$core$Int64 $tmp2333 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2297.value).position.column, $tmp2332);
                                            panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2311.position.column, $tmp2333);
                                            $tmp2329 = $tmp2334.value;
                                            $l2331:;
                                            panda$core$Bit $tmp2335 = { $tmp2329 };
                                            shouldAccept2307 = $tmp2335;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2336, false);
                                            shouldAccept2307 = $tmp2336;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2307.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2311);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2337, true);
                                    shouldAccept2307 = $tmp2337;
                                }
                                }
                                if (shouldAccept2307.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2338 = result2098;
                                        org$pandalanguage$pandac$ASTNode* $tmp2341 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2342, 19);
                                        org$pandalanguage$pandac$Position $tmp2344 = (($fn2343) result2098->$class->vtable[2])(result2098);
                                        panda$collections$ImmutableArray* $tmp2346 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2267);
                                        $tmp2345 = $tmp2346;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2341, $tmp2342, $tmp2344, name2260, $tmp2345);
                                        $tmp2340 = $tmp2341;
                                        $tmp2339 = $tmp2340;
                                        result2098 = $tmp2339;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2345));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
                                    }
                                    $tmp2266 = 3;
                                    goto $l2264;
                                    $l2347:;
                                    $tmp2259 = 3;
                                    goto $l2257;
                                    $l2348:;
                                    goto $l2106;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2349 = result2098;
                                    $returnValue2102 = $tmp2349;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2349));
                                    $tmp2266 = 4;
                                    goto $l2264;
                                    $l2350:;
                                    $tmp2259 = 4;
                                    goto $l2257;
                                    $l2351:;
                                    $tmp2097 = 11;
                                    goto $l2095;
                                    $l2352:;
                                    return $returnValue2102;
                                }
                                }
                            }
                            $tmp2266 = -1;
                            goto $l2264;
                            $l2264:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2271));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2267));
                            types2267 = NULL;
                            t2271 = NULL;
                            switch ($tmp2266) {
                                case 3: goto $l2347;
                                case 0: goto $l2277;
                                case 4: goto $l2350;
                                case 1: goto $l2293;
                                case -1: goto $l2354;
                                case 2: goto $l2303;
                            }
                            $l2354:;
                        }
                        }
                        $tmp2355 = result2098;
                        $returnValue2102 = $tmp2355;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2355));
                        $tmp2259 = 5;
                        goto $l2257;
                        $l2356:;
                        $tmp2097 = 12;
                        goto $l2095;
                        $l2357:;
                        return $returnValue2102;
                    }
                    $l2257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2260));
                    name2260 = NULL;
                    switch ($tmp2259) {
                        case 4: goto $l2351;
                        case 0: goto $l2278;
                        case 2: goto $l2304;
                        case 3: goto $l2348;
                        case 5: goto $l2356;
                        case 1: goto $l2294;
                    }
                    $l2359:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2108);
                    $tmp2360 = result2098;
                    $returnValue2102 = $tmp2360;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                    $tmp2097 = 13;
                    goto $l2095;
                    $l2361:;
                    return $returnValue2102;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2107:;
    }
    $tmp2097 = -1;
    goto $l2095;
    $l2095:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2098));
    result2098 = NULL;
    switch ($tmp2097) {
        case 6: goto $l2226;
        case 7: goto $l2245;
        case 1: goto $l2138;
        case 5: goto $l2198;
        case 12: goto $l2357;
        case 10: goto $l2305;
        case 9: goto $l2295;
        case 11: goto $l2352;
        case 13: goto $l2361;
        case 3: goto $l2166;
        case 2: goto $l2155;
        case 8: goto $l2279;
        case -1: goto $l2363;
        case 0: goto $l2104;
        case 4: goto $l2190;
    }
    $l2363:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2367 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    org$pandalanguage$pandac$ASTNode* $tmp2369;
    org$pandalanguage$pandac$ASTNode* $returnValue2371;
    org$pandalanguage$pandac$ASTNode* $tmp2372;
    org$pandalanguage$pandac$parser$Token$nullable op2380;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2381;
    panda$core$Int64 $tmp2382;
    org$pandalanguage$pandac$ASTNode* next2385 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2386;
    org$pandalanguage$pandac$ASTNode* $tmp2387;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2393;
    org$pandalanguage$pandac$ASTNode* $tmp2394;
    org$pandalanguage$pandac$ASTNode* $tmp2395;
    panda$core$Int64 $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2399;
    int $tmp2366;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2370 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2369 = $tmp2370;
        $tmp2368 = $tmp2369;
        result2367 = $tmp2368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
        if (((panda$core$Bit) { result2367 == NULL }).value) {
        {
            $tmp2372 = NULL;
            $returnValue2371 = $tmp2372;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2372));
            $tmp2366 = 0;
            goto $l2364;
            $l2373:;
            return $returnValue2371;
        }
        }
        $l2375:;
        while (true) {
        {
            int $tmp2379;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2382, 58);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2381, $tmp2382);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2383 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2381);
                op2380 = $tmp2383;
                if (((panda$core$Bit) { !op2380.nonnull }).value) {
                {
                    $tmp2379 = 0;
                    goto $l2377;
                    $l2384:;
                    goto $l2376;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2388 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2387 = $tmp2388;
                $tmp2386 = $tmp2387;
                next2385 = $tmp2386;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2387));
                if (((panda$core$Bit) { next2385 == NULL }).value) {
                {
                    $tmp2389 = NULL;
                    $returnValue2371 = $tmp2389;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
                    $tmp2379 = 1;
                    goto $l2377;
                    $l2390:;
                    $tmp2366 = 1;
                    goto $l2364;
                    $l2391:;
                    return $returnValue2371;
                }
                }
                {
                    $tmp2393 = result2367;
                    org$pandalanguage$pandac$ASTNode* $tmp2396 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2397, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2396, $tmp2397, ((org$pandalanguage$pandac$parser$Token) op2380.value).position, result2367, ((org$pandalanguage$pandac$parser$Token) op2380.value).kind, next2385);
                    $tmp2395 = $tmp2396;
                    $tmp2394 = $tmp2395;
                    result2367 = $tmp2394;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2394));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
                }
            }
            $tmp2379 = -1;
            goto $l2377;
            $l2377:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2385));
            next2385 = NULL;
            switch ($tmp2379) {
                case -1: goto $l2398;
                case 1: goto $l2390;
                case 0: goto $l2384;
            }
            $l2398:;
        }
        }
        $l2376:;
        $tmp2399 = result2367;
        $returnValue2371 = $tmp2399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
        $tmp2366 = 2;
        goto $l2364;
        $l2400:;
        return $returnValue2371;
    }
    $l2364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2367));
    result2367 = NULL;
    switch ($tmp2366) {
        case 1: goto $l2391;
        case 2: goto $l2400;
        case 0: goto $l2373;
    }
    $l2402:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2403;
    org$pandalanguage$pandac$parser$Token$Kind $match$1087_92405;
    panda$core$Int64 $tmp2408;
    panda$core$Int64 $tmp2411;
    panda$core$Int64 $tmp2415;
    org$pandalanguage$pandac$ASTNode* base2421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2422;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$ASTNode* $returnValue2425;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    org$pandalanguage$pandac$ASTNode* $tmp2429;
    org$pandalanguage$pandac$ASTNode* $tmp2430;
    panda$core$Int64 $tmp2432;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $tmp2437;
    org$pandalanguage$pandac$parser$Token $tmp2404 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2403 = $tmp2404;
    {
        $match$1087_92405 = op2403.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2408, 53);
        panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92405.$rawValue, $tmp2408);
        bool $tmp2407 = $tmp2409.value;
        if ($tmp2407) goto $l2410;
        panda$core$Int64$init$builtin_int64(&$tmp2411, 50);
        panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92405.$rawValue, $tmp2411);
        $tmp2407 = $tmp2412.value;
        $l2410:;
        panda$core$Bit $tmp2413 = { $tmp2407 };
        bool $tmp2406 = $tmp2413.value;
        if ($tmp2406) goto $l2414;
        panda$core$Int64$init$builtin_int64(&$tmp2415, 51);
        panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92405.$rawValue, $tmp2415);
        $tmp2406 = $tmp2416.value;
        $l2414:;
        panda$core$Bit $tmp2417 = { $tmp2406 };
        if ($tmp2417.value) {
        {
            int $tmp2420;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2424 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2423 = $tmp2424;
                $tmp2422 = $tmp2423;
                base2421 = $tmp2422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                if (((panda$core$Bit) { base2421 == NULL }).value) {
                {
                    $tmp2426 = NULL;
                    $returnValue2425 = $tmp2426;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                    $tmp2420 = 0;
                    goto $l2418;
                    $l2427:;
                    return $returnValue2425;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2431 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2432, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2431, $tmp2432, op2403.position, op2403.kind, base2421);
                $tmp2430 = $tmp2431;
                $tmp2429 = $tmp2430;
                $returnValue2425 = $tmp2429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                $tmp2420 = 1;
                goto $l2418;
                $l2433:;
                return $returnValue2425;
            }
            $l2418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2421));
            base2421 = NULL;
            switch ($tmp2420) {
                case 0: goto $l2427;
                case 1: goto $l2433;
            }
            $l2435:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2403);
            org$pandalanguage$pandac$ASTNode* $tmp2438 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2437 = $tmp2438;
            $tmp2436 = $tmp2437;
            $returnValue2425 = $tmp2436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
            return $returnValue2425;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    org$pandalanguage$pandac$ASTNode* $returnValue2447;
    org$pandalanguage$pandac$ASTNode* $tmp2448;
    org$pandalanguage$pandac$parser$Token op2453;
    org$pandalanguage$pandac$parser$Token$Kind $match$1113_132455;
    panda$core$Int64 $tmp2462;
    panda$core$Int64 $tmp2465;
    panda$core$Int64 $tmp2469;
    panda$core$Int64 $tmp2473;
    panda$core$Int64 $tmp2477;
    panda$core$Int64 $tmp2481;
    panda$core$Int64 $tmp2485;
    org$pandalanguage$pandac$ASTNode* next2491 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2492;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2500;
    org$pandalanguage$pandac$ASTNode* $tmp2501;
    panda$core$Int64 $tmp2503;
    panda$core$Int64 $tmp2505;
    org$pandalanguage$pandac$parser$Token nextToken2507;
    panda$core$Int64 $tmp2509;
    org$pandalanguage$pandac$ASTNode* next2514 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2515;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2518;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$ASTNode* $tmp2523;
    org$pandalanguage$pandac$ASTNode* $tmp2524;
    panda$core$Int64 $tmp2526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2527;
    panda$core$Int64 $tmp2528;
    org$pandalanguage$pandac$ASTNode* $tmp2530;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    int $tmp2442;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2446 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
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
                $match$1113_132455 = op2453.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2462, 54);
                panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2462);
                bool $tmp2461 = $tmp2463.value;
                if ($tmp2461) goto $l2464;
                panda$core$Int64$init$builtin_int64(&$tmp2465, 55);
                panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2465);
                $tmp2461 = $tmp2466.value;
                $l2464:;
                panda$core$Bit $tmp2467 = { $tmp2461 };
                bool $tmp2460 = $tmp2467.value;
                if ($tmp2460) goto $l2468;
                panda$core$Int64$init$builtin_int64(&$tmp2469, 56);
                panda$core$Bit $tmp2470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2469);
                $tmp2460 = $tmp2470.value;
                $l2468:;
                panda$core$Bit $tmp2471 = { $tmp2460 };
                bool $tmp2459 = $tmp2471.value;
                if ($tmp2459) goto $l2472;
                panda$core$Int64$init$builtin_int64(&$tmp2473, 57);
                panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2473);
                $tmp2459 = $tmp2474.value;
                $l2472:;
                panda$core$Bit $tmp2475 = { $tmp2459 };
                bool $tmp2458 = $tmp2475.value;
                if ($tmp2458) goto $l2476;
                panda$core$Int64$init$builtin_int64(&$tmp2477, 73);
                panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2477);
                $tmp2458 = $tmp2478.value;
                $l2476:;
                panda$core$Bit $tmp2479 = { $tmp2458 };
                bool $tmp2457 = $tmp2479.value;
                if ($tmp2457) goto $l2480;
                panda$core$Int64$init$builtin_int64(&$tmp2481, 68);
                panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2481);
                $tmp2457 = $tmp2482.value;
                $l2480:;
                panda$core$Bit $tmp2483 = { $tmp2457 };
                bool $tmp2456 = $tmp2483.value;
                if ($tmp2456) goto $l2484;
                panda$core$Int64$init$builtin_int64(&$tmp2485, 70);
                panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2485);
                $tmp2456 = $tmp2486.value;
                $l2484:;
                panda$core$Bit $tmp2487 = { $tmp2456 };
                if ($tmp2487.value) {
                {
                    int $tmp2490;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2494 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2493 = $tmp2494;
                        $tmp2492 = $tmp2493;
                        next2491 = $tmp2492;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
                        if (((panda$core$Bit) { next2491 == NULL }).value) {
                        {
                            $tmp2495 = NULL;
                            $returnValue2447 = $tmp2495;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
                            $tmp2490 = 0;
                            goto $l2488;
                            $l2496:;
                            $tmp2442 = 1;
                            goto $l2440;
                            $l2497:;
                            return $returnValue2447;
                        }
                        }
                        {
                            $tmp2499 = result2443;
                            org$pandalanguage$pandac$ASTNode* $tmp2502 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2503, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2502, $tmp2503, op2453.position, result2443, op2453.kind, next2491);
                            $tmp2501 = $tmp2502;
                            $tmp2500 = $tmp2501;
                            result2443 = $tmp2500;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2500));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
                        }
                    }
                    $tmp2490 = -1;
                    goto $l2488;
                    $l2488:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2491));
                    next2491 = NULL;
                    switch ($tmp2490) {
                        case -1: goto $l2504;
                        case 0: goto $l2496;
                    }
                    $l2504:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2505, 64);
                panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132455.$rawValue, $tmp2505);
                if ($tmp2506.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2508 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2507 = $tmp2508;
                    panda$core$Int64$init$builtin_int64(&$tmp2509, 64);
                    panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2507.kind.$rawValue, $tmp2509);
                    if ($tmp2510.value) {
                    {
                        int $tmp2513;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2517 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2516 = $tmp2517;
                            $tmp2515 = $tmp2516;
                            next2514 = $tmp2515;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                            if (((panda$core$Bit) { next2514 == NULL }).value) {
                            {
                                $tmp2518 = NULL;
                                $returnValue2447 = $tmp2518;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
                                $tmp2513 = 0;
                                goto $l2511;
                                $l2519:;
                                $tmp2442 = 2;
                                goto $l2440;
                                $l2520:;
                                return $returnValue2447;
                            }
                            }
                            {
                                $tmp2522 = result2443;
                                org$pandalanguage$pandac$ASTNode* $tmp2525 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2526, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2528, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2527, $tmp2528);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2525, $tmp2526, op2453.position, result2443, $tmp2527, next2514);
                                $tmp2524 = $tmp2525;
                                $tmp2523 = $tmp2524;
                                result2443 = $tmp2523;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2523));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                            }
                        }
                        $tmp2513 = -1;
                        goto $l2511;
                        $l2511:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2514));
                        next2514 = NULL;
                        switch ($tmp2513) {
                            case -1: goto $l2529;
                            case 0: goto $l2519;
                        }
                        $l2529:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2507);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2453);
                        $tmp2530 = result2443;
                        $returnValue2447 = $tmp2530;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
                        $tmp2442 = 3;
                        goto $l2440;
                        $l2531:;
                        return $returnValue2447;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2453);
                    $tmp2533 = result2443;
                    $returnValue2447 = $tmp2533;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
                    $tmp2442 = 4;
                    goto $l2440;
                    $l2534:;
                    return $returnValue2447;
                }
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
        case 1: goto $l2497;
        case 3: goto $l2531;
        case -1: goto $l2536;
        case 4: goto $l2534;
        case 0: goto $l2449;
        case 2: goto $l2520;
    }
    $l2536:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2540 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2541;
    org$pandalanguage$pandac$ASTNode* $tmp2542;
    org$pandalanguage$pandac$ASTNode* $returnValue2544;
    org$pandalanguage$pandac$ASTNode* $tmp2545;
    org$pandalanguage$pandac$parser$Token op2550;
    org$pandalanguage$pandac$parser$Token$Kind $match$1154_132552;
    panda$core$Int64 $tmp2555;
    panda$core$Int64 $tmp2558;
    panda$core$Int64 $tmp2562;
    org$pandalanguage$pandac$ASTNode* next2568 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2569;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2572;
    org$pandalanguage$pandac$ASTNode* $tmp2576;
    org$pandalanguage$pandac$ASTNode* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    panda$core$Int64 $tmp2580;
    org$pandalanguage$pandac$ASTNode* $tmp2582;
    int $tmp2539;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2543 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2542 = $tmp2543;
        $tmp2541 = $tmp2542;
        result2540 = $tmp2541;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
        if (((panda$core$Bit) { result2540 == NULL }).value) {
        {
            $tmp2545 = NULL;
            $returnValue2544 = $tmp2545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
            $tmp2539 = 0;
            goto $l2537;
            $l2546:;
            return $returnValue2544;
        }
        }
        $l2548:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2551 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2550 = $tmp2551;
            {
                $match$1154_132552 = op2550.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2555, 52);
                panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132552.$rawValue, $tmp2555);
                bool $tmp2554 = $tmp2556.value;
                if ($tmp2554) goto $l2557;
                panda$core$Int64$init$builtin_int64(&$tmp2558, 53);
                panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132552.$rawValue, $tmp2558);
                $tmp2554 = $tmp2559.value;
                $l2557:;
                panda$core$Bit $tmp2560 = { $tmp2554 };
                bool $tmp2553 = $tmp2560.value;
                if ($tmp2553) goto $l2561;
                panda$core$Int64$init$builtin_int64(&$tmp2562, 72);
                panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132552.$rawValue, $tmp2562);
                $tmp2553 = $tmp2563.value;
                $l2561:;
                panda$core$Bit $tmp2564 = { $tmp2553 };
                if ($tmp2564.value) {
                {
                    int $tmp2567;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2571 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2570 = $tmp2571;
                        $tmp2569 = $tmp2570;
                        next2568 = $tmp2569;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2569));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
                        if (((panda$core$Bit) { next2568 == NULL }).value) {
                        {
                            $tmp2572 = NULL;
                            $returnValue2544 = $tmp2572;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2572));
                            $tmp2567 = 0;
                            goto $l2565;
                            $l2573:;
                            $tmp2539 = 1;
                            goto $l2537;
                            $l2574:;
                            return $returnValue2544;
                        }
                        }
                        {
                            $tmp2576 = result2540;
                            org$pandalanguage$pandac$ASTNode* $tmp2579 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2580, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2579, $tmp2580, op2550.position, result2540, op2550.kind, next2568);
                            $tmp2578 = $tmp2579;
                            $tmp2577 = $tmp2578;
                            result2540 = $tmp2577;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2577));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                        }
                    }
                    $tmp2567 = -1;
                    goto $l2565;
                    $l2565:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2568));
                    next2568 = NULL;
                    switch ($tmp2567) {
                        case -1: goto $l2581;
                        case 0: goto $l2573;
                    }
                    $l2581:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2550);
                    $tmp2582 = result2540;
                    $returnValue2544 = $tmp2582;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                    $tmp2539 = 2;
                    goto $l2537;
                    $l2583:;
                    return $returnValue2544;
                }
                }
            }
        }
        }
        $l2549:;
    }
    $tmp2539 = -1;
    goto $l2537;
    $l2537:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2540));
    result2540 = NULL;
    switch ($tmp2539) {
        case -1: goto $l2585;
        case 2: goto $l2583;
        case 1: goto $l2574;
        case 0: goto $l2546;
    }
    $l2585:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2589 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1174_92590;
    panda$core$Int64 $tmp2593;
    panda$core$Int64 $tmp2596;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$ASTNode* $tmp2602;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $returnValue2605;
    org$pandalanguage$pandac$ASTNode* $tmp2606;
    org$pandalanguage$pandac$parser$Token op2609;
    org$pandalanguage$pandac$parser$Token$Kind $match$1184_92611;
    panda$core$Int64 $tmp2613;
    panda$core$Int64 $tmp2616;
    org$pandalanguage$pandac$parser$Token next2622;
    org$pandalanguage$pandac$ASTNode* right2624 = NULL;
    panda$core$Int64 $tmp2627;
    panda$core$Int64 $tmp2630;
    panda$core$Int64 $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $tmp2638;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$ASTNode* $tmp2641;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    org$pandalanguage$pandac$ASTNode* $tmp2646;
    org$pandalanguage$pandac$ASTNode* step2647 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2648;
    panda$core$Int64 $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2651;
    org$pandalanguage$pandac$ASTNode* $tmp2652;
    org$pandalanguage$pandac$ASTNode* $tmp2653;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$ASTNode* $tmp2662;
    panda$core$Int64 $tmp2664;
    panda$core$Int64 $tmp2665;
    org$pandalanguage$pandac$ASTNode* $tmp2671;
    int $tmp2588;
    {
        memset(&result2589, 0, sizeof(result2589));
        {
            org$pandalanguage$pandac$parser$Token $tmp2591 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1174_92590 = $tmp2591.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2593, 98);
            panda$core$Bit $tmp2594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92590.$rawValue, $tmp2593);
            bool $tmp2592 = $tmp2594.value;
            if ($tmp2592) goto $l2595;
            panda$core$Int64$init$builtin_int64(&$tmp2596, 97);
            panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92590.$rawValue, $tmp2596);
            $tmp2592 = $tmp2597.value;
            $l2595:;
            panda$core$Bit $tmp2598 = { $tmp2592 };
            if ($tmp2598.value) {
            {
                {
                    $tmp2599 = result2589;
                    $tmp2600 = NULL;
                    result2589 = $tmp2600;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                }
            }
            }
            else {
            {
                {
                    $tmp2601 = result2589;
                    org$pandalanguage$pandac$ASTNode* $tmp2604 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2603 = $tmp2604;
                    $tmp2602 = $tmp2603;
                    result2589 = $tmp2602;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                }
                if (((panda$core$Bit) { result2589 == NULL }).value) {
                {
                    $tmp2606 = NULL;
                    $returnValue2605 = $tmp2606;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                    $tmp2588 = 0;
                    goto $l2586;
                    $l2607:;
                    return $returnValue2605;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2610 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2609 = $tmp2610;
        {
            $match$1184_92611 = op2609.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2613, 98);
            panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92611.$rawValue, $tmp2613);
            bool $tmp2612 = $tmp2614.value;
            if ($tmp2612) goto $l2615;
            panda$core$Int64$init$builtin_int64(&$tmp2616, 97);
            panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92611.$rawValue, $tmp2616);
            $tmp2612 = $tmp2617.value;
            $l2615:;
            panda$core$Bit $tmp2618 = { $tmp2612 };
            if ($tmp2618.value) {
            {
                int $tmp2621;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2623 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2622 = $tmp2623;
                    memset(&right2624, 0, sizeof(right2624));
                    panda$core$Int64$init$builtin_int64(&$tmp2627, 103);
                    panda$core$Bit $tmp2628 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2622.kind.$rawValue, $tmp2627);
                    bool $tmp2626 = $tmp2628.value;
                    if (!$tmp2626) goto $l2629;
                    panda$core$Int64$init$builtin_int64(&$tmp2630, 105);
                    panda$core$Bit $tmp2631 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2622.kind.$rawValue, $tmp2630);
                    $tmp2626 = $tmp2631.value;
                    $l2629:;
                    panda$core$Bit $tmp2632 = { $tmp2626 };
                    bool $tmp2625 = $tmp2632.value;
                    if (!$tmp2625) goto $l2633;
                    panda$core$Int64$init$builtin_int64(&$tmp2634, 34);
                    panda$core$Bit $tmp2635 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2622.kind.$rawValue, $tmp2634);
                    $tmp2625 = $tmp2635.value;
                    $l2633:;
                    panda$core$Bit $tmp2636 = { $tmp2625 };
                    if ($tmp2636.value) {
                    {
                        {
                            $tmp2637 = right2624;
                            org$pandalanguage$pandac$ASTNode* $tmp2640 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2639 = $tmp2640;
                            $tmp2638 = $tmp2639;
                            right2624 = $tmp2638;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                        }
                        if (((panda$core$Bit) { right2624 == NULL }).value) {
                        {
                            $tmp2641 = NULL;
                            $returnValue2605 = $tmp2641;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2641));
                            $tmp2621 = 0;
                            goto $l2619;
                            $l2642:;
                            $tmp2588 = 1;
                            goto $l2586;
                            $l2643:;
                            return $returnValue2605;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2645 = right2624;
                            $tmp2646 = NULL;
                            right2624 = $tmp2646;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2646));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
                        }
                    }
                    }
                    memset(&step2647, 0, sizeof(step2647));
                    panda$core$Int64$init$builtin_int64(&$tmp2649, 34);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2648, $tmp2649);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2650 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2648);
                    if (((panda$core$Bit) { $tmp2650.nonnull }).value) {
                    {
                        {
                            $tmp2651 = step2647;
                            org$pandalanguage$pandac$ASTNode* $tmp2654 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2653 = $tmp2654;
                            $tmp2652 = $tmp2653;
                            step2647 = $tmp2652;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2652));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2653));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
                        }
                        if (((panda$core$Bit) { step2647 == NULL }).value) {
                        {
                            $tmp2655 = NULL;
                            $returnValue2605 = $tmp2655;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2655));
                            $tmp2621 = 1;
                            goto $l2619;
                            $l2656:;
                            $tmp2588 = 2;
                            goto $l2586;
                            $l2657:;
                            return $returnValue2605;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2659 = step2647;
                            $tmp2660 = NULL;
                            step2647 = $tmp2660;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2660));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2663 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2664, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2665, 97);
                    panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2609.kind.$rawValue, $tmp2665);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2663, $tmp2664, op2609.position, result2589, right2624, $tmp2666, step2647);
                    $tmp2662 = $tmp2663;
                    $tmp2661 = $tmp2662;
                    $returnValue2605 = $tmp2661;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2662));
                    $tmp2621 = 2;
                    goto $l2619;
                    $l2667:;
                    $tmp2588 = 3;
                    goto $l2586;
                    $l2668:;
                    return $returnValue2605;
                }
                $l2619:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2624));
                switch ($tmp2621) {
                    case 1: goto $l2656;
                    case 0: goto $l2642;
                    case 2: goto $l2667;
                }
                $l2670:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2609);
                $tmp2671 = result2589;
                $returnValue2605 = $tmp2671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2671));
                $tmp2588 = 4;
                goto $l2586;
                $l2672:;
                return $returnValue2605;
            }
            }
        }
    }
    $tmp2588 = -1;
    goto $l2586;
    $l2586:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2589));
    switch ($tmp2588) {
        case 3: goto $l2668;
        case 0: goto $l2607;
        case -1: goto $l2674;
        case 2: goto $l2657;
        case 1: goto $l2643;
        case 4: goto $l2672;
    }
    $l2674:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $returnValue2682;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$parser$Token op2688;
    org$pandalanguage$pandac$parser$Token$Kind $match$1227_132690;
    panda$core$Int64 $tmp2698;
    panda$core$Int64 $tmp2701;
    panda$core$Int64 $tmp2705;
    panda$core$Int64 $tmp2709;
    panda$core$Int64 $tmp2713;
    panda$core$Int64 $tmp2717;
    panda$core$Int64 $tmp2721;
    panda$core$Int64 $tmp2725;
    org$pandalanguage$pandac$ASTNode* next2731 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    org$pandalanguage$pandac$ASTNode* $tmp2735;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    org$pandalanguage$pandac$ASTNode* $tmp2741;
    panda$core$Int64 $tmp2743;
    org$pandalanguage$pandac$ASTNode* $tmp2745;
    int $tmp2677;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2681 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2680 = $tmp2681;
        $tmp2679 = $tmp2680;
        result2678 = $tmp2679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
        if (((panda$core$Bit) { result2678 == NULL }).value) {
        {
            $tmp2683 = NULL;
            $returnValue2682 = $tmp2683;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
            $tmp2677 = 0;
            goto $l2675;
            $l2684:;
            return $returnValue2682;
        }
        }
        $l2686:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2689 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2688 = $tmp2689;
            {
                $match$1227_132690 = op2688.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2698, 59);
                panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2698);
                bool $tmp2697 = $tmp2699.value;
                if ($tmp2697) goto $l2700;
                panda$core$Int64$init$builtin_int64(&$tmp2701, 60);
                panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2701);
                $tmp2697 = $tmp2702.value;
                $l2700:;
                panda$core$Bit $tmp2703 = { $tmp2697 };
                bool $tmp2696 = $tmp2703.value;
                if ($tmp2696) goto $l2704;
                panda$core$Int64$init$builtin_int64(&$tmp2705, 61);
                panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2705);
                $tmp2696 = $tmp2706.value;
                $l2704:;
                panda$core$Bit $tmp2707 = { $tmp2696 };
                bool $tmp2695 = $tmp2707.value;
                if ($tmp2695) goto $l2708;
                panda$core$Int64$init$builtin_int64(&$tmp2709, 62);
                panda$core$Bit $tmp2710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2709);
                $tmp2695 = $tmp2710.value;
                $l2708:;
                panda$core$Bit $tmp2711 = { $tmp2695 };
                bool $tmp2694 = $tmp2711.value;
                if ($tmp2694) goto $l2712;
                panda$core$Int64$init$builtin_int64(&$tmp2713, 63);
                panda$core$Bit $tmp2714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2713);
                $tmp2694 = $tmp2714.value;
                $l2712:;
                panda$core$Bit $tmp2715 = { $tmp2694 };
                bool $tmp2693 = $tmp2715.value;
                if ($tmp2693) goto $l2716;
                panda$core$Int64$init$builtin_int64(&$tmp2717, 64);
                panda$core$Bit $tmp2718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2717);
                $tmp2693 = $tmp2718.value;
                $l2716:;
                panda$core$Bit $tmp2719 = { $tmp2693 };
                bool $tmp2692 = $tmp2719.value;
                if ($tmp2692) goto $l2720;
                panda$core$Int64$init$builtin_int64(&$tmp2721, 65);
                panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2721);
                $tmp2692 = $tmp2722.value;
                $l2720:;
                panda$core$Bit $tmp2723 = { $tmp2692 };
                bool $tmp2691 = $tmp2723.value;
                if ($tmp2691) goto $l2724;
                panda$core$Int64$init$builtin_int64(&$tmp2725, 66);
                panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132690.$rawValue, $tmp2725);
                $tmp2691 = $tmp2726.value;
                $l2724:;
                panda$core$Bit $tmp2727 = { $tmp2691 };
                if ($tmp2727.value) {
                {
                    int $tmp2730;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2734 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2733 = $tmp2734;
                        $tmp2732 = $tmp2733;
                        next2731 = $tmp2732;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2732));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2733));
                        if (((panda$core$Bit) { next2731 == NULL }).value) {
                        {
                            $tmp2735 = NULL;
                            $returnValue2682 = $tmp2735;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2735));
                            $tmp2730 = 0;
                            goto $l2728;
                            $l2736:;
                            $tmp2677 = 1;
                            goto $l2675;
                            $l2737:;
                            return $returnValue2682;
                        }
                        }
                        {
                            $tmp2739 = result2678;
                            org$pandalanguage$pandac$ASTNode* $tmp2742 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2743, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2742, $tmp2743, op2688.position, result2678, op2688.kind, next2731);
                            $tmp2741 = $tmp2742;
                            $tmp2740 = $tmp2741;
                            result2678 = $tmp2740;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2740));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2741));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
                        }
                    }
                    $tmp2730 = -1;
                    goto $l2728;
                    $l2728:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2731));
                    next2731 = NULL;
                    switch ($tmp2730) {
                        case 0: goto $l2736;
                        case -1: goto $l2744;
                    }
                    $l2744:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2688);
                    $tmp2745 = result2678;
                    $returnValue2682 = $tmp2745;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2745));
                    $tmp2677 = 2;
                    goto $l2675;
                    $l2746:;
                    return $returnValue2682;
                }
                }
            }
        }
        }
        $l2687:;
    }
    $tmp2677 = -1;
    goto $l2675;
    $l2675:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2678));
    result2678 = NULL;
    switch ($tmp2677) {
        case 1: goto $l2737;
        case -1: goto $l2748;
        case 2: goto $l2746;
        case 0: goto $l2684;
    }
    $l2748:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2752 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2753;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $returnValue2756;
    org$pandalanguage$pandac$ASTNode* $tmp2757;
    org$pandalanguage$pandac$parser$Token op2762;
    org$pandalanguage$pandac$parser$Token$Kind $match$1258_132764;
    panda$core$Int64 $tmp2766;
    panda$core$Int64 $tmp2769;
    org$pandalanguage$pandac$ASTNode* next2775 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    org$pandalanguage$pandac$ASTNode* $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    org$pandalanguage$pandac$ASTNode* $tmp2784;
    org$pandalanguage$pandac$ASTNode* $tmp2785;
    panda$core$Int64 $tmp2787;
    org$pandalanguage$pandac$ASTNode* $tmp2789;
    int $tmp2751;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2755 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2754 = $tmp2755;
        $tmp2753 = $tmp2754;
        result2752 = $tmp2753;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
        if (((panda$core$Bit) { result2752 == NULL }).value) {
        {
            $tmp2757 = NULL;
            $returnValue2756 = $tmp2757;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2757));
            $tmp2751 = 0;
            goto $l2749;
            $l2758:;
            return $returnValue2756;
        }
        }
        $l2760:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2763 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2762 = $tmp2763;
            {
                $match$1258_132764 = op2762.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2766, 67);
                panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132764.$rawValue, $tmp2766);
                bool $tmp2765 = $tmp2767.value;
                if ($tmp2765) goto $l2768;
                panda$core$Int64$init$builtin_int64(&$tmp2769, 71);
                panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132764.$rawValue, $tmp2769);
                $tmp2765 = $tmp2770.value;
                $l2768:;
                panda$core$Bit $tmp2771 = { $tmp2765 };
                if ($tmp2771.value) {
                {
                    int $tmp2774;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2778 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2777 = $tmp2778;
                        $tmp2776 = $tmp2777;
                        next2775 = $tmp2776;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                        if (((panda$core$Bit) { next2775 == NULL }).value) {
                        {
                            $tmp2779 = NULL;
                            $returnValue2756 = $tmp2779;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
                            $tmp2774 = 0;
                            goto $l2772;
                            $l2780:;
                            $tmp2751 = 1;
                            goto $l2749;
                            $l2781:;
                            return $returnValue2756;
                        }
                        }
                        {
                            $tmp2783 = result2752;
                            org$pandalanguage$pandac$ASTNode* $tmp2786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2787, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2786, $tmp2787, op2762.position, result2752, op2762.kind, next2775);
                            $tmp2785 = $tmp2786;
                            $tmp2784 = $tmp2785;
                            result2752 = $tmp2784;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2784));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
                        }
                    }
                    $tmp2774 = -1;
                    goto $l2772;
                    $l2772:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2775));
                    next2775 = NULL;
                    switch ($tmp2774) {
                        case 0: goto $l2780;
                        case -1: goto $l2788;
                    }
                    $l2788:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2762);
                    $tmp2789 = result2752;
                    $returnValue2756 = $tmp2789;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2789));
                    $tmp2751 = 2;
                    goto $l2749;
                    $l2790:;
                    return $returnValue2756;
                }
                }
            }
        }
        }
        $l2761:;
    }
    $tmp2751 = -1;
    goto $l2749;
    $l2749:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2752));
    result2752 = NULL;
    switch ($tmp2751) {
        case 2: goto $l2790;
        case -1: goto $l2792;
        case 0: goto $l2758;
        case 1: goto $l2781;
    }
    $l2792:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2796 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2797;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* $returnValue2800;
    org$pandalanguage$pandac$ASTNode* $tmp2801;
    org$pandalanguage$pandac$parser$Token$nullable op2809;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2810;
    panda$core$Int64 $tmp2811;
    org$pandalanguage$pandac$ASTNode* next2814 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2815;
    org$pandalanguage$pandac$ASTNode* $tmp2816;
    org$pandalanguage$pandac$ASTNode* $tmp2818;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $tmp2823;
    org$pandalanguage$pandac$ASTNode* $tmp2824;
    panda$core$Int64 $tmp2826;
    org$pandalanguage$pandac$ASTNode* $tmp2828;
    int $tmp2795;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2799 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2798 = $tmp2799;
        $tmp2797 = $tmp2798;
        result2796 = $tmp2797;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2797));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2798));
        if (((panda$core$Bit) { result2796 == NULL }).value) {
        {
            $tmp2801 = NULL;
            $returnValue2800 = $tmp2801;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2801));
            $tmp2795 = 0;
            goto $l2793;
            $l2802:;
            return $returnValue2800;
        }
        }
        $l2804:;
        while (true) {
        {
            int $tmp2808;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2811, 69);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2810, $tmp2811);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2812 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2810);
                op2809 = $tmp2812;
                if (((panda$core$Bit) { !op2809.nonnull }).value) {
                {
                    $tmp2808 = 0;
                    goto $l2806;
                    $l2813:;
                    goto $l2805;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2817 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2816 = $tmp2817;
                $tmp2815 = $tmp2816;
                next2814 = $tmp2815;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
                if (((panda$core$Bit) { next2814 == NULL }).value) {
                {
                    $tmp2818 = NULL;
                    $returnValue2800 = $tmp2818;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2818));
                    $tmp2808 = 1;
                    goto $l2806;
                    $l2819:;
                    $tmp2795 = 1;
                    goto $l2793;
                    $l2820:;
                    return $returnValue2800;
                }
                }
                {
                    $tmp2822 = result2796;
                    org$pandalanguage$pandac$ASTNode* $tmp2825 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2826, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2825, $tmp2826, ((org$pandalanguage$pandac$parser$Token) op2809.value).position, result2796, ((org$pandalanguage$pandac$parser$Token) op2809.value).kind, next2814);
                    $tmp2824 = $tmp2825;
                    $tmp2823 = $tmp2824;
                    result2796 = $tmp2823;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2823));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2824));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
                }
            }
            $tmp2808 = -1;
            goto $l2806;
            $l2806:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2814));
            next2814 = NULL;
            switch ($tmp2808) {
                case -1: goto $l2827;
                case 1: goto $l2819;
                case 0: goto $l2813;
            }
            $l2827:;
        }
        }
        $l2805:;
        $tmp2828 = result2796;
        $returnValue2800 = $tmp2828;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2828));
        $tmp2795 = 2;
        goto $l2793;
        $l2829:;
        return $returnValue2800;
    }
    $l2793:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2796));
    result2796 = NULL;
    switch ($tmp2795) {
        case 2: goto $l2829;
        case 1: goto $l2820;
        case 0: goto $l2802;
    }
    $l2831:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2835;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2836;
    panda$core$Int64 $tmp2837;
    org$pandalanguage$pandac$ASTNode* $returnValue2840;
    org$pandalanguage$pandac$ASTNode* $tmp2841;
    org$pandalanguage$pandac$ASTNode* test2844 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2845;
    org$pandalanguage$pandac$ASTNode* $tmp2846;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    panda$collections$ImmutableArray* ifTrue2851 = NULL;
    panda$collections$ImmutableArray* $tmp2852;
    panda$collections$ImmutableArray* $tmp2853;
    org$pandalanguage$pandac$ASTNode* $tmp2855;
    org$pandalanguage$pandac$ASTNode* ifFalse2858 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2859;
    panda$core$Int64 $tmp2860;
    panda$core$Int64 $tmp2863;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2866;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$ASTNode* $tmp2869;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$ASTNode* $tmp2873;
    org$pandalanguage$pandac$ASTNode* $tmp2874;
    org$pandalanguage$pandac$ASTNode* $tmp2876;
    org$pandalanguage$pandac$ASTNode* $tmp2879;
    org$pandalanguage$pandac$ASTNode* $tmp2880;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    org$pandalanguage$pandac$ASTNode* $tmp2882;
    panda$core$Int64 $tmp2884;
    int $tmp2834;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2837, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2836, $tmp2837);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2839 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2836, &$s2838);
        start2835 = $tmp2839;
        if (((panda$core$Bit) { !start2835.nonnull }).value) {
        {
            $tmp2841 = NULL;
            $returnValue2840 = $tmp2841;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2841));
            $tmp2834 = 0;
            goto $l2832;
            $l2842:;
            return $returnValue2840;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2847 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2846 = $tmp2847;
        $tmp2845 = $tmp2846;
        test2844 = $tmp2845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2846));
        if (((panda$core$Bit) { test2844 == NULL }).value) {
        {
            $tmp2848 = NULL;
            $returnValue2840 = $tmp2848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
            $tmp2834 = 1;
            goto $l2832;
            $l2849:;
            return $returnValue2840;
        }
        }
        panda$collections$ImmutableArray* $tmp2854 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2853 = $tmp2854;
        $tmp2852 = $tmp2853;
        ifTrue2851 = $tmp2852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2853));
        if (((panda$core$Bit) { ifTrue2851 == NULL }).value) {
        {
            $tmp2855 = NULL;
            $returnValue2840 = $tmp2855;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
            $tmp2834 = 2;
            goto $l2832;
            $l2856:;
            return $returnValue2840;
        }
        }
        memset(&ifFalse2858, 0, sizeof(ifFalse2858));
        panda$core$Int64$init$builtin_int64(&$tmp2860, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2859, $tmp2860);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2861 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2859);
        if (((panda$core$Bit) { $tmp2861.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2862 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2863, 37);
            panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2862.kind.$rawValue, $tmp2863);
            if ($tmp2864.value) {
            {
                {
                    $tmp2865 = ifFalse2858;
                    org$pandalanguage$pandac$ASTNode* $tmp2868 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2867 = $tmp2868;
                    $tmp2866 = $tmp2867;
                    ifFalse2858 = $tmp2866;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2866));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
                }
                if (((panda$core$Bit) { ifFalse2858 == NULL }).value) {
                {
                    $tmp2869 = NULL;
                    $returnValue2840 = $tmp2869;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2869));
                    $tmp2834 = 3;
                    goto $l2832;
                    $l2870:;
                    return $returnValue2840;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2872 = ifFalse2858;
                    org$pandalanguage$pandac$ASTNode* $tmp2875 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2874 = $tmp2875;
                    $tmp2873 = $tmp2874;
                    ifFalse2858 = $tmp2873;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2873));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2874));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2872));
                }
                if (((panda$core$Bit) { ifFalse2858 == NULL }).value) {
                {
                    $tmp2876 = NULL;
                    $returnValue2840 = $tmp2876;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2876));
                    $tmp2834 = 4;
                    goto $l2832;
                    $l2877:;
                    return $returnValue2840;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2879 = ifFalse2858;
                $tmp2880 = NULL;
                ifFalse2858 = $tmp2880;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2879));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2884, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2883, $tmp2884, ((org$pandalanguage$pandac$parser$Token) start2835.value).position, test2844, ifTrue2851, ifFalse2858);
        $tmp2882 = $tmp2883;
        $tmp2881 = $tmp2882;
        $returnValue2840 = $tmp2881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2881));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2882));
        $tmp2834 = 5;
        goto $l2832;
        $l2885:;
        return $returnValue2840;
    }
    $l2832:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2858));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2851));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2844));
    test2844 = NULL;
    ifTrue2851 = NULL;
    switch ($tmp2834) {
        case 1: goto $l2849;
        case 4: goto $l2877;
        case 2: goto $l2856;
        case 5: goto $l2885;
        case 0: goto $l2842;
        case 3: goto $l2870;
    }
    $l2887:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2888;
    panda$core$Int64 $tmp2889;
    org$pandalanguage$pandac$ASTNode* $returnValue2892;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2895;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    panda$core$Bit $tmp2897;
    panda$core$Int64$init$builtin_int64(&$tmp2889, 96);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2888, $tmp2889);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2891 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2888, &$s2890);
    if (((panda$core$Bit) { !$tmp2891.nonnull }).value) {
    {
        $tmp2893 = NULL;
        $returnValue2892 = $tmp2893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
        return $returnValue2892;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2897, false);
    org$pandalanguage$pandac$ASTNode* $tmp2898 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2897);
    $tmp2896 = $tmp2898;
    $tmp2895 = $tmp2896;
    $returnValue2892 = $tmp2895;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2895));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2896));
    return $returnValue2892;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2901;
    panda$core$Int64 $tmp2902;
    org$pandalanguage$pandac$ASTNode* $returnValue2905;
    org$pandalanguage$pandac$ASTNode* $tmp2906;
    panda$core$Int64 $tmp2909;
    org$pandalanguage$pandac$ASTNode* type2914 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2915;
    org$pandalanguage$pandac$ASTNode* $tmp2916;
    org$pandalanguage$pandac$ASTNode* $tmp2918;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2922;
    panda$core$Int64 $tmp2924;
    panda$core$String* $tmp2925;
    org$pandalanguage$pandac$ASTNode* $tmp2930;
    org$pandalanguage$pandac$ASTNode* $tmp2931;
    panda$core$Int64 $tmp2933;
    panda$core$String* $tmp2934;
    panda$core$Int64$init$builtin_int64(&$tmp2902, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2901, $tmp2902);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2904 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2901, &$s2903);
    id2900 = $tmp2904;
    if (((panda$core$Bit) { !id2900.nonnull }).value) {
    {
        $tmp2906 = NULL;
        $returnValue2905 = $tmp2906;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2906));
        return $returnValue2905;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2908 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2909, 96);
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2908.kind.$rawValue, $tmp2909);
    if ($tmp2910.value) {
    {
        int $tmp2913;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2917 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2916 = $tmp2917;
            $tmp2915 = $tmp2916;
            type2914 = $tmp2915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2916));
            if (((panda$core$Bit) { type2914 == NULL }).value) {
            {
                $tmp2918 = NULL;
                $returnValue2905 = $tmp2918;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2918));
                $tmp2913 = 0;
                goto $l2911;
                $l2919:;
                return $returnValue2905;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2923 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2924, 44);
            panda$core$String* $tmp2926 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2900.value));
            $tmp2925 = $tmp2926;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2923, $tmp2924, ((org$pandalanguage$pandac$parser$Token) id2900.value).position, $tmp2925, type2914);
            $tmp2922 = $tmp2923;
            $tmp2921 = $tmp2922;
            $returnValue2905 = $tmp2921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
            $tmp2913 = 1;
            goto $l2911;
            $l2927:;
            return $returnValue2905;
        }
        $l2911:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2914));
        type2914 = NULL;
        switch ($tmp2913) {
            case 1: goto $l2927;
            case 0: goto $l2919;
        }
        $l2929:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2933, 20);
    panda$core$String* $tmp2935 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2900.value));
    $tmp2934 = $tmp2935;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2932, $tmp2933, ((org$pandalanguage$pandac$parser$Token) id2900.value).position, $tmp2934);
    $tmp2931 = $tmp2932;
    $tmp2930 = $tmp2931;
    $returnValue2905 = $tmp2930;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2930));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
    return $returnValue2905;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2941;
    panda$core$Int64 $tmp2942;
    org$pandalanguage$pandac$ASTNode* $returnValue2945;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* t2949 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$ASTNode* $tmp2953;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2956;
    panda$core$Int64 $tmp2957;
    org$pandalanguage$pandac$ASTNode* $tmp2960;
    org$pandalanguage$pandac$ASTNode* list2963 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2964;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    org$pandalanguage$pandac$ASTNode* $tmp2967;
    panda$collections$ImmutableArray* block2970 = NULL;
    panda$collections$ImmutableArray* $tmp2971;
    panda$collections$ImmutableArray* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2974;
    org$pandalanguage$pandac$ASTNode* $tmp2977;
    org$pandalanguage$pandac$ASTNode* $tmp2978;
    panda$core$Int64 $tmp2980;
    int $tmp2939;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2942, 33);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2941, $tmp2942);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2944 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2941, &$s2943);
        start2940 = $tmp2944;
        if (((panda$core$Bit) { !start2940.nonnull }).value) {
        {
            $tmp2946 = NULL;
            $returnValue2945 = $tmp2946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2946));
            $tmp2939 = 0;
            goto $l2937;
            $l2947:;
            return $returnValue2945;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2952 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2951 = $tmp2952;
        $tmp2950 = $tmp2951;
        t2949 = $tmp2950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
        if (((panda$core$Bit) { t2949 == NULL }).value) {
        {
            $tmp2953 = NULL;
            $returnValue2945 = $tmp2953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2953));
            $tmp2939 = 1;
            goto $l2937;
            $l2954:;
            return $returnValue2945;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2957, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2956, $tmp2957);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2959 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2956, &$s2958);
        if (((panda$core$Bit) { !$tmp2959.nonnull }).value) {
        {
            $tmp2960 = NULL;
            $returnValue2945 = $tmp2960;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2960));
            $tmp2939 = 2;
            goto $l2937;
            $l2961:;
            return $returnValue2945;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2966 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2965 = $tmp2966;
        $tmp2964 = $tmp2965;
        list2963 = $tmp2964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
        if (((panda$core$Bit) { list2963 == NULL }).value) {
        {
            $tmp2967 = NULL;
            $returnValue2945 = $tmp2967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2967));
            $tmp2939 = 3;
            goto $l2937;
            $l2968:;
            return $returnValue2945;
        }
        }
        panda$collections$ImmutableArray* $tmp2973 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2972 = $tmp2973;
        $tmp2971 = $tmp2972;
        block2970 = $tmp2971;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2972));
        if (((panda$core$Bit) { block2970 == NULL }).value) {
        {
            $tmp2974 = NULL;
            $returnValue2945 = $tmp2974;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2974));
            $tmp2939 = 4;
            goto $l2937;
            $l2975:;
            return $returnValue2945;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2979 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2980, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2979, $tmp2980, ((org$pandalanguage$pandac$parser$Token) start2940.value).position, p_label, t2949, list2963, block2970);
        $tmp2978 = $tmp2979;
        $tmp2977 = $tmp2978;
        $returnValue2945 = $tmp2977;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2977));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
        $tmp2939 = 5;
        goto $l2937;
        $l2981:;
        return $returnValue2945;
    }
    $l2937:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2970));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2963));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2949));
    t2949 = NULL;
    list2963 = NULL;
    block2970 = NULL;
    switch ($tmp2939) {
        case 3: goto $l2968;
        case 5: goto $l2981;
        case 2: goto $l2961;
        case 4: goto $l2975;
        case 1: goto $l2954;
        case 0: goto $l2947;
    }
    $l2983:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2987;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2988;
    panda$core$Int64 $tmp2989;
    org$pandalanguage$pandac$ASTNode* $returnValue2992;
    org$pandalanguage$pandac$ASTNode* $tmp2993;
    org$pandalanguage$pandac$ASTNode* test2996 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp2998;
    org$pandalanguage$pandac$ASTNode* $tmp3000;
    panda$collections$ImmutableArray* body3003 = NULL;
    panda$collections$ImmutableArray* $tmp3004;
    panda$collections$ImmutableArray* $tmp3005;
    org$pandalanguage$pandac$ASTNode* $tmp3007;
    org$pandalanguage$pandac$ASTNode* $tmp3010;
    org$pandalanguage$pandac$ASTNode* $tmp3011;
    panda$core$Int64 $tmp3013;
    int $tmp2986;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2989, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2988, $tmp2989);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2991 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2988, &$s2990);
        start2987 = $tmp2991;
        if (((panda$core$Bit) { !start2987.nonnull }).value) {
        {
            $tmp2993 = NULL;
            $returnValue2992 = $tmp2993;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2993));
            $tmp2986 = 0;
            goto $l2984;
            $l2994:;
            return $returnValue2992;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2999 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2998 = $tmp2999;
        $tmp2997 = $tmp2998;
        test2996 = $tmp2997;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2998));
        if (((panda$core$Bit) { test2996 == NULL }).value) {
        {
            $tmp3000 = NULL;
            $returnValue2992 = $tmp3000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3000));
            $tmp2986 = 1;
            goto $l2984;
            $l3001:;
            return $returnValue2992;
        }
        }
        panda$collections$ImmutableArray* $tmp3006 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3005 = $tmp3006;
        $tmp3004 = $tmp3005;
        body3003 = $tmp3004;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
        if (((panda$core$Bit) { body3003 == NULL }).value) {
        {
            $tmp3007 = NULL;
            $returnValue2992 = $tmp3007;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3007));
            $tmp2986 = 2;
            goto $l2984;
            $l3008:;
            return $returnValue2992;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3012 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3013, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3012, $tmp3013, ((org$pandalanguage$pandac$parser$Token) start2987.value).position, p_label, test2996, body3003);
        $tmp3011 = $tmp3012;
        $tmp3010 = $tmp3011;
        $returnValue2992 = $tmp3010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3011));
        $tmp2986 = 3;
        goto $l2984;
        $l3014:;
        return $returnValue2992;
    }
    $l2984:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3003));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2996));
    test2996 = NULL;
    body3003 = NULL;
    switch ($tmp2986) {
        case 3: goto $l3014;
        case 2: goto $l3008;
        case 1: goto $l3001;
        case 0: goto $l2994;
    }
    $l3016:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3020;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3021;
    panda$core$Int64 $tmp3022;
    org$pandalanguage$pandac$ASTNode* $returnValue3025;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    panda$collections$ImmutableArray* body3029 = NULL;
    panda$collections$ImmutableArray* $tmp3030;
    panda$collections$ImmutableArray* $tmp3031;
    org$pandalanguage$pandac$ASTNode* $tmp3033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3036;
    panda$core$Int64 $tmp3037;
    org$pandalanguage$pandac$ASTNode* $tmp3040;
    org$pandalanguage$pandac$ASTNode* test3043 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3044;
    org$pandalanguage$pandac$ASTNode* $tmp3045;
    org$pandalanguage$pandac$ASTNode* $tmp3047;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    org$pandalanguage$pandac$ASTNode* $tmp3051;
    panda$core$Int64 $tmp3053;
    int $tmp3019;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3022, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3021, $tmp3022);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3021, &$s3023);
        start3020 = $tmp3024;
        if (((panda$core$Bit) { !start3020.nonnull }).value) {
        {
            $tmp3026 = NULL;
            $returnValue3025 = $tmp3026;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
            $tmp3019 = 0;
            goto $l3017;
            $l3027:;
            return $returnValue3025;
        }
        }
        panda$collections$ImmutableArray* $tmp3032 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3031 = $tmp3032;
        $tmp3030 = $tmp3031;
        body3029 = $tmp3030;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
        if (((panda$core$Bit) { body3029 == NULL }).value) {
        {
            $tmp3033 = NULL;
            $returnValue3025 = $tmp3033;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3033));
            $tmp3019 = 1;
            goto $l3017;
            $l3034:;
            return $returnValue3025;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3037, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3036, $tmp3037);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3039 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3036, &$s3038);
        if (((panda$core$Bit) { !$tmp3039.nonnull }).value) {
        {
            $tmp3040 = NULL;
            $returnValue3025 = $tmp3040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3040));
            $tmp3019 = 2;
            goto $l3017;
            $l3041:;
            return $returnValue3025;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3046 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3045 = $tmp3046;
        $tmp3044 = $tmp3045;
        test3043 = $tmp3044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3045));
        if (((panda$core$Bit) { test3043 == NULL }).value) {
        {
            $tmp3047 = NULL;
            $returnValue3025 = $tmp3047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
            $tmp3019 = 3;
            goto $l3017;
            $l3048:;
            return $returnValue3025;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3052 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3053, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3052, $tmp3053, ((org$pandalanguage$pandac$parser$Token) start3020.value).position, p_label, body3029, test3043);
        $tmp3051 = $tmp3052;
        $tmp3050 = $tmp3051;
        $returnValue3025 = $tmp3050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3051));
        $tmp3019 = 4;
        goto $l3017;
        $l3054:;
        return $returnValue3025;
    }
    $l3017:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3043));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3029));
    body3029 = NULL;
    test3043 = NULL;
    switch ($tmp3019) {
        case 1: goto $l3034;
        case 3: goto $l3048;
        case 2: goto $l3041;
        case 0: goto $l3027;
        case 4: goto $l3054;
    }
    $l3056:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3060;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3061;
    panda$core$Int64 $tmp3062;
    org$pandalanguage$pandac$ASTNode* $returnValue3065;
    org$pandalanguage$pandac$ASTNode* $tmp3066;
    panda$collections$ImmutableArray* body3069 = NULL;
    panda$collections$ImmutableArray* $tmp3070;
    panda$collections$ImmutableArray* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3073;
    org$pandalanguage$pandac$ASTNode* $tmp3076;
    org$pandalanguage$pandac$ASTNode* $tmp3077;
    panda$core$Int64 $tmp3079;
    int $tmp3059;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3062, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3061, $tmp3062);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3064 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3061, &$s3063);
        start3060 = $tmp3064;
        if (((panda$core$Bit) { !start3060.nonnull }).value) {
        {
            $tmp3066 = NULL;
            $returnValue3065 = $tmp3066;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
            $tmp3059 = 0;
            goto $l3057;
            $l3067:;
            return $returnValue3065;
        }
        }
        panda$collections$ImmutableArray* $tmp3072 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3071 = $tmp3072;
        $tmp3070 = $tmp3071;
        body3069 = $tmp3070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3071));
        if (((panda$core$Bit) { body3069 == NULL }).value) {
        {
            $tmp3073 = NULL;
            $returnValue3065 = $tmp3073;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3073));
            $tmp3059 = 1;
            goto $l3057;
            $l3074:;
            return $returnValue3065;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3078 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3079, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3078, $tmp3079, ((org$pandalanguage$pandac$parser$Token) start3060.value).position, p_label, body3069);
        $tmp3077 = $tmp3078;
        $tmp3076 = $tmp3077;
        $returnValue3065 = $tmp3076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3077));
        $tmp3059 = 2;
        goto $l3057;
        $l3080:;
        return $returnValue3065;
    }
    $l3057:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3069));
    body3069 = NULL;
    switch ($tmp3059) {
        case 2: goto $l3080;
        case 0: goto $l3067;
        case 1: goto $l3074;
    }
    $l3082:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3086;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3087;
    panda$core$Int64 $tmp3088;
    org$pandalanguage$pandac$ASTNode* $returnValue3091;
    org$pandalanguage$pandac$ASTNode* $tmp3092;
    org$pandalanguage$pandac$ASTNode* expr3095 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3096;
    org$pandalanguage$pandac$ASTNode* $tmp3097;
    org$pandalanguage$pandac$ASTNode* $tmp3099;
    org$pandalanguage$pandac$ASTNode* message3102 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3103;
    panda$core$Int64 $tmp3104;
    org$pandalanguage$pandac$ASTNode* $tmp3106;
    org$pandalanguage$pandac$ASTNode* $tmp3107;
    org$pandalanguage$pandac$ASTNode* $tmp3108;
    org$pandalanguage$pandac$ASTNode* $tmp3110;
    org$pandalanguage$pandac$ASTNode* $tmp3113;
    org$pandalanguage$pandac$ASTNode* $tmp3114;
    org$pandalanguage$pandac$ASTNode* $tmp3115;
    org$pandalanguage$pandac$ASTNode* $tmp3116;
    panda$core$Int64 $tmp3118;
    int $tmp3085;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3088, 45);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3087, $tmp3088);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3090 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3087, &$s3089);
        start3086 = $tmp3090;
        if (((panda$core$Bit) { !start3086.nonnull }).value) {
        {
            $tmp3092 = NULL;
            $returnValue3091 = $tmp3092;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3092));
            $tmp3085 = 0;
            goto $l3083;
            $l3093:;
            return $returnValue3091;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3098 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3097 = $tmp3098;
        $tmp3096 = $tmp3097;
        expr3095 = $tmp3096;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3096));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3097));
        if (((panda$core$Bit) { expr3095 == NULL }).value) {
        {
            $tmp3099 = NULL;
            $returnValue3091 = $tmp3099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
            $tmp3085 = 1;
            goto $l3083;
            $l3100:;
            return $returnValue3091;
        }
        }
        memset(&message3102, 0, sizeof(message3102));
        panda$core$Int64$init$builtin_int64(&$tmp3104, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3103, $tmp3104);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3105 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3103);
        if (((panda$core$Bit) { $tmp3105.nonnull }).value) {
        {
            {
                $tmp3106 = message3102;
                org$pandalanguage$pandac$ASTNode* $tmp3109 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3108 = $tmp3109;
                $tmp3107 = $tmp3108;
                message3102 = $tmp3107;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3106));
            }
            if (((panda$core$Bit) { message3102 == NULL }).value) {
            {
                $tmp3110 = NULL;
                $returnValue3091 = $tmp3110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
                $tmp3085 = 2;
                goto $l3083;
                $l3111:;
                return $returnValue3091;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3113 = message3102;
                $tmp3114 = NULL;
                message3102 = $tmp3114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3117 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3118, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3117, $tmp3118, ((org$pandalanguage$pandac$parser$Token) start3086.value).position, expr3095, message3102);
        $tmp3116 = $tmp3117;
        $tmp3115 = $tmp3116;
        $returnValue3091 = $tmp3115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
        $tmp3085 = 3;
        goto $l3083;
        $l3119:;
        return $returnValue3091;
    }
    $l3083:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3095));
    expr3095 = NULL;
    switch ($tmp3085) {
        case 2: goto $l3111;
        case 1: goto $l3100;
        case 3: goto $l3119;
        case 0: goto $l3093;
    }
    $l3121:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3133;
    panda$core$Int64 $tmp3134;
    org$pandalanguage$pandac$ASTNode* $returnValue3137;
    org$pandalanguage$pandac$ASTNode* $tmp3138;
    panda$core$Bit $tmp3142;
    panda$collections$Array* expressions3143 = NULL;
    panda$collections$Array* $tmp3144;
    panda$collections$Array* $tmp3145;
    org$pandalanguage$pandac$ASTNode* expr3147 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3148;
    org$pandalanguage$pandac$ASTNode* $tmp3149;
    panda$core$Bit $tmp3151;
    org$pandalanguage$pandac$ASTNode* $tmp3152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3159;
    panda$core$Int64 $tmp3160;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    org$pandalanguage$pandac$ASTNode* $tmp3163;
    org$pandalanguage$pandac$ASTNode* $tmp3164;
    panda$core$Bit $tmp3166;
    org$pandalanguage$pandac$ASTNode* $tmp3167;
    panda$core$Bit $tmp3171;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3172;
    panda$core$Int64 $tmp3173;
    org$pandalanguage$pandac$ASTNode* $tmp3176;
    panda$collections$Array* statements3180 = NULL;
    panda$collections$Array* $tmp3181;
    panda$collections$Array* $tmp3182;
    org$pandalanguage$pandac$parser$Token$Kind $match$1498_133186;
    panda$core$Int64 $tmp3190;
    panda$core$Int64 $tmp3193;
    panda$core$Int64 $tmp3197;
    panda$core$Int64 $tmp3202;
    panda$core$Int64 $tmp3205;
    panda$core$Int64 $tmp3209;
    org$pandalanguage$pandac$ASTNode* stmt3215 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3216;
    org$pandalanguage$pandac$ASTNode* $tmp3217;
    org$pandalanguage$pandac$ASTNode* $tmp3219;
    org$pandalanguage$pandac$ASTNode* stmt3229 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3230;
    org$pandalanguage$pandac$ASTNode* $tmp3231;
    org$pandalanguage$pandac$ASTNode* $tmp3233;
    org$pandalanguage$pandac$ASTNode* $tmp3239;
    org$pandalanguage$pandac$ASTNode* $tmp3240;
    panda$core$Int64 $tmp3242;
    panda$collections$ImmutableArray* $tmp3243;
    panda$collections$ImmutableArray* $tmp3245;
    int $tmp3124;
    {
        if (self->allowLambdas.value) goto $l3125; else goto $l3126;
        $l3126:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3127, (panda$core$Int64) { 1471 }, &$s3128);
        abort();
        $l3125:;
        int $tmp3131;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3134, 40);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3133, $tmp3134);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3133, &$s3135);
            start3132 = $tmp3136;
            if (((panda$core$Bit) { !start3132.nonnull }).value) {
            {
                $tmp3138 = NULL;
                $returnValue3137 = $tmp3138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
                $tmp3131 = 0;
                goto $l3129;
                $l3139:;
                $tmp3124 = 0;
                goto $l3122;
                $l3140:;
                return $returnValue3137;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3142, false);
            self->allowLambdas = $tmp3142;
            panda$collections$Array* $tmp3146 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3146);
            $tmp3145 = $tmp3146;
            $tmp3144 = $tmp3145;
            expressions3143 = $tmp3144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
            org$pandalanguage$pandac$ASTNode* $tmp3150 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3149 = $tmp3150;
            $tmp3148 = $tmp3149;
            expr3147 = $tmp3148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3149));
            if (((panda$core$Bit) { expr3147 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3151, true);
                self->allowLambdas = $tmp3151;
                $tmp3152 = NULL;
                $returnValue3137 = $tmp3152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3152));
                $tmp3131 = 1;
                goto $l3129;
                $l3153:;
                $tmp3124 = 1;
                goto $l3122;
                $l3154:;
                return $returnValue3137;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3143, ((panda$core$Object*) expr3147));
            $l3156:;
            panda$core$Int64$init$builtin_int64(&$tmp3160, 106);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3159, $tmp3160);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3161 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3159);
            bool $tmp3158 = ((panda$core$Bit) { $tmp3161.nonnull }).value;
            if (!$tmp3158) goto $l3157;
            {
                {
                    $tmp3162 = expr3147;
                    org$pandalanguage$pandac$ASTNode* $tmp3165 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3164 = $tmp3165;
                    $tmp3163 = $tmp3164;
                    expr3147 = $tmp3163;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3163));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3164));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
                }
                if (((panda$core$Bit) { expr3147 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3166, true);
                    self->allowLambdas = $tmp3166;
                    $tmp3167 = NULL;
                    $returnValue3137 = $tmp3167;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3167));
                    $tmp3131 = 2;
                    goto $l3129;
                    $l3168:;
                    $tmp3124 = 2;
                    goto $l3122;
                    $l3169:;
                    return $returnValue3137;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3143, ((panda$core$Object*) expr3147));
            }
            goto $l3156;
            $l3157:;
            panda$core$Bit$init$builtin_bit(&$tmp3171, true);
            self->allowLambdas = $tmp3171;
            panda$core$Int64$init$builtin_int64(&$tmp3173, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3172, $tmp3173);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3175 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3172, &$s3174);
            if (((panda$core$Bit) { !$tmp3175.nonnull }).value) {
            {
                $tmp3176 = NULL;
                $returnValue3137 = $tmp3176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3176));
                $tmp3131 = 3;
                goto $l3129;
                $l3177:;
                $tmp3124 = 3;
                goto $l3122;
                $l3178:;
                return $returnValue3137;
            }
            }
            panda$collections$Array* $tmp3183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3183);
            $tmp3182 = $tmp3183;
            $tmp3181 = $tmp3182;
            statements3180 = $tmp3181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3182));
            $l3184:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3187 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1498_133186 = $tmp3187.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3190, 40);
                    panda$core$Bit $tmp3191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3190);
                    bool $tmp3189 = $tmp3191.value;
                    if ($tmp3189) goto $l3192;
                    panda$core$Int64$init$builtin_int64(&$tmp3193, 41);
                    panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3193);
                    $tmp3189 = $tmp3194.value;
                    $l3192:;
                    panda$core$Bit $tmp3195 = { $tmp3189 };
                    bool $tmp3188 = $tmp3195.value;
                    if ($tmp3188) goto $l3196;
                    panda$core$Int64$init$builtin_int64(&$tmp3197, 101);
                    panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3197);
                    $tmp3188 = $tmp3198.value;
                    $l3196:;
                    panda$core$Bit $tmp3199 = { $tmp3188 };
                    if ($tmp3199.value) {
                    {
                        goto $l3185;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3202, 29);
                    panda$core$Bit $tmp3203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3202);
                    bool $tmp3201 = $tmp3203.value;
                    if ($tmp3201) goto $l3204;
                    panda$core$Int64$init$builtin_int64(&$tmp3205, 30);
                    panda$core$Bit $tmp3206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3205);
                    $tmp3201 = $tmp3206.value;
                    $l3204:;
                    panda$core$Bit $tmp3207 = { $tmp3201 };
                    bool $tmp3200 = $tmp3207.value;
                    if ($tmp3200) goto $l3208;
                    panda$core$Int64$init$builtin_int64(&$tmp3209, 28);
                    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133186.$rawValue, $tmp3209);
                    $tmp3200 = $tmp3210.value;
                    $l3208:;
                    panda$core$Bit $tmp3211 = { $tmp3200 };
                    if ($tmp3211.value) {
                    {
                        int $tmp3214;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3218 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3217 = $tmp3218;
                            $tmp3216 = $tmp3217;
                            stmt3215 = $tmp3216;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3217));
                            if (((panda$core$Bit) { stmt3215 == NULL }).value) {
                            {
                                $tmp3219 = NULL;
                                $returnValue3137 = $tmp3219;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3219));
                                $tmp3214 = 0;
                                goto $l3212;
                                $l3220:;
                                $tmp3131 = 4;
                                goto $l3129;
                                $l3221:;
                                $tmp3124 = 4;
                                goto $l3122;
                                $l3222:;
                                return $returnValue3137;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3180, ((panda$core$Object*) stmt3215));
                            $tmp3214 = 1;
                            goto $l3212;
                            $l3224:;
                            goto $l3185;
                        }
                        $l3212:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3215));
                        stmt3215 = NULL;
                        switch ($tmp3214) {
                            case 0: goto $l3220;
                            case 1: goto $l3224;
                        }
                        $l3225:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3228;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3232 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3231 = $tmp3232;
                                $tmp3230 = $tmp3231;
                                stmt3229 = $tmp3230;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3230));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3231));
                                if (((panda$core$Bit) { stmt3229 == NULL }).value) {
                                {
                                    $tmp3233 = NULL;
                                    $returnValue3137 = $tmp3233;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3233));
                                    $tmp3228 = 0;
                                    goto $l3226;
                                    $l3234:;
                                    $tmp3131 = 5;
                                    goto $l3129;
                                    $l3235:;
                                    $tmp3124 = 5;
                                    goto $l3122;
                                    $l3236:;
                                    return $returnValue3137;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3180, ((panda$core$Object*) stmt3229));
                            }
                            $tmp3228 = -1;
                            goto $l3226;
                            $l3226:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3229));
                            stmt3229 = NULL;
                            switch ($tmp3228) {
                                case -1: goto $l3238;
                                case 0: goto $l3234;
                            }
                            $l3238:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3185:;
            org$pandalanguage$pandac$ASTNode* $tmp3241 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3242, 48);
            panda$collections$ImmutableArray* $tmp3244 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3143);
            $tmp3243 = $tmp3244;
            panda$collections$ImmutableArray* $tmp3246 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3180);
            $tmp3245 = $tmp3246;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3241, $tmp3242, ((org$pandalanguage$pandac$parser$Token) start3132.value).position, $tmp3243, $tmp3245);
            $tmp3240 = $tmp3241;
            $tmp3239 = $tmp3240;
            $returnValue3137 = $tmp3239;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3243));
            $tmp3131 = 6;
            goto $l3129;
            $l3247:;
            $tmp3124 = 6;
            goto $l3122;
            $l3248:;
            return $returnValue3137;
        }
        $l3129:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3143));
        expressions3143 = NULL;
        expr3147 = NULL;
        statements3180 = NULL;
        switch ($tmp3131) {
            case 1: goto $l3153;
            case 0: goto $l3139;
            case 6: goto $l3247;
            case 3: goto $l3177;
            case 2: goto $l3168;
            case 4: goto $l3221;
            case 5: goto $l3235;
        }
        $l3250:;
    }
    $tmp3124 = -1;
    goto $l3122;
    $l3122:;
    if (self->allowLambdas.value) goto $l3252; else goto $l3253;
    $l3253:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3254, (panda$core$Int64) { 1471 }, &$s3255);
    abort();
    $l3252:;
    switch ($tmp3124) {
        case 1: goto $l3154;
        case 2: goto $l3169;
        case -1: goto $l3251;
        case 3: goto $l3178;
        case 0: goto $l3140;
        case 5: goto $l3236;
        case 6: goto $l3248;
        case 4: goto $l3222;
    }
    $l3251:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3259;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3260;
    panda$core$Int64 $tmp3261;
    org$pandalanguage$pandac$ASTNode* $returnValue3264;
    org$pandalanguage$pandac$ASTNode* $tmp3265;
    org$pandalanguage$pandac$ASTNode* expr3268 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3269;
    org$pandalanguage$pandac$ASTNode* $tmp3270;
    org$pandalanguage$pandac$ASTNode* $tmp3272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3275;
    panda$core$Int64 $tmp3276;
    org$pandalanguage$pandac$ASTNode* $tmp3279;
    panda$collections$Array* whens3282 = NULL;
    panda$collections$Array* $tmp3283;
    panda$collections$Array* $tmp3284;
    panda$collections$Array* other3286 = NULL;
    panda$collections$Array* $tmp3287;
    org$pandalanguage$pandac$parser$Token token3290;
    org$pandalanguage$pandac$parser$Token$Kind $match$1539_133292;
    panda$core$Int64 $tmp3293;
    panda$core$Int64 $tmp3295;
    org$pandalanguage$pandac$ASTNode* w3300 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3301;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* $tmp3304;
    panda$core$Int64 $tmp3309;
    org$pandalanguage$pandac$parser$Token o3311;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3313;
    panda$core$Int64 $tmp3314;
    org$pandalanguage$pandac$ASTNode* $tmp3317;
    panda$collections$Array* $tmp3320;
    panda$collections$Array* $tmp3321;
    panda$collections$Array* $tmp3322;
    org$pandalanguage$pandac$parser$Token$Kind $match$1555_253326;
    panda$core$Int64 $tmp3328;
    panda$core$Int64 $tmp3332;
    panda$core$Int64 $tmp3335;
    panda$core$Int64 $tmp3339;
    org$pandalanguage$pandac$ASTNode* stmt3345 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3346;
    org$pandalanguage$pandac$ASTNode* $tmp3347;
    org$pandalanguage$pandac$ASTNode* $tmp3349;
    org$pandalanguage$pandac$ASTNode* stmt3358 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3359;
    org$pandalanguage$pandac$ASTNode* $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3362;
    panda$core$String* $tmp3367;
    panda$core$String* $tmp3369;
    panda$core$String* $tmp3370;
    panda$core$String* $tmp3372;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3378;
    panda$core$Int64 $tmp3379;
    org$pandalanguage$pandac$ASTNode* $tmp3382;
    org$pandalanguage$pandac$ASTNode* $tmp3385;
    org$pandalanguage$pandac$ASTNode* $tmp3386;
    panda$core$Int64 $tmp3388;
    panda$collections$ImmutableArray* $tmp3389;
    panda$collections$ImmutableArray* $tmp3391;
    org$pandalanguage$pandac$ASTNode* $tmp3395;
    org$pandalanguage$pandac$ASTNode* $tmp3396;
    panda$core$Int64 $tmp3398;
    panda$collections$ImmutableArray* $tmp3399;
    int $tmp3258;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3261, 39);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3260, $tmp3261);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3263 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3260, &$s3262);
        start3259 = $tmp3263;
        if (((panda$core$Bit) { !start3259.nonnull }).value) {
        {
            $tmp3265 = NULL;
            $returnValue3264 = $tmp3265;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3265));
            $tmp3258 = 0;
            goto $l3256;
            $l3266:;
            return $returnValue3264;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3271 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3270 = $tmp3271;
        $tmp3269 = $tmp3270;
        expr3268 = $tmp3269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3270));
        if (((panda$core$Bit) { expr3268 == NULL }).value) {
        {
            $tmp3272 = NULL;
            $returnValue3264 = $tmp3272;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3272));
            $tmp3258 = 1;
            goto $l3256;
            $l3273:;
            return $returnValue3264;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3276, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3275, $tmp3276);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3278 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3275, &$s3277);
        if (((panda$core$Bit) { !$tmp3278.nonnull }).value) {
        {
            $tmp3279 = NULL;
            $returnValue3264 = $tmp3279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
            $tmp3258 = 2;
            goto $l3256;
            $l3280:;
            return $returnValue3264;
        }
        }
        panda$collections$Array* $tmp3285 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3285);
        $tmp3284 = $tmp3285;
        $tmp3283 = $tmp3284;
        whens3282 = $tmp3283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3284));
        $tmp3287 = NULL;
        other3286 = $tmp3287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3287));
        $l3288:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3291 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3290 = $tmp3291;
            {
                $match$1539_133292 = token3290.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3293, 101);
                panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133292.$rawValue, $tmp3293);
                if ($tmp3294.value) {
                {
                    goto $l3289;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3295, 40);
                panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133292.$rawValue, $tmp3295);
                if ($tmp3296.value) {
                {
                    int $tmp3299;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3303 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3302 = $tmp3303;
                        $tmp3301 = $tmp3302;
                        w3300 = $tmp3301;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
                        if (((panda$core$Bit) { w3300 == NULL }).value) {
                        {
                            $tmp3304 = NULL;
                            $returnValue3264 = $tmp3304;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
                            $tmp3299 = 0;
                            goto $l3297;
                            $l3305:;
                            $tmp3258 = 3;
                            goto $l3256;
                            $l3306:;
                            return $returnValue3264;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3282, ((panda$core$Object*) w3300));
                    }
                    $tmp3299 = -1;
                    goto $l3297;
                    $l3297:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3300));
                    w3300 = NULL;
                    switch ($tmp3299) {
                        case -1: goto $l3308;
                        case 0: goto $l3305;
                    }
                    $l3308:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3309, 41);
                panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133292.$rawValue, $tmp3309);
                if ($tmp3310.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3312 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3311 = $tmp3312;
                    panda$core$Int64$init$builtin_int64(&$tmp3314, 96);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3313, $tmp3314);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3316 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3313, &$s3315);
                    if (((panda$core$Bit) { !$tmp3316.nonnull }).value) {
                    {
                        $tmp3317 = NULL;
                        $returnValue3264 = $tmp3317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3317));
                        $tmp3258 = 4;
                        goto $l3256;
                        $l3318:;
                        return $returnValue3264;
                    }
                    }
                    {
                        $tmp3320 = other3286;
                        panda$collections$Array* $tmp3323 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3323);
                        $tmp3322 = $tmp3323;
                        $tmp3321 = $tmp3322;
                        other3286 = $tmp3321;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3321));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
                    }
                    $l3324:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3327 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1555_253326 = $tmp3327.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3328, 101);
                            panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253326.$rawValue, $tmp3328);
                            if ($tmp3329.value) {
                            {
                                goto $l3325;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3332, 29);
                            panda$core$Bit $tmp3333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253326.$rawValue, $tmp3332);
                            bool $tmp3331 = $tmp3333.value;
                            if ($tmp3331) goto $l3334;
                            panda$core$Int64$init$builtin_int64(&$tmp3335, 30);
                            panda$core$Bit $tmp3336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253326.$rawValue, $tmp3335);
                            $tmp3331 = $tmp3336.value;
                            $l3334:;
                            panda$core$Bit $tmp3337 = { $tmp3331 };
                            bool $tmp3330 = $tmp3337.value;
                            if ($tmp3330) goto $l3338;
                            panda$core$Int64$init$builtin_int64(&$tmp3339, 28);
                            panda$core$Bit $tmp3340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253326.$rawValue, $tmp3339);
                            $tmp3330 = $tmp3340.value;
                            $l3338:;
                            panda$core$Bit $tmp3341 = { $tmp3330 };
                            if ($tmp3341.value) {
                            {
                                int $tmp3344;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3348 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3347 = $tmp3348;
                                    $tmp3346 = $tmp3347;
                                    stmt3345 = $tmp3346;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3346));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3347));
                                    if (((panda$core$Bit) { stmt3345 == NULL }).value) {
                                    {
                                        $tmp3349 = NULL;
                                        $returnValue3264 = $tmp3349;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3349));
                                        $tmp3344 = 0;
                                        goto $l3342;
                                        $l3350:;
                                        $tmp3258 = 5;
                                        goto $l3256;
                                        $l3351:;
                                        return $returnValue3264;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3286, ((panda$core$Object*) stmt3345));
                                    $tmp3344 = 1;
                                    goto $l3342;
                                    $l3353:;
                                    goto $l3325;
                                }
                                $l3342:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3345));
                                stmt3345 = NULL;
                                switch ($tmp3344) {
                                    case 1: goto $l3353;
                                    case 0: goto $l3350;
                                }
                                $l3354:;
                            }
                            }
                            else {
                            {
                                int $tmp3357;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3361 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3360 = $tmp3361;
                                    $tmp3359 = $tmp3360;
                                    stmt3358 = $tmp3359;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3360));
                                    if (((panda$core$Bit) { stmt3358 == NULL }).value) {
                                    {
                                        $tmp3362 = NULL;
                                        $returnValue3264 = $tmp3362;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
                                        $tmp3357 = 0;
                                        goto $l3355;
                                        $l3363:;
                                        $tmp3258 = 6;
                                        goto $l3256;
                                        $l3364:;
                                        return $returnValue3264;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3286, ((panda$core$Object*) stmt3358));
                                }
                                $tmp3357 = -1;
                                goto $l3355;
                                $l3355:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3358));
                                stmt3358 = NULL;
                                switch ($tmp3357) {
                                    case -1: goto $l3366;
                                    case 0: goto $l3363;
                                }
                                $l3366:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3325:;
                    goto $l3289;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3373 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3290);
                    $tmp3372 = $tmp3373;
                    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3371, $tmp3372);
                    $tmp3370 = $tmp3374;
                    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3375);
                    $tmp3369 = $tmp3376;
                    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3368, $tmp3369);
                    $tmp3367 = $tmp3377;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3290, $tmp3367);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3369));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3370));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3372));
                    goto $l3289;
                }
                }
                }
                }
            }
        }
        }
        $l3289:;
        panda$core$Int64$init$builtin_int64(&$tmp3379, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3378, $tmp3379);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3381 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3378, &$s3380);
        if (((panda$core$Bit) { !$tmp3381.nonnull }).value) {
        {
            $tmp3382 = NULL;
            $returnValue3264 = $tmp3382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3382));
            $tmp3258 = 7;
            goto $l3256;
            $l3383:;
            return $returnValue3264;
        }
        }
        if (((panda$core$Bit) { other3286 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3387 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3388, 25);
            panda$collections$ImmutableArray* $tmp3390 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3282);
            $tmp3389 = $tmp3390;
            panda$collections$ImmutableArray* $tmp3392 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3286);
            $tmp3391 = $tmp3392;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3387, $tmp3388, ((org$pandalanguage$pandac$parser$Token) start3259.value).position, expr3268, $tmp3389, $tmp3391);
            $tmp3386 = $tmp3387;
            $tmp3385 = $tmp3386;
            $returnValue3264 = $tmp3385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
            $tmp3258 = 8;
            goto $l3256;
            $l3393:;
            return $returnValue3264;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3397 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3398, 25);
        panda$collections$ImmutableArray* $tmp3400 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3282);
        $tmp3399 = $tmp3400;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3397, $tmp3398, ((org$pandalanguage$pandac$parser$Token) start3259.value).position, expr3268, $tmp3399, NULL);
        $tmp3396 = $tmp3397;
        $tmp3395 = $tmp3396;
        $returnValue3264 = $tmp3395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
        $tmp3258 = 9;
        goto $l3256;
        $l3401:;
        return $returnValue3264;
    }
    $l3256:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3286));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3282));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3268));
    expr3268 = NULL;
    whens3282 = NULL;
    switch ($tmp3258) {
        case 6: goto $l3364;
        case 3: goto $l3306;
        case 4: goto $l3318;
        case 1: goto $l3273;
        case 8: goto $l3393;
        case 9: goto $l3401;
        case 7: goto $l3383;
        case 0: goto $l3266;
        case 2: goto $l3280;
        case 5: goto $l3351;
    }
    $l3403:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3407;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3408;
    panda$core$Int64 $tmp3409;
    panda$collections$ImmutableArray* $returnValue3412;
    panda$collections$ImmutableArray* $tmp3413;
    panda$collections$Array* result3416 = NULL;
    panda$collections$Array* $tmp3417;
    panda$collections$Array* $tmp3418;
    org$pandalanguage$pandac$parser$Token$Kind $match$1600_133422;
    panda$core$Int64 $tmp3424;
    panda$core$Int64 $tmp3428;
    panda$core$Int64 $tmp3431;
    panda$core$Int64 $tmp3435;
    org$pandalanguage$pandac$ASTNode* stmt3441 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3442;
    org$pandalanguage$pandac$ASTNode* $tmp3443;
    panda$collections$ImmutableArray* $tmp3445;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3449;
    panda$core$Int64 $tmp3450;
    panda$collections$ImmutableArray* $tmp3453;
    org$pandalanguage$pandac$ASTNode* stmt3462 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3463;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    panda$collections$ImmutableArray* $tmp3466;
    panda$collections$ImmutableArray* $tmp3471;
    panda$collections$ImmutableArray* $tmp3472;
    int $tmp3406;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3409, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3408, $tmp3409);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3411 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3408, &$s3410);
        start3407 = $tmp3411;
        if (((panda$core$Bit) { !start3407.nonnull }).value) {
        {
            $tmp3413 = NULL;
            $returnValue3412 = $tmp3413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3413));
            $tmp3406 = 0;
            goto $l3404;
            $l3414:;
            return $returnValue3412;
        }
        }
        panda$collections$Array* $tmp3419 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3419);
        $tmp3418 = $tmp3419;
        $tmp3417 = $tmp3418;
        result3416 = $tmp3417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3418));
        $l3420:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3423 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1600_133422 = $tmp3423.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3424, 101);
                panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133422.$rawValue, $tmp3424);
                if ($tmp3425.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3421;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3428, 29);
                panda$core$Bit $tmp3429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133422.$rawValue, $tmp3428);
                bool $tmp3427 = $tmp3429.value;
                if ($tmp3427) goto $l3430;
                panda$core$Int64$init$builtin_int64(&$tmp3431, 30);
                panda$core$Bit $tmp3432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133422.$rawValue, $tmp3431);
                $tmp3427 = $tmp3432.value;
                $l3430:;
                panda$core$Bit $tmp3433 = { $tmp3427 };
                bool $tmp3426 = $tmp3433.value;
                if ($tmp3426) goto $l3434;
                panda$core$Int64$init$builtin_int64(&$tmp3435, 28);
                panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133422.$rawValue, $tmp3435);
                $tmp3426 = $tmp3436.value;
                $l3434:;
                panda$core$Bit $tmp3437 = { $tmp3426 };
                if ($tmp3437.value) {
                {
                    int $tmp3440;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3444 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3443 = $tmp3444;
                        $tmp3442 = $tmp3443;
                        stmt3441 = $tmp3442;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3442));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3443));
                        if (((panda$core$Bit) { stmt3441 == NULL }).value) {
                        {
                            $tmp3445 = NULL;
                            $returnValue3412 = $tmp3445;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3445));
                            $tmp3440 = 0;
                            goto $l3438;
                            $l3446:;
                            $tmp3406 = 1;
                            goto $l3404;
                            $l3447:;
                            return $returnValue3412;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3450, 101);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3449, $tmp3450);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3452 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3449, &$s3451);
                        if (((panda$core$Bit) { !$tmp3452.nonnull }).value) {
                        {
                            $tmp3453 = NULL;
                            $returnValue3412 = $tmp3453;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3453));
                            $tmp3440 = 1;
                            goto $l3438;
                            $l3454:;
                            $tmp3406 = 2;
                            goto $l3404;
                            $l3455:;
                            return $returnValue3412;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3416, ((panda$core$Object*) stmt3441));
                        $tmp3440 = 2;
                        goto $l3438;
                        $l3457:;
                        goto $l3421;
                    }
                    $l3438:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3441));
                    stmt3441 = NULL;
                    switch ($tmp3440) {
                        case 1: goto $l3454;
                        case 2: goto $l3457;
                        case 0: goto $l3446;
                    }
                    $l3458:;
                }
                }
                else {
                {
                    int $tmp3461;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3465 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3464 = $tmp3465;
                        $tmp3463 = $tmp3464;
                        stmt3462 = $tmp3463;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
                        if (((panda$core$Bit) { stmt3462 == NULL }).value) {
                        {
                            $tmp3466 = NULL;
                            $returnValue3412 = $tmp3466;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3466));
                            $tmp3461 = 0;
                            goto $l3459;
                            $l3467:;
                            $tmp3406 = 3;
                            goto $l3404;
                            $l3468:;
                            return $returnValue3412;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3416, ((panda$core$Object*) stmt3462));
                    }
                    $tmp3461 = -1;
                    goto $l3459;
                    $l3459:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3462));
                    stmt3462 = NULL;
                    switch ($tmp3461) {
                        case 0: goto $l3467;
                        case -1: goto $l3470;
                    }
                    $l3470:;
                }
                }
                }
            }
        }
        }
        $l3421:;
        panda$collections$ImmutableArray* $tmp3473 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3416);
        $tmp3472 = $tmp3473;
        $tmp3471 = $tmp3472;
        $returnValue3412 = $tmp3471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3472));
        $tmp3406 = 4;
        goto $l3404;
        $l3474:;
        return $returnValue3412;
    }
    $l3404:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3416));
    result3416 = NULL;
    switch ($tmp3406) {
        case 1: goto $l3447;
        case 3: goto $l3468;
        case 2: goto $l3455;
        case 0: goto $l3414;
        case 4: goto $l3474;
    }
    $l3476:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3480 = NULL;
    panda$collections$ImmutableArray* $tmp3481;
    panda$collections$ImmutableArray* $tmp3482;
    org$pandalanguage$pandac$ASTNode* $returnValue3484;
    org$pandalanguage$pandac$ASTNode* $tmp3485;
    org$pandalanguage$pandac$ASTNode* $tmp3488;
    org$pandalanguage$pandac$ASTNode* $tmp3489;
    panda$core$Int64 $tmp3491;
    org$pandalanguage$pandac$Position $tmp3492;
    int $tmp3479;
    {
        panda$collections$ImmutableArray* $tmp3483 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3482 = $tmp3483;
        $tmp3481 = $tmp3482;
        statements3480 = $tmp3481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3482));
        if (((panda$core$Bit) { statements3480 == NULL }).value) {
        {
            $tmp3485 = NULL;
            $returnValue3484 = $tmp3485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3485));
            $tmp3479 = 0;
            goto $l3477;
            $l3486:;
            return $returnValue3484;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3490 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3491, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3492);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3490, $tmp3491, $tmp3492, statements3480);
        $tmp3489 = $tmp3490;
        $tmp3488 = $tmp3489;
        $returnValue3484 = $tmp3488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3489));
        $tmp3479 = 1;
        goto $l3477;
        $l3493:;
        return $returnValue3484;
    }
    $l3477:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3480));
    statements3480 = NULL;
    switch ($tmp3479) {
        case 1: goto $l3493;
        case 0: goto $l3486;
    }
    $l3495:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3499 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3500;
    org$pandalanguage$pandac$ASTNode* $tmp3501;
    org$pandalanguage$pandac$ASTNode* $returnValue3503;
    org$pandalanguage$pandac$ASTNode* $tmp3504;
    org$pandalanguage$pandac$parser$Token$Kind $match$1644_93507;
    panda$core$Int64 $tmp3524;
    panda$core$Int64 $tmp3527;
    panda$core$Int64 $tmp3531;
    panda$core$Int64 $tmp3535;
    panda$core$Int64 $tmp3539;
    panda$core$Int64 $tmp3543;
    panda$core$Int64 $tmp3547;
    panda$core$Int64 $tmp3551;
    panda$core$Int64 $tmp3555;
    panda$core$Int64 $tmp3559;
    panda$core$Int64 $tmp3563;
    panda$core$Int64 $tmp3567;
    panda$core$Int64 $tmp3571;
    panda$core$Int64 $tmp3575;
    panda$core$Int64 $tmp3579;
    panda$core$Int64 $tmp3583;
    org$pandalanguage$pandac$parser$Token op3589;
    org$pandalanguage$pandac$ASTNode* rvalue3591 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3592;
    org$pandalanguage$pandac$ASTNode* $tmp3593;
    org$pandalanguage$pandac$ASTNode* $tmp3595;
    org$pandalanguage$pandac$ASTNode* $tmp3599;
    org$pandalanguage$pandac$ASTNode* $tmp3600;
    panda$core$Int64 $tmp3602;
    panda$core$Int64 $tmp3609;
    org$pandalanguage$pandac$parser$Token op3616;
    org$pandalanguage$pandac$ASTNode* rvalue3618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3619;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    org$pandalanguage$pandac$ASTNode* $tmp3626;
    org$pandalanguage$pandac$ASTNode* $tmp3627;
    panda$core$Int64 $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3636;
    int $tmp3498;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3502 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3501 = $tmp3502;
        $tmp3500 = $tmp3501;
        start3499 = $tmp3500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3501));
        if (((panda$core$Bit) { start3499 == NULL }).value) {
        {
            $tmp3504 = NULL;
            $returnValue3503 = $tmp3504;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
            $tmp3498 = 0;
            goto $l3496;
            $l3505:;
            return $returnValue3503;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3508 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1644_93507 = $tmp3508.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3524, 74);
            panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3524);
            bool $tmp3523 = $tmp3525.value;
            if ($tmp3523) goto $l3526;
            panda$core$Int64$init$builtin_int64(&$tmp3527, 75);
            panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3527);
            $tmp3523 = $tmp3528.value;
            $l3526:;
            panda$core$Bit $tmp3529 = { $tmp3523 };
            bool $tmp3522 = $tmp3529.value;
            if ($tmp3522) goto $l3530;
            panda$core$Int64$init$builtin_int64(&$tmp3531, 76);
            panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3531);
            $tmp3522 = $tmp3532.value;
            $l3530:;
            panda$core$Bit $tmp3533 = { $tmp3522 };
            bool $tmp3521 = $tmp3533.value;
            if ($tmp3521) goto $l3534;
            panda$core$Int64$init$builtin_int64(&$tmp3535, 77);
            panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3535);
            $tmp3521 = $tmp3536.value;
            $l3534:;
            panda$core$Bit $tmp3537 = { $tmp3521 };
            bool $tmp3520 = $tmp3537.value;
            if ($tmp3520) goto $l3538;
            panda$core$Int64$init$builtin_int64(&$tmp3539, 78);
            panda$core$Bit $tmp3540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3539);
            $tmp3520 = $tmp3540.value;
            $l3538:;
            panda$core$Bit $tmp3541 = { $tmp3520 };
            bool $tmp3519 = $tmp3541.value;
            if ($tmp3519) goto $l3542;
            panda$core$Int64$init$builtin_int64(&$tmp3543, 79);
            panda$core$Bit $tmp3544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3543);
            $tmp3519 = $tmp3544.value;
            $l3542:;
            panda$core$Bit $tmp3545 = { $tmp3519 };
            bool $tmp3518 = $tmp3545.value;
            if ($tmp3518) goto $l3546;
            panda$core$Int64$init$builtin_int64(&$tmp3547, 80);
            panda$core$Bit $tmp3548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3547);
            $tmp3518 = $tmp3548.value;
            $l3546:;
            panda$core$Bit $tmp3549 = { $tmp3518 };
            bool $tmp3517 = $tmp3549.value;
            if ($tmp3517) goto $l3550;
            panda$core$Int64$init$builtin_int64(&$tmp3551, 81);
            panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3551);
            $tmp3517 = $tmp3552.value;
            $l3550:;
            panda$core$Bit $tmp3553 = { $tmp3517 };
            bool $tmp3516 = $tmp3553.value;
            if ($tmp3516) goto $l3554;
            panda$core$Int64$init$builtin_int64(&$tmp3555, 82);
            panda$core$Bit $tmp3556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3555);
            $tmp3516 = $tmp3556.value;
            $l3554:;
            panda$core$Bit $tmp3557 = { $tmp3516 };
            bool $tmp3515 = $tmp3557.value;
            if ($tmp3515) goto $l3558;
            panda$core$Int64$init$builtin_int64(&$tmp3559, 83);
            panda$core$Bit $tmp3560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3559);
            $tmp3515 = $tmp3560.value;
            $l3558:;
            panda$core$Bit $tmp3561 = { $tmp3515 };
            bool $tmp3514 = $tmp3561.value;
            if ($tmp3514) goto $l3562;
            panda$core$Int64$init$builtin_int64(&$tmp3563, 84);
            panda$core$Bit $tmp3564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3563);
            $tmp3514 = $tmp3564.value;
            $l3562:;
            panda$core$Bit $tmp3565 = { $tmp3514 };
            bool $tmp3513 = $tmp3565.value;
            if ($tmp3513) goto $l3566;
            panda$core$Int64$init$builtin_int64(&$tmp3567, 85);
            panda$core$Bit $tmp3568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3567);
            $tmp3513 = $tmp3568.value;
            $l3566:;
            panda$core$Bit $tmp3569 = { $tmp3513 };
            bool $tmp3512 = $tmp3569.value;
            if ($tmp3512) goto $l3570;
            panda$core$Int64$init$builtin_int64(&$tmp3571, 86);
            panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3571);
            $tmp3512 = $tmp3572.value;
            $l3570:;
            panda$core$Bit $tmp3573 = { $tmp3512 };
            bool $tmp3511 = $tmp3573.value;
            if ($tmp3511) goto $l3574;
            panda$core$Int64$init$builtin_int64(&$tmp3575, 87);
            panda$core$Bit $tmp3576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3575);
            $tmp3511 = $tmp3576.value;
            $l3574:;
            panda$core$Bit $tmp3577 = { $tmp3511 };
            bool $tmp3510 = $tmp3577.value;
            if ($tmp3510) goto $l3578;
            panda$core$Int64$init$builtin_int64(&$tmp3579, 88);
            panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3579);
            $tmp3510 = $tmp3580.value;
            $l3578:;
            panda$core$Bit $tmp3581 = { $tmp3510 };
            bool $tmp3509 = $tmp3581.value;
            if ($tmp3509) goto $l3582;
            panda$core$Int64$init$builtin_int64(&$tmp3583, 89);
            panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3583);
            $tmp3509 = $tmp3584.value;
            $l3582:;
            panda$core$Bit $tmp3585 = { $tmp3509 };
            if ($tmp3585.value) {
            {
                int $tmp3588;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3590 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3589 = $tmp3590;
                    org$pandalanguage$pandac$ASTNode* $tmp3594 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3593 = $tmp3594;
                    $tmp3592 = $tmp3593;
                    rvalue3591 = $tmp3592;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3593));
                    if (((panda$core$Bit) { rvalue3591 == NULL }).value) {
                    {
                        $tmp3595 = NULL;
                        $returnValue3503 = $tmp3595;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3595));
                        $tmp3588 = 0;
                        goto $l3586;
                        $l3596:;
                        $tmp3498 = 1;
                        goto $l3496;
                        $l3597:;
                        return $returnValue3503;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3601 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3602, 4);
                    org$pandalanguage$pandac$Position $tmp3604 = (($fn3603) start3499->$class->vtable[2])(start3499);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3601, $tmp3602, $tmp3604, start3499, op3589.kind, rvalue3591);
                    $tmp3600 = $tmp3601;
                    $tmp3599 = $tmp3600;
                    $returnValue3503 = $tmp3599;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3600));
                    $tmp3588 = 1;
                    goto $l3586;
                    $l3605:;
                    $tmp3498 = 2;
                    goto $l3496;
                    $l3606:;
                    return $returnValue3503;
                }
                $l3586:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3591));
                rvalue3591 = NULL;
                switch ($tmp3588) {
                    case 1: goto $l3605;
                    case 0: goto $l3596;
                }
                $l3608:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3609, 59);
            panda$core$Bit $tmp3610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93507.$rawValue, $tmp3609);
            if ($tmp3610.value) {
            {
                int $tmp3613;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3614 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3614, &$s3615);
                    org$pandalanguage$pandac$parser$Token $tmp3617 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3616 = $tmp3617;
                    org$pandalanguage$pandac$ASTNode* $tmp3621 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3620 = $tmp3621;
                    $tmp3619 = $tmp3620;
                    rvalue3618 = $tmp3619;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3619));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3620));
                    if (((panda$core$Bit) { rvalue3618 == NULL }).value) {
                    {
                        $tmp3622 = NULL;
                        $returnValue3503 = $tmp3622;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
                        $tmp3613 = 0;
                        goto $l3611;
                        $l3623:;
                        $tmp3498 = 3;
                        goto $l3496;
                        $l3624:;
                        return $returnValue3503;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3629, 4);
                    org$pandalanguage$pandac$Position $tmp3631 = (($fn3630) start3499->$class->vtable[2])(start3499);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3628, $tmp3629, $tmp3631, start3499, op3616.kind, rvalue3618);
                    $tmp3627 = $tmp3628;
                    $tmp3626 = $tmp3627;
                    $returnValue3503 = $tmp3626;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3626));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
                    $tmp3613 = 1;
                    goto $l3611;
                    $l3632:;
                    $tmp3498 = 4;
                    goto $l3496;
                    $l3633:;
                    return $returnValue3503;
                }
                $l3611:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3618));
                rvalue3618 = NULL;
                switch ($tmp3613) {
                    case 1: goto $l3632;
                    case 0: goto $l3623;
                }
                $l3635:;
            }
            }
            else {
            {
                $tmp3636 = start3499;
                $returnValue3503 = $tmp3636;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3636));
                $tmp3498 = 5;
                goto $l3496;
                $l3637:;
                return $returnValue3503;
            }
            }
            }
        }
    }
    $tmp3498 = -1;
    goto $l3496;
    $l3496:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3499));
    start3499 = NULL;
    switch ($tmp3498) {
        case 5: goto $l3637;
        case 1: goto $l3597;
        case -1: goto $l3639;
        case 2: goto $l3606;
        case 4: goto $l3633;
        case 3: goto $l3624;
        case 0: goto $l3505;
    }
    $l3639:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3643 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3644;
    org$pandalanguage$pandac$ASTNode* $tmp3645;
    org$pandalanguage$pandac$ASTNode* $returnValue3647;
    org$pandalanguage$pandac$ASTNode* $tmp3648;
    org$pandalanguage$pandac$ASTNode* value3651 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3652;
    panda$core$Int64 $tmp3653;
    org$pandalanguage$pandac$ASTNode* $tmp3655;
    org$pandalanguage$pandac$ASTNode* $tmp3656;
    org$pandalanguage$pandac$ASTNode* $tmp3657;
    org$pandalanguage$pandac$ASTNode* $tmp3659;
    panda$core$Int64 $tmp3663;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    org$pandalanguage$pandac$ASTNode* $tmp3668;
    org$pandalanguage$pandac$ASTNode* $tmp3669;
    org$pandalanguage$pandac$ASTNode* $tmp3671;
    org$pandalanguage$pandac$ASTNode* $tmp3674;
    org$pandalanguage$pandac$ASTNode* $tmp3675;
    org$pandalanguage$pandac$ASTNode* $tmp3676;
    org$pandalanguage$pandac$ASTNode* $tmp3677;
    panda$core$Int64 $tmp3679;
    int $tmp3642;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3646 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3645 = $tmp3646;
        $tmp3644 = $tmp3645;
        t3643 = $tmp3644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3645));
        if (((panda$core$Bit) { t3643 == NULL }).value) {
        {
            $tmp3648 = NULL;
            $returnValue3647 = $tmp3648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
            $tmp3642 = 0;
            goto $l3640;
            $l3649:;
            return $returnValue3647;
        }
        }
        memset(&value3651, 0, sizeof(value3651));
        panda$core$Int64$init$builtin_int64(&$tmp3653, 74);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3652, $tmp3653);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3654 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3652);
        if (((panda$core$Bit) { $tmp3654.nonnull }).value) {
        {
            {
                $tmp3655 = value3651;
                org$pandalanguage$pandac$ASTNode* $tmp3658 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3657 = $tmp3658;
                $tmp3656 = $tmp3657;
                value3651 = $tmp3656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3655));
            }
            if (((panda$core$Bit) { value3651 == NULL }).value) {
            {
                $tmp3659 = NULL;
                $returnValue3647 = $tmp3659;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3659));
                $tmp3642 = 1;
                goto $l3640;
                $l3660:;
                return $returnValue3647;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3662 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3663, 59);
        panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3662.kind.$rawValue, $tmp3663);
        if ($tmp3664.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3665 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3665, &$s3666);
            {
                $tmp3667 = value3651;
                org$pandalanguage$pandac$ASTNode* $tmp3670 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3669 = $tmp3670;
                $tmp3668 = $tmp3669;
                value3651 = $tmp3668;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3667));
            }
            if (((panda$core$Bit) { value3651 == NULL }).value) {
            {
                $tmp3671 = NULL;
                $returnValue3647 = $tmp3671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3671));
                $tmp3642 = 2;
                goto $l3640;
                $l3672:;
                return $returnValue3647;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3674 = value3651;
                $tmp3675 = NULL;
                value3651 = $tmp3675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3674));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3678 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3679, 13);
        org$pandalanguage$pandac$Position $tmp3681 = (($fn3680) t3643->$class->vtable[2])(t3643);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3678, $tmp3679, $tmp3681, t3643, value3651);
        $tmp3677 = $tmp3678;
        $tmp3676 = $tmp3677;
        $returnValue3647 = $tmp3676;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3676));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3677));
        $tmp3642 = 3;
        goto $l3640;
        $l3682:;
        return $returnValue3647;
    }
    $l3640:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3651));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3643));
    t3643 = NULL;
    switch ($tmp3642) {
        case 1: goto $l3660;
        case 3: goto $l3682;
        case 0: goto $l3649;
        case 2: goto $l3672;
    }
    $l3684:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3688;
    org$pandalanguage$pandac$Variable$Kind kind3690;
    org$pandalanguage$pandac$parser$Token$Kind $match$1703_93691;
    panda$core$Int64 $tmp3692;
    org$pandalanguage$pandac$Variable$Kind $tmp3694;
    panda$core$Int64 $tmp3695;
    panda$core$Int64 $tmp3696;
    org$pandalanguage$pandac$Variable$Kind $tmp3698;
    panda$core$Int64 $tmp3699;
    panda$core$Int64 $tmp3700;
    org$pandalanguage$pandac$Variable$Kind $tmp3702;
    panda$core$Int64 $tmp3703;
    panda$core$Int64 $tmp3704;
    org$pandalanguage$pandac$Variable$Kind $tmp3706;
    panda$core$Int64 $tmp3707;
    panda$collections$Array* declarations3709 = NULL;
    panda$collections$Array* $tmp3710;
    panda$collections$Array* $tmp3711;
    org$pandalanguage$pandac$ASTNode* decl3713 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    org$pandalanguage$pandac$ASTNode* $returnValue3717;
    org$pandalanguage$pandac$ASTNode* $tmp3718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3724;
    panda$core$Int64 $tmp3725;
    org$pandalanguage$pandac$ASTNode* decl3730 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3731;
    org$pandalanguage$pandac$ASTNode* $tmp3732;
    org$pandalanguage$pandac$ASTNode* $tmp3734;
    org$pandalanguage$pandac$ASTNode* $tmp3739;
    org$pandalanguage$pandac$ASTNode* $tmp3740;
    panda$core$Int64 $tmp3742;
    panda$collections$ImmutableArray* $tmp3743;
    int $tmp3687;
    {
        org$pandalanguage$pandac$parser$Token $tmp3689 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3688 = $tmp3689;
        memset(&kind3690, 0, sizeof(kind3690));
        {
            $match$1703_93691 = start3688.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3692, 24);
            panda$core$Bit $tmp3693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93691.$rawValue, $tmp3692);
            if ($tmp3693.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3695, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3694, $tmp3695);
                kind3690 = $tmp3694;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3696, 25);
            panda$core$Bit $tmp3697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93691.$rawValue, $tmp3696);
            if ($tmp3697.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3699, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3698, $tmp3699);
                kind3690 = $tmp3698;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3700, 26);
            panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93691.$rawValue, $tmp3700);
            if ($tmp3701.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3703, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3702, $tmp3703);
                kind3690 = $tmp3702;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3704, 27);
            panda$core$Bit $tmp3705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93691.$rawValue, $tmp3704);
            if ($tmp3705.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3707, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3706, $tmp3707);
                kind3690 = $tmp3706;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3688, &$s3708);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3712 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3712);
        $tmp3711 = $tmp3712;
        $tmp3710 = $tmp3711;
        declarations3709 = $tmp3710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3711));
        org$pandalanguage$pandac$ASTNode* $tmp3716 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3715 = $tmp3716;
        $tmp3714 = $tmp3715;
        decl3713 = $tmp3714;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
        if (((panda$core$Bit) { decl3713 == NULL }).value) {
        {
            $tmp3718 = NULL;
            $returnValue3717 = $tmp3718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3718));
            $tmp3687 = 0;
            goto $l3685;
            $l3719:;
            return $returnValue3717;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3709, ((panda$core$Object*) decl3713));
        $l3721:;
        panda$core$Int64$init$builtin_int64(&$tmp3725, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3724, $tmp3725);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3726 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3724);
        bool $tmp3723 = ((panda$core$Bit) { $tmp3726.nonnull }).value;
        if (!$tmp3723) goto $l3722;
        {
            int $tmp3729;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3733 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3732 = $tmp3733;
                $tmp3731 = $tmp3732;
                decl3730 = $tmp3731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3732));
                if (((panda$core$Bit) { decl3730 == NULL }).value) {
                {
                    $tmp3734 = NULL;
                    $returnValue3717 = $tmp3734;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3734));
                    $tmp3729 = 0;
                    goto $l3727;
                    $l3735:;
                    $tmp3687 = 1;
                    goto $l3685;
                    $l3736:;
                    return $returnValue3717;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3709, ((panda$core$Object*) decl3730));
            }
            $tmp3729 = -1;
            goto $l3727;
            $l3727:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3730));
            decl3730 = NULL;
            switch ($tmp3729) {
                case 0: goto $l3735;
                case -1: goto $l3738;
            }
            $l3738:;
        }
        goto $l3721;
        $l3722:;
        org$pandalanguage$pandac$ASTNode* $tmp3741 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3742, 47);
        panda$collections$ImmutableArray* $tmp3744 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3709);
        $tmp3743 = $tmp3744;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3741, $tmp3742, start3688.position, kind3690, $tmp3743);
        $tmp3740 = $tmp3741;
        $tmp3739 = $tmp3740;
        $returnValue3717 = $tmp3739;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3743));
        $tmp3687 = 2;
        goto $l3685;
        $l3745:;
        return $returnValue3717;
    }
    $l3685:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3713));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3709));
    declarations3709 = NULL;
    decl3713 = NULL;
    switch ($tmp3687) {
        case 2: goto $l3745;
        case 1: goto $l3736;
        case 0: goto $l3719;
    }
    $l3747:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3751;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3752;
    panda$core$Int64 $tmp3753;
    org$pandalanguage$pandac$ASTNode* $returnValue3756;
    org$pandalanguage$pandac$ASTNode* $tmp3757;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3760;
    panda$core$Int64 $tmp3761;
    org$pandalanguage$pandac$ASTNode* $tmp3764;
    panda$core$Object* $tmp3767;
    panda$core$Bit $tmp3768;
    org$pandalanguage$pandac$ASTNode* target3770 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3771;
    org$pandalanguage$pandac$ASTNode* $tmp3772;
    panda$core$Int64 $tmp3774;
    panda$core$String* $tmp3775;
    panda$collections$Array* args3777 = NULL;
    panda$collections$Array* $tmp3778;
    panda$collections$Array* $tmp3779;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3781;
    panda$core$Int64 $tmp3782;
    org$pandalanguage$pandac$ASTNode* expr3787 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3788;
    org$pandalanguage$pandac$ASTNode* $tmp3789;
    panda$core$Object* $tmp3791;
    org$pandalanguage$pandac$ASTNode* $tmp3793;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3800;
    panda$core$Int64 $tmp3801;
    org$pandalanguage$pandac$ASTNode* $tmp3803;
    org$pandalanguage$pandac$ASTNode* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    panda$core$Object* $tmp3807;
    org$pandalanguage$pandac$ASTNode* $tmp3809;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3813;
    panda$core$Int64 $tmp3814;
    panda$core$Object* $tmp3817;
    org$pandalanguage$pandac$ASTNode* $tmp3819;
    panda$core$Object* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    panda$core$Int64 $tmp3829;
    panda$collections$ImmutableArray* $tmp3830;
    int $tmp3750;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3753, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3752, $tmp3753);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3755 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3752, &$s3754);
        start3751 = $tmp3755;
        if (((panda$core$Bit) { !start3751.nonnull }).value) {
        {
            $tmp3757 = NULL;
            $returnValue3756 = $tmp3757;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3757));
            $tmp3750 = 0;
            goto $l3748;
            $l3758:;
            return $returnValue3756;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3761, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3760, $tmp3761);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3763 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3760, &$s3762);
        if (((panda$core$Bit) { !$tmp3763.nonnull }).value) {
        {
            $tmp3764 = NULL;
            $returnValue3756 = $tmp3764;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3764));
            $tmp3750 = 1;
            goto $l3748;
            $l3765:;
            return $returnValue3756;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3768, true);
        panda$core$Bit$wrapper* $tmp3769;
        $tmp3769 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3769->value = $tmp3768;
        $tmp3767 = ((panda$core$Object*) $tmp3769);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3767);
        panda$core$Panda$unref$panda$core$Object($tmp3767);
        org$pandalanguage$pandac$ASTNode* $tmp3773 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3774, 20);
        panda$core$String* $tmp3776 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3751.value));
        $tmp3775 = $tmp3776;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3773, $tmp3774, ((org$pandalanguage$pandac$parser$Token) start3751.value).position, $tmp3775);
        $tmp3772 = $tmp3773;
        $tmp3771 = $tmp3772;
        target3770 = $tmp3771;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3772));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3775));
        panda$collections$Array* $tmp3780 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3780);
        $tmp3779 = $tmp3780;
        $tmp3778 = $tmp3779;
        args3777 = $tmp3778;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3778));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3779));
        panda$core$Int64$init$builtin_int64(&$tmp3782, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3781, $tmp3782);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3783 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3781);
        if (((panda$core$Bit) { !$tmp3783.nonnull }).value) {
        {
            int $tmp3786;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3790 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3789 = $tmp3790;
                $tmp3788 = $tmp3789;
                expr3787 = $tmp3788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3789));
                if (((panda$core$Bit) { expr3787 == NULL }).value) {
                {
                    panda$core$Object* $tmp3792 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3791 = $tmp3792;
                    panda$core$Panda$unref$panda$core$Object($tmp3791);
                    $tmp3793 = NULL;
                    $returnValue3756 = $tmp3793;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3793));
                    $tmp3786 = 0;
                    goto $l3784;
                    $l3794:;
                    $tmp3750 = 2;
                    goto $l3748;
                    $l3795:;
                    return $returnValue3756;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3777, ((panda$core$Object*) expr3787));
                $l3797:;
                panda$core$Int64$init$builtin_int64(&$tmp3801, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3800, $tmp3801);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3802 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3800);
                bool $tmp3799 = ((panda$core$Bit) { $tmp3802.nonnull }).value;
                if (!$tmp3799) goto $l3798;
                {
                    {
                        $tmp3803 = expr3787;
                        org$pandalanguage$pandac$ASTNode* $tmp3806 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3805 = $tmp3806;
                        $tmp3804 = $tmp3805;
                        expr3787 = $tmp3804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3805));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3803));
                    }
                    if (((panda$core$Bit) { expr3787 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3808 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3807 = $tmp3808;
                        panda$core$Panda$unref$panda$core$Object($tmp3807);
                        $tmp3809 = NULL;
                        $returnValue3756 = $tmp3809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3809));
                        $tmp3786 = 1;
                        goto $l3784;
                        $l3810:;
                        $tmp3750 = 3;
                        goto $l3748;
                        $l3811:;
                        return $returnValue3756;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3777, ((panda$core$Object*) expr3787));
                }
                goto $l3797;
                $l3798:;
                panda$core$Int64$init$builtin_int64(&$tmp3814, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3813, $tmp3814);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3816 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3813, &$s3815);
                if (((panda$core$Bit) { !$tmp3816.nonnull }).value) {
                {
                    panda$core$Object* $tmp3818 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3817 = $tmp3818;
                    panda$core$Panda$unref$panda$core$Object($tmp3817);
                    $tmp3819 = NULL;
                    $returnValue3756 = $tmp3819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3819));
                    $tmp3786 = 2;
                    goto $l3784;
                    $l3820:;
                    $tmp3750 = 4;
                    goto $l3748;
                    $l3821:;
                    return $returnValue3756;
                }
                }
            }
            $tmp3786 = -1;
            goto $l3784;
            $l3784:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3787));
            expr3787 = NULL;
            switch ($tmp3786) {
                case -1: goto $l3823;
                case 2: goto $l3820;
                case 1: goto $l3810;
                case 0: goto $l3794;
            }
            $l3823:;
        }
        }
        panda$core$Object* $tmp3825 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3824 = $tmp3825;
        panda$core$Panda$unref$panda$core$Object($tmp3824);
        org$pandalanguage$pandac$ASTNode* $tmp3828 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3829, 8);
        panda$collections$ImmutableArray* $tmp3831 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3777);
        $tmp3830 = $tmp3831;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3828, $tmp3829, ((org$pandalanguage$pandac$parser$Token) start3751.value).position, target3770, $tmp3830);
        $tmp3827 = $tmp3828;
        $tmp3826 = $tmp3827;
        $returnValue3756 = $tmp3826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3830));
        $tmp3750 = 5;
        goto $l3748;
        $l3832:;
        return $returnValue3756;
    }
    $l3748:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3777));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3770));
    target3770 = NULL;
    args3777 = NULL;
    switch ($tmp3750) {
        case 4: goto $l3821;
        case 1: goto $l3765;
        case 3: goto $l3811;
        case 5: goto $l3832;
        case 2: goto $l3795;
        case 0: goto $l3758;
    }
    $l3834:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3835;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3836;
    panda$core$Int64 $tmp3837;
    org$pandalanguage$pandac$ASTNode* $returnValue3840;
    org$pandalanguage$pandac$ASTNode* $tmp3841;
    org$pandalanguage$pandac$parser$Token$nullable label3843;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3844;
    panda$core$Int64 $tmp3845;
    org$pandalanguage$pandac$ASTNode* $tmp3847;
    org$pandalanguage$pandac$ASTNode* $tmp3848;
    panda$core$Int64 $tmp3850;
    panda$core$String* $tmp3851;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    org$pandalanguage$pandac$ASTNode* $tmp3855;
    panda$core$Int64 $tmp3857;
    panda$core$Int64$init$builtin_int64(&$tmp3837, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3836, $tmp3837);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3839 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3836, &$s3838);
    start3835 = $tmp3839;
    if (((panda$core$Bit) { !start3835.nonnull }).value) {
    {
        $tmp3841 = NULL;
        $returnValue3840 = $tmp3841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3841));
        return $returnValue3840;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3845, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3844, $tmp3845);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3846 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3844);
    label3843 = $tmp3846;
    if (((panda$core$Bit) { label3843.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3849 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3850, 7);
        panda$core$String* $tmp3852 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3843.value));
        $tmp3851 = $tmp3852;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3849, $tmp3850, ((org$pandalanguage$pandac$parser$Token) start3835.value).position, $tmp3851);
        $tmp3848 = $tmp3849;
        $tmp3847 = $tmp3848;
        $returnValue3840 = $tmp3847;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3847));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3851));
        return $returnValue3840;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3857, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3856, $tmp3857, ((org$pandalanguage$pandac$parser$Token) start3835.value).position, NULL);
    $tmp3855 = $tmp3856;
    $tmp3854 = $tmp3855;
    $returnValue3840 = $tmp3854;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3854));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3855));
    return $returnValue3840;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3859;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3860;
    panda$core$Int64 $tmp3861;
    org$pandalanguage$pandac$ASTNode* $returnValue3864;
    org$pandalanguage$pandac$ASTNode* $tmp3865;
    org$pandalanguage$pandac$parser$Token$nullable label3867;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3868;
    panda$core$Int64 $tmp3869;
    org$pandalanguage$pandac$ASTNode* $tmp3871;
    org$pandalanguage$pandac$ASTNode* $tmp3872;
    panda$core$Int64 $tmp3874;
    panda$core$String* $tmp3875;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3879;
    panda$core$Int64 $tmp3881;
    panda$core$Int64$init$builtin_int64(&$tmp3861, 30);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3860, $tmp3861);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3863 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3860, &$s3862);
    start3859 = $tmp3863;
    if (((panda$core$Bit) { !start3859.nonnull }).value) {
    {
        $tmp3865 = NULL;
        $returnValue3864 = $tmp3865;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3865));
        return $returnValue3864;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3869, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3868, $tmp3869);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3870 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3868);
    label3867 = $tmp3870;
    if (((panda$core$Bit) { label3867.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3873 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3874, 12);
        panda$core$String* $tmp3876 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3867.value));
        $tmp3875 = $tmp3876;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3873, $tmp3874, ((org$pandalanguage$pandac$parser$Token) start3859.value).position, $tmp3875);
        $tmp3872 = $tmp3873;
        $tmp3871 = $tmp3872;
        $returnValue3864 = $tmp3871;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3872));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3875));
        return $returnValue3864;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3880 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3881, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3880, $tmp3881, ((org$pandalanguage$pandac$parser$Token) start3859.value).position, NULL);
    $tmp3879 = $tmp3880;
    $tmp3878 = $tmp3879;
    $returnValue3864 = $tmp3878;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3879));
    return $returnValue3864;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3883;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3884;
    panda$core$Int64 $tmp3885;
    org$pandalanguage$pandac$ASTNode* $returnValue3888;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    org$pandalanguage$pandac$parser$Token$Kind $match$1807_93891;
    panda$core$Int64 $tmp3895;
    panda$core$Int64 $tmp3898;
    panda$core$Int64 $tmp3902;
    org$pandalanguage$pandac$ASTNode* $tmp3905;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    panda$core$Int64 $tmp3908;
    panda$collections$Array* children3913 = NULL;
    panda$collections$Array* $tmp3914;
    panda$collections$Array* $tmp3915;
    org$pandalanguage$pandac$ASTNode* expr3917 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    org$pandalanguage$pandac$ASTNode* $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    panda$core$Int64 $tmp3927;
    panda$core$Int64$init$builtin_int64(&$tmp3885, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3884, $tmp3885);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3887 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3884, &$s3886);
    start3883 = $tmp3887;
    if (((panda$core$Bit) { !start3883.nonnull }).value) {
    {
        $tmp3889 = NULL;
        $returnValue3888 = $tmp3889;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
        return $returnValue3888;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3892 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1807_93891 = $tmp3892.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3895, 101);
        panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93891.$rawValue, $tmp3895);
        bool $tmp3894 = $tmp3896.value;
        if ($tmp3894) goto $l3897;
        panda$core$Int64$init$builtin_int64(&$tmp3898, 40);
        panda$core$Bit $tmp3899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93891.$rawValue, $tmp3898);
        $tmp3894 = $tmp3899.value;
        $l3897:;
        panda$core$Bit $tmp3900 = { $tmp3894 };
        bool $tmp3893 = $tmp3900.value;
        if ($tmp3893) goto $l3901;
        panda$core$Int64$init$builtin_int64(&$tmp3902, 41);
        panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93891.$rawValue, $tmp3902);
        $tmp3893 = $tmp3903.value;
        $l3901:;
        panda$core$Bit $tmp3904 = { $tmp3893 };
        if ($tmp3904.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3907 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3908, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3907, $tmp3908, ((org$pandalanguage$pandac$parser$Token) start3883.value).position, NULL);
            $tmp3906 = $tmp3907;
            $tmp3905 = $tmp3906;
            $returnValue3888 = $tmp3905;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3906));
            return $returnValue3888;
        }
        }
        else {
        {
            int $tmp3912;
            {
                panda$collections$Array* $tmp3916 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3916);
                $tmp3915 = $tmp3916;
                $tmp3914 = $tmp3915;
                children3913 = $tmp3914;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3915));
                org$pandalanguage$pandac$ASTNode* $tmp3920 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3919 = $tmp3920;
                $tmp3918 = $tmp3919;
                expr3917 = $tmp3918;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3918));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3919));
                if (((panda$core$Bit) { expr3917 == NULL }).value) {
                {
                    $tmp3921 = NULL;
                    $returnValue3888 = $tmp3921;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3921));
                    $tmp3912 = 0;
                    goto $l3910;
                    $l3922:;
                    return $returnValue3888;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3913, ((panda$core$Object*) expr3917));
                org$pandalanguage$pandac$ASTNode* $tmp3926 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3927, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3926, $tmp3927, ((org$pandalanguage$pandac$parser$Token) start3883.value).position, expr3917);
                $tmp3925 = $tmp3926;
                $tmp3924 = $tmp3925;
                $returnValue3888 = $tmp3924;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3925));
                $tmp3912 = 1;
                goto $l3910;
                $l3928:;
                return $returnValue3888;
            }
            $l3910:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3913));
            children3913 = NULL;
            expr3917 = NULL;
            switch ($tmp3912) {
                case 1: goto $l3928;
                case 0: goto $l3922;
            }
            $l3930:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1825_93931;
    panda$core$Int64 $tmp3933;
    org$pandalanguage$pandac$ASTNode* $returnValue3935;
    org$pandalanguage$pandac$ASTNode* $tmp3936;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    panda$core$Int64 $tmp3940;
    org$pandalanguage$pandac$ASTNode* $tmp3942;
    org$pandalanguage$pandac$ASTNode* $tmp3943;
    panda$core$Int64 $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3948;
    org$pandalanguage$pandac$ASTNode* $tmp3949;
    panda$core$Bit $tmp3952;
    {
        org$pandalanguage$pandac$parser$Token $tmp3932 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1825_93931 = $tmp3932.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3933, 29);
        panda$core$Bit $tmp3934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93931.$rawValue, $tmp3933);
        if ($tmp3934.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3938 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3937 = $tmp3938;
            $tmp3936 = $tmp3937;
            $returnValue3935 = $tmp3936;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
            return $returnValue3935;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3940, 30);
        panda$core$Bit $tmp3941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93931.$rawValue, $tmp3940);
        if ($tmp3941.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3944 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3943 = $tmp3944;
            $tmp3942 = $tmp3943;
            $returnValue3935 = $tmp3942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3943));
            return $returnValue3935;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3946, 28);
        panda$core$Bit $tmp3947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93931.$rawValue, $tmp3946);
        if ($tmp3947.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3950 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3949 = $tmp3950;
            $tmp3948 = $tmp3949;
            $returnValue3935 = $tmp3948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3949));
            return $returnValue3935;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3952, false);
            if ($tmp3952.value) goto $l3953; else goto $l3954;
            $l3954:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3955, (panda$core$Int64) { 1829 });
            abort();
            $l3953:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1837_93956;
    panda$core$Int64 $tmp3958;
    org$pandalanguage$pandac$ASTNode* $returnValue3960;
    org$pandalanguage$pandac$ASTNode* $tmp3961;
    org$pandalanguage$pandac$ASTNode* $tmp3962;
    panda$core$Int64 $tmp3965;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    org$pandalanguage$pandac$ASTNode* $tmp3968;
    panda$core$Int64 $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3974;
    panda$core$Int64 $tmp3977;
    org$pandalanguage$pandac$ASTNode* $tmp3979;
    org$pandalanguage$pandac$ASTNode* $tmp3980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3983;
    panda$core$Int64 $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3986;
    {
        org$pandalanguage$pandac$parser$Token $tmp3957 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1837_93956 = $tmp3957.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3958, 31);
        panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93956.$rawValue, $tmp3958);
        if ($tmp3959.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3963 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3962 = $tmp3963;
            $tmp3961 = $tmp3962;
            $returnValue3960 = $tmp3961;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3962));
            return $returnValue3960;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3965, 33);
        panda$core$Bit $tmp3966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93956.$rawValue, $tmp3965);
        if ($tmp3966.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3969 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3968 = $tmp3969;
            $tmp3967 = $tmp3968;
            $returnValue3960 = $tmp3967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3968));
            return $returnValue3960;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3971, 36);
        panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93956.$rawValue, $tmp3971);
        if ($tmp3972.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3975 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3974 = $tmp3975;
            $tmp3973 = $tmp3974;
            $returnValue3960 = $tmp3973;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
            return $returnValue3960;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3977, 32);
        panda$core$Bit $tmp3978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93956.$rawValue, $tmp3977);
        if ($tmp3978.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3981 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3980 = $tmp3981;
            $tmp3979 = $tmp3980;
            $returnValue3960 = $tmp3979;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3980));
            return $returnValue3960;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3984, 31);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3983, $tmp3984);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3983, &$s3985);
            $tmp3986 = NULL;
            $returnValue3960 = $tmp3986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3986));
            return $returnValue3960;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3991;
    org$pandalanguage$pandac$parser$Token$nullable start3992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3993;
    panda$core$Int64 $tmp3994;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3996;
    panda$core$Int64 $tmp3997;
    org$pandalanguage$pandac$ASTNode* $returnValue4000;
    org$pandalanguage$pandac$ASTNode* $tmp4001;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4004;
    panda$core$Int64 $tmp4005;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4006;
    panda$core$Int64 $tmp4007;
    org$pandalanguage$pandac$parser$Token$nullable name4008;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4009;
    panda$core$Int64 $tmp4010;
    org$pandalanguage$pandac$ASTNode* $tmp4013;
    panda$collections$ImmutableArray* params4016 = NULL;
    panda$collections$ImmutableArray* $tmp4017;
    panda$collections$ImmutableArray* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $tmp4020;
    org$pandalanguage$pandac$ASTNode* returnType4023 = NULL;
    panda$core$Int64 $tmp4025;
    org$pandalanguage$pandac$ASTNode* $tmp4027;
    org$pandalanguage$pandac$ASTNode* $tmp4028;
    org$pandalanguage$pandac$ASTNode* $tmp4029;
    org$pandalanguage$pandac$ASTNode* $tmp4031;
    org$pandalanguage$pandac$ASTNode* $tmp4034;
    org$pandalanguage$pandac$ASTNode* $tmp4035;
    panda$collections$ImmutableArray* body4036 = NULL;
    panda$collections$ImmutableArray* $tmp4037;
    panda$collections$ImmutableArray* $tmp4038;
    org$pandalanguage$pandac$ASTNode* $tmp4040;
    org$pandalanguage$pandac$ASTNode* $tmp4043;
    org$pandalanguage$pandac$ASTNode* $tmp4044;
    panda$core$Int64 $tmp4046;
    panda$collections$ImmutableArray* $tmp4047;
    panda$core$String* $tmp4049;
    int $tmp3990;
    {
        memset(&kind3991, 0, sizeof(kind3991));
        panda$core$Int64$init$builtin_int64(&$tmp3994, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3993, $tmp3994);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3995 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3993);
        start3992 = $tmp3995;
        if (((panda$core$Bit) { !start3992.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3997, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3996, $tmp3997);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3999 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3996, &$s3998);
            start3992 = $tmp3999;
            if (((panda$core$Bit) { !start3992.nonnull }).value) {
            {
                $tmp4001 = NULL;
                $returnValue4000 = $tmp4001;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4001));
                $tmp3990 = 0;
                goto $l3988;
                $l4002:;
                return $returnValue4000;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4005, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4004, $tmp4005);
            kind3991 = $tmp4004;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4007, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4006, $tmp4007);
            kind3991 = $tmp4006;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4010, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4009, $tmp4010);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4012 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4009, &$s4011);
        name4008 = $tmp4012;
        if (((panda$core$Bit) { !name4008.nonnull }).value) {
        {
            $tmp4013 = NULL;
            $returnValue4000 = $tmp4013;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4013));
            $tmp3990 = 1;
            goto $l3988;
            $l4014:;
            return $returnValue4000;
        }
        }
        panda$collections$ImmutableArray* $tmp4019 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4018 = $tmp4019;
        $tmp4017 = $tmp4018;
        params4016 = $tmp4017;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4018));
        if (((panda$core$Bit) { params4016 == NULL }).value) {
        {
            $tmp4020 = NULL;
            $returnValue4000 = $tmp4020;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4020));
            $tmp3990 = 2;
            goto $l3988;
            $l4021:;
            return $returnValue4000;
        }
        }
        memset(&returnType4023, 0, sizeof(returnType4023));
        org$pandalanguage$pandac$parser$Token $tmp4024 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4025, 96);
        panda$core$Bit $tmp4026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4024.kind.$rawValue, $tmp4025);
        if ($tmp4026.value) {
        {
            {
                $tmp4027 = returnType4023;
                org$pandalanguage$pandac$ASTNode* $tmp4030 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4029 = $tmp4030;
                $tmp4028 = $tmp4029;
                returnType4023 = $tmp4028;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4028));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4029));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4027));
            }
            if (((panda$core$Bit) { returnType4023 == NULL }).value) {
            {
                $tmp4031 = NULL;
                $returnValue4000 = $tmp4031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4031));
                $tmp3990 = 3;
                goto $l3988;
                $l4032:;
                return $returnValue4000;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4034 = returnType4023;
                $tmp4035 = NULL;
                returnType4023 = $tmp4035;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4034));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4039 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4038 = $tmp4039;
        $tmp4037 = $tmp4038;
        body4036 = $tmp4037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4038));
        if (((panda$core$Bit) { body4036 == NULL }).value) {
        {
            $tmp4040 = NULL;
            $returnValue4000 = $tmp4040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4040));
            $tmp3990 = 4;
            goto $l3988;
            $l4041:;
            return $returnValue4000;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4045 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4046, 26);
        panda$collections$ImmutableArray* $tmp4048 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4048);
        $tmp4047 = $tmp4048;
        panda$core$String* $tmp4050 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4008.value));
        $tmp4049 = $tmp4050;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4045, $tmp4046, ((org$pandalanguage$pandac$parser$Token) start3992.value).position, NULL, $tmp4047, kind3991, $tmp4049, NULL, params4016, returnType4023, body4036);
        $tmp4044 = $tmp4045;
        $tmp4043 = $tmp4044;
        $returnValue4000 = $tmp4043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4047));
        $tmp3990 = 5;
        goto $l3988;
        $l4051:;
        return $returnValue4000;
    }
    $l3988:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4036));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4023));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4016));
    params4016 = NULL;
    body4036 = NULL;
    switch ($tmp3990) {
        case 3: goto $l4032;
        case 5: goto $l4051;
        case 2: goto $l4021;
        case 1: goto $l4014;
        case 4: goto $l4041;
        case 0: goto $l4002;
    }
    $l4053:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1896_94054;
    panda$core$Int64 $tmp4056;
    org$pandalanguage$pandac$ASTNode* $returnValue4058;
    org$pandalanguage$pandac$ASTNode* $tmp4059;
    org$pandalanguage$pandac$ASTNode* $tmp4060;
    panda$core$Int64 $tmp4063;
    org$pandalanguage$pandac$ASTNode* $tmp4065;
    org$pandalanguage$pandac$ASTNode* $tmp4066;
    panda$core$Int64 $tmp4069;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$ASTNode* $tmp4072;
    panda$core$Int64 $tmp4075;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    org$pandalanguage$pandac$ASTNode* $tmp4078;
    panda$core$Int64 $tmp4081;
    org$pandalanguage$pandac$ASTNode* $tmp4083;
    org$pandalanguage$pandac$ASTNode* $tmp4084;
    panda$core$Int64 $tmp4087;
    org$pandalanguage$pandac$ASTNode* $tmp4089;
    org$pandalanguage$pandac$ASTNode* $tmp4090;
    panda$core$Int64 $tmp4093;
    org$pandalanguage$pandac$ASTNode* $tmp4095;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    panda$core$Int64 $tmp4099;
    org$pandalanguage$pandac$ASTNode* $tmp4101;
    org$pandalanguage$pandac$ASTNode* $tmp4102;
    panda$core$Int64 $tmp4105;
    org$pandalanguage$pandac$parser$Token id4107;
    org$pandalanguage$pandac$parser$Token$nullable colon4109;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4110;
    panda$core$Int64 $tmp4111;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4113;
    panda$core$Int64 $tmp4114;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4116;
    panda$core$Int64 $tmp4117;
    org$pandalanguage$pandac$ASTNode* $tmp4119;
    org$pandalanguage$pandac$ASTNode* $tmp4120;
    panda$core$String* $tmp4121;
    org$pandalanguage$pandac$ASTNode* $tmp4125;
    org$pandalanguage$pandac$ASTNode* $tmp4126;
    panda$core$Int64 $tmp4130;
    panda$core$Int64 $tmp4133;
    org$pandalanguage$pandac$ASTNode* $tmp4136;
    org$pandalanguage$pandac$ASTNode* $tmp4137;
    panda$core$Int64 $tmp4143;
    panda$core$Int64 $tmp4146;
    panda$core$Int64 $tmp4150;
    panda$core$Int64 $tmp4154;
    org$pandalanguage$pandac$ASTNode* $tmp4157;
    org$pandalanguage$pandac$ASTNode* $tmp4158;
    panda$core$Int64 $tmp4161;
    org$pandalanguage$pandac$ASTNode* $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4164;
    panda$core$Int64 $tmp4168;
    panda$core$Int64 $tmp4171;
    org$pandalanguage$pandac$ASTNode* $tmp4174;
    org$pandalanguage$pandac$ASTNode* $tmp4175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4178;
    panda$core$Int64 $tmp4179;
    org$pandalanguage$pandac$ASTNode* $tmp4181;
    {
        org$pandalanguage$pandac$parser$Token $tmp4055 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1896_94054 = $tmp4055.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4056, 37);
        panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4056);
        if ($tmp4057.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4061 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4060 = $tmp4061;
            $tmp4059 = $tmp4060;
            $returnValue4058 = $tmp4059;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4059));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4060));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4063, 33);
        panda$core$Bit $tmp4064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4063);
        if ($tmp4064.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4067 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4066 = $tmp4067;
            $tmp4065 = $tmp4066;
            $returnValue4058 = $tmp4065;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4065));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4066));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4069, 32);
        panda$core$Bit $tmp4070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4069);
        if ($tmp4070.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4073 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4072 = $tmp4073;
            $tmp4071 = $tmp4072;
            $returnValue4058 = $tmp4071;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4072));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4075, 31);
        panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4075);
        if ($tmp4076.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4079 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4078 = $tmp4079;
            $tmp4077 = $tmp4078;
            $returnValue4058 = $tmp4077;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4077));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4078));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4081, 36);
        panda$core$Bit $tmp4082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4081);
        if ($tmp4082.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4085 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4084 = $tmp4085;
            $tmp4083 = $tmp4084;
            $returnValue4058 = $tmp4083;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4084));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4087, 45);
        panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4087);
        if ($tmp4088.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4091 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4090 = $tmp4091;
            $tmp4089 = $tmp4090;
            $returnValue4058 = $tmp4089;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4089));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4090));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4093, 39);
        panda$core$Bit $tmp4094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4093);
        if ($tmp4094.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4097 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4096 = $tmp4097;
            $tmp4095 = $tmp4096;
            $returnValue4058 = $tmp4095;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4095));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4096));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4099, 100);
        panda$core$Bit $tmp4100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4099);
        if ($tmp4100.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4103 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4102 = $tmp4103;
            $tmp4101 = $tmp4102;
            $returnValue4058 = $tmp4101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4102));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4105, 49);
        panda$core$Bit $tmp4106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4105);
        if ($tmp4106.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4108 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4107 = $tmp4108;
            panda$core$Int64$init$builtin_int64(&$tmp4111, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4110, $tmp4111);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4112 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4110);
            colon4109 = $tmp4112;
            if (((panda$core$Bit) { colon4109.nonnull }).value) {
            {
                if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token) colon4109.value));
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4107);
                    panda$core$Int64$init$builtin_int64(&$tmp4114, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4113, $tmp4114);
                    (($fn4115) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp4113);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp4117, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4116, $tmp4117);
                    (($fn4118) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp4116);
                }
                }
                panda$core$String* $tmp4122 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4107);
                $tmp4121 = $tmp4122;
                org$pandalanguage$pandac$ASTNode* $tmp4123 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4121);
                $tmp4120 = $tmp4123;
                $tmp4119 = $tmp4120;
                $returnValue4058 = $tmp4119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4121));
                return $returnValue4058;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4107);
            org$pandalanguage$pandac$ASTNode* $tmp4127 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4126 = $tmp4127;
            $tmp4125 = $tmp4126;
            $returnValue4058 = $tmp4125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4126));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4130, 47);
        panda$core$Bit $tmp4131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4130);
        bool $tmp4129 = $tmp4131.value;
        if ($tmp4129) goto $l4132;
        panda$core$Int64$init$builtin_int64(&$tmp4133, 48);
        panda$core$Bit $tmp4134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4133);
        $tmp4129 = $tmp4134.value;
        $l4132:;
        panda$core$Bit $tmp4135 = { $tmp4129 };
        if ($tmp4135.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4138 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4137 = $tmp4138;
            $tmp4136 = $tmp4137;
            $returnValue4058 = $tmp4136;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4137));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4143, 24);
        panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4143);
        bool $tmp4142 = $tmp4144.value;
        if ($tmp4142) goto $l4145;
        panda$core$Int64$init$builtin_int64(&$tmp4146, 25);
        panda$core$Bit $tmp4147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4146);
        $tmp4142 = $tmp4147.value;
        $l4145:;
        panda$core$Bit $tmp4148 = { $tmp4142 };
        bool $tmp4141 = $tmp4148.value;
        if ($tmp4141) goto $l4149;
        panda$core$Int64$init$builtin_int64(&$tmp4150, 26);
        panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4150);
        $tmp4141 = $tmp4151.value;
        $l4149:;
        panda$core$Bit $tmp4152 = { $tmp4141 };
        bool $tmp4140 = $tmp4152.value;
        if ($tmp4140) goto $l4153;
        panda$core$Int64$init$builtin_int64(&$tmp4154, 27);
        panda$core$Bit $tmp4155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4154);
        $tmp4140 = $tmp4155.value;
        $l4153:;
        panda$core$Bit $tmp4156 = { $tmp4140 };
        if ($tmp4156.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4159 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4158 = $tmp4159;
            $tmp4157 = $tmp4158;
            $returnValue4058 = $tmp4157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4158));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4161, 23);
        panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4161);
        if ($tmp4162.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4165 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4164 = $tmp4165;
            $tmp4163 = $tmp4164;
            $returnValue4058 = $tmp4163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4164));
            return $returnValue4058;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4168, 22);
        panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4168);
        bool $tmp4167 = $tmp4169.value;
        if ($tmp4167) goto $l4170;
        panda$core$Int64$init$builtin_int64(&$tmp4171, 21);
        panda$core$Bit $tmp4172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94054.$rawValue, $tmp4171);
        $tmp4167 = $tmp4172.value;
        $l4170:;
        panda$core$Bit $tmp4173 = { $tmp4167 };
        if ($tmp4173.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4176 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4175 = $tmp4176;
            $tmp4174 = $tmp4175;
            $returnValue4058 = $tmp4174;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4175));
            return $returnValue4058;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4179, 37);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4178, $tmp4179);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4178, &$s4180);
            $tmp4181 = NULL;
            $returnValue4058 = $tmp4181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4181));
            return $returnValue4058;
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
    org$pandalanguage$pandac$parser$Token$nullable start4186;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4187;
    panda$core$Int64 $tmp4188;
    org$pandalanguage$pandac$ASTNode* $returnValue4191;
    org$pandalanguage$pandac$ASTNode* $tmp4192;
    org$pandalanguage$pandac$parser$Token$nullable next4195;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4196;
    panda$core$Int64 $tmp4197;
    org$pandalanguage$pandac$ASTNode* $tmp4200;
    panda$core$MutableString* name4203 = NULL;
    panda$core$MutableString* $tmp4204;
    panda$core$MutableString* $tmp4205;
    panda$core$String* $tmp4207;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4211;
    panda$core$Int64 $tmp4212;
    panda$core$Char8 $tmp4214;
    panda$core$UInt8 $tmp4215;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4216;
    panda$core$Int64 $tmp4217;
    org$pandalanguage$pandac$ASTNode* $tmp4220;
    panda$core$String* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4225;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    panda$core$Int64 $tmp4228;
    panda$core$String* $tmp4229;
    int $tmp4185;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4188, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4187, $tmp4188);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4190 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4187, &$s4189);
        start4186 = $tmp4190;
        if (((panda$core$Bit) { !start4186.nonnull }).value) {
        {
            $tmp4192 = NULL;
            $returnValue4191 = $tmp4192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4192));
            $tmp4185 = 0;
            goto $l4183;
            $l4193:;
            return $returnValue4191;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4197, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4196, $tmp4197);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4199 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4196, &$s4198);
        next4195 = $tmp4199;
        if (((panda$core$Bit) { !next4195.nonnull }).value) {
        {
            $tmp4200 = NULL;
            $returnValue4191 = $tmp4200;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4200));
            $tmp4185 = 1;
            goto $l4183;
            $l4201:;
            return $returnValue4191;
        }
        }
        panda$core$MutableString* $tmp4206 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4208 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4195.value));
        $tmp4207 = $tmp4208;
        panda$core$MutableString$init$panda$core$String($tmp4206, $tmp4207);
        $tmp4205 = $tmp4206;
        $tmp4204 = $tmp4205;
        name4203 = $tmp4204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4207));
        $l4209:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4212, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4211, $tmp4212);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4213 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4211);
            next4195 = $tmp4213;
            if (((panda$core$Bit) { !next4195.nonnull }).value) {
            {
                goto $l4210;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4215, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4214, $tmp4215);
            panda$core$MutableString$append$panda$core$Char8(name4203, $tmp4214);
            panda$core$Int64$init$builtin_int64(&$tmp4217, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4216, $tmp4217);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4216, &$s4218);
            next4195 = $tmp4219;
            if (((panda$core$Bit) { !next4195.nonnull }).value) {
            {
                $tmp4220 = NULL;
                $returnValue4191 = $tmp4220;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4220));
                $tmp4185 = 2;
                goto $l4183;
                $l4221:;
                return $returnValue4191;
            }
            }
            panda$core$String* $tmp4224 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4195.value));
            $tmp4223 = $tmp4224;
            panda$core$MutableString$append$panda$core$String(name4203, $tmp4223);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4223));
        }
        }
        $l4210:;
        org$pandalanguage$pandac$ASTNode* $tmp4227 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4228, 30);
        panda$core$String* $tmp4230 = panda$core$MutableString$finish$R$panda$core$String(name4203);
        $tmp4229 = $tmp4230;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4227, $tmp4228, ((org$pandalanguage$pandac$parser$Token) start4186.value).position, $tmp4229);
        $tmp4226 = $tmp4227;
        $tmp4225 = $tmp4226;
        $returnValue4191 = $tmp4225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4229));
        $tmp4185 = 3;
        goto $l4183;
        $l4231:;
        return $returnValue4191;
    }
    $l4183:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4203));
    name4203 = NULL;
    switch ($tmp4185) {
        case 1: goto $l4201;
        case 2: goto $l4221;
        case 3: goto $l4231;
        case 0: goto $l4193;
    }
    $l4233:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4237;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4238;
    panda$core$Int64 $tmp4239;
    org$pandalanguage$pandac$ASTNode* $returnValue4242;
    org$pandalanguage$pandac$ASTNode* $tmp4243;
    org$pandalanguage$pandac$parser$Token$nullable next4246;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4247;
    panda$core$Int64 $tmp4248;
    org$pandalanguage$pandac$ASTNode* $tmp4251;
    panda$core$MutableString* name4254 = NULL;
    panda$core$MutableString* $tmp4255;
    panda$core$MutableString* $tmp4256;
    panda$core$String* $tmp4258;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4262;
    panda$core$Int64 $tmp4263;
    panda$core$Char8 $tmp4265;
    panda$core$UInt8 $tmp4266;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4267;
    panda$core$Int64 $tmp4268;
    org$pandalanguage$pandac$ASTNode* $tmp4271;
    panda$core$String* $tmp4274;
    org$pandalanguage$pandac$ASTNode* $tmp4276;
    org$pandalanguage$pandac$ASTNode* $tmp4277;
    panda$core$Int64 $tmp4279;
    panda$core$String* $tmp4280;
    int $tmp4236;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4239, 16);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4238, $tmp4239);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4238, &$s4240);
        start4237 = $tmp4241;
        if (((panda$core$Bit) { !start4237.nonnull }).value) {
        {
            $tmp4243 = NULL;
            $returnValue4242 = $tmp4243;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4243));
            $tmp4236 = 0;
            goto $l4234;
            $l4244:;
            return $returnValue4242;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4248, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4247, $tmp4248);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4250 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4247, &$s4249);
        next4246 = $tmp4250;
        if (((panda$core$Bit) { !next4246.nonnull }).value) {
        {
            $tmp4251 = NULL;
            $returnValue4242 = $tmp4251;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4251));
            $tmp4236 = 1;
            goto $l4234;
            $l4252:;
            return $returnValue4242;
        }
        }
        panda$core$MutableString* $tmp4257 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4259 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4246.value));
        $tmp4258 = $tmp4259;
        panda$core$MutableString$init$panda$core$String($tmp4257, $tmp4258);
        $tmp4256 = $tmp4257;
        $tmp4255 = $tmp4256;
        name4254 = $tmp4255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4258));
        $l4260:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4263, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4262, $tmp4263);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4264 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4262);
            next4246 = $tmp4264;
            if (((panda$core$Bit) { !next4246.nonnull }).value) {
            {
                goto $l4261;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4266, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4265, $tmp4266);
            panda$core$MutableString$append$panda$core$Char8(name4254, $tmp4265);
            panda$core$Int64$init$builtin_int64(&$tmp4268, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4267, $tmp4268);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4270 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4267, &$s4269);
            next4246 = $tmp4270;
            if (((panda$core$Bit) { !next4246.nonnull }).value) {
            {
                $tmp4271 = NULL;
                $returnValue4242 = $tmp4271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4271));
                $tmp4236 = 2;
                goto $l4234;
                $l4272:;
                return $returnValue4242;
            }
            }
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4246.value));
            $tmp4274 = $tmp4275;
            panda$core$MutableString$append$panda$core$String(name4254, $tmp4274);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4274));
        }
        }
        $l4261:;
        org$pandalanguage$pandac$ASTNode* $tmp4278 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4279, 46);
        panda$core$String* $tmp4281 = panda$core$MutableString$finish$R$panda$core$String(name4254);
        $tmp4280 = $tmp4281;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4278, $tmp4279, ((org$pandalanguage$pandac$parser$Token) start4237.value).position, $tmp4280);
        $tmp4277 = $tmp4278;
        $tmp4276 = $tmp4277;
        $returnValue4242 = $tmp4276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4280));
        $tmp4236 = 3;
        goto $l4234;
        $l4282:;
        return $returnValue4242;
    }
    $l4234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4254));
    name4254 = NULL;
    switch ($tmp4236) {
        case 1: goto $l4252;
        case 3: goto $l4282;
        case 2: goto $l4272;
        case 0: goto $l4244;
    }
    $l4284:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4288;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4289;
    panda$core$Int64 $tmp4290;
    panda$collections$ImmutableArray* $returnValue4293;
    panda$collections$ImmutableArray* $tmp4294;
    org$pandalanguage$pandac$parser$Token$nullable id4297;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4298;
    panda$core$Int64 $tmp4299;
    panda$collections$ImmutableArray* $tmp4302;
    panda$collections$Array* parameters4305 = NULL;
    panda$collections$Array* $tmp4306;
    panda$collections$Array* $tmp4307;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4309;
    panda$core$Int64 $tmp4310;
    org$pandalanguage$pandac$ASTNode* t4315 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4316;
    org$pandalanguage$pandac$ASTNode* $tmp4317;
    panda$collections$ImmutableArray* $tmp4319;
    org$pandalanguage$pandac$ASTNode* $tmp4323;
    panda$core$Int64 $tmp4325;
    panda$core$String* $tmp4326;
    org$pandalanguage$pandac$ASTNode* $tmp4329;
    panda$core$Int64 $tmp4331;
    panda$core$String* $tmp4332;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4337;
    panda$core$Int64 $tmp4338;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4340;
    panda$core$Int64 $tmp4341;
    panda$collections$ImmutableArray* $tmp4344;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4347;
    panda$core$Int64 $tmp4348;
    org$pandalanguage$pandac$ASTNode* t4353 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4354;
    org$pandalanguage$pandac$ASTNode* $tmp4355;
    panda$collections$ImmutableArray* $tmp4357;
    org$pandalanguage$pandac$ASTNode* $tmp4361;
    panda$core$Int64 $tmp4363;
    panda$core$String* $tmp4364;
    org$pandalanguage$pandac$ASTNode* $tmp4367;
    panda$core$Int64 $tmp4369;
    panda$core$String* $tmp4370;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4372;
    panda$core$Int64 $tmp4373;
    panda$collections$ImmutableArray* $tmp4376;
    panda$collections$ImmutableArray* $tmp4379;
    panda$collections$ImmutableArray* $tmp4380;
    int $tmp4287;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4290, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4289, $tmp4290);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4292 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4289, &$s4291);
        start4288 = $tmp4292;
        if (((panda$core$Bit) { !start4288.nonnull }).value) {
        {
            $tmp4294 = NULL;
            $returnValue4293 = $tmp4294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4294));
            $tmp4287 = 0;
            goto $l4285;
            $l4295:;
            return $returnValue4293;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4299, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4298, $tmp4299);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4301 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4298, &$s4300);
        id4297 = $tmp4301;
        if (((panda$core$Bit) { !id4297.nonnull }).value) {
        {
            $tmp4302 = NULL;
            $returnValue4293 = $tmp4302;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4302));
            $tmp4287 = 1;
            goto $l4285;
            $l4303:;
            return $returnValue4293;
        }
        }
        panda$collections$Array* $tmp4308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4308);
        $tmp4307 = $tmp4308;
        $tmp4306 = $tmp4307;
        parameters4305 = $tmp4306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
        panda$core$Int64$init$builtin_int64(&$tmp4310, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4309, $tmp4310);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4311 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4309);
        if (((panda$core$Bit) { $tmp4311.nonnull }).value) {
        {
            int $tmp4314;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4318 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4317 = $tmp4318;
                $tmp4316 = $tmp4317;
                t4315 = $tmp4316;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4317));
                if (((panda$core$Bit) { t4315 == NULL }).value) {
                {
                    $tmp4319 = NULL;
                    $returnValue4293 = $tmp4319;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4319));
                    $tmp4314 = 0;
                    goto $l4312;
                    $l4320:;
                    $tmp4287 = 2;
                    goto $l4285;
                    $l4321:;
                    return $returnValue4293;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4324 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4325, 44);
                panda$core$String* $tmp4327 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4297.value));
                $tmp4326 = $tmp4327;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4324, $tmp4325, ((org$pandalanguage$pandac$parser$Token) id4297.value).position, $tmp4326, t4315);
                $tmp4323 = $tmp4324;
                panda$collections$Array$add$panda$collections$Array$T(parameters4305, ((panda$core$Object*) $tmp4323));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4323));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4326));
            }
            $tmp4314 = -1;
            goto $l4312;
            $l4312:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4315));
            t4315 = NULL;
            switch ($tmp4314) {
                case 0: goto $l4320;
                case -1: goto $l4328;
            }
            $l4328:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4330 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4331, 20);
            panda$core$String* $tmp4333 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4297.value));
            $tmp4332 = $tmp4333;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4330, $tmp4331, ((org$pandalanguage$pandac$parser$Token) id4297.value).position, $tmp4332);
            $tmp4329 = $tmp4330;
            panda$collections$Array$add$panda$collections$Array$T(parameters4305, ((panda$core$Object*) $tmp4329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4332));
        }
        }
        $l4334:;
        panda$core$Int64$init$builtin_int64(&$tmp4338, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4337, $tmp4338);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4339 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4337);
        bool $tmp4336 = ((panda$core$Bit) { $tmp4339.nonnull }).value;
        if (!$tmp4336) goto $l4335;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4341, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4340, $tmp4341);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4343 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4340, &$s4342);
            id4297 = $tmp4343;
            if (((panda$core$Bit) { !id4297.nonnull }).value) {
            {
                $tmp4344 = NULL;
                $returnValue4293 = $tmp4344;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4344));
                $tmp4287 = 3;
                goto $l4285;
                $l4345:;
                return $returnValue4293;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4348, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4347, $tmp4348);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4349 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4347);
            if (((panda$core$Bit) { $tmp4349.nonnull }).value) {
            {
                int $tmp4352;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4356 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4355 = $tmp4356;
                    $tmp4354 = $tmp4355;
                    t4353 = $tmp4354;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4354));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
                    if (((panda$core$Bit) { t4353 == NULL }).value) {
                    {
                        $tmp4357 = NULL;
                        $returnValue4293 = $tmp4357;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4357));
                        $tmp4352 = 0;
                        goto $l4350;
                        $l4358:;
                        $tmp4287 = 4;
                        goto $l4285;
                        $l4359:;
                        return $returnValue4293;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4363, 44);
                    panda$core$String* $tmp4365 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4297.value));
                    $tmp4364 = $tmp4365;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4362, $tmp4363, ((org$pandalanguage$pandac$parser$Token) id4297.value).position, $tmp4364, t4353);
                    $tmp4361 = $tmp4362;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4305, ((panda$core$Object*) $tmp4361));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4361));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4364));
                }
                $tmp4352 = -1;
                goto $l4350;
                $l4350:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4353));
                t4353 = NULL;
                switch ($tmp4352) {
                    case 0: goto $l4358;
                    case -1: goto $l4366;
                }
                $l4366:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4368 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4369, 20);
                panda$core$String* $tmp4371 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4297.value));
                $tmp4370 = $tmp4371;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4368, $tmp4369, ((org$pandalanguage$pandac$parser$Token) id4297.value).position, $tmp4370);
                $tmp4367 = $tmp4368;
                panda$collections$Array$add$panda$collections$Array$T(parameters4305, ((panda$core$Object*) $tmp4367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4370));
            }
            }
        }
        goto $l4334;
        $l4335:;
        panda$core$Int64$init$builtin_int64(&$tmp4373, 64);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4372, $tmp4373);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4375 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4372, &$s4374);
        if (((panda$core$Bit) { !$tmp4375.nonnull }).value) {
        {
            $tmp4376 = NULL;
            $returnValue4293 = $tmp4376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4376));
            $tmp4287 = 5;
            goto $l4285;
            $l4377:;
            return $returnValue4293;
        }
        }
        panda$collections$ImmutableArray* $tmp4381 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4305);
        $tmp4380 = $tmp4381;
        $tmp4379 = $tmp4380;
        $returnValue4293 = $tmp4379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4380));
        $tmp4287 = 6;
        goto $l4285;
        $l4382:;
        return $returnValue4293;
    }
    $l4285:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4305));
    parameters4305 = NULL;
    switch ($tmp4287) {
        case 1: goto $l4303;
        case 5: goto $l4377;
        case 6: goto $l4382;
        case 4: goto $l4359;
        case 3: goto $l4345;
        case 2: goto $l4321;
        case 0: goto $l4295;
    }
    $l4384:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4388;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4389;
    panda$core$Int64 $tmp4390;
    panda$collections$ImmutableArray* $returnValue4393;
    panda$collections$ImmutableArray* $tmp4394;
    panda$collections$Array* result4397 = NULL;
    panda$collections$Array* $tmp4398;
    panda$collections$Array* $tmp4399;
    org$pandalanguage$pandac$ASTNode* t4401 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4402;
    org$pandalanguage$pandac$ASTNode* $tmp4403;
    panda$collections$ImmutableArray* $tmp4405;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4411;
    panda$core$Int64 $tmp4412;
    org$pandalanguage$pandac$ASTNode* $tmp4414;
    org$pandalanguage$pandac$ASTNode* $tmp4415;
    org$pandalanguage$pandac$ASTNode* $tmp4416;
    panda$collections$ImmutableArray* $tmp4418;
    panda$collections$ImmutableArray* $tmp4421;
    panda$collections$ImmutableArray* $tmp4422;
    int $tmp4387;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4390, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4389, $tmp4390);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4392 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4389, &$s4391);
        start4388 = $tmp4392;
        if (((panda$core$Bit) { !start4388.nonnull }).value) {
        {
            $tmp4394 = NULL;
            $returnValue4393 = $tmp4394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4394));
            $tmp4387 = 0;
            goto $l4385;
            $l4395:;
            return $returnValue4393;
        }
        }
        panda$collections$Array* $tmp4400 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4400);
        $tmp4399 = $tmp4400;
        $tmp4398 = $tmp4399;
        result4397 = $tmp4398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4399));
        org$pandalanguage$pandac$ASTNode* $tmp4404 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4403 = $tmp4404;
        $tmp4402 = $tmp4403;
        t4401 = $tmp4402;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4402));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4403));
        if (((panda$core$Bit) { t4401 == NULL }).value) {
        {
            $tmp4405 = NULL;
            $returnValue4393 = $tmp4405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4405));
            $tmp4387 = 1;
            goto $l4385;
            $l4406:;
            return $returnValue4393;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4397, ((panda$core$Object*) t4401));
        $l4408:;
        panda$core$Int64$init$builtin_int64(&$tmp4412, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4411, $tmp4412);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4413 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4411);
        bool $tmp4410 = ((panda$core$Bit) { $tmp4413.nonnull }).value;
        if (!$tmp4410) goto $l4409;
        {
            {
                $tmp4414 = t4401;
                org$pandalanguage$pandac$ASTNode* $tmp4417 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4416 = $tmp4417;
                $tmp4415 = $tmp4416;
                t4401 = $tmp4415;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4414));
            }
            if (((panda$core$Bit) { t4401 == NULL }).value) {
            {
                $tmp4418 = NULL;
                $returnValue4393 = $tmp4418;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4418));
                $tmp4387 = 2;
                goto $l4385;
                $l4419:;
                return $returnValue4393;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4397, ((panda$core$Object*) t4401));
        }
        goto $l4408;
        $l4409:;
        panda$collections$ImmutableArray* $tmp4423 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4397);
        $tmp4422 = $tmp4423;
        $tmp4421 = $tmp4422;
        $returnValue4393 = $tmp4421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4422));
        $tmp4387 = 3;
        goto $l4385;
        $l4424:;
        return $returnValue4393;
    }
    $l4385:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4397));
    result4397 = NULL;
    t4401 = NULL;
    switch ($tmp4387) {
        case 1: goto $l4406;
        case 3: goto $l4424;
        case 0: goto $l4395;
        case 2: goto $l4419;
    }
    $l4426:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4430;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4431;
    panda$core$Int64 $tmp4432;
    org$pandalanguage$pandac$ASTNode* expr4435 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4436;
    panda$core$Int64 $tmp4437;
    org$pandalanguage$pandac$ASTNode* $tmp4439;
    org$pandalanguage$pandac$ASTNode* $tmp4440;
    org$pandalanguage$pandac$ASTNode* $tmp4441;
    org$pandalanguage$pandac$ASTNode* $returnValue4443;
    org$pandalanguage$pandac$ASTNode* $tmp4444;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4447;
    panda$core$Int64 $tmp4448;
    org$pandalanguage$pandac$ASTNode* $tmp4450;
    org$pandalanguage$pandac$ASTNode* $tmp4451;
    panda$core$Int64 $tmp4453;
    panda$core$String* $tmp4454;
    int $tmp4429;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4432, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4431, $tmp4432);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4434 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4431, &$s4433);
        a4430 = $tmp4434;
        memset(&expr4435, 0, sizeof(expr4435));
        panda$core$Int64$init$builtin_int64(&$tmp4437, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4436, $tmp4437);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4438 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4436);
        if (((panda$core$Bit) { $tmp4438.nonnull }).value) {
        {
            {
                $tmp4439 = expr4435;
                org$pandalanguage$pandac$ASTNode* $tmp4442 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4441 = $tmp4442;
                $tmp4440 = $tmp4441;
                expr4435 = $tmp4440;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4440));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4439));
            }
            if (((panda$core$Bit) { expr4435 == NULL }).value) {
            {
                $tmp4444 = NULL;
                $returnValue4443 = $tmp4444;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4444));
                $tmp4429 = 0;
                goto $l4427;
                $l4445:;
                return $returnValue4443;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4448, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4447, $tmp4448);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4447, &$s4449);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4452 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4453, 0);
        panda$core$String* $tmp4455 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4430.value));
        $tmp4454 = $tmp4455;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4452, $tmp4453, ((org$pandalanguage$pandac$parser$Token) a4430.value).position, $tmp4454, expr4435);
        $tmp4451 = $tmp4452;
        $tmp4450 = $tmp4451;
        $returnValue4443 = $tmp4450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4454));
        $tmp4429 = 1;
        goto $l4427;
        $l4456:;
        return $returnValue4443;
    }
    $l4427:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4435));
    switch ($tmp4429) {
        case 1: goto $l4456;
        case 0: goto $l4445;
    }
    $l4458:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4462 = NULL;
    panda$collections$Array* $tmp4463;
    panda$collections$Array* $tmp4464;
    panda$core$Int64 $tmp4470;
    org$pandalanguage$pandac$ASTNode* a4475 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4476;
    org$pandalanguage$pandac$ASTNode* $tmp4477;
    panda$collections$ImmutableArray* $returnValue4481;
    panda$collections$ImmutableArray* $tmp4482;
    panda$collections$ImmutableArray* $tmp4483;
    int $tmp4461;
    {
        panda$collections$Array* $tmp4465 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4465);
        $tmp4464 = $tmp4465;
        $tmp4463 = $tmp4464;
        result4462 = $tmp4463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4464));
        $l4466:;
        org$pandalanguage$pandac$parser$Token $tmp4469 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4470, 14);
        panda$core$Bit $tmp4471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4469.kind.$rawValue, $tmp4470);
        bool $tmp4468 = $tmp4471.value;
        if (!$tmp4468) goto $l4467;
        {
            int $tmp4474;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4478 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4477 = $tmp4478;
                $tmp4476 = $tmp4477;
                a4475 = $tmp4476;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4476));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4477));
                if (((panda$core$Bit) { a4475 == NULL }).value) {
                {
                    $tmp4474 = 0;
                    goto $l4472;
                    $l4479:;
                    goto $l4467;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4462, ((panda$core$Object*) a4475));
            }
            $tmp4474 = -1;
            goto $l4472;
            $l4472:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4475));
            a4475 = NULL;
            switch ($tmp4474) {
                case 0: goto $l4479;
                case -1: goto $l4480;
            }
            $l4480:;
        }
        goto $l4466;
        $l4467:;
        panda$collections$ImmutableArray* $tmp4484 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4462);
        $tmp4483 = $tmp4484;
        $tmp4482 = $tmp4483;
        $returnValue4481 = $tmp4482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4483));
        $tmp4461 = 0;
        goto $l4459;
        $l4485:;
        return $returnValue4481;
    }
    $l4459:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4462));
    result4462 = NULL;
    switch ($tmp4461) {
        case 0: goto $l4485;
    }
    $l4487:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4492;
    panda$core$Int64 $tmp4493;
    org$pandalanguage$pandac$ASTNode* $returnValue4496;
    org$pandalanguage$pandac$ASTNode* $tmp4497;
    panda$core$MutableString* result4500 = NULL;
    panda$core$MutableString* $tmp4501;
    panda$core$MutableString* $tmp4502;
    org$pandalanguage$pandac$parser$Token next4506;
    panda$core$Int64 $tmp4508;
    panda$core$Int64 $tmp4510;
    org$pandalanguage$pandac$ASTNode* $tmp4513;
    panda$core$String* $tmp4516;
    org$pandalanguage$pandac$ASTNode* $tmp4518;
    org$pandalanguage$pandac$ASTNode* $tmp4519;
    panda$core$Int64 $tmp4521;
    panda$core$String* $tmp4522;
    int $tmp4490;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4493, 12);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4492, $tmp4493);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4495 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4492, &$s4494);
        start4491 = $tmp4495;
        if (((panda$core$Bit) { !start4491.nonnull }).value) {
        {
            $tmp4497 = NULL;
            $returnValue4496 = $tmp4497;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
            $tmp4490 = 0;
            goto $l4488;
            $l4498:;
            return $returnValue4496;
        }
        }
        panda$core$MutableString* $tmp4503 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4503);
        $tmp4502 = $tmp4503;
        $tmp4501 = $tmp4502;
        result4500 = $tmp4501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4502));
        $l4504:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4507 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4506 = $tmp4507;
            panda$core$Int64$init$builtin_int64(&$tmp4508, 12);
            panda$core$Bit $tmp4509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4506.kind.$rawValue, $tmp4508);
            if ($tmp4509.value) {
            {
                goto $l4505;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4510, 0);
            panda$core$Bit $tmp4511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4506.kind.$rawValue, $tmp4510);
            if ($tmp4511.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4491.value), &$s4512);
                $tmp4513 = NULL;
                $returnValue4496 = $tmp4513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4513));
                $tmp4490 = 1;
                goto $l4488;
                $l4514:;
                return $returnValue4496;
            }
            }
            panda$core$String* $tmp4517 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4506);
            $tmp4516 = $tmp4517;
            panda$core$MutableString$append$panda$core$String(result4500, $tmp4516);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4516));
        }
        }
        $l4505:;
        org$pandalanguage$pandac$ASTNode* $tmp4520 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4521, 38);
        panda$core$String* $tmp4523 = panda$core$MutableString$finish$R$panda$core$String(result4500);
        $tmp4522 = $tmp4523;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4520, $tmp4521, ((org$pandalanguage$pandac$parser$Token) start4491.value).position, $tmp4522);
        $tmp4519 = $tmp4520;
        $tmp4518 = $tmp4519;
        $returnValue4496 = $tmp4518;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4522));
        $tmp4490 = 2;
        goto $l4488;
        $l4524:;
        return $returnValue4496;
    }
    $l4488:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4500));
    result4500 = NULL;
    switch ($tmp4490) {
        case 2: goto $l4524;
        case 1: goto $l4514;
        case 0: goto $l4498;
    }
    $l4526:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4530;
    panda$core$Int64 $tmp4531;
    org$pandalanguage$pandac$parser$Token$nullable id4532;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4533;
    panda$core$Int64 $tmp4534;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4537;
    panda$core$Int64 $tmp4538;
    org$pandalanguage$pandac$ASTNode* $returnValue4539;
    org$pandalanguage$pandac$ASTNode* $tmp4540;
    org$pandalanguage$pandac$ASTNode* t4543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4544;
    org$pandalanguage$pandac$ASTNode* $tmp4545;
    org$pandalanguage$pandac$ASTNode* $tmp4547;
    org$pandalanguage$pandac$ASTNode* $tmp4550;
    org$pandalanguage$pandac$ASTNode* $tmp4551;
    panda$core$Int64 $tmp4553;
    panda$core$String* $tmp4554;
    int $tmp4529;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4531, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4530, $tmp4531);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4530);
        panda$core$Int64$init$builtin_int64(&$tmp4534, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4533, $tmp4534);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4536 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4533, &$s4535);
        id4532 = $tmp4536;
        panda$core$Int64$init$builtin_int64(&$tmp4538, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4537, $tmp4538);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4537);
        if (((panda$core$Bit) { !id4532.nonnull }).value) {
        {
            $tmp4540 = NULL;
            $returnValue4539 = $tmp4540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4540));
            $tmp4529 = 0;
            goto $l4527;
            $l4541:;
            return $returnValue4539;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4546 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4545 = $tmp4546;
        $tmp4544 = $tmp4545;
        t4543 = $tmp4544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4545));
        if (((panda$core$Bit) { t4543 == NULL }).value) {
        {
            $tmp4547 = NULL;
            $returnValue4539 = $tmp4547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4547));
            $tmp4529 = 1;
            goto $l4527;
            $l4548:;
            return $returnValue4539;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4552 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4553, 31);
        panda$core$String* $tmp4555 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4532.value));
        $tmp4554 = $tmp4555;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4552, $tmp4553, ((org$pandalanguage$pandac$parser$Token) id4532.value).position, $tmp4554, t4543);
        $tmp4551 = $tmp4552;
        $tmp4550 = $tmp4551;
        $returnValue4539 = $tmp4550;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4554));
        $tmp4529 = 2;
        goto $l4527;
        $l4556:;
        return $returnValue4539;
    }
    $l4527:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4543));
    t4543 = NULL;
    switch ($tmp4529) {
        case 2: goto $l4556;
        case 1: goto $l4548;
        case 0: goto $l4541;
    }
    $l4558:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4562;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4563;
    panda$core$Int64 $tmp4564;
    panda$collections$ImmutableArray* $returnValue4567;
    panda$collections$ImmutableArray* $tmp4568;
    panda$collections$Array* result4571 = NULL;
    panda$collections$Array* $tmp4572;
    panda$collections$Array* $tmp4573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4575;
    panda$core$Int64 $tmp4576;
    org$pandalanguage$pandac$ASTNode* param4581 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4582;
    org$pandalanguage$pandac$ASTNode* $tmp4583;
    panda$collections$ImmutableArray* $tmp4585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4592;
    panda$core$Int64 $tmp4593;
    org$pandalanguage$pandac$ASTNode* $tmp4595;
    org$pandalanguage$pandac$ASTNode* $tmp4596;
    org$pandalanguage$pandac$ASTNode* $tmp4597;
    panda$collections$ImmutableArray* $tmp4599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4603;
    panda$core$Int64 $tmp4604;
    panda$collections$ImmutableArray* $tmp4607;
    panda$collections$ImmutableArray* $tmp4612;
    panda$collections$ImmutableArray* $tmp4613;
    int $tmp4561;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4564, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4563, $tmp4564);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4566 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4563, &$s4565);
        start4562 = $tmp4566;
        if (((panda$core$Bit) { !start4562.nonnull }).value) {
        {
            $tmp4568 = NULL;
            $returnValue4567 = $tmp4568;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4568));
            $tmp4561 = 0;
            goto $l4559;
            $l4569:;
            return $returnValue4567;
        }
        }
        panda$collections$Array* $tmp4574 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4574);
        $tmp4573 = $tmp4574;
        $tmp4572 = $tmp4573;
        result4571 = $tmp4572;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4573));
        panda$core$Int64$init$builtin_int64(&$tmp4576, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4575, $tmp4576);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4577 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4575);
        if (((panda$core$Bit) { !$tmp4577.nonnull }).value) {
        {
            int $tmp4580;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4584 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4583 = $tmp4584;
                $tmp4582 = $tmp4583;
                param4581 = $tmp4582;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4583));
                if (((panda$core$Bit) { param4581 == NULL }).value) {
                {
                    $tmp4585 = NULL;
                    $returnValue4567 = $tmp4585;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
                    $tmp4580 = 0;
                    goto $l4578;
                    $l4586:;
                    $tmp4561 = 1;
                    goto $l4559;
                    $l4587:;
                    return $returnValue4567;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4571, ((panda$core$Object*) param4581));
                $l4589:;
                panda$core$Int64$init$builtin_int64(&$tmp4593, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4592, $tmp4593);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4594 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4592);
                bool $tmp4591 = ((panda$core$Bit) { $tmp4594.nonnull }).value;
                if (!$tmp4591) goto $l4590;
                {
                    {
                        $tmp4595 = param4581;
                        org$pandalanguage$pandac$ASTNode* $tmp4598 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4597 = $tmp4598;
                        $tmp4596 = $tmp4597;
                        param4581 = $tmp4596;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4596));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4597));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4595));
                    }
                    if (((panda$core$Bit) { param4581 == NULL }).value) {
                    {
                        $tmp4599 = NULL;
                        $returnValue4567 = $tmp4599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
                        $tmp4580 = 1;
                        goto $l4578;
                        $l4600:;
                        $tmp4561 = 2;
                        goto $l4559;
                        $l4601:;
                        return $returnValue4567;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4571, ((panda$core$Object*) param4581));
                }
                goto $l4589;
                $l4590:;
                panda$core$Int64$init$builtin_int64(&$tmp4604, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4603, $tmp4604);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4606 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4603, &$s4605);
                if (((panda$core$Bit) { !$tmp4606.nonnull }).value) {
                {
                    $tmp4607 = NULL;
                    $returnValue4567 = $tmp4607;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4607));
                    $tmp4580 = 2;
                    goto $l4578;
                    $l4608:;
                    $tmp4561 = 3;
                    goto $l4559;
                    $l4609:;
                    return $returnValue4567;
                }
                }
            }
            $tmp4580 = -1;
            goto $l4578;
            $l4578:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4581));
            param4581 = NULL;
            switch ($tmp4580) {
                case 0: goto $l4586;
                case 2: goto $l4608;
                case -1: goto $l4611;
                case 1: goto $l4600;
            }
            $l4611:;
        }
        }
        panda$collections$ImmutableArray* $tmp4614 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4571);
        $tmp4613 = $tmp4614;
        $tmp4612 = $tmp4613;
        $returnValue4567 = $tmp4612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
        $tmp4561 = 4;
        goto $l4559;
        $l4615:;
        return $returnValue4567;
    }
    $l4559:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4571));
    result4571 = NULL;
    switch ($tmp4561) {
        case 2: goto $l4601;
        case 4: goto $l4615;
        case 3: goto $l4609;
        case 0: goto $l4569;
        case 1: goto $l4587;
    }
    $l4617:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4621;
    org$pandalanguage$pandac$parser$Token$nullable start4622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4623;
    panda$core$Int64 $tmp4624;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4626;
    panda$core$Int64 $tmp4627;
    org$pandalanguage$pandac$ASTNode* $returnValue4630;
    org$pandalanguage$pandac$ASTNode* $tmp4631;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4634;
    panda$core$Int64 $tmp4635;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4636;
    panda$core$Int64 $tmp4637;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4638;
    panda$core$Int64 $tmp4639;
    panda$core$String* name4640 = NULL;
    panda$core$String* $tmp4641;
    panda$core$String* $tmp4642;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4644;
    panda$core$Int64 $tmp4645;
    org$pandalanguage$pandac$ASTNode* $tmp4646;
    panda$collections$ImmutableArray* generics4649 = NULL;
    panda$core$Int64 $tmp4651;
    panda$collections$ImmutableArray* $tmp4653;
    panda$collections$ImmutableArray* $tmp4654;
    panda$collections$ImmutableArray* $tmp4655;
    panda$collections$ImmutableArray* $tmp4657;
    panda$collections$ImmutableArray* $tmp4658;
    panda$collections$ImmutableArray* params4659 = NULL;
    panda$collections$ImmutableArray* $tmp4660;
    panda$collections$ImmutableArray* $tmp4661;
    org$pandalanguage$pandac$ASTNode* $tmp4663;
    org$pandalanguage$pandac$ASTNode* returnType4666 = NULL;
    panda$core$Int64 $tmp4668;
    org$pandalanguage$pandac$ASTNode* $tmp4670;
    org$pandalanguage$pandac$ASTNode* $tmp4671;
    org$pandalanguage$pandac$ASTNode* $tmp4672;
    org$pandalanguage$pandac$ASTNode* $tmp4674;
    org$pandalanguage$pandac$ASTNode* $tmp4677;
    org$pandalanguage$pandac$ASTNode* $tmp4678;
    panda$collections$ImmutableArray* body4679 = NULL;
    panda$core$Int64 $tmp4681;
    panda$collections$ImmutableArray* $tmp4683;
    panda$collections$ImmutableArray* $tmp4684;
    panda$collections$ImmutableArray* $tmp4685;
    org$pandalanguage$pandac$ASTNode* $tmp4687;
    panda$collections$ImmutableArray* $tmp4690;
    panda$collections$ImmutableArray* $tmp4691;
    org$pandalanguage$pandac$ASTNode* $tmp4692;
    org$pandalanguage$pandac$ASTNode* $tmp4693;
    panda$core$Int64 $tmp4695;
    int $tmp4620;
    {
        memset(&kind4621, 0, sizeof(kind4621));
        panda$core$Int64$init$builtin_int64(&$tmp4624, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4623, $tmp4624);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4625 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4623);
        start4622 = $tmp4625;
        if (((panda$core$Bit) { !start4622.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4627, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4626, $tmp4627);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4629 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4626, &$s4628);
            start4622 = $tmp4629;
            if (((panda$core$Bit) { !start4622.nonnull }).value) {
            {
                $tmp4631 = NULL;
                $returnValue4630 = $tmp4631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
                $tmp4620 = 0;
                goto $l4618;
                $l4632:;
                return $returnValue4630;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4635, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4634, $tmp4635);
            kind4621 = $tmp4634;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4637, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4636, $tmp4637);
            kind4621 = $tmp4636;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4639, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4638, $tmp4639);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4638);
        panda$core$String* $tmp4643 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4642 = $tmp4643;
        $tmp4641 = $tmp4642;
        name4640 = $tmp4641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4642));
        panda$core$Int64$init$builtin_int64(&$tmp4645, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4644, $tmp4645);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4644);
        if (((panda$core$Bit) { name4640 == NULL }).value) {
        {
            $tmp4646 = NULL;
            $returnValue4630 = $tmp4646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4646));
            $tmp4620 = 1;
            goto $l4618;
            $l4647:;
            return $returnValue4630;
        }
        }
        memset(&generics4649, 0, sizeof(generics4649));
        org$pandalanguage$pandac$parser$Token $tmp4650 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4651, 63);
        panda$core$Bit $tmp4652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4650.kind.$rawValue, $tmp4651);
        if ($tmp4652.value) {
        {
            {
                $tmp4653 = generics4649;
                panda$collections$ImmutableArray* $tmp4656 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4655 = $tmp4656;
                $tmp4654 = $tmp4655;
                generics4649 = $tmp4654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4653));
            }
        }
        }
        else {
        {
            {
                $tmp4657 = generics4649;
                $tmp4658 = NULL;
                generics4649 = $tmp4658;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4657));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4662 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4661 = $tmp4662;
        $tmp4660 = $tmp4661;
        params4659 = $tmp4660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4661));
        if (((panda$core$Bit) { params4659 == NULL }).value) {
        {
            $tmp4663 = NULL;
            $returnValue4630 = $tmp4663;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4663));
            $tmp4620 = 2;
            goto $l4618;
            $l4664:;
            return $returnValue4630;
        }
        }
        memset(&returnType4666, 0, sizeof(returnType4666));
        org$pandalanguage$pandac$parser$Token $tmp4667 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4668, 96);
        panda$core$Bit $tmp4669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4667.kind.$rawValue, $tmp4668);
        if ($tmp4669.value) {
        {
            {
                $tmp4670 = returnType4666;
                org$pandalanguage$pandac$ASTNode* $tmp4673 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4672 = $tmp4673;
                $tmp4671 = $tmp4672;
                returnType4666 = $tmp4671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4670));
            }
            if (((panda$core$Bit) { returnType4666 == NULL }).value) {
            {
                $tmp4674 = NULL;
                $returnValue4630 = $tmp4674;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4674));
                $tmp4620 = 3;
                goto $l4618;
                $l4675:;
                return $returnValue4630;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4677 = returnType4666;
                $tmp4678 = NULL;
                returnType4666 = $tmp4678;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4677));
            }
        }
        }
        memset(&body4679, 0, sizeof(body4679));
        org$pandalanguage$pandac$parser$Token $tmp4680 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4681, 100);
        panda$core$Bit $tmp4682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4680.kind.$rawValue, $tmp4681);
        if ($tmp4682.value) {
        {
            {
                $tmp4683 = body4679;
                panda$collections$ImmutableArray* $tmp4686 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4685 = $tmp4686;
                $tmp4684 = $tmp4685;
                body4679 = $tmp4684;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
            }
            if (((panda$core$Bit) { body4679 == NULL }).value) {
            {
                $tmp4687 = NULL;
                $returnValue4630 = $tmp4687;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4687));
                $tmp4620 = 4;
                goto $l4618;
                $l4688:;
                return $returnValue4630;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4690 = body4679;
                $tmp4691 = NULL;
                body4679 = $tmp4691;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4690));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4695, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4694, $tmp4695, ((org$pandalanguage$pandac$parser$Token) start4622.value).position, p_doccomment, p_annotations, kind4621, name4640, generics4649, params4659, returnType4666, body4679);
        $tmp4693 = $tmp4694;
        $tmp4692 = $tmp4693;
        $returnValue4630 = $tmp4692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4693));
        $tmp4620 = 5;
        goto $l4618;
        $l4696:;
        return $returnValue4630;
    }
    $l4618:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4679));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4666));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4659));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4649));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4640));
    name4640 = NULL;
    params4659 = NULL;
    switch ($tmp4620) {
        case 3: goto $l4675;
        case 1: goto $l4647;
        case 5: goto $l4696;
        case 4: goto $l4688;
        case 2: goto $l4664;
        case 0: goto $l4632;
    }
    $l4698:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4702;
    org$pandalanguage$pandac$parser$Token$nullable start4703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4704;
    panda$core$Int64 $tmp4705;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4707;
    panda$core$Int64 $tmp4708;
    org$pandalanguage$pandac$ASTNode* $returnValue4711;
    org$pandalanguage$pandac$ASTNode* $tmp4712;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4715;
    panda$core$Int64 $tmp4716;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4717;
    panda$core$Int64 $tmp4718;
    panda$collections$ImmutableArray* params4719 = NULL;
    panda$collections$ImmutableArray* $tmp4720;
    panda$collections$ImmutableArray* $tmp4721;
    org$pandalanguage$pandac$ASTNode* $tmp4723;
    org$pandalanguage$pandac$ASTNode* returnType4726 = NULL;
    panda$core$Int64 $tmp4728;
    org$pandalanguage$pandac$ASTNode* $tmp4730;
    org$pandalanguage$pandac$ASTNode* $tmp4731;
    org$pandalanguage$pandac$ASTNode* $tmp4732;
    org$pandalanguage$pandac$ASTNode* $tmp4734;
    org$pandalanguage$pandac$ASTNode* $tmp4737;
    org$pandalanguage$pandac$ASTNode* $tmp4738;
    panda$collections$ImmutableArray* body4739 = NULL;
    panda$collections$ImmutableArray* $tmp4740;
    panda$collections$ImmutableArray* $tmp4741;
    org$pandalanguage$pandac$ASTNode* $tmp4743;
    org$pandalanguage$pandac$ASTNode* $tmp4746;
    org$pandalanguage$pandac$ASTNode* $tmp4747;
    panda$core$Int64 $tmp4749;
    panda$collections$ImmutableArray* $tmp4750;
    int $tmp4701;
    {
        memset(&kind4702, 0, sizeof(kind4702));
        panda$core$Int64$init$builtin_int64(&$tmp4705, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4704, $tmp4705);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4706 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4704);
        start4703 = $tmp4706;
        if (((panda$core$Bit) { !start4703.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4708, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4707, $tmp4708);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4710 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4707, &$s4709);
            start4703 = $tmp4710;
            if (((panda$core$Bit) { !start4703.nonnull }).value) {
            {
                $tmp4712 = NULL;
                $returnValue4711 = $tmp4712;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4712));
                $tmp4701 = 0;
                goto $l4699;
                $l4713:;
                return $returnValue4711;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4716, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4715, $tmp4716);
            kind4702 = $tmp4715;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4718, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4717, $tmp4718);
            kind4702 = $tmp4717;
        }
        }
        panda$collections$ImmutableArray* $tmp4722 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4721 = $tmp4722;
        $tmp4720 = $tmp4721;
        params4719 = $tmp4720;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4721));
        if (((panda$core$Bit) { params4719 == NULL }).value) {
        {
            $tmp4723 = NULL;
            $returnValue4711 = $tmp4723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4723));
            $tmp4701 = 1;
            goto $l4699;
            $l4724:;
            return $returnValue4711;
        }
        }
        memset(&returnType4726, 0, sizeof(returnType4726));
        org$pandalanguage$pandac$parser$Token $tmp4727 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4728, 96);
        panda$core$Bit $tmp4729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4727.kind.$rawValue, $tmp4728);
        if ($tmp4729.value) {
        {
            {
                $tmp4730 = returnType4726;
                org$pandalanguage$pandac$ASTNode* $tmp4733 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4732 = $tmp4733;
                $tmp4731 = $tmp4732;
                returnType4726 = $tmp4731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4730));
            }
            if (((panda$core$Bit) { returnType4726 == NULL }).value) {
            {
                $tmp4734 = NULL;
                $returnValue4711 = $tmp4734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4734));
                $tmp4701 = 2;
                goto $l4699;
                $l4735:;
                return $returnValue4711;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4737 = returnType4726;
                $tmp4738 = NULL;
                returnType4726 = $tmp4738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4737));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4742 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4741 = $tmp4742;
        $tmp4740 = $tmp4741;
        body4739 = $tmp4740;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4741));
        if (((panda$core$Bit) { body4739 == NULL }).value) {
        {
            $tmp4743 = NULL;
            $returnValue4711 = $tmp4743;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4743));
            $tmp4701 = 3;
            goto $l4699;
            $l4744:;
            return $returnValue4711;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4748 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4749, 26);
        panda$collections$ImmutableArray* $tmp4751 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4751);
        $tmp4750 = $tmp4751;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4748, $tmp4749, ((org$pandalanguage$pandac$parser$Token) start4703.value).position, NULL, $tmp4750, kind4702, &$s4752, NULL, params4719, returnType4726, body4739);
        $tmp4747 = $tmp4748;
        $tmp4746 = $tmp4747;
        $returnValue4711 = $tmp4746;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4750));
        $tmp4701 = 4;
        goto $l4699;
        $l4753:;
        return $returnValue4711;
    }
    $l4699:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4739));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4726));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4719));
    params4719 = NULL;
    body4739 = NULL;
    switch ($tmp4701) {
        case 3: goto $l4744;
        case 2: goto $l4735;
        case 4: goto $l4753;
        case 1: goto $l4724;
        case 0: goto $l4713;
    }
    $l4755:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4759;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4760;
    panda$core$Int64 $tmp4761;
    org$pandalanguage$pandac$ASTNode* $returnValue4764;
    org$pandalanguage$pandac$ASTNode* $tmp4765;
    panda$collections$ImmutableArray* params4768 = NULL;
    panda$collections$ImmutableArray* $tmp4769;
    panda$collections$ImmutableArray* $tmp4770;
    org$pandalanguage$pandac$ASTNode* $tmp4772;
    panda$collections$ImmutableArray* b4775 = NULL;
    panda$collections$ImmutableArray* $tmp4776;
    panda$collections$ImmutableArray* $tmp4777;
    org$pandalanguage$pandac$ASTNode* $tmp4779;
    org$pandalanguage$pandac$ASTNode* $tmp4782;
    org$pandalanguage$pandac$ASTNode* $tmp4783;
    panda$core$Int64 $tmp4785;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4786;
    panda$core$Int64 $tmp4787;
    int $tmp4758;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4761, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4760, $tmp4761);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4763 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4760, &$s4762);
        start4759 = $tmp4763;
        if (((panda$core$Bit) { !start4759.nonnull }).value) {
        {
            $tmp4765 = NULL;
            $returnValue4764 = $tmp4765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4765));
            $tmp4758 = 0;
            goto $l4756;
            $l4766:;
            return $returnValue4764;
        }
        }
        panda$collections$ImmutableArray* $tmp4771 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4770 = $tmp4771;
        $tmp4769 = $tmp4770;
        params4768 = $tmp4769;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4769));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4770));
        if (((panda$core$Bit) { params4768 == NULL }).value) {
        {
            $tmp4772 = NULL;
            $returnValue4764 = $tmp4772;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4772));
            $tmp4758 = 1;
            goto $l4756;
            $l4773:;
            return $returnValue4764;
        }
        }
        panda$collections$ImmutableArray* $tmp4778 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4777 = $tmp4778;
        $tmp4776 = $tmp4777;
        b4775 = $tmp4776;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4777));
        if (((panda$core$Bit) { b4775 == NULL }).value) {
        {
            $tmp4779 = NULL;
            $returnValue4764 = $tmp4779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4779));
            $tmp4758 = 2;
            goto $l4756;
            $l4780:;
            return $returnValue4764;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4785, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4787, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4786, $tmp4787);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4784, $tmp4785, ((org$pandalanguage$pandac$parser$Token) start4759.value).position, p_doccomment, p_annotations, $tmp4786, &$s4788, NULL, params4768, NULL, b4775);
        $tmp4783 = $tmp4784;
        $tmp4782 = $tmp4783;
        $returnValue4764 = $tmp4782;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4783));
        $tmp4758 = 3;
        goto $l4756;
        $l4789:;
        return $returnValue4764;
    }
    $l4756:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4775));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4768));
    params4768 = NULL;
    b4775 = NULL;
    switch ($tmp4758) {
        case 1: goto $l4773;
        case 3: goto $l4789;
        case 0: goto $l4766;
        case 2: goto $l4780;
    }
    $l4791:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4795 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4796;
    org$pandalanguage$pandac$ASTNode* $tmp4797;
    org$pandalanguage$pandac$ASTNode* $returnValue4799;
    org$pandalanguage$pandac$ASTNode* $tmp4800;
    org$pandalanguage$pandac$ASTNode* $tmp4803;
    org$pandalanguage$pandac$ASTNode* $tmp4804;
    panda$core$Int64 $tmp4806;
    int $tmp4794;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4798 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4797 = $tmp4798;
        $tmp4796 = $tmp4797;
        decl4795 = $tmp4796;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4796));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4797));
        if (((panda$core$Bit) { decl4795 == NULL }).value) {
        {
            $tmp4800 = NULL;
            $returnValue4799 = $tmp4800;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4800));
            $tmp4794 = 0;
            goto $l4792;
            $l4801:;
            return $returnValue4799;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4806, 16);
        org$pandalanguage$pandac$Position $tmp4808 = (($fn4807) decl4795->$class->vtable[2])(decl4795);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4805, $tmp4806, $tmp4808, p_doccomment, p_annotations, decl4795);
        $tmp4804 = $tmp4805;
        $tmp4803 = $tmp4804;
        $returnValue4799 = $tmp4803;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4803));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4804));
        $tmp4794 = 1;
        goto $l4792;
        $l4809:;
        return $returnValue4799;
    }
    $l4792:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4795));
    decl4795 = NULL;
    switch ($tmp4794) {
        case 1: goto $l4809;
        case 0: goto $l4801;
    }
    $l4811:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4816;
    panda$core$Int64 $tmp4817;
    org$pandalanguage$pandac$ASTNode* $returnValue4820;
    org$pandalanguage$pandac$ASTNode* $tmp4821;
    panda$collections$Array* fields4824 = NULL;
    panda$collections$Array* $tmp4825;
    panda$collections$Array* $tmp4826;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4828;
    panda$core$Int64 $tmp4829;
    panda$core$Int64 $tmp4832;
    org$pandalanguage$pandac$ASTNode* field4837 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4838;
    org$pandalanguage$pandac$ASTNode* $tmp4839;
    org$pandalanguage$pandac$ASTNode* $tmp4841;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4848;
    panda$core$Int64 $tmp4849;
    org$pandalanguage$pandac$ASTNode* $tmp4851;
    org$pandalanguage$pandac$ASTNode* $tmp4852;
    org$pandalanguage$pandac$ASTNode* $tmp4853;
    org$pandalanguage$pandac$ASTNode* $tmp4855;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4860;
    panda$core$Int64 $tmp4861;
    org$pandalanguage$pandac$ASTNode* $tmp4864;
    org$pandalanguage$pandac$ASTNode* $tmp4867;
    org$pandalanguage$pandac$ASTNode* $tmp4868;
    panda$core$Int64 $tmp4870;
    panda$core$String* $tmp4871;
    panda$collections$ImmutableArray* $tmp4873;
    int $tmp4814;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4817, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4816, $tmp4817);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4819 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4816, &$s4818);
        name4815 = $tmp4819;
        if (((panda$core$Bit) { !name4815.nonnull }).value) {
        {
            $tmp4821 = NULL;
            $returnValue4820 = $tmp4821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4821));
            $tmp4814 = 0;
            goto $l4812;
            $l4822:;
            return $returnValue4820;
        }
        }
        panda$collections$Array* $tmp4827 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4827);
        $tmp4826 = $tmp4827;
        $tmp4825 = $tmp4826;
        fields4824 = $tmp4825;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4826));
        panda$core$Int64$init$builtin_int64(&$tmp4829, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4828, $tmp4829);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4830 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4828);
        if (((panda$core$Bit) { $tmp4830.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4831 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4832, 105);
            panda$core$Bit $tmp4833 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4831.kind.$rawValue, $tmp4832);
            if ($tmp4833.value) {
            {
                int $tmp4836;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4840 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4839 = $tmp4840;
                    $tmp4838 = $tmp4839;
                    field4837 = $tmp4838;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4838));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4839));
                    if (((panda$core$Bit) { field4837 == NULL }).value) {
                    {
                        $tmp4841 = NULL;
                        $returnValue4820 = $tmp4841;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4841));
                        $tmp4836 = 0;
                        goto $l4834;
                        $l4842:;
                        $tmp4814 = 1;
                        goto $l4812;
                        $l4843:;
                        return $returnValue4820;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4824, ((panda$core$Object*) field4837));
                    $l4845:;
                    panda$core$Int64$init$builtin_int64(&$tmp4849, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4848, $tmp4849);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4850 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4848);
                    bool $tmp4847 = ((panda$core$Bit) { $tmp4850.nonnull }).value;
                    if (!$tmp4847) goto $l4846;
                    {
                        {
                            $tmp4851 = field4837;
                            org$pandalanguage$pandac$ASTNode* $tmp4854 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4853 = $tmp4854;
                            $tmp4852 = $tmp4853;
                            field4837 = $tmp4852;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4852));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4851));
                        }
                        if (((panda$core$Bit) { field4837 == NULL }).value) {
                        {
                            $tmp4855 = NULL;
                            $returnValue4820 = $tmp4855;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4855));
                            $tmp4836 = 1;
                            goto $l4834;
                            $l4856:;
                            $tmp4814 = 2;
                            goto $l4812;
                            $l4857:;
                            return $returnValue4820;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4824, ((panda$core$Object*) field4837));
                    }
                    goto $l4845;
                    $l4846:;
                }
                $tmp4836 = -1;
                goto $l4834;
                $l4834:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4837));
                field4837 = NULL;
                switch ($tmp4836) {
                    case -1: goto $l4859;
                    case 1: goto $l4856;
                    case 0: goto $l4842;
                }
                $l4859:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4861, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4860, $tmp4861);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4863 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4860, &$s4862);
            if (((panda$core$Bit) { !$tmp4863.nonnull }).value) {
            {
                $tmp4864 = NULL;
                $returnValue4820 = $tmp4864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4864));
                $tmp4814 = 3;
                goto $l4812;
                $l4865:;
                return $returnValue4820;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4869 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4870, 9);
        panda$core$String* $tmp4872 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4815.value));
        $tmp4871 = $tmp4872;
        panda$collections$ImmutableArray* $tmp4874 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4824);
        $tmp4873 = $tmp4874;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4869, $tmp4870, ((org$pandalanguage$pandac$parser$Token) name4815.value).position, p_doccomment, $tmp4871, $tmp4873);
        $tmp4868 = $tmp4869;
        $tmp4867 = $tmp4868;
        $returnValue4820 = $tmp4867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4868));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4873));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4871));
        $tmp4814 = 4;
        goto $l4812;
        $l4875:;
        return $returnValue4820;
    }
    $l4812:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4824));
    fields4824 = NULL;
    switch ($tmp4814) {
        case 2: goto $l4857;
        case 3: goto $l4865;
        case 1: goto $l4843;
        case 0: goto $l4822;
        case 4: goto $l4875;
    }
    $l4877:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4881;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4882;
    panda$core$Int64 $tmp4883;
    org$pandalanguage$pandac$ASTNode* $returnValue4886;
    org$pandalanguage$pandac$ASTNode* $tmp4887;
    org$pandalanguage$pandac$parser$Token$nullable name4890;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4891;
    panda$core$Int64 $tmp4892;
    org$pandalanguage$pandac$ASTNode* $tmp4895;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4898;
    panda$core$Int64 $tmp4899;
    org$pandalanguage$pandac$ASTNode* $tmp4902;
    panda$collections$Array* members4905 = NULL;
    panda$collections$Array* $tmp4906;
    panda$collections$Array* $tmp4907;
    org$pandalanguage$pandac$ASTNode* dc4909 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4910;
    org$pandalanguage$pandac$parser$Token next4913;
    org$pandalanguage$pandac$parser$Token$Kind $match$2336_134915;
    panda$core$Int64 $tmp4925;
    panda$core$Int64 $tmp4928;
    panda$core$Int64 $tmp4932;
    panda$core$Int64 $tmp4936;
    panda$core$Int64 $tmp4940;
    panda$core$Int64 $tmp4944;
    panda$core$Int64 $tmp4948;
    panda$core$Int64 $tmp4952;
    panda$core$Int64 $tmp4956;
    panda$core$Int64 $tmp4960;
    panda$core$Int64 $tmp4963;
    panda$core$String* $tmp4965;
    panda$core$String* $tmp4966;
    panda$core$String* $tmp4968;
    org$pandalanguage$pandac$ASTNode* $tmp4973;
    org$pandalanguage$pandac$ASTNode* $tmp4974;
    org$pandalanguage$pandac$ASTNode* $tmp4975;
    panda$core$Int64 $tmp4977;
    org$pandalanguage$pandac$ASTNode* c4982 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4983;
    org$pandalanguage$pandac$ASTNode* $tmp4984;
    org$pandalanguage$pandac$ASTNode* $tmp4986;
    org$pandalanguage$pandac$ASTNode* $tmp4990;
    org$pandalanguage$pandac$ASTNode* $tmp4991;
    panda$collections$ImmutableArray* a4993 = NULL;
    panda$collections$ImmutableArray* $tmp4994;
    panda$collections$ImmutableArray* $tmp4995;
    org$pandalanguage$pandac$parser$Token next4999;
    org$pandalanguage$pandac$parser$Token$Kind $match$2360_135001;
    panda$core$Int64 $tmp5002;
    panda$core$Int64 $tmp5005;
    panda$core$String* $tmp5007;
    panda$core$String* $tmp5008;
    panda$core$String* $tmp5010;
    org$pandalanguage$pandac$ASTNode* $tmp5015;
    panda$collections$ImmutableArray* $tmp5018;
    panda$collections$ImmutableArray* $tmp5019;
    panda$collections$ImmutableArray* $tmp5020;
    panda$core$Int64 $tmp5022;
    panda$core$Int64 $tmp5027;
    panda$core$String* $tmp5030;
    panda$core$String* $tmp5031;
    panda$core$String* $tmp5033;
    org$pandalanguage$pandac$ASTNode* $tmp5038;
    org$pandalanguage$pandac$ASTNode* $tmp5041;
    org$pandalanguage$pandac$ASTNode* $tmp5042;
    org$pandalanguage$pandac$ASTNode* $tmp5043;
    panda$core$Int64 $tmp5045;
    org$pandalanguage$pandac$ASTNode* decl5050 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5051;
    org$pandalanguage$pandac$ASTNode* $tmp5052;
    org$pandalanguage$pandac$ASTNode* $tmp5054;
    org$pandalanguage$pandac$ASTNode* $tmp5058;
    org$pandalanguage$pandac$ASTNode* $tmp5059;
    panda$collections$ImmutableArray* $tmp5060;
    panda$collections$ImmutableArray* $tmp5061;
    panda$collections$ImmutableArray* $tmp5062;
    panda$core$Int64 $tmp5065;
    org$pandalanguage$pandac$ASTNode* decl5070 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5071;
    org$pandalanguage$pandac$ASTNode* $tmp5072;
    org$pandalanguage$pandac$ASTNode* $tmp5074;
    org$pandalanguage$pandac$ASTNode* $tmp5078;
    org$pandalanguage$pandac$ASTNode* $tmp5079;
    panda$collections$ImmutableArray* $tmp5080;
    panda$collections$ImmutableArray* $tmp5081;
    panda$collections$ImmutableArray* $tmp5082;
    panda$core$Int64 $tmp5085;
    org$pandalanguage$pandac$ASTNode* decl5090 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5091;
    org$pandalanguage$pandac$ASTNode* $tmp5092;
    org$pandalanguage$pandac$ASTNode* $tmp5094;
    org$pandalanguage$pandac$ASTNode* $tmp5098;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    panda$collections$ImmutableArray* $tmp5100;
    panda$collections$ImmutableArray* $tmp5101;
    panda$collections$ImmutableArray* $tmp5102;
    panda$core$Int64 $tmp5106;
    panda$core$Int64 $tmp5109;
    org$pandalanguage$pandac$ASTNode* decl5115 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5116;
    org$pandalanguage$pandac$ASTNode* $tmp5117;
    org$pandalanguage$pandac$ASTNode* $tmp5119;
    org$pandalanguage$pandac$ASTNode* $tmp5123;
    org$pandalanguage$pandac$ASTNode* $tmp5124;
    panda$collections$ImmutableArray* $tmp5125;
    panda$collections$ImmutableArray* $tmp5126;
    panda$collections$ImmutableArray* $tmp5127;
    panda$core$Int64 $tmp5133;
    panda$core$Int64 $tmp5136;
    panda$core$Int64 $tmp5140;
    panda$core$Int64 $tmp5144;
    org$pandalanguage$pandac$ASTNode* decl5150 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5151;
    org$pandalanguage$pandac$ASTNode* $tmp5152;
    org$pandalanguage$pandac$ASTNode* $tmp5154;
    org$pandalanguage$pandac$ASTNode* $tmp5158;
    org$pandalanguage$pandac$ASTNode* $tmp5159;
    panda$collections$ImmutableArray* $tmp5160;
    panda$collections$ImmutableArray* $tmp5161;
    panda$collections$ImmutableArray* $tmp5162;
    panda$core$Int64 $tmp5165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5167;
    panda$core$Int64 $tmp5168;
    panda$core$String* $tmp5170;
    panda$core$String* $tmp5171;
    panda$core$String* $tmp5173;
    org$pandalanguage$pandac$ASTNode* $tmp5178;
    org$pandalanguage$pandac$ASTNode* $tmp5181;
    org$pandalanguage$pandac$ASTNode* $tmp5182;
    panda$core$Int64 $tmp5184;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5185;
    panda$core$Int64 $tmp5186;
    panda$core$String* $tmp5187;
    panda$collections$ImmutableArray* $tmp5189;
    int $tmp4880;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4883, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4882, $tmp4883);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4885 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4882, &$s4884);
        start4881 = $tmp4885;
        if (((panda$core$Bit) { !start4881.nonnull }).value) {
        {
            $tmp4887 = NULL;
            $returnValue4886 = $tmp4887;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4887));
            $tmp4880 = 0;
            goto $l4878;
            $l4888:;
            return $returnValue4886;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4892, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4891, $tmp4892);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4894 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4891, &$s4893);
        name4890 = $tmp4894;
        if (((panda$core$Bit) { !name4890.nonnull }).value) {
        {
            $tmp4895 = NULL;
            $returnValue4886 = $tmp4895;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4895));
            $tmp4880 = 1;
            goto $l4878;
            $l4896:;
            return $returnValue4886;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4899, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4898, $tmp4899);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4901 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4898, &$s4900);
        if (((panda$core$Bit) { !$tmp4901.nonnull }).value) {
        {
            $tmp4902 = NULL;
            $returnValue4886 = $tmp4902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4902));
            $tmp4880 = 2;
            goto $l4878;
            $l4903:;
            return $returnValue4886;
        }
        }
        panda$collections$Array* $tmp4908 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4908);
        $tmp4907 = $tmp4908;
        $tmp4906 = $tmp4907;
        members4905 = $tmp4906;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4906));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4907));
        $tmp4910 = NULL;
        dc4909 = $tmp4910;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4910));
        $l4911:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4914 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4913 = $tmp4914;
            {
                $match$2336_134915 = next4913.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4925, 18);
                panda$core$Bit $tmp4926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4925);
                bool $tmp4924 = $tmp4926.value;
                if ($tmp4924) goto $l4927;
                panda$core$Int64$init$builtin_int64(&$tmp4928, 19);
                panda$core$Bit $tmp4929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4928);
                $tmp4924 = $tmp4929.value;
                $l4927:;
                panda$core$Bit $tmp4930 = { $tmp4924 };
                bool $tmp4923 = $tmp4930.value;
                if ($tmp4923) goto $l4931;
                panda$core$Int64$init$builtin_int64(&$tmp4932, 20);
                panda$core$Bit $tmp4933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4932);
                $tmp4923 = $tmp4933.value;
                $l4931:;
                panda$core$Bit $tmp4934 = { $tmp4923 };
                bool $tmp4922 = $tmp4934.value;
                if ($tmp4922) goto $l4935;
                panda$core$Int64$init$builtin_int64(&$tmp4936, 22);
                panda$core$Bit $tmp4937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4936);
                $tmp4922 = $tmp4937.value;
                $l4935:;
                panda$core$Bit $tmp4938 = { $tmp4922 };
                bool $tmp4921 = $tmp4938.value;
                if ($tmp4921) goto $l4939;
                panda$core$Int64$init$builtin_int64(&$tmp4940, 21);
                panda$core$Bit $tmp4941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4940);
                $tmp4921 = $tmp4941.value;
                $l4939:;
                panda$core$Bit $tmp4942 = { $tmp4921 };
                bool $tmp4920 = $tmp4942.value;
                if ($tmp4920) goto $l4943;
                panda$core$Int64$init$builtin_int64(&$tmp4944, 14);
                panda$core$Bit $tmp4945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4944);
                $tmp4920 = $tmp4945.value;
                $l4943:;
                panda$core$Bit $tmp4946 = { $tmp4920 };
                bool $tmp4919 = $tmp4946.value;
                if ($tmp4919) goto $l4947;
                panda$core$Int64$init$builtin_int64(&$tmp4948, 24);
                panda$core$Bit $tmp4949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4948);
                $tmp4919 = $tmp4949.value;
                $l4947:;
                panda$core$Bit $tmp4950 = { $tmp4919 };
                bool $tmp4918 = $tmp4950.value;
                if ($tmp4918) goto $l4951;
                panda$core$Int64$init$builtin_int64(&$tmp4952, 25);
                panda$core$Bit $tmp4953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4952);
                $tmp4918 = $tmp4953.value;
                $l4951:;
                panda$core$Bit $tmp4954 = { $tmp4918 };
                bool $tmp4917 = $tmp4954.value;
                if ($tmp4917) goto $l4955;
                panda$core$Int64$init$builtin_int64(&$tmp4956, 26);
                panda$core$Bit $tmp4957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4956);
                $tmp4917 = $tmp4957.value;
                $l4955:;
                panda$core$Bit $tmp4958 = { $tmp4917 };
                bool $tmp4916 = $tmp4958.value;
                if ($tmp4916) goto $l4959;
                panda$core$Int64$init$builtin_int64(&$tmp4960, 27);
                panda$core$Bit $tmp4961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4960);
                $tmp4916 = $tmp4961.value;
                $l4959:;
                panda$core$Bit $tmp4962 = { $tmp4916 };
                if ($tmp4962.value) {
                {
                    goto $l4912;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4963, 12);
                panda$core$Bit $tmp4964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4963);
                if ($tmp4964.value) {
                {
                    if (((panda$core$Bit) { dc4909 != NULL }).value) {
                    {
                        panda$core$String* $tmp4969 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4913);
                        $tmp4968 = $tmp4969;
                        panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4967, $tmp4968);
                        $tmp4966 = $tmp4970;
                        panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4971);
                        $tmp4965 = $tmp4972;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4913, $tmp4965);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4965));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4966));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4968));
                    }
                    }
                    {
                        $tmp4973 = dc4909;
                        org$pandalanguage$pandac$ASTNode* $tmp4976 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4975 = $tmp4976;
                        $tmp4974 = $tmp4975;
                        dc4909 = $tmp4974;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4975));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4973));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4977, 49);
                panda$core$Bit $tmp4978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2336_134915.$rawValue, $tmp4977);
                if ($tmp4978.value) {
                {
                    int $tmp4981;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4985 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909);
                        $tmp4984 = $tmp4985;
                        $tmp4983 = $tmp4984;
                        c4982 = $tmp4983;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4983));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4984));
                        if (((panda$core$Bit) { c4982 == NULL }).value) {
                        {
                            $tmp4986 = NULL;
                            $returnValue4886 = $tmp4986;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4986));
                            $tmp4981 = 0;
                            goto $l4979;
                            $l4987:;
                            $tmp4880 = 3;
                            goto $l4878;
                            $l4988:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) c4982));
                        {
                            $tmp4990 = dc4909;
                            $tmp4991 = NULL;
                            dc4909 = $tmp4991;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4990));
                        }
                    }
                    $tmp4981 = -1;
                    goto $l4979;
                    $l4979:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4982));
                    c4982 = NULL;
                    switch ($tmp4981) {
                        case -1: goto $l4992;
                        case 0: goto $l4987;
                    }
                    $l4992:;
                }
                }
                else {
                {
                    goto $l4912;
                }
                }
                }
                }
            }
        }
        }
        $l4912:;
        panda$collections$ImmutableArray* $tmp4996 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4996);
        $tmp4995 = $tmp4996;
        $tmp4994 = $tmp4995;
        a4993 = $tmp4994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4995));
        $l4997:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp5000 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4999 = $tmp5000;
            {
                $match$2360_135001 = next4999.kind;
                panda$core$Int64$init$builtin_int64(&$tmp5002, 14);
                panda$core$Bit $tmp5003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5002);
                if ($tmp5003.value) {
                {
                    panda$core$Int64 $tmp5004 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4993);
                    panda$core$Int64$init$builtin_int64(&$tmp5005, 0);
                    panda$core$Bit $tmp5006 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5005);
                    if ($tmp5006.value) {
                    {
                        panda$core$String* $tmp5011 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4999);
                        $tmp5010 = $tmp5011;
                        panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5009, $tmp5010);
                        $tmp5008 = $tmp5012;
                        panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5013);
                        $tmp5007 = $tmp5014;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4999, $tmp5007);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5007));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5010));
                        $tmp5015 = NULL;
                        $returnValue4886 = $tmp5015;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5015));
                        $tmp4880 = 4;
                        goto $l4878;
                        $l5016:;
                        return $returnValue4886;
                    }
                    }
                    {
                        $tmp5018 = a4993;
                        panda$collections$ImmutableArray* $tmp5021 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp5020 = $tmp5021;
                        $tmp5019 = $tmp5020;
                        a4993 = $tmp5019;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5020));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5018));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5022, 12);
                panda$core$Bit $tmp5023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5022);
                if ($tmp5023.value) {
                {
                    bool $tmp5024 = ((panda$core$Bit) { dc4909 != NULL }).value;
                    if ($tmp5024) goto $l5025;
                    panda$core$Int64 $tmp5026 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4993);
                    panda$core$Int64$init$builtin_int64(&$tmp5027, 0);
                    panda$core$Bit $tmp5028 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5026, $tmp5027);
                    $tmp5024 = $tmp5028.value;
                    $l5025:;
                    panda$core$Bit $tmp5029 = { $tmp5024 };
                    if ($tmp5029.value) {
                    {
                        panda$core$String* $tmp5034 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4999);
                        $tmp5033 = $tmp5034;
                        panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5032, $tmp5033);
                        $tmp5031 = $tmp5035;
                        panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5036);
                        $tmp5030 = $tmp5037;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4999, $tmp5030);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5033));
                        $tmp5038 = NULL;
                        $returnValue4886 = $tmp5038;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5038));
                        $tmp4880 = 5;
                        goto $l4878;
                        $l5039:;
                        return $returnValue4886;
                    }
                    }
                    {
                        $tmp5041 = dc4909;
                        org$pandalanguage$pandac$ASTNode* $tmp5044 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5043 = $tmp5044;
                        $tmp5042 = $tmp5043;
                        dc4909 = $tmp5042;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5042));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5043));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5041));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5045, 18);
                panda$core$Bit $tmp5046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5045);
                if ($tmp5046.value) {
                {
                    int $tmp5049;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5053 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909, a4993);
                        $tmp5052 = $tmp5053;
                        $tmp5051 = $tmp5052;
                        decl5050 = $tmp5051;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5051));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5052));
                        if (((panda$core$Bit) { decl5050 == NULL }).value) {
                        {
                            $tmp5054 = NULL;
                            $returnValue4886 = $tmp5054;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5054));
                            $tmp5049 = 0;
                            goto $l5047;
                            $l5055:;
                            $tmp4880 = 6;
                            goto $l4878;
                            $l5056:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) decl5050));
                        {
                            $tmp5058 = dc4909;
                            $tmp5059 = NULL;
                            dc4909 = $tmp5059;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5059));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5058));
                        }
                        {
                            $tmp5060 = a4993;
                            panda$collections$ImmutableArray* $tmp5063 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5063);
                            $tmp5062 = $tmp5063;
                            $tmp5061 = $tmp5062;
                            a4993 = $tmp5061;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5061));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5062));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5060));
                        }
                    }
                    $tmp5049 = -1;
                    goto $l5047;
                    $l5047:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5050));
                    decl5050 = NULL;
                    switch ($tmp5049) {
                        case 0: goto $l5055;
                        case -1: goto $l5064;
                    }
                    $l5064:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5065, 19);
                panda$core$Bit $tmp5066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5065);
                if ($tmp5066.value) {
                {
                    int $tmp5069;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5073 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909, a4993);
                        $tmp5072 = $tmp5073;
                        $tmp5071 = $tmp5072;
                        decl5070 = $tmp5071;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5071));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5072));
                        if (((panda$core$Bit) { decl5070 == NULL }).value) {
                        {
                            $tmp5074 = NULL;
                            $returnValue4886 = $tmp5074;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5074));
                            $tmp5069 = 0;
                            goto $l5067;
                            $l5075:;
                            $tmp4880 = 7;
                            goto $l4878;
                            $l5076:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) decl5070));
                        {
                            $tmp5078 = dc4909;
                            $tmp5079 = NULL;
                            dc4909 = $tmp5079;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5079));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5078));
                        }
                        {
                            $tmp5080 = a4993;
                            panda$collections$ImmutableArray* $tmp5083 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5083);
                            $tmp5082 = $tmp5083;
                            $tmp5081 = $tmp5082;
                            a4993 = $tmp5081;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5081));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5082));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5080));
                        }
                    }
                    $tmp5069 = -1;
                    goto $l5067;
                    $l5067:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5070));
                    decl5070 = NULL;
                    switch ($tmp5069) {
                        case 0: goto $l5075;
                        case -1: goto $l5084;
                    }
                    $l5084:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5085, 20);
                panda$core$Bit $tmp5086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5085);
                if ($tmp5086.value) {
                {
                    int $tmp5089;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5093 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909, a4993);
                        $tmp5092 = $tmp5093;
                        $tmp5091 = $tmp5092;
                        decl5090 = $tmp5091;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5091));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5092));
                        if (((panda$core$Bit) { decl5090 == NULL }).value) {
                        {
                            $tmp5094 = NULL;
                            $returnValue4886 = $tmp5094;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5094));
                            $tmp5089 = 0;
                            goto $l5087;
                            $l5095:;
                            $tmp4880 = 8;
                            goto $l4878;
                            $l5096:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) decl5090));
                        {
                            $tmp5098 = dc4909;
                            $tmp5099 = NULL;
                            dc4909 = $tmp5099;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5098));
                        }
                        {
                            $tmp5100 = a4993;
                            panda$collections$ImmutableArray* $tmp5103 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5103);
                            $tmp5102 = $tmp5103;
                            $tmp5101 = $tmp5102;
                            a4993 = $tmp5101;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5101));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5100));
                        }
                    }
                    $tmp5089 = -1;
                    goto $l5087;
                    $l5087:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5090));
                    decl5090 = NULL;
                    switch ($tmp5089) {
                        case -1: goto $l5104;
                        case 0: goto $l5095;
                    }
                    $l5104:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5106, 22);
                panda$core$Bit $tmp5107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5106);
                bool $tmp5105 = $tmp5107.value;
                if ($tmp5105) goto $l5108;
                panda$core$Int64$init$builtin_int64(&$tmp5109, 21);
                panda$core$Bit $tmp5110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5109);
                $tmp5105 = $tmp5110.value;
                $l5108:;
                panda$core$Bit $tmp5111 = { $tmp5105 };
                if ($tmp5111.value) {
                {
                    int $tmp5114;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5118 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909, a4993);
                        $tmp5117 = $tmp5118;
                        $tmp5116 = $tmp5117;
                        decl5115 = $tmp5116;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5116));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5117));
                        if (((panda$core$Bit) { decl5115 == NULL }).value) {
                        {
                            $tmp5119 = NULL;
                            $returnValue4886 = $tmp5119;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5119));
                            $tmp5114 = 0;
                            goto $l5112;
                            $l5120:;
                            $tmp4880 = 9;
                            goto $l4878;
                            $l5121:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) decl5115));
                        {
                            $tmp5123 = dc4909;
                            $tmp5124 = NULL;
                            dc4909 = $tmp5124;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5123));
                        }
                        {
                            $tmp5125 = a4993;
                            panda$collections$ImmutableArray* $tmp5128 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5128);
                            $tmp5127 = $tmp5128;
                            $tmp5126 = $tmp5127;
                            a4993 = $tmp5126;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5126));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5127));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5125));
                        }
                    }
                    $tmp5114 = -1;
                    goto $l5112;
                    $l5112:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5115));
                    decl5115 = NULL;
                    switch ($tmp5114) {
                        case -1: goto $l5129;
                        case 0: goto $l5120;
                    }
                    $l5129:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5133, 24);
                panda$core$Bit $tmp5134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5133);
                bool $tmp5132 = $tmp5134.value;
                if ($tmp5132) goto $l5135;
                panda$core$Int64$init$builtin_int64(&$tmp5136, 25);
                panda$core$Bit $tmp5137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5136);
                $tmp5132 = $tmp5137.value;
                $l5135:;
                panda$core$Bit $tmp5138 = { $tmp5132 };
                bool $tmp5131 = $tmp5138.value;
                if ($tmp5131) goto $l5139;
                panda$core$Int64$init$builtin_int64(&$tmp5140, 26);
                panda$core$Bit $tmp5141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5140);
                $tmp5131 = $tmp5141.value;
                $l5139:;
                panda$core$Bit $tmp5142 = { $tmp5131 };
                bool $tmp5130 = $tmp5142.value;
                if ($tmp5130) goto $l5143;
                panda$core$Int64$init$builtin_int64(&$tmp5144, 27);
                panda$core$Bit $tmp5145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5144);
                $tmp5130 = $tmp5145.value;
                $l5143:;
                panda$core$Bit $tmp5146 = { $tmp5130 };
                if ($tmp5146.value) {
                {
                    int $tmp5149;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5153 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4909, a4993);
                        $tmp5152 = $tmp5153;
                        $tmp5151 = $tmp5152;
                        decl5150 = $tmp5151;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5152));
                        if (((panda$core$Bit) { decl5150 == NULL }).value) {
                        {
                            $tmp5154 = NULL;
                            $returnValue4886 = $tmp5154;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5154));
                            $tmp5149 = 0;
                            goto $l5147;
                            $l5155:;
                            $tmp4880 = 10;
                            goto $l4878;
                            $l5156:;
                            return $returnValue4886;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4905, ((panda$core$Object*) decl5150));
                        {
                            $tmp5158 = dc4909;
                            $tmp5159 = NULL;
                            dc4909 = $tmp5159;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5159));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5158));
                        }
                        {
                            $tmp5160 = a4993;
                            panda$collections$ImmutableArray* $tmp5163 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5163);
                            $tmp5162 = $tmp5163;
                            $tmp5161 = $tmp5162;
                            a4993 = $tmp5161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5161));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5162));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5160));
                        }
                    }
                    $tmp5149 = -1;
                    goto $l5147;
                    $l5147:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5150));
                    decl5150 = NULL;
                    switch ($tmp5149) {
                        case -1: goto $l5164;
                        case 0: goto $l5155;
                    }
                    $l5164:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5165, 101);
                panda$core$Bit $tmp5166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2360_135001.$rawValue, $tmp5165);
                if ($tmp5166.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5168, 101);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5167, $tmp5168);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5167, &$s5169);
                    goto $l4998;
                }
                }
                else {
                {
                    panda$core$String* $tmp5174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4999);
                    $tmp5173 = $tmp5174;
                    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5172, $tmp5173);
                    $tmp5171 = $tmp5175;
                    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5176);
                    $tmp5170 = $tmp5177;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4999, $tmp5170);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5170));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5171));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5173));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5178 = NULL;
                    $returnValue4886 = $tmp5178;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5178));
                    $tmp4880 = 11;
                    goto $l4878;
                    $l5179:;
                    return $returnValue4886;
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
        $l4998:;
        org$pandalanguage$pandac$ASTNode* $tmp5183 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5184, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5186, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5185, $tmp5186);
        panda$core$String* $tmp5188 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4890.value));
        $tmp5187 = $tmp5188;
        panda$collections$ImmutableArray* $tmp5190 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4905);
        $tmp5189 = $tmp5190;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5183, $tmp5184, ((org$pandalanguage$pandac$parser$Token) start4881.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5185, $tmp5187, NULL, NULL, $tmp5189);
        $tmp5182 = $tmp5183;
        $tmp5181 = $tmp5182;
        $returnValue4886 = $tmp5181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5187));
        $tmp4880 = 12;
        goto $l4878;
        $l5191:;
        return $returnValue4886;
    }
    $l4878:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4993));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4909));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4905));
    members4905 = NULL;
    a4993 = NULL;
    switch ($tmp4880) {
        case 1: goto $l4896;
        case 3: goto $l4988;
        case 5: goto $l5039;
        case 6: goto $l5056;
        case 2: goto $l4903;
        case 8: goto $l5096;
        case 7: goto $l5076;
        case 12: goto $l5191;
        case 4: goto $l5016;
        case 9: goto $l5121;
        case 11: goto $l5179;
        case 10: goto $l5156;
        case 0: goto $l4888;
    }
    $l5193:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5197;
    org$pandalanguage$pandac$ASTNode* dc5199 = NULL;
    panda$core$Int64 $tmp5200;
    org$pandalanguage$pandac$ASTNode* $tmp5202;
    org$pandalanguage$pandac$ASTNode* $tmp5203;
    org$pandalanguage$pandac$ASTNode* $tmp5204;
    org$pandalanguage$pandac$ASTNode* $returnValue5206;
    org$pandalanguage$pandac$ASTNode* $tmp5207;
    org$pandalanguage$pandac$ASTNode* $tmp5210;
    org$pandalanguage$pandac$ASTNode* $tmp5211;
    panda$collections$ImmutableArray* a5212 = NULL;
    panda$collections$ImmutableArray* $tmp5213;
    panda$collections$ImmutableArray* $tmp5214;
    org$pandalanguage$pandac$ASTNode* $tmp5216;
    org$pandalanguage$pandac$parser$Token$Kind $match$2446_95219;
    panda$core$Int64 $tmp5221;
    org$pandalanguage$pandac$ASTNode* $tmp5223;
    org$pandalanguage$pandac$ASTNode* $tmp5224;
    panda$core$Int64 $tmp5228;
    org$pandalanguage$pandac$ASTNode* $tmp5230;
    org$pandalanguage$pandac$ASTNode* $tmp5231;
    panda$core$Int64 $tmp5235;
    org$pandalanguage$pandac$ASTNode* $tmp5237;
    org$pandalanguage$pandac$ASTNode* $tmp5238;
    panda$core$Int64 $tmp5243;
    panda$core$Int64 $tmp5246;
    org$pandalanguage$pandac$ASTNode* $tmp5249;
    org$pandalanguage$pandac$ASTNode* $tmp5250;
    panda$core$Int64 $tmp5254;
    org$pandalanguage$pandac$ASTNode* $tmp5256;
    org$pandalanguage$pandac$ASTNode* $tmp5257;
    panda$core$Int64 $tmp5264;
    panda$core$Int64 $tmp5267;
    panda$core$Int64 $tmp5271;
    panda$core$Int64 $tmp5275;
    org$pandalanguage$pandac$ASTNode* $tmp5278;
    org$pandalanguage$pandac$ASTNode* $tmp5279;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5283;
    panda$core$Int64 $tmp5284;
    org$pandalanguage$pandac$ASTNode* $tmp5286;
    int $tmp5196;
    {
        org$pandalanguage$pandac$parser$Token $tmp5198 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5197 = $tmp5198;
        memset(&dc5199, 0, sizeof(dc5199));
        panda$core$Int64$init$builtin_int64(&$tmp5200, 12);
        panda$core$Bit $tmp5201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5197.kind.$rawValue, $tmp5200);
        if ($tmp5201.value) {
        {
            {
                $tmp5202 = dc5199;
                org$pandalanguage$pandac$ASTNode* $tmp5205 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5204 = $tmp5205;
                $tmp5203 = $tmp5204;
                dc5199 = $tmp5203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5202));
            }
            if (((panda$core$Bit) { dc5199 == NULL }).value) {
            {
                $tmp5207 = NULL;
                $returnValue5206 = $tmp5207;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5207));
                $tmp5196 = 0;
                goto $l5194;
                $l5208:;
                return $returnValue5206;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5210 = dc5199;
                $tmp5211 = NULL;
                dc5199 = $tmp5211;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5210));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5215 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5214 = $tmp5215;
        $tmp5213 = $tmp5214;
        a5212 = $tmp5213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5214));
        if (((panda$core$Bit) { a5212 == NULL }).value) {
        {
            $tmp5216 = NULL;
            $returnValue5206 = $tmp5216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5216));
            $tmp5196 = 1;
            goto $l5194;
            $l5217:;
            return $returnValue5206;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5220 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2446_95219 = $tmp5220.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5221, 18);
            panda$core$Bit $tmp5222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5221);
            if ($tmp5222.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5225 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5224 = $tmp5225;
                $tmp5223 = $tmp5224;
                $returnValue5206 = $tmp5223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5224));
                $tmp5196 = 2;
                goto $l5194;
                $l5226:;
                return $returnValue5206;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5228, 19);
            panda$core$Bit $tmp5229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5228);
            if ($tmp5229.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5232 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5231 = $tmp5232;
                $tmp5230 = $tmp5231;
                $returnValue5206 = $tmp5230;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5230));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5231));
                $tmp5196 = 3;
                goto $l5194;
                $l5233:;
                return $returnValue5206;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5235, 20);
            panda$core$Bit $tmp5236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5235);
            if ($tmp5236.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5239 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5238 = $tmp5239;
                $tmp5237 = $tmp5238;
                $returnValue5206 = $tmp5237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5238));
                $tmp5196 = 4;
                goto $l5194;
                $l5240:;
                return $returnValue5206;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5243, 22);
            panda$core$Bit $tmp5244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5243);
            bool $tmp5242 = $tmp5244.value;
            if ($tmp5242) goto $l5245;
            panda$core$Int64$init$builtin_int64(&$tmp5246, 21);
            panda$core$Bit $tmp5247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5246);
            $tmp5242 = $tmp5247.value;
            $l5245:;
            panda$core$Bit $tmp5248 = { $tmp5242 };
            if ($tmp5248.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5251 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5250 = $tmp5251;
                $tmp5249 = $tmp5250;
                $returnValue5206 = $tmp5249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5250));
                $tmp5196 = 5;
                goto $l5194;
                $l5252:;
                return $returnValue5206;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5254, 23);
            panda$core$Bit $tmp5255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5254);
            if ($tmp5255.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5258 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5257 = $tmp5258;
                $tmp5256 = $tmp5257;
                $returnValue5206 = $tmp5256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5257));
                $tmp5196 = 6;
                goto $l5194;
                $l5259:;
                return $returnValue5206;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5264, 24);
            panda$core$Bit $tmp5265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5264);
            bool $tmp5263 = $tmp5265.value;
            if ($tmp5263) goto $l5266;
            panda$core$Int64$init$builtin_int64(&$tmp5267, 25);
            panda$core$Bit $tmp5268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5267);
            $tmp5263 = $tmp5268.value;
            $l5266:;
            panda$core$Bit $tmp5269 = { $tmp5263 };
            bool $tmp5262 = $tmp5269.value;
            if ($tmp5262) goto $l5270;
            panda$core$Int64$init$builtin_int64(&$tmp5271, 26);
            panda$core$Bit $tmp5272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5271);
            $tmp5262 = $tmp5272.value;
            $l5270:;
            panda$core$Bit $tmp5273 = { $tmp5262 };
            bool $tmp5261 = $tmp5273.value;
            if ($tmp5261) goto $l5274;
            panda$core$Int64$init$builtin_int64(&$tmp5275, 27);
            panda$core$Bit $tmp5276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95219.$rawValue, $tmp5275);
            $tmp5261 = $tmp5276.value;
            $l5274:;
            panda$core$Bit $tmp5277 = { $tmp5261 };
            if ($tmp5277.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5280 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5199, a5212);
                $tmp5279 = $tmp5280;
                $tmp5278 = $tmp5279;
                $returnValue5206 = $tmp5278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5279));
                $tmp5196 = 7;
                goto $l5194;
                $l5281:;
                return $returnValue5206;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5284, 18);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5283, $tmp5284);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5283, &$s5285);
                $tmp5286 = NULL;
                $returnValue5206 = $tmp5286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5286));
                $tmp5196 = 8;
                goto $l5194;
                $l5287:;
                return $returnValue5206;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5196 = -1;
    goto $l5194;
    $l5194:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5212));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5199));
    a5212 = NULL;
    switch ($tmp5196) {
        case 7: goto $l5281;
        case 2: goto $l5226;
        case 8: goto $l5287;
        case 6: goto $l5259;
        case 1: goto $l5217;
        case 4: goto $l5240;
        case 5: goto $l5252;
        case 3: goto $l5233;
        case -1: goto $l5289;
        case 0: goto $l5208;
    }
    $l5289:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5294;
    panda$core$Int64 $tmp5295;
    org$pandalanguage$pandac$ASTNode* $returnValue5298;
    org$pandalanguage$pandac$ASTNode* $tmp5299;
    org$pandalanguage$pandac$parser$Token$nullable name5302;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5303;
    panda$core$Int64 $tmp5304;
    org$pandalanguage$pandac$ASTNode* $tmp5307;
    panda$collections$ImmutableArray* generics5310 = NULL;
    panda$core$Int64 $tmp5312;
    panda$collections$ImmutableArray* $tmp5314;
    panda$collections$ImmutableArray* $tmp5315;
    panda$collections$ImmutableArray* $tmp5316;
    org$pandalanguage$pandac$ASTNode* $tmp5318;
    panda$collections$ImmutableArray* $tmp5321;
    panda$collections$ImmutableArray* $tmp5322;
    panda$collections$ImmutableArray* stypes5323 = NULL;
    panda$core$Int64 $tmp5325;
    panda$collections$ImmutableArray* $tmp5327;
    panda$collections$ImmutableArray* $tmp5328;
    panda$collections$ImmutableArray* $tmp5329;
    org$pandalanguage$pandac$ASTNode* $tmp5331;
    panda$collections$ImmutableArray* $tmp5334;
    panda$collections$ImmutableArray* $tmp5335;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5336;
    panda$core$Int64 $tmp5337;
    org$pandalanguage$pandac$ASTNode* $tmp5340;
    panda$collections$Array* members5343 = NULL;
    panda$collections$Array* $tmp5344;
    panda$collections$Array* $tmp5345;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5350;
    panda$core$Int64 $tmp5351;
    org$pandalanguage$pandac$ASTNode* member5356 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5357;
    org$pandalanguage$pandac$ASTNode* $tmp5358;
    org$pandalanguage$pandac$ASTNode* $tmp5360;
    org$pandalanguage$pandac$ASTNode* $tmp5365;
    org$pandalanguage$pandac$ASTNode* $tmp5366;
    panda$core$Int64 $tmp5368;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5369;
    panda$core$Int64 $tmp5370;
    panda$core$String* $tmp5371;
    panda$collections$ImmutableArray* $tmp5373;
    int $tmp5292;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5295, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5294, $tmp5295);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5297 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5294, &$s5296);
        start5293 = $tmp5297;
        if (((panda$core$Bit) { !start5293.nonnull }).value) {
        {
            $tmp5299 = NULL;
            $returnValue5298 = $tmp5299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5299));
            $tmp5292 = 0;
            goto $l5290;
            $l5300:;
            return $returnValue5298;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5304, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5303, $tmp5304);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5306 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5303, &$s5305);
        name5302 = $tmp5306;
        if (((panda$core$Bit) { !name5302.nonnull }).value) {
        {
            $tmp5307 = NULL;
            $returnValue5298 = $tmp5307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5307));
            $tmp5292 = 1;
            goto $l5290;
            $l5308:;
            return $returnValue5298;
        }
        }
        memset(&generics5310, 0, sizeof(generics5310));
        org$pandalanguage$pandac$parser$Token $tmp5311 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5312, 63);
        panda$core$Bit $tmp5313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5311.kind.$rawValue, $tmp5312);
        if ($tmp5313.value) {
        {
            {
                $tmp5314 = generics5310;
                panda$collections$ImmutableArray* $tmp5317 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5316 = $tmp5317;
                $tmp5315 = $tmp5316;
                generics5310 = $tmp5315;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5315));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5314));
            }
            if (((panda$core$Bit) { generics5310 == NULL }).value) {
            {
                $tmp5318 = NULL;
                $returnValue5298 = $tmp5318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5318));
                $tmp5292 = 2;
                goto $l5290;
                $l5319:;
                return $returnValue5298;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5321 = generics5310;
                $tmp5322 = NULL;
                generics5310 = $tmp5322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5321));
            }
        }
        }
        memset(&stypes5323, 0, sizeof(stypes5323));
        org$pandalanguage$pandac$parser$Token $tmp5324 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5325, 96);
        panda$core$Bit $tmp5326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5324.kind.$rawValue, $tmp5325);
        if ($tmp5326.value) {
        {
            {
                $tmp5327 = stypes5323;
                panda$collections$ImmutableArray* $tmp5330 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5329 = $tmp5330;
                $tmp5328 = $tmp5329;
                stypes5323 = $tmp5328;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5327));
            }
            if (((panda$core$Bit) { stypes5323 == NULL }).value) {
            {
                $tmp5331 = NULL;
                $returnValue5298 = $tmp5331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5331));
                $tmp5292 = 3;
                goto $l5290;
                $l5332:;
                return $returnValue5298;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5334 = stypes5323;
                $tmp5335 = NULL;
                stypes5323 = $tmp5335;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5334));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5337, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5336, $tmp5337);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5339 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5336, &$s5338);
        if (((panda$core$Bit) { !$tmp5339.nonnull }).value) {
        {
            $tmp5340 = NULL;
            $returnValue5298 = $tmp5340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5340));
            $tmp5292 = 4;
            goto $l5290;
            $l5341:;
            return $returnValue5298;
        }
        }
        panda$collections$Array* $tmp5346 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5346);
        $tmp5345 = $tmp5346;
        $tmp5344 = $tmp5345;
        members5343 = $tmp5344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5345));
        $l5347:;
        panda$core$Int64$init$builtin_int64(&$tmp5351, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5350, $tmp5351);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5352 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5350);
        bool $tmp5349 = ((panda$core$Bit) { !$tmp5352.nonnull }).value;
        if (!$tmp5349) goto $l5348;
        {
            int $tmp5355;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5359 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5358 = $tmp5359;
                $tmp5357 = $tmp5358;
                member5356 = $tmp5357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5358));
                if (((panda$core$Bit) { member5356 == NULL }).value) {
                {
                    $tmp5360 = NULL;
                    $returnValue5298 = $tmp5360;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5360));
                    $tmp5355 = 0;
                    goto $l5353;
                    $l5361:;
                    $tmp5292 = 5;
                    goto $l5290;
                    $l5362:;
                    return $returnValue5298;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5343, ((panda$core$Object*) member5356));
            }
            $tmp5355 = -1;
            goto $l5353;
            $l5353:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5356));
            member5356 = NULL;
            switch ($tmp5355) {
                case -1: goto $l5364;
                case 0: goto $l5361;
            }
            $l5364:;
        }
        goto $l5347;
        $l5348:;
        org$pandalanguage$pandac$ASTNode* $tmp5367 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5368, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5370, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5369, $tmp5370);
        panda$core$String* $tmp5372 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5302.value));
        $tmp5371 = $tmp5372;
        panda$collections$ImmutableArray* $tmp5374 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5343);
        $tmp5373 = $tmp5374;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5367, $tmp5368, ((org$pandalanguage$pandac$parser$Token) start5293.value).position, p_doccomment, p_annotations, $tmp5369, $tmp5371, generics5310, stypes5323, $tmp5373);
        $tmp5366 = $tmp5367;
        $tmp5365 = $tmp5366;
        $returnValue5298 = $tmp5365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5371));
        $tmp5292 = 6;
        goto $l5290;
        $l5375:;
        return $returnValue5298;
    }
    $l5290:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5310));
    members5343 = NULL;
    switch ($tmp5292) {
        case 1: goto $l5308;
        case 4: goto $l5341;
        case 5: goto $l5362;
        case 2: goto $l5319;
        case 0: goto $l5300;
        case 6: goto $l5375;
        case 3: goto $l5332;
    }
    $l5377:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5381;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5382;
    panda$core$Int64 $tmp5383;
    org$pandalanguage$pandac$ASTNode* $returnValue5386;
    org$pandalanguage$pandac$ASTNode* $tmp5387;
    org$pandalanguage$pandac$parser$Token$nullable name5390;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5391;
    panda$core$Int64 $tmp5392;
    org$pandalanguage$pandac$ASTNode* $tmp5395;
    panda$collections$ImmutableArray* generics5398 = NULL;
    panda$core$Int64 $tmp5400;
    panda$collections$ImmutableArray* $tmp5402;
    panda$collections$ImmutableArray* $tmp5403;
    panda$collections$ImmutableArray* $tmp5404;
    org$pandalanguage$pandac$ASTNode* $tmp5406;
    panda$collections$ImmutableArray* $tmp5409;
    panda$collections$ImmutableArray* $tmp5410;
    panda$collections$ImmutableArray* $tmp5411;
    panda$collections$Array* intfs5413 = NULL;
    panda$collections$Array* $tmp5414;
    panda$collections$Array* $tmp5415;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5417;
    panda$core$Int64 $tmp5418;
    org$pandalanguage$pandac$ASTNode* t5423 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5424;
    org$pandalanguage$pandac$ASTNode* $tmp5425;
    org$pandalanguage$pandac$ASTNode* $tmp5427;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5434;
    panda$core$Int64 $tmp5435;
    org$pandalanguage$pandac$ASTNode* $tmp5437;
    org$pandalanguage$pandac$ASTNode* $tmp5438;
    org$pandalanguage$pandac$ASTNode* $tmp5439;
    org$pandalanguage$pandac$ASTNode* $tmp5441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5446;
    panda$core$Int64 $tmp5447;
    org$pandalanguage$pandac$ASTNode* $tmp5450;
    panda$collections$Array* members5453 = NULL;
    panda$collections$Array* $tmp5454;
    panda$collections$Array* $tmp5455;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5460;
    panda$core$Int64 $tmp5461;
    org$pandalanguage$pandac$ASTNode* member5466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5467;
    org$pandalanguage$pandac$ASTNode* $tmp5468;
    org$pandalanguage$pandac$ASTNode* $tmp5470;
    org$pandalanguage$pandac$ASTNode* $tmp5475;
    org$pandalanguage$pandac$ASTNode* $tmp5476;
    panda$core$Int64 $tmp5478;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5479;
    panda$core$Int64 $tmp5480;
    panda$core$String* $tmp5481;
    panda$collections$ImmutableArray* $tmp5483;
    panda$collections$ImmutableArray* $tmp5485;
    int $tmp5380;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5383, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5382, $tmp5383);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5385 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5382, &$s5384);
        start5381 = $tmp5385;
        if (((panda$core$Bit) { !start5381.nonnull }).value) {
        {
            $tmp5387 = NULL;
            $returnValue5386 = $tmp5387;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5387));
            $tmp5380 = 0;
            goto $l5378;
            $l5388:;
            return $returnValue5386;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5392, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5391, $tmp5392);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5394 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5391, &$s5393);
        name5390 = $tmp5394;
        if (((panda$core$Bit) { !name5390.nonnull }).value) {
        {
            $tmp5395 = NULL;
            $returnValue5386 = $tmp5395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5395));
            $tmp5380 = 1;
            goto $l5378;
            $l5396:;
            return $returnValue5386;
        }
        }
        memset(&generics5398, 0, sizeof(generics5398));
        org$pandalanguage$pandac$parser$Token $tmp5399 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5400, 63);
        panda$core$Bit $tmp5401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5399.kind.$rawValue, $tmp5400);
        if ($tmp5401.value) {
        {
            {
                $tmp5402 = generics5398;
                panda$collections$ImmutableArray* $tmp5405 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5404 = $tmp5405;
                $tmp5403 = $tmp5404;
                generics5398 = $tmp5403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5402));
            }
            if (((panda$core$Bit) { generics5398 == NULL }).value) {
            {
                $tmp5406 = NULL;
                $returnValue5386 = $tmp5406;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5406));
                $tmp5380 = 2;
                goto $l5378;
                $l5407:;
                return $returnValue5386;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5409 = generics5398;
                panda$collections$ImmutableArray* $tmp5412 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5412);
                $tmp5411 = $tmp5412;
                $tmp5410 = $tmp5411;
                generics5398 = $tmp5410;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5409));
            }
        }
        }
        panda$collections$Array* $tmp5416 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5416);
        $tmp5415 = $tmp5416;
        $tmp5414 = $tmp5415;
        intfs5413 = $tmp5414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5415));
        panda$core$Int64$init$builtin_int64(&$tmp5418, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5417, $tmp5418);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5419 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5417);
        if (((panda$core$Bit) { $tmp5419.nonnull }).value) {
        {
            int $tmp5422;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5426 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5425 = $tmp5426;
                $tmp5424 = $tmp5425;
                t5423 = $tmp5424;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5425));
                if (((panda$core$Bit) { t5423 == NULL }).value) {
                {
                    $tmp5427 = NULL;
                    $returnValue5386 = $tmp5427;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5427));
                    $tmp5422 = 0;
                    goto $l5420;
                    $l5428:;
                    $tmp5380 = 3;
                    goto $l5378;
                    $l5429:;
                    return $returnValue5386;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5413, ((panda$core$Object*) t5423));
                $l5431:;
                panda$core$Int64$init$builtin_int64(&$tmp5435, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5434, $tmp5435);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5436 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5434);
                bool $tmp5433 = ((panda$core$Bit) { $tmp5436.nonnull }).value;
                if (!$tmp5433) goto $l5432;
                {
                    {
                        $tmp5437 = t5423;
                        org$pandalanguage$pandac$ASTNode* $tmp5440 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5439 = $tmp5440;
                        $tmp5438 = $tmp5439;
                        t5423 = $tmp5438;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5439));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5437));
                    }
                    if (((panda$core$Bit) { t5423 == NULL }).value) {
                    {
                        $tmp5441 = NULL;
                        $returnValue5386 = $tmp5441;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5441));
                        $tmp5422 = 1;
                        goto $l5420;
                        $l5442:;
                        $tmp5380 = 4;
                        goto $l5378;
                        $l5443:;
                        return $returnValue5386;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5413, ((panda$core$Object*) t5423));
                }
                goto $l5431;
                $l5432:;
            }
            $tmp5422 = -1;
            goto $l5420;
            $l5420:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5423));
            t5423 = NULL;
            switch ($tmp5422) {
                case 0: goto $l5428;
                case 1: goto $l5442;
                case -1: goto $l5445;
            }
            $l5445:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5447, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5446, $tmp5447);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5449 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5446, &$s5448);
        if (((panda$core$Bit) { !$tmp5449.nonnull }).value) {
        {
            $tmp5450 = NULL;
            $returnValue5386 = $tmp5450;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5450));
            $tmp5380 = 5;
            goto $l5378;
            $l5451:;
            return $returnValue5386;
        }
        }
        panda$collections$Array* $tmp5456 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5456);
        $tmp5455 = $tmp5456;
        $tmp5454 = $tmp5455;
        members5453 = $tmp5454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5455));
        $l5457:;
        panda$core$Int64$init$builtin_int64(&$tmp5461, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5460, $tmp5461);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5462 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5460);
        bool $tmp5459 = ((panda$core$Bit) { !$tmp5462.nonnull }).value;
        if (!$tmp5459) goto $l5458;
        {
            int $tmp5465;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5469 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5468 = $tmp5469;
                $tmp5467 = $tmp5468;
                member5466 = $tmp5467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5468));
                if (((panda$core$Bit) { member5466 == NULL }).value) {
                {
                    $tmp5470 = NULL;
                    $returnValue5386 = $tmp5470;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5470));
                    $tmp5465 = 0;
                    goto $l5463;
                    $l5471:;
                    $tmp5380 = 6;
                    goto $l5378;
                    $l5472:;
                    return $returnValue5386;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5453, ((panda$core$Object*) member5466));
            }
            $tmp5465 = -1;
            goto $l5463;
            $l5463:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5466));
            member5466 = NULL;
            switch ($tmp5465) {
                case -1: goto $l5474;
                case 0: goto $l5471;
            }
            $l5474:;
        }
        goto $l5457;
        $l5458:;
        org$pandalanguage$pandac$ASTNode* $tmp5477 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5478, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5480, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5479, $tmp5480);
        panda$core$String* $tmp5482 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5390.value));
        $tmp5481 = $tmp5482;
        panda$collections$ImmutableArray* $tmp5484 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5413);
        $tmp5483 = $tmp5484;
        panda$collections$ImmutableArray* $tmp5486 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5453);
        $tmp5485 = $tmp5486;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5477, $tmp5478, ((org$pandalanguage$pandac$parser$Token) start5381.value).position, p_doccomment, p_annotations, $tmp5479, $tmp5481, generics5398, $tmp5483, $tmp5485);
        $tmp5476 = $tmp5477;
        $tmp5475 = $tmp5476;
        $returnValue5386 = $tmp5475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5481));
        $tmp5380 = 7;
        goto $l5378;
        $l5487:;
        return $returnValue5386;
    }
    $l5378:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5453));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5413));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5398));
    intfs5413 = NULL;
    members5453 = NULL;
    switch ($tmp5380) {
        case 1: goto $l5396;
        case 7: goto $l5487;
        case 4: goto $l5443;
        case 2: goto $l5407;
        case 6: goto $l5472;
        case 5: goto $l5451;
        case 0: goto $l5388;
        case 3: goto $l5429;
    }
    $l5489:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2570_95490;
    panda$core$Int64 $tmp5492;
    org$pandalanguage$pandac$ASTNode* $returnValue5494;
    org$pandalanguage$pandac$ASTNode* $tmp5495;
    org$pandalanguage$pandac$ASTNode* $tmp5496;
    org$pandalanguage$pandac$ASTNode* $tmp5499;
    org$pandalanguage$pandac$ASTNode* $tmp5500;
    {
        org$pandalanguage$pandac$parser$Token $tmp5491 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2570_95490 = $tmp5491.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5492, 16);
        panda$core$Bit $tmp5493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2570_95490.$rawValue, $tmp5492);
        if ($tmp5493.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5497 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5496 = $tmp5497;
            $tmp5495 = $tmp5496;
            $returnValue5494 = $tmp5495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5496));
            return $returnValue5494;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5501 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5500 = $tmp5501;
            $tmp5499 = $tmp5500;
            $returnValue5494 = $tmp5499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5500));
            return $returnValue5494;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5506 = NULL;
    panda$collections$Array* $tmp5507;
    panda$collections$Array* $tmp5508;
    panda$core$Int64 $tmp5511;
    org$pandalanguage$pandac$ASTNode* decl5516 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5517;
    org$pandalanguage$pandac$ASTNode* $tmp5518;
    panda$core$Int64 $tmp5525;
    org$pandalanguage$pandac$ASTNode* entry5530 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5531;
    org$pandalanguage$pandac$ASTNode* $tmp5532;
    org$pandalanguage$pandac$ASTNode* $returnValue5534;
    org$pandalanguage$pandac$ASTNode* $tmp5535;
    org$pandalanguage$pandac$ASTNode* $tmp5544;
    org$pandalanguage$pandac$ASTNode* $tmp5545;
    panda$core$Int64 $tmp5547;
    panda$collections$ImmutableArray* $tmp5548;
    int $tmp5505;
    {
        panda$collections$Array* $tmp5509 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5509);
        $tmp5508 = $tmp5509;
        $tmp5507 = $tmp5508;
        entries5506 = $tmp5507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5508));
        org$pandalanguage$pandac$parser$Token $tmp5510 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5511, 15);
        panda$core$Bit $tmp5512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5510.kind.$rawValue, $tmp5511);
        if ($tmp5512.value) {
        {
            int $tmp5515;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5519 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5518 = $tmp5519;
                $tmp5517 = $tmp5518;
                decl5516 = $tmp5517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5518));
                if (((panda$core$Bit) { decl5516 != NULL }).value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(entries5506, ((panda$core$Object*) decl5516));
                }
                }
            }
            $tmp5515 = -1;
            goto $l5513;
            $l5513:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5516));
            decl5516 = NULL;
            switch ($tmp5515) {
                case -1: goto $l5520;
            }
            $l5520:;
        }
        }
        $l5521:;
        org$pandalanguage$pandac$parser$Token $tmp5524 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5525, 0);
        panda$core$Bit $tmp5526 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5524.kind.$rawValue, $tmp5525);
        bool $tmp5523 = $tmp5526.value;
        if (!$tmp5523) goto $l5522;
        {
            int $tmp5529;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5533 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5532 = $tmp5533;
                $tmp5531 = $tmp5532;
                entry5530 = $tmp5531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5532));
                if (((panda$core$Bit) { entry5530 == NULL }).value) {
                {
                    $tmp5535 = NULL;
                    $returnValue5534 = $tmp5535;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5535));
                    $tmp5529 = 0;
                    goto $l5527;
                    $l5536:;
                    $tmp5505 = 0;
                    goto $l5503;
                    $l5537:;
                    return $returnValue5534;
                }
                }
                panda$core$Bit $tmp5539 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5539.value) goto $l5540; else goto $l5541;
                $l5541:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5542, (panda$core$Int64) { 2594 });
                abort();
                $l5540:;
                panda$collections$Array$add$panda$collections$Array$T(entries5506, ((panda$core$Object*) entry5530));
            }
            $tmp5529 = -1;
            goto $l5527;
            $l5527:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5530));
            entry5530 = NULL;
            switch ($tmp5529) {
                case 0: goto $l5536;
                case -1: goto $l5543;
            }
            $l5543:;
        }
        goto $l5521;
        $l5522:;
        org$pandalanguage$pandac$ASTNode* $tmp5546 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5547, 17);
        panda$collections$ImmutableArray* $tmp5549 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5506);
        $tmp5548 = $tmp5549;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5546, $tmp5547, $tmp5548);
        $tmp5545 = $tmp5546;
        $tmp5544 = $tmp5545;
        $returnValue5534 = $tmp5544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5548));
        $tmp5505 = 1;
        goto $l5503;
        $l5550:;
        return $returnValue5534;
    }
    $l5503:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5506));
    entries5506 = NULL;
    switch ($tmp5505) {
        case 1: goto $l5550;
        case 0: goto $l5537;
    }
    $l5552:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5555;
    {
    }
    $tmp5555 = -1;
    goto $l5553;
    $l5553:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5555) {
        case -1: goto $l5556;
    }
    $l5556:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->syntaxHighlighter));
}

