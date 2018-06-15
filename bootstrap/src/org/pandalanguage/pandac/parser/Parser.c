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
#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/SyntaxToken.h"
#include "panda/collections/Array.h"
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
#include "org/pandalanguage/regex/RegexLexer.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn31)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn43)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind);
typedef void (*$fn50)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind);
typedef void (*$fn125)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn126)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn168)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn169)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn267)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn334)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn456)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn536)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn544)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn553)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn561)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn667)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn751)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn759)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn768)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn783)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn810)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn818)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn833)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2042)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2296)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3556)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3583)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3633)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4753)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    panda$core$String* $tmp41;
    org$pandalanguage$pandac$parser$Token $returnValue44;
    org$pandalanguage$pandac$parser$Token result46;
    panda$core$String* $tmp48;
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
            panda$core$String* $tmp42 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result39);
            $tmp41 = $tmp42;
            (($fn43) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp41, result39.kind);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        }
        }
        $returnValue44 = result39;
        return $returnValue44;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp47 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result46 = $tmp47;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        panda$core$String* $tmp49 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result46);
        $tmp48 = $tmp49;
        (($fn50) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp48, result46.kind);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    }
    }
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result46);
    }
    }
    $returnValue44 = result46;
    return $returnValue44;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result54;
    org$pandalanguage$pandac$parser$Token$Kind $match$99_1356;
    panda$core$Int64 $tmp57;
    panda$core$Int64 $tmp59;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto64 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp65;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp66;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp68;
    panda$core$Int64 $tmp69;
    org$pandalanguage$pandac$parser$Token t72;
    org$pandalanguage$pandac$parser$Token$Kind $match$106_2574;
    panda$core$Int64 $tmp75;
    panda$core$String* $tmp77;
    panda$core$Char8 $tmp79;
    panda$core$UInt8 $tmp80;
    panda$core$Int64 $tmp82;
    org$pandalanguage$pandac$parser$Token $returnValue84;
    panda$core$Int64 $tmp88;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto93 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp94;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp95;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp97;
    panda$core$Int64 $tmp98;
    org$pandalanguage$pandac$parser$Token t101;
    org$pandalanguage$pandac$parser$Token$Kind $match$119_25103;
    panda$core$Int64 $tmp104;
    panda$core$Int64 $tmp106;
    panda$core$Bit $tmp109;
    $l52:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result54 = $tmp55;
        {
            $match$99_1356 = result54.kind;
            panda$core$Int64$init$builtin_int64(&$tmp57, 12);
            panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_1356.$rawValue, $tmp57);
            if ($tmp58.value) {
            {
                goto $l52;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp59, 8);
            panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_1356.$rawValue, $tmp59);
            if ($tmp60.value) {
            {
                int $tmp63;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp67 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp69, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp68, $tmp69);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp67, self, $tmp68);
                    $tmp66 = $tmp67;
                    $tmp65 = $tmp66;
                    auto64 = $tmp65;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                    $l70:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp73 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        t72 = $tmp73;
                        {
                            $match$106_2574 = t72.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp75, 12);
                            panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_2574.$rawValue, $tmp75);
                            if ($tmp76.value) {
                            {
                                panda$core$String* $tmp78 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t72);
                                $tmp77 = $tmp78;
                                panda$core$UInt8$init$builtin_uint8(&$tmp80, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp79, $tmp80);
                                panda$core$Bit $tmp81 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp77, $tmp79);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
                                if ($tmp81.value) {
                                {
                                    goto $l71;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp82, 0);
                            panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_2574.$rawValue, $tmp82);
                            if ($tmp83.value) {
                            {
                                $returnValue84 = t72;
                                $tmp63 = 0;
                                goto $l61;
                                $l85:;
                                return $returnValue84;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l71:;
                }
                $tmp63 = -1;
                goto $l61;
                $l61:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto64));
                auto64 = NULL;
                switch ($tmp63) {
                    case -1: goto $l87;
                    case 0: goto $l85;
                }
                $l87:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp88, 9);
            panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_1356.$rawValue, $tmp88);
            if ($tmp89.value) {
            {
                int $tmp92;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp96 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp98, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp97, $tmp98);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp96, self, $tmp97);
                    $tmp95 = $tmp96;
                    $tmp94 = $tmp95;
                    auto93 = $tmp94;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
                    $l99:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp102 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        t101 = $tmp102;
                        {
                            $match$119_25103 = t101.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp104, 10);
                            panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_25103.$rawValue, $tmp104);
                            if ($tmp105.value) {
                            {
                                goto $l100;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp106, 0);
                            panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_25103.$rawValue, $tmp106);
                            if ($tmp107.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result54, &$s108);
                                panda$core$Bit$init$builtin_bit(&$tmp109, false);
                                self->reportErrors = $tmp109;
                                $returnValue84 = t101;
                                $tmp92 = 0;
                                goto $l90;
                                $l110:;
                                return $returnValue84;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l100:;
                }
                $tmp92 = -1;
                goto $l90;
                $l90:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto93));
                auto93 = NULL;
                switch ($tmp92) {
                    case -1: goto $l112;
                    case 0: goto $l110;
                }
                $l112:;
            }
            }
            else {
            {
                $returnValue84 = result54;
                return $returnValue84;
            }
            }
            }
            }
        }
    }
    }
    $l53:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Object* $tmp117;
    panda$core$Int64 $tmp119;
    panda$core$String* $tmp122;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        $l114:;
        panda$core$Int64 $tmp118 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
        panda$core$Int64$init$builtin_int64(&$tmp119, 1);
        panda$core$Int64 $tmp120 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp118, $tmp119);
        panda$core$Object* $tmp121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp120);
        $tmp117 = $tmp121;
        panda$core$String* $tmp123 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, p_token);
        $tmp122 = $tmp123;
        panda$core$Bit $tmp124 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken*) $tmp117)->text, $tmp122);
        bool $tmp116 = $tmp124.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object($tmp117);
        if (!$tmp116) goto $l115;
        {
            (($fn125) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l114;
        $l115:;
        (($fn126) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp128;
    org$pandalanguage$pandac$parser$Token $returnValue131;
    panda$core$Int64 $tmp133;
    panda$core$Int64 $tmp127 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp128, 0);
    panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp127, $tmp128);
    if ($tmp129.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp130 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp130);
    }
    }
    panda$core$Int64 $tmp132 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp133, 1);
    panda$core$Int64 $tmp134 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp132, $tmp133);
    org$pandalanguage$pandac$parser$Token $tmp135 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp134);
    $returnValue131 = $tmp135;
    return $returnValue131;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result137;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue140;
    org$pandalanguage$pandac$parser$Token $tmp138 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result137 = $tmp138;
    panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result137.kind.$rawValue, p_kind.$rawValue);
    if ($tmp139.value) {
    {
        $returnValue140 = ((org$pandalanguage$pandac$parser$Token$nullable) { result137, true });
        return $returnValue140;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result137);
    $returnValue140 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue140;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result143;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue146;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp156;
    org$pandalanguage$pandac$parser$Token $tmp144 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result143 = $tmp144;
    panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result143.kind.$rawValue, p_kind.$rawValue);
    if ($tmp145.value) {
    {
        $returnValue146 = ((org$pandalanguage$pandac$parser$Token$nullable) { result143, true });
        return $returnValue146;
    }
    }
    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s152, p_expected);
    $tmp151 = $tmp153;
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s154);
    $tmp150 = $tmp155;
    panda$core$String* $tmp157 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result143);
    $tmp156 = $tmp157;
    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, $tmp156);
    $tmp149 = $tmp158;
    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s159);
    $tmp148 = $tmp160;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result143, $tmp148);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
    $returnValue146 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue146;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp166;
    panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp162 = $tmp163.value;
    if (!$tmp162) goto $l164;
    $tmp162 = self->reportErrors.value;
    $l164:;
    panda$core$Bit $tmp165 = { $tmp162 };
    if ($tmp165.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp167 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp167, self->path, p_token.position, p_msg);
        $tmp166 = $tmp167;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn168) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn169) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp182;
    int $tmp172;
    {
        panda$core$Bit $tmp173 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp173.value) goto $l174; else goto $l175;
        $l175:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s176, (panda$core$Int64) { 190 }, &$s177);
        abort();
        $l174:;
        panda$core$Bit $tmp178 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp178.value) goto $l179; else goto $l180;
        $l180:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s181, (panda$core$Int64) { 191 });
        abort();
        $l179:;
        panda$core$Bit$init$builtin_bit(&$tmp182, true);
        self->inSpeculative = $tmp182;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp172 = -1;
    goto $l170;
    $l170:;
    if (self->inSpeculative.value) goto $l184; else goto $l185;
    $l185:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s186, (panda$core$Int64) { 190 }, &$s187);
    abort();
    $l184:;
    switch ($tmp172) {
        case -1: goto $l183;
    }
    $l183:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp195;
    int $tmp190;
    {
        if (self->inSpeculative.value) goto $l191; else goto $l192;
        $l192:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s193, (panda$core$Int64) { 199 }, &$s194);
        abort();
        $l191:;
        panda$core$Bit$init$builtin_bit(&$tmp195, false);
        self->inSpeculative = $tmp195;
    }
    $tmp190 = -1;
    goto $l188;
    $l188:;
    panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp197.value) goto $l198; else goto $l199;
    $l199:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s200, (panda$core$Int64) { 199 }, &$s201);
    abort();
    $l198:;
    switch ($tmp190) {
        case -1: goto $l196;
    }
    $l196:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp209;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp210;
    panda$core$Int64 $tmp212;
    panda$core$Int64 $tmp214;
    panda$core$Int64 $tmp215;
    panda$core$Bit $tmp216;
    int $tmp204;
    {
        if (self->inSpeculative.value) goto $l205; else goto $l206;
        $l206:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s207, (panda$core$Int64) { 205 }, &$s208);
        abort();
        $l205:;
        panda$core$Bit$init$builtin_bit(&$tmp209, false);
        self->inSpeculative = $tmp209;
        panda$core$Int64 $tmp211 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp212, 1);
        panda$core$Int64 $tmp213 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp211, $tmp212);
        panda$core$Int64$init$builtin_int64(&$tmp214, 0);
        panda$core$Int64$init$builtin_int64(&$tmp215, -1);
        panda$core$Bit$init$builtin_bit(&$tmp216, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp210, $tmp213, $tmp214, $tmp215, $tmp216);
        int64_t $tmp218 = $tmp210.start.value;
        panda$core$Int64 i217 = { $tmp218 };
        int64_t $tmp220 = $tmp210.end.value;
        int64_t $tmp221 = $tmp210.step.value;
        bool $tmp222 = $tmp210.inclusive.value;
        bool $tmp229 = $tmp221 > 0;
        if ($tmp229) goto $l227; else goto $l228;
        $l227:;
        if ($tmp222) goto $l230; else goto $l231;
        $l230:;
        if ($tmp218 <= $tmp220) goto $l223; else goto $l225;
        $l231:;
        if ($tmp218 < $tmp220) goto $l223; else goto $l225;
        $l228:;
        if ($tmp222) goto $l232; else goto $l233;
        $l232:;
        if ($tmp218 >= $tmp220) goto $l223; else goto $l225;
        $l233:;
        if ($tmp218 > $tmp220) goto $l223; else goto $l225;
        $l223:;
        {
            org$pandalanguage$pandac$parser$Token $tmp235 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i217);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp235);
        }
        $l226:;
        if ($tmp229) goto $l237; else goto $l238;
        $l237:;
        int64_t $tmp239 = $tmp220 - i217.value;
        if ($tmp222) goto $l240; else goto $l241;
        $l240:;
        if ((uint64_t) $tmp239 >= $tmp221) goto $l236; else goto $l225;
        $l241:;
        if ((uint64_t) $tmp239 > $tmp221) goto $l236; else goto $l225;
        $l238:;
        int64_t $tmp243 = i217.value - $tmp220;
        if ($tmp222) goto $l244; else goto $l245;
        $l244:;
        if ((uint64_t) $tmp243 >= -$tmp221) goto $l236; else goto $l225;
        $l245:;
        if ((uint64_t) $tmp243 > -$tmp221) goto $l236; else goto $l225;
        $l236:;
        i217.value += $tmp221;
        goto $l223;
        $l225:;
    }
    $tmp204 = -1;
    goto $l202;
    $l202:;
    panda$core$Bit $tmp248 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp248.value) goto $l249; else goto $l250;
    $l250:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s251, (panda$core$Int64) { 205 }, &$s252);
    abort();
    $l249:;
    switch ($tmp204) {
        case -1: goto $l247;
    }
    $l247:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue253;
    panda$core$String* $tmp254;
    panda$core$String* $tmp255;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp256;
    panda$core$Bit $tmp257;
    panda$core$Bit$init$builtin_bit(&$tmp257, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp256, p_token.start, p_token.end, $tmp257);
    panda$core$String* $tmp258 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp256);
    $tmp255 = $tmp258;
    $tmp254 = $tmp255;
    $returnValue253 = $tmp254;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
    return $returnValue253;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue260;
    org$pandalanguage$pandac$ASTNode* $tmp261;
    org$pandalanguage$pandac$ASTNode* $tmp263;
    org$pandalanguage$pandac$ASTNode* $tmp264;
    panda$core$Int64 $tmp266;
    org$pandalanguage$pandac$parser$Token$Kind $tmp269;
    panda$core$Int64 $tmp270;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp261 = p_chunk;
        $returnValue260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        return $returnValue260;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp265 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp266, 4);
    org$pandalanguage$pandac$Position $tmp268 = (($fn267) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp270, 51);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp269, $tmp270);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp265, $tmp266, $tmp268, p_string, $tmp269, p_chunk);
    $tmp264 = $tmp265;
    $tmp263 = $tmp264;
    $returnValue260 = $tmp263;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
    return $returnValue260;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result275 = NULL;
    panda$core$MutableString* $tmp276;
    panda$core$MutableString* $tmp277;
    org$pandalanguage$pandac$parser$Token token281;
    org$pandalanguage$pandac$parser$Token$Kind $match$227_13283;
    panda$core$Int64 $tmp284;
    panda$core$String* str289 = NULL;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$Char8 $tmp293;
    panda$core$UInt8 $tmp294;
    panda$core$String* $returnValue297;
    panda$core$String* $tmp298;
    panda$core$Int64 $tmp303;
    panda$core$String* $tmp306;
    panda$core$Int64 $tmp309;
    org$pandalanguage$pandac$parser$Token escape314;
    panda$core$Int64 $tmp316;
    panda$core$String* $tmp319;
    panda$core$String* escapeText323 = NULL;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$Char8 c327;
    panda$core$Object* $tmp328;
    panda$collections$ListView* $tmp329;
    panda$core$Int64 $tmp331;
    panda$core$Char8 $match$246_21336;
    panda$core$Char8 $tmp337;
    panda$core$UInt8 $tmp338;
    panda$core$Char8 $tmp340;
    panda$core$UInt8 $tmp341;
    panda$core$Char8 $tmp342;
    panda$core$UInt8 $tmp343;
    panda$core$Char8 $tmp345;
    panda$core$UInt8 $tmp346;
    panda$core$Char8 $tmp347;
    panda$core$UInt8 $tmp348;
    panda$core$Char8 $tmp350;
    panda$core$UInt8 $tmp351;
    panda$core$Char8 $tmp352;
    panda$core$UInt8 $tmp353;
    panda$core$Char8 $tmp355;
    panda$core$UInt8 $tmp356;
    panda$core$Char8 $tmp357;
    panda$core$UInt8 $tmp358;
    panda$core$Char8 $tmp360;
    panda$core$UInt8 $tmp361;
    panda$core$Char8 $tmp362;
    panda$core$UInt8 $tmp363;
    panda$core$Char8 $tmp365;
    panda$core$UInt8 $tmp366;
    panda$core$Char8 $tmp367;
    panda$core$UInt8 $tmp368;
    panda$core$Char8 $tmp370;
    panda$core$UInt8 $tmp371;
    panda$core$String* $tmp373;
    panda$core$String* $tmp377;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp378;
    panda$core$Bit $tmp381;
    panda$core$Int64 $tmp384;
    panda$core$String* $tmp386;
    panda$core$String* $tmp387;
    panda$core$String* $tmp391;
    int $tmp274;
    {
        panda$core$MutableString* $tmp278 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp278);
        $tmp277 = $tmp278;
        $tmp276 = $tmp277;
        result275 = $tmp276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
        $l279:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp282 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token281 = $tmp282;
            {
                $match$227_13283 = token281.kind;
                panda$core$Int64$init$builtin_int64(&$tmp284, 12);
                panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_13283.$rawValue, $tmp284);
                if ($tmp285.value) {
                {
                    int $tmp288;
                    {
                        panda$core$String* $tmp292 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token281);
                        $tmp291 = $tmp292;
                        $tmp290 = $tmp291;
                        str289 = $tmp290;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                        panda$core$UInt8$init$builtin_uint8(&$tmp294, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp293, $tmp294);
                        panda$core$Bit $tmp295 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str289, $tmp293);
                        if ($tmp295.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token281, &$s296);
                            $tmp298 = NULL;
                            $returnValue297 = $tmp298;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                            $tmp288 = 0;
                            goto $l286;
                            $l299:;
                            $tmp274 = 0;
                            goto $l272;
                            $l300:;
                            return $returnValue297;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result275, str289);
                    }
                    $tmp288 = -1;
                    goto $l286;
                    $l286:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str289));
                    str289 = NULL;
                    switch ($tmp288) {
                        case 0: goto $l299;
                        case -1: goto $l302;
                    }
                    $l302:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp303, 0);
                panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_13283.$rawValue, $tmp303);
                if ($tmp304.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token281, &$s305);
                    $tmp306 = NULL;
                    $returnValue297 = $tmp306;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                    $tmp274 = 1;
                    goto $l272;
                    $l307:;
                    return $returnValue297;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp309, 106);
                panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_13283.$rawValue, $tmp309);
                if ($tmp310.value) {
                {
                    int $tmp313;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp315 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape314 = $tmp315;
                        panda$core$Int64$init$builtin_int64(&$tmp316, 0);
                        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape314.kind.$rawValue, $tmp316);
                        if ($tmp317.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token281, &$s318);
                            $tmp319 = NULL;
                            $returnValue297 = $tmp319;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
                            $tmp313 = 0;
                            goto $l311;
                            $l320:;
                            $tmp274 = 2;
                            goto $l272;
                            $l321:;
                            return $returnValue297;
                        }
                        }
                        panda$core$String* $tmp326 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape314);
                        $tmp325 = $tmp326;
                        $tmp324 = $tmp325;
                        escapeText323 = $tmp324;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                        panda$collections$ListView* $tmp330 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText323);
                        $tmp329 = $tmp330;
                        panda$core$Int64$init$builtin_int64(&$tmp331, 0);
                        ITable* $tmp332 = $tmp329->$class->itable;
                        while ($tmp332->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp332 = $tmp332->next;
                        }
                        $fn334 $tmp333 = $tmp332->methods[0];
                        panda$core$Object* $tmp335 = $tmp333($tmp329, $tmp331);
                        $tmp328 = $tmp335;
                        c327 = ((panda$core$Char8$wrapper*) $tmp328)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp328);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                        {
                            $match$246_21336 = c327;
                            panda$core$UInt8$init$builtin_uint8(&$tmp338, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp337, $tmp338);
                            panda$core$Bit $tmp339 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp337);
                            if ($tmp339.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp341, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp340, $tmp341);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp340);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp343, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp342, $tmp343);
                            panda$core$Bit $tmp344 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp342);
                            if ($tmp344.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp346, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp345, $tmp346);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp345);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp348, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp347, $tmp348);
                            panda$core$Bit $tmp349 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp347);
                            if ($tmp349.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp351, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp350, $tmp351);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp350);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp353, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp352, $tmp353);
                            panda$core$Bit $tmp354 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp352);
                            if ($tmp354.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp356, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp355, $tmp356);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp355);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp358, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp357, $tmp358);
                            panda$core$Bit $tmp359 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp357);
                            if ($tmp359.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp361, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp360, $tmp361);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp360);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp363, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp362, $tmp363);
                            panda$core$Bit $tmp364 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp362);
                            if ($tmp364.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp366, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp365, $tmp366);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp365);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp368, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp367, $tmp368);
                            panda$core$Bit $tmp369 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$246_21336, $tmp367);
                            if ($tmp369.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp371, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp370, $tmp371);
                                panda$core$MutableString$append$panda$core$Char8(result275, $tmp370);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token281, &$s372);
                                $tmp373 = NULL;
                                $returnValue297 = $tmp373;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
                                $tmp313 = 1;
                                goto $l311;
                                $l374:;
                                $tmp274 = 3;
                                goto $l272;
                                $l375:;
                                return $returnValue297;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp379 = panda$core$String$start$R$panda$core$String$Index(escapeText323);
                        panda$core$String$Index $tmp380 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText323, $tmp379);
                        panda$core$Bit$init$builtin_bit(&$tmp381, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp378, ((panda$core$String$Index$nullable) { $tmp380, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp381);
                        panda$core$String* $tmp382 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText323, $tmp378);
                        $tmp377 = $tmp382;
                        panda$core$MutableString$append$panda$core$String(result275, $tmp377);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                    }
                    $tmp313 = -1;
                    goto $l311;
                    $l311:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText323));
                    escapeText323 = NULL;
                    switch ($tmp313) {
                        case -1: goto $l383;
                        case 1: goto $l374;
                        case 0: goto $l320;
                    }
                    $l383:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp384, 100);
                panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_13283.$rawValue, $tmp384);
                if ($tmp385.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token281);
                    panda$core$String* $tmp388 = panda$core$MutableString$finish$R$panda$core$String(result275);
                    $tmp387 = $tmp388;
                    $tmp386 = $tmp387;
                    $returnValue297 = $tmp386;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                    $tmp274 = 4;
                    goto $l272;
                    $l389:;
                    return $returnValue297;
                }
                }
                else {
                {
                    panda$core$String* $tmp392 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token281);
                    $tmp391 = $tmp392;
                    panda$core$MutableString$append$panda$core$String(result275, $tmp391);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                }
                }
                }
                }
                }
            }
        }
        }
        $l280:;
    }
    $tmp274 = -1;
    goto $l272;
    $l272:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result275));
    result275 = NULL;
    switch ($tmp274) {
        case 0: goto $l300;
        case 2: goto $l321;
        case -1: goto $l393;
        case 1: goto $l307;
        case 4: goto $l389;
        case 3: goto $l375;
    }
    $l393:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result397 = NULL;
    panda$core$MutableString* $tmp398;
    panda$core$MutableString* $tmp399;
    org$pandalanguage$pandac$parser$Token token403;
    org$pandalanguage$pandac$parser$Token$Kind $match$272_13405;
    panda$core$Int64 $tmp406;
    panda$core$String* str411 = NULL;
    panda$core$String* $tmp412;
    panda$core$String* $tmp413;
    panda$core$Char8 $tmp415;
    panda$core$UInt8 $tmp416;
    panda$core$String* $returnValue419;
    panda$core$String* $tmp420;
    panda$core$Int64 $tmp425;
    panda$core$String* $tmp428;
    panda$core$Int64 $tmp431;
    org$pandalanguage$pandac$parser$Token escape436;
    panda$core$Int64 $tmp438;
    panda$core$String* $tmp441;
    panda$core$String* escapeText445 = NULL;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$Char8 c449;
    panda$core$Object* $tmp450;
    panda$collections$ListView* $tmp451;
    panda$core$Int64 $tmp453;
    panda$core$Char8 $match$291_21458;
    panda$core$Char8 $tmp459;
    panda$core$UInt8 $tmp460;
    panda$core$Char8 $tmp462;
    panda$core$UInt8 $tmp463;
    panda$core$Char8 $tmp464;
    panda$core$UInt8 $tmp465;
    panda$core$Char8 $tmp467;
    panda$core$UInt8 $tmp468;
    panda$core$Char8 $tmp469;
    panda$core$UInt8 $tmp470;
    panda$core$Char8 $tmp472;
    panda$core$UInt8 $tmp473;
    panda$core$Char8 $tmp474;
    panda$core$UInt8 $tmp475;
    panda$core$Char8 $tmp477;
    panda$core$UInt8 $tmp478;
    panda$core$Char8 $tmp479;
    panda$core$UInt8 $tmp480;
    panda$core$Char8 $tmp482;
    panda$core$UInt8 $tmp483;
    panda$core$Char8 $tmp484;
    panda$core$UInt8 $tmp485;
    panda$core$Char8 $tmp487;
    panda$core$UInt8 $tmp488;
    panda$core$Char8 $tmp489;
    panda$core$UInt8 $tmp490;
    panda$core$Char8 $tmp492;
    panda$core$UInt8 $tmp493;
    panda$core$Char8 $tmp494;
    panda$core$UInt8 $tmp495;
    panda$core$Char8 $tmp497;
    panda$core$UInt8 $tmp498;
    panda$core$String* $tmp500;
    panda$core$String* $tmp504;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp505;
    panda$core$Bit $tmp508;
    panda$core$Int64 $tmp511;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$Int64 $tmp518;
    panda$core$String* $tmp520;
    panda$core$String* $tmp521;
    panda$core$String* $tmp525;
    int $tmp396;
    {
        panda$core$MutableString* $tmp400 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp400);
        $tmp399 = $tmp400;
        $tmp398 = $tmp399;
        result397 = $tmp398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
        $l401:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp404 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token403 = $tmp404;
            {
                $match$272_13405 = token403.kind;
                panda$core$Int64$init$builtin_int64(&$tmp406, 12);
                panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13405.$rawValue, $tmp406);
                if ($tmp407.value) {
                {
                    int $tmp410;
                    {
                        panda$core$String* $tmp414 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token403);
                        $tmp413 = $tmp414;
                        $tmp412 = $tmp413;
                        str411 = $tmp412;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                        panda$core$UInt8$init$builtin_uint8(&$tmp416, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp415, $tmp416);
                        panda$core$Bit $tmp417 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str411, $tmp415);
                        if ($tmp417.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token403, &$s418);
                            $tmp420 = NULL;
                            $returnValue419 = $tmp420;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
                            $tmp410 = 0;
                            goto $l408;
                            $l421:;
                            $tmp396 = 0;
                            goto $l394;
                            $l422:;
                            return $returnValue419;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result397, str411);
                    }
                    $tmp410 = -1;
                    goto $l408;
                    $l408:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str411));
                    str411 = NULL;
                    switch ($tmp410) {
                        case -1: goto $l424;
                        case 0: goto $l421;
                    }
                    $l424:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp425, 0);
                panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13405.$rawValue, $tmp425);
                if ($tmp426.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token403, &$s427);
                    $tmp428 = NULL;
                    $returnValue419 = $tmp428;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                    $tmp396 = 1;
                    goto $l394;
                    $l429:;
                    return $returnValue419;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp431, 106);
                panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13405.$rawValue, $tmp431);
                if ($tmp432.value) {
                {
                    int $tmp435;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp437 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape436 = $tmp437;
                        panda$core$Int64$init$builtin_int64(&$tmp438, 0);
                        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape436.kind.$rawValue, $tmp438);
                        if ($tmp439.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token403, &$s440);
                            $tmp441 = NULL;
                            $returnValue419 = $tmp441;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
                            $tmp435 = 0;
                            goto $l433;
                            $l442:;
                            $tmp396 = 2;
                            goto $l394;
                            $l443:;
                            return $returnValue419;
                        }
                        }
                        panda$core$String* $tmp448 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape436);
                        $tmp447 = $tmp448;
                        $tmp446 = $tmp447;
                        escapeText445 = $tmp446;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                        panda$collections$ListView* $tmp452 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText445);
                        $tmp451 = $tmp452;
                        panda$core$Int64$init$builtin_int64(&$tmp453, 0);
                        ITable* $tmp454 = $tmp451->$class->itable;
                        while ($tmp454->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp454 = $tmp454->next;
                        }
                        $fn456 $tmp455 = $tmp454->methods[0];
                        panda$core$Object* $tmp457 = $tmp455($tmp451, $tmp453);
                        $tmp450 = $tmp457;
                        c449 = ((panda$core$Char8$wrapper*) $tmp450)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp450);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                        {
                            $match$291_21458 = c449;
                            panda$core$UInt8$init$builtin_uint8(&$tmp460, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp459, $tmp460);
                            panda$core$Bit $tmp461 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp459);
                            if ($tmp461.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp463, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp462, $tmp463);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp462);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp465, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp464, $tmp465);
                            panda$core$Bit $tmp466 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp464);
                            if ($tmp466.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp468, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp467, $tmp468);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp467);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp470, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp469, $tmp470);
                            panda$core$Bit $tmp471 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp469);
                            if ($tmp471.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp473, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp472, $tmp473);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp472);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp475, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp474, $tmp475);
                            panda$core$Bit $tmp476 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp474);
                            if ($tmp476.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp478, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp477, $tmp478);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp477);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp480, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp479, $tmp480);
                            panda$core$Bit $tmp481 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp479);
                            if ($tmp481.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp483, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp482, $tmp483);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp482);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp485, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp484, $tmp485);
                            panda$core$Bit $tmp486 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp484);
                            if ($tmp486.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp488, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp487, $tmp488);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp487);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp490, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp489, $tmp490);
                            panda$core$Bit $tmp491 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp489);
                            if ($tmp491.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp493, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp492, $tmp493);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp492);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp495, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp494, $tmp495);
                            panda$core$Bit $tmp496 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21458, $tmp494);
                            if ($tmp496.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp498, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp497, $tmp498);
                                panda$core$MutableString$append$panda$core$Char8(result397, $tmp497);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token403, &$s499);
                                $tmp500 = NULL;
                                $returnValue419 = $tmp500;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                                $tmp435 = 1;
                                goto $l433;
                                $l501:;
                                $tmp396 = 3;
                                goto $l394;
                                $l502:;
                                return $returnValue419;
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
                        panda$core$String$Index $tmp506 = panda$core$String$start$R$panda$core$String$Index(escapeText445);
                        panda$core$String$Index $tmp507 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText445, $tmp506);
                        panda$core$Bit$init$builtin_bit(&$tmp508, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp505, ((panda$core$String$Index$nullable) { $tmp507, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp508);
                        panda$core$String* $tmp509 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText445, $tmp505);
                        $tmp504 = $tmp509;
                        panda$core$MutableString$append$panda$core$String(result397, $tmp504);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                    }
                    $tmp435 = -1;
                    goto $l433;
                    $l433:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText445));
                    escapeText445 = NULL;
                    switch ($tmp435) {
                        case 1: goto $l501;
                        case 0: goto $l442;
                        case -1: goto $l510;
                    }
                    $l510:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp511, 95);
                panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13405.$rawValue, $tmp511);
                if ($tmp512.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token403);
                    panda$core$String* $tmp515 = panda$core$MutableString$finish$R$panda$core$String(result397);
                    $tmp514 = $tmp515;
                    $tmp513 = $tmp514;
                    $returnValue419 = $tmp513;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp513));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
                    $tmp396 = 4;
                    goto $l394;
                    $l516:;
                    return $returnValue419;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp518, 100);
                panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13405.$rawValue, $tmp518);
                if ($tmp519.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token403);
                    panda$core$String* $tmp522 = panda$core$MutableString$finish$R$panda$core$String(result397);
                    $tmp521 = $tmp522;
                    $tmp520 = $tmp521;
                    $returnValue419 = $tmp520;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
                    $tmp396 = 5;
                    goto $l394;
                    $l523:;
                    return $returnValue419;
                }
                }
                else {
                {
                    panda$core$String* $tmp526 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token403);
                    $tmp525 = $tmp526;
                    panda$core$MutableString$append$panda$core$String(result397, $tmp525);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l402:;
    }
    $tmp396 = -1;
    goto $l394;
    $l394:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result397));
    result397 = NULL;
    switch ($tmp396) {
        case 0: goto $l422;
        case 1: goto $l429;
        case -1: goto $l527;
        case 4: goto $l516;
        case 2: goto $l443;
        case 3: goto $l502;
        case 5: goto $l523;
    }
    $l527:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot531 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp532;
    org$pandalanguage$pandac$ASTNode* $tmp533;
    panda$core$Int64 $tmp535;
    org$pandalanguage$pandac$ASTNode* call539 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp540;
    org$pandalanguage$pandac$ASTNode* $tmp541;
    panda$core$Int64 $tmp543;
    panda$collections$ImmutableArray* $tmp546;
    org$pandalanguage$pandac$ASTNode* stringType548 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp549;
    org$pandalanguage$pandac$ASTNode* $tmp550;
    panda$core$Int64 $tmp552;
    org$pandalanguage$pandac$ASTNode* $returnValue556;
    org$pandalanguage$pandac$ASTNode* $tmp557;
    org$pandalanguage$pandac$ASTNode* $tmp558;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$parser$Token$Kind $tmp563;
    panda$core$Int64 $tmp564;
    int $tmp530;
    {
        org$pandalanguage$pandac$ASTNode* $tmp534 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp535, 15);
        org$pandalanguage$pandac$Position $tmp537 = (($fn536) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp534, $tmp535, $tmp537, p_expr, &$s538);
        $tmp533 = $tmp534;
        $tmp532 = $tmp533;
        dot531 = $tmp532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        org$pandalanguage$pandac$ASTNode* $tmp542 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp543, 8);
        org$pandalanguage$pandac$Position $tmp545 = (($fn544) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp547 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp547);
        $tmp546 = $tmp547;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp542, $tmp543, $tmp545, dot531, $tmp546);
        $tmp541 = $tmp542;
        $tmp540 = $tmp541;
        call539 = $tmp540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        org$pandalanguage$pandac$ASTNode* $tmp551 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp552, 42);
        org$pandalanguage$pandac$Position $tmp554 = (($fn553) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp551, $tmp552, $tmp554, &$s555);
        $tmp550 = $tmp551;
        $tmp549 = $tmp550;
        stringType548 = $tmp549;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
        org$pandalanguage$pandac$ASTNode* $tmp559 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp560, 4);
        org$pandalanguage$pandac$Position $tmp562 = (($fn561) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp564, 89);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp563, $tmp564);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp559, $tmp560, $tmp562, call539, $tmp563, stringType548);
        $tmp558 = $tmp559;
        $tmp557 = $tmp558;
        $returnValue556 = $tmp557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        $tmp530 = 0;
        goto $l528;
        $l565:;
        return $returnValue556;
    }
    $l528:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType548));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call539));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot531));
    dot531 = NULL;
    call539 = NULL;
    stringType548 = NULL;
    switch ($tmp530) {
        case 0: goto $l565;
    }
    $l567:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1571;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto575 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp576;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp577;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp579;
    panda$core$Int64 $tmp580;
    org$pandalanguage$pandac$parser$Token start581;
    panda$core$Int64 $tmp584;
    panda$core$Int64 $tmp587;
    panda$core$String* $tmp590;
    panda$core$String* $tmp591;
    panda$core$String* $tmp593;
    org$pandalanguage$pandac$ASTNode* $returnValue598;
    org$pandalanguage$pandac$ASTNode* $tmp599;
    org$pandalanguage$pandac$ASTNode* result603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    panda$core$MutableString* chunk605 = NULL;
    panda$core$MutableString* $tmp606;
    panda$core$MutableString* $tmp607;
    org$pandalanguage$pandac$parser$Token token611;
    org$pandalanguage$pandac$parser$Token$Kind $match$340_13614;
    panda$core$Int64 $tmp615;
    panda$core$String* str620 = NULL;
    panda$core$String* $tmp621;
    panda$core$String* $tmp622;
    panda$core$Char8 $tmp624;
    panda$core$UInt8 $tmp625;
    org$pandalanguage$pandac$ASTNode* $tmp628;
    panda$core$Int64 $tmp634;
    org$pandalanguage$pandac$ASTNode* $tmp637;
    panda$core$Int64 $tmp641;
    org$pandalanguage$pandac$parser$Token escape646;
    panda$core$Int64 $tmp648;
    org$pandalanguage$pandac$ASTNode* $tmp651;
    panda$core$String* escapeText656 = NULL;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$Char8 c660;
    panda$core$Object* $tmp661;
    panda$collections$ListView* $tmp662;
    panda$core$Int64 $tmp664;
    panda$core$Char8 $match$359_21669;
    panda$core$Char8 $tmp670;
    panda$core$UInt8 $tmp671;
    panda$core$Char8 $tmp673;
    panda$core$UInt8 $tmp674;
    panda$core$Char8 $tmp675;
    panda$core$UInt8 $tmp676;
    panda$core$Char8 $tmp678;
    panda$core$UInt8 $tmp679;
    panda$core$Char8 $tmp680;
    panda$core$UInt8 $tmp681;
    panda$core$Char8 $tmp683;
    panda$core$UInt8 $tmp684;
    panda$core$Char8 $tmp685;
    panda$core$UInt8 $tmp686;
    panda$core$Char8 $tmp688;
    panda$core$UInt8 $tmp689;
    panda$core$Char8 $tmp690;
    panda$core$UInt8 $tmp691;
    panda$core$Char8 $tmp693;
    panda$core$UInt8 $tmp694;
    panda$core$Char8 $tmp695;
    panda$core$UInt8 $tmp696;
    panda$core$Char8 $tmp698;
    panda$core$UInt8 $tmp699;
    panda$core$Char8 $tmp700;
    panda$core$UInt8 $tmp701;
    panda$core$Bit oldAllow706;
    panda$core$Bit $tmp707;
    org$pandalanguage$pandac$ASTNode* expr708 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp709;
    org$pandalanguage$pandac$ASTNode* $tmp710;
    org$pandalanguage$pandac$ASTNode* $tmp712;
    panda$core$String* align718 = NULL;
    panda$core$String* $tmp719;
    panda$core$String* format720 = NULL;
    panda$core$String* $tmp721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp722;
    panda$core$Int64 $tmp723;
    panda$core$String* $tmp725;
    panda$core$String* $tmp726;
    panda$core$String* $tmp727;
    org$pandalanguage$pandac$parser$Token$Kind $tmp729;
    panda$core$Int64 $tmp730;
    panda$core$String* $tmp735;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    org$pandalanguage$pandac$ASTNode* $tmp739;
    org$pandalanguage$pandac$ASTNode* formattable746 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp747;
    org$pandalanguage$pandac$ASTNode* $tmp748;
    panda$core$Int64 $tmp750;
    org$pandalanguage$pandac$ASTNode* cast754 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp755;
    org$pandalanguage$pandac$ASTNode* $tmp756;
    panda$core$Int64 $tmp758;
    org$pandalanguage$pandac$parser$Token$Kind $tmp761;
    panda$core$Int64 $tmp762;
    org$pandalanguage$pandac$ASTNode* dot763 = NULL;
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
    org$pandalanguage$pandac$parser$Token$Kind $tmp788;
    panda$core$Int64 $tmp789;
    org$pandalanguage$pandac$ASTNode* $tmp792;
    org$pandalanguage$pandac$ASTNode* $tmp801;
    org$pandalanguage$pandac$ASTNode* $tmp802;
    org$pandalanguage$pandac$ASTNode* $tmp803;
    org$pandalanguage$pandac$ASTNode* pandaType805 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp806;
    org$pandalanguage$pandac$ASTNode* $tmp807;
    panda$core$Int64 $tmp809;
    org$pandalanguage$pandac$ASTNode* callTarget813 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp814;
    org$pandalanguage$pandac$ASTNode* $tmp815;
    panda$core$Int64 $tmp817;
    panda$collections$Array* callArgs821 = NULL;
    panda$collections$Array* $tmp822;
    panda$collections$Array* $tmp823;
    org$pandalanguage$pandac$ASTNode* $tmp825;
    panda$core$Int64 $tmp827;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    org$pandalanguage$pandac$ASTNode* $tmp830;
    panda$core$Int64 $tmp832;
    panda$collections$ImmutableArray* $tmp835;
    panda$core$String* text838 = NULL;
    panda$core$String* $tmp839;
    panda$core$String* $tmp840;
    panda$core$MutableString* $tmp842;
    panda$core$MutableString* $tmp843;
    panda$core$MutableString* $tmp844;
    org$pandalanguage$pandac$ASTNode* $tmp851;
    org$pandalanguage$pandac$ASTNode* $tmp852;
    org$pandalanguage$pandac$ASTNode* $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    panda$core$Int64 $tmp856;
    org$pandalanguage$pandac$ASTNode* $tmp858;
    org$pandalanguage$pandac$ASTNode* $tmp859;
    org$pandalanguage$pandac$ASTNode* $tmp860;
    org$pandalanguage$pandac$ASTNode* $tmp862;
    org$pandalanguage$pandac$ASTNode* $tmp863;
    org$pandalanguage$pandac$ASTNode* $tmp864;
    org$pandalanguage$pandac$ASTNode* $tmp868;
    panda$core$String* $tmp873;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp874;
    panda$core$Bit $tmp877;
    panda$core$String* $tmp880;
    org$pandalanguage$pandac$ASTNode* $tmp882;
    org$pandalanguage$pandac$ASTNode* $tmp883;
    org$pandalanguage$pandac$ASTNode* $tmp884;
    panda$core$Int64 $tmp886;
    panda$core$String* $tmp887;
    int $tmp570;
    {
        $atPre1571 = self->allowLambdas;
        int $tmp574;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp578 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp580, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp579, $tmp580);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp578, self, $tmp579);
            $tmp577 = $tmp578;
            $tmp576 = $tmp577;
            auto575 = $tmp576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
            org$pandalanguage$pandac$parser$Token $tmp582 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start581 = $tmp582;
            panda$core$Int64$init$builtin_int64(&$tmp584, 7);
            panda$core$Bit $tmp585 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start581.kind.$rawValue, $tmp584);
            bool $tmp583 = $tmp585.value;
            if (!$tmp583) goto $l586;
            panda$core$Int64$init$builtin_int64(&$tmp587, 6);
            panda$core$Bit $tmp588 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start581.kind.$rawValue, $tmp587);
            $tmp583 = $tmp588.value;
            $l586:;
            panda$core$Bit $tmp589 = { $tmp583 };
            if ($tmp589.value) {
            {
                panda$core$String* $tmp594 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start581);
                $tmp593 = $tmp594;
                panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s592, $tmp593);
                $tmp591 = $tmp595;
                panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s596);
                $tmp590 = $tmp597;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start581, $tmp590);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                $tmp599 = NULL;
                $returnValue598 = $tmp599;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                $tmp574 = 0;
                goto $l572;
                $l600:;
                $tmp570 = 0;
                goto $l568;
                $l601:;
                return $returnValue598;
            }
            }
            $tmp604 = NULL;
            result603 = $tmp604;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
            panda$core$MutableString* $tmp608 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp608);
            $tmp607 = $tmp608;
            $tmp606 = $tmp607;
            chunk605 = $tmp606;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
            $l609:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp612 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token611 = $tmp612;
                panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token611.kind.$rawValue, start581.kind.$rawValue);
                if ($tmp613.value) {
                {
                    goto $l610;
                }
                }
                {
                    $match$340_13614 = token611.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp615, 12);
                    panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$340_13614.$rawValue, $tmp615);
                    if ($tmp616.value) {
                    {
                        int $tmp619;
                        {
                            panda$core$String* $tmp623 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token611);
                            $tmp622 = $tmp623;
                            $tmp621 = $tmp622;
                            str620 = $tmp621;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                            panda$core$UInt8$init$builtin_uint8(&$tmp625, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp624, $tmp625);
                            panda$core$Bit $tmp626 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str620, $tmp624);
                            if ($tmp626.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start581, &$s627);
                                $tmp628 = NULL;
                                $returnValue598 = $tmp628;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
                                $tmp619 = 0;
                                goto $l617;
                                $l629:;
                                $tmp574 = 1;
                                goto $l572;
                                $l630:;
                                $tmp570 = 1;
                                goto $l568;
                                $l631:;
                                return $returnValue598;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk605, str620);
                        }
                        $tmp619 = -1;
                        goto $l617;
                        $l617:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str620));
                        str620 = NULL;
                        switch ($tmp619) {
                            case 0: goto $l629;
                            case -1: goto $l633;
                        }
                        $l633:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp634, 0);
                    panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$340_13614.$rawValue, $tmp634);
                    if ($tmp635.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start581, &$s636);
                        $tmp637 = NULL;
                        $returnValue598 = $tmp637;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                        $tmp574 = 2;
                        goto $l572;
                        $l638:;
                        $tmp570 = 2;
                        goto $l568;
                        $l639:;
                        return $returnValue598;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp641, 106);
                    panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$340_13614.$rawValue, $tmp641);
                    if ($tmp642.value) {
                    {
                        int $tmp645;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp647 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape646 = $tmp647;
                            panda$core$Int64$init$builtin_int64(&$tmp648, 0);
                            panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape646.kind.$rawValue, $tmp648);
                            if ($tmp649.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start581, &$s650);
                                $tmp651 = NULL;
                                $returnValue598 = $tmp651;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
                                $tmp645 = 0;
                                goto $l643;
                                $l652:;
                                $tmp574 = 3;
                                goto $l572;
                                $l653:;
                                $tmp570 = 3;
                                goto $l568;
                                $l654:;
                                return $returnValue598;
                            }
                            }
                            panda$core$String* $tmp659 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape646);
                            $tmp658 = $tmp659;
                            $tmp657 = $tmp658;
                            escapeText656 = $tmp657;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                            panda$collections$ListView* $tmp663 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText656);
                            $tmp662 = $tmp663;
                            panda$core$Int64$init$builtin_int64(&$tmp664, 0);
                            ITable* $tmp665 = $tmp662->$class->itable;
                            while ($tmp665->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp665 = $tmp665->next;
                            }
                            $fn667 $tmp666 = $tmp665->methods[0];
                            panda$core$Object* $tmp668 = $tmp666($tmp662, $tmp664);
                            $tmp661 = $tmp668;
                            c660 = ((panda$core$Char8$wrapper*) $tmp661)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp661);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                            {
                                $match$359_21669 = c660;
                                panda$core$UInt8$init$builtin_uint8(&$tmp671, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp670, $tmp671);
                                panda$core$Bit $tmp672 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp670);
                                if ($tmp672.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp674, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp673, $tmp674);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp673);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp676, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp675, $tmp676);
                                panda$core$Bit $tmp677 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp675);
                                if ($tmp677.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp679, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp678, $tmp679);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp678);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp681, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp680, $tmp681);
                                panda$core$Bit $tmp682 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp680);
                                if ($tmp682.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp684, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp683, $tmp684);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp683);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp686, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp685, $tmp686);
                                panda$core$Bit $tmp687 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp685);
                                if ($tmp687.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp689, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp688, $tmp689);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp688);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp691, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp690, $tmp691);
                                panda$core$Bit $tmp692 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp690);
                                if ($tmp692.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp694, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp693, $tmp694);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp693);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp696, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp695, $tmp696);
                                panda$core$Bit $tmp697 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp695);
                                if ($tmp697.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp699, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp698, $tmp699);
                                    panda$core$MutableString$append$panda$core$Char8(chunk605, $tmp698);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp701, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp700, $tmp701);
                                panda$core$Bit $tmp702 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$359_21669, $tmp700);
                                if ($tmp702.value) {
                                {
                                    {
                                        int $tmp705;
                                        {
                                            oldAllow706 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp707, false);
                                            self->allowLambdas = $tmp707;
                                            org$pandalanguage$pandac$ASTNode* $tmp711 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp710 = $tmp711;
                                            $tmp709 = $tmp710;
                                            expr708 = $tmp709;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
                                            self->allowLambdas = oldAllow706;
                                            if (((panda$core$Bit) { expr708 == NULL }).value) {
                                            {
                                                $tmp712 = NULL;
                                                $returnValue598 = $tmp712;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp712));
                                                $tmp705 = 0;
                                                goto $l703;
                                                $l713:;
                                                $tmp645 = 1;
                                                goto $l643;
                                                $l714:;
                                                $tmp574 = 4;
                                                goto $l572;
                                                $l715:;
                                                $tmp570 = 4;
                                                goto $l568;
                                                $l716:;
                                                return $returnValue598;
                                            }
                                            }
                                            $tmp719 = NULL;
                                            align718 = $tmp719;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
                                            $tmp721 = NULL;
                                            format720 = $tmp721;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
                                            panda$core$Int64$init$builtin_int64(&$tmp723, 105);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp722, $tmp723);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp724 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp722);
                                            if (((panda$core$Bit) { $tmp724.nonnull }).value) {
                                            {
                                                {
                                                    $tmp725 = align718;
                                                    panda$core$String* $tmp728 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start581);
                                                    $tmp727 = $tmp728;
                                                    $tmp726 = $tmp727;
                                                    align718 = $tmp726;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp726));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp730, 95);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp729, $tmp730);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp731 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp729);
                                            if (((panda$core$Bit) { $tmp731.nonnull }).value) {
                                            {
                                                int $tmp734;
                                                {
                                                    {
                                                        $tmp735 = format720;
                                                        panda$core$String* $tmp738 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start581);
                                                        $tmp737 = $tmp738;
                                                        $tmp736 = $tmp737;
                                                        format720 = $tmp736;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                                                    }
                                                    if (((panda$core$Bit) { format720 == NULL }).value) {
                                                    {
                                                        $tmp739 = NULL;
                                                        $returnValue598 = $tmp739;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                                                        $tmp734 = 0;
                                                        goto $l732;
                                                        $l740:;
                                                        $tmp705 = 1;
                                                        goto $l703;
                                                        $l741:;
                                                        $tmp645 = 2;
                                                        goto $l643;
                                                        $l742:;
                                                        $tmp574 = 5;
                                                        goto $l572;
                                                        $l743:;
                                                        $tmp570 = 5;
                                                        goto $l568;
                                                        $l744:;
                                                        return $returnValue598;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp749 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp750, 42);
                                                    org$pandalanguage$pandac$Position $tmp752 = (($fn751) expr708->$class->vtable[2])(expr708);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp749, $tmp750, $tmp752, &$s753);
                                                    $tmp748 = $tmp749;
                                                    $tmp747 = $tmp748;
                                                    formattable746 = $tmp747;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp747));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                                                    org$pandalanguage$pandac$ASTNode* $tmp757 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp758, 4);
                                                    org$pandalanguage$pandac$Position $tmp760 = (($fn759) expr708->$class->vtable[2])(expr708);
                                                    panda$core$Int64$init$builtin_int64(&$tmp762, 89);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp761, $tmp762);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp757, $tmp758, $tmp760, expr708, $tmp761, formattable746);
                                                    $tmp756 = $tmp757;
                                                    $tmp755 = $tmp756;
                                                    cast754 = $tmp755;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp755));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                                                    org$pandalanguage$pandac$ASTNode* $tmp766 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp767, 15);
                                                    org$pandalanguage$pandac$Position $tmp769 = (($fn768) expr708->$class->vtable[2])(expr708);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp766, $tmp767, $tmp769, cast754, &$s770);
                                                    $tmp765 = $tmp766;
                                                    $tmp764 = $tmp765;
                                                    dot763 = $tmp764;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                                                    panda$collections$Array* $tmp774 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp774);
                                                    $tmp773 = $tmp774;
                                                    $tmp772 = $tmp773;
                                                    callArgs771 = $tmp772;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                                    org$pandalanguage$pandac$ASTNode* $tmp776 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp777, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp776, $tmp777, start581.position, format720);
                                                    $tmp775 = $tmp776;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs771, ((panda$core$Object*) $tmp775));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                                    {
                                                        $tmp778 = expr708;
                                                        org$pandalanguage$pandac$ASTNode* $tmp781 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp782, 8);
                                                        org$pandalanguage$pandac$Position $tmp784 = (($fn783) expr708->$class->vtable[2])(expr708);
                                                        panda$collections$ImmutableArray* $tmp786 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs771);
                                                        $tmp785 = $tmp786;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp781, $tmp782, $tmp784, dot763, $tmp785);
                                                        $tmp780 = $tmp781;
                                                        $tmp779 = $tmp780;
                                                        expr708 = $tmp779;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                                                    }
                                                }
                                                $tmp734 = -1;
                                                goto $l732;
                                                $l732:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs771));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot763));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast754));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable746));
                                                formattable746 = NULL;
                                                cast754 = NULL;
                                                dot763 = NULL;
                                                callArgs771 = NULL;
                                                switch ($tmp734) {
                                                    case 0: goto $l740;
                                                    case -1: goto $l787;
                                                }
                                                $l787:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp789, 100);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp788, $tmp789);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp791 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp788, &$s790);
                                            if (((panda$core$Bit) { !$tmp791.nonnull }).value) {
                                            {
                                                $tmp792 = NULL;
                                                $returnValue598 = $tmp792;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                                                $tmp705 = 2;
                                                goto $l703;
                                                $l793:;
                                                $tmp645 = 3;
                                                goto $l643;
                                                $l794:;
                                                $tmp574 = 6;
                                                goto $l572;
                                                $l795:;
                                                $tmp570 = 6;
                                                goto $l568;
                                                $l796:;
                                                return $returnValue598;
                                            }
                                            }
                                            if (((panda$core$Bit) { align718 != NULL }).value) {
                                            {
                                                int $tmp800;
                                                {
                                                    if (((panda$core$Bit) { format720 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp801 = expr708;
                                                            org$pandalanguage$pandac$ASTNode* $tmp804 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr708);
                                                            $tmp803 = $tmp804;
                                                            $tmp802 = $tmp803;
                                                            expr708 = $tmp802;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp809, 42);
                                                    org$pandalanguage$pandac$Position $tmp811 = (($fn810) expr708->$class->vtable[2])(expr708);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp808, $tmp809, $tmp811, &$s812);
                                                    $tmp807 = $tmp808;
                                                    $tmp806 = $tmp807;
                                                    pandaType805 = $tmp806;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                                                    org$pandalanguage$pandac$ASTNode* $tmp816 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp817, 15);
                                                    org$pandalanguage$pandac$Position $tmp819 = (($fn818) expr708->$class->vtable[2])(expr708);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp816, $tmp817, $tmp819, pandaType805, &$s820);
                                                    $tmp815 = $tmp816;
                                                    $tmp814 = $tmp815;
                                                    callTarget813 = $tmp814;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
                                                    panda$collections$Array* $tmp824 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp824);
                                                    $tmp823 = $tmp824;
                                                    $tmp822 = $tmp823;
                                                    callArgs821 = $tmp822;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs821, ((panda$core$Object*) expr708));
                                                    org$pandalanguage$pandac$ASTNode* $tmp826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp827, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp826, $tmp827, start581.position, align718);
                                                    $tmp825 = $tmp826;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs821, ((panda$core$Object*) $tmp825));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                                                    {
                                                        $tmp828 = expr708;
                                                        org$pandalanguage$pandac$ASTNode* $tmp831 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp832, 8);
                                                        org$pandalanguage$pandac$Position $tmp834 = (($fn833) expr708->$class->vtable[2])(expr708);
                                                        panda$collections$ImmutableArray* $tmp836 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs821);
                                                        $tmp835 = $tmp836;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp831, $tmp832, $tmp834, callTarget813, $tmp835);
                                                        $tmp830 = $tmp831;
                                                        $tmp829 = $tmp830;
                                                        expr708 = $tmp829;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                                                    }
                                                }
                                                $tmp800 = -1;
                                                goto $l798;
                                                $l798:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs821));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget813));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType805));
                                                pandaType805 = NULL;
                                                callTarget813 = NULL;
                                                callArgs821 = NULL;
                                                switch ($tmp800) {
                                                    case -1: goto $l837;
                                                }
                                                $l837:;
                                            }
                                            }
                                            panda$core$String* $tmp841 = panda$core$MutableString$finish$R$panda$core$String(chunk605);
                                            $tmp840 = $tmp841;
                                            $tmp839 = $tmp840;
                                            text838 = $tmp839;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp839));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
                                            {
                                                $tmp842 = chunk605;
                                                panda$core$MutableString* $tmp845 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp845);
                                                $tmp844 = $tmp845;
                                                $tmp843 = $tmp844;
                                                chunk605 = $tmp843;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                                            }
                                            panda$core$Bit $tmp848 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text838, &$s847);
                                            bool $tmp846 = $tmp848.value;
                                            if ($tmp846) goto $l849;
                                            $tmp846 = ((panda$core$Bit) { result603 != NULL }).value;
                                            $l849:;
                                            panda$core$Bit $tmp850 = { $tmp846 };
                                            if ($tmp850.value) {
                                            {
                                                {
                                                    $tmp851 = result603;
                                                    org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp856, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp855, $tmp856, start581.position, text838);
                                                    $tmp854 = $tmp855;
                                                    org$pandalanguage$pandac$ASTNode* $tmp857 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result603, $tmp854);
                                                    $tmp853 = $tmp857;
                                                    $tmp852 = $tmp853;
                                                    result603 = $tmp852;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                                                }
                                                {
                                                    $tmp858 = result603;
                                                    org$pandalanguage$pandac$ASTNode* $tmp861 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result603, expr708);
                                                    $tmp860 = $tmp861;
                                                    $tmp859 = $tmp860;
                                                    result603 = $tmp859;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp860));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp862 = result603;
                                                    org$pandalanguage$pandac$ASTNode* $tmp865 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr708);
                                                    $tmp864 = $tmp865;
                                                    $tmp863 = $tmp864;
                                                    result603 = $tmp863;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                                                }
                                            }
                                            }
                                        }
                                        $tmp705 = -1;
                                        goto $l703;
                                        $l703:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text838));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format720));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align718));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr708));
                                        expr708 = NULL;
                                        text838 = NULL;
                                        switch ($tmp705) {
                                            case -1: goto $l866;
                                            case 0: goto $l713;
                                            case 2: goto $l793;
                                            case 1: goto $l741;
                                        }
                                        $l866:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token611, &$s867);
                                    $tmp868 = NULL;
                                    $returnValue598 = $tmp868;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
                                    $tmp645 = 4;
                                    goto $l643;
                                    $l869:;
                                    $tmp574 = 7;
                                    goto $l572;
                                    $l870:;
                                    $tmp570 = 7;
                                    goto $l568;
                                    $l871:;
                                    return $returnValue598;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp875 = panda$core$String$start$R$panda$core$String$Index(escapeText656);
                            panda$core$String$Index $tmp876 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText656, $tmp875);
                            panda$core$Bit$init$builtin_bit(&$tmp877, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp874, ((panda$core$String$Index$nullable) { $tmp876, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp877);
                            panda$core$String* $tmp878 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText656, $tmp874);
                            $tmp873 = $tmp878;
                            panda$core$MutableString$append$panda$core$String(chunk605, $tmp873);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
                        }
                        $tmp645 = -1;
                        goto $l643;
                        $l643:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText656));
                        escapeText656 = NULL;
                        switch ($tmp645) {
                            case 0: goto $l652;
                            case -1: goto $l879;
                            case 3: goto $l794;
                            case 1: goto $l714;
                            case 4: goto $l869;
                            case 2: goto $l742;
                        }
                        $l879:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp881 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token611);
                        $tmp880 = $tmp881;
                        panda$core$MutableString$append$panda$core$String(chunk605, $tmp880);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l610:;
            org$pandalanguage$pandac$ASTNode* $tmp885 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp886, 38);
            panda$core$String* $tmp888 = panda$core$MutableString$finish$R$panda$core$String(chunk605);
            $tmp887 = $tmp888;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp885, $tmp886, start581.position, $tmp887);
            $tmp884 = $tmp885;
            org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result603, $tmp884);
            $tmp883 = $tmp889;
            $tmp882 = $tmp883;
            $returnValue598 = $tmp882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
            $tmp574 = 8;
            goto $l572;
            $l890:;
            $tmp570 = 8;
            goto $l568;
            $l891:;
            return $returnValue598;
        }
        $l572:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto575));
        auto575 = NULL;
        chunk605 = NULL;
        switch ($tmp574) {
            case 8: goto $l890;
            case 6: goto $l795;
            case 3: goto $l653;
            case 0: goto $l600;
            case 4: goto $l715;
            case 7: goto $l870;
            case 2: goto $l638;
            case 1: goto $l630;
            case 5: goto $l743;
        }
        $l893:;
    }
    $tmp570 = -1;
    goto $l568;
    $l568:;
    panda$core$Bit $tmp895 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1571);
    if ($tmp895.value) goto $l896; else goto $l897;
    $l897:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s898, (panda$core$Int64) { 326 }, &$s899);
    abort();
    $l896:;
    switch ($tmp570) {
        case -1: goto $l894;
        case 2: goto $l639;
        case 6: goto $l796;
        case 7: goto $l871;
        case 8: goto $l891;
        case 3: goto $l654;
        case 0: goto $l601;
        case 4: goto $l716;
        case 5: goto $l744;
        case 1: goto $l631;
    }
    $l894:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start903;
    org$pandalanguage$pandac$parser$Token$Kind $tmp904;
    panda$core$Int64 $tmp905;
    org$pandalanguage$pandac$ASTNode* $returnValue908;
    org$pandalanguage$pandac$ASTNode* $tmp909;
    org$pandalanguage$pandac$ASTNode* expr912 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp913;
    org$pandalanguage$pandac$ASTNode* $tmp914;
    org$pandalanguage$pandac$ASTNode* $tmp916;
    org$pandalanguage$pandac$ASTNode* $match$445_9922 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp923;
    panda$core$Int64 $tmp924;
    org$pandalanguage$pandac$Position firstPosition926;
    panda$core$String* firstName928 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp930;
    panda$core$Int64 $tmp931;
    panda$collections$Array* parameters936 = NULL;
    panda$collections$Array* $tmp937;
    panda$collections$Array* $tmp938;
    org$pandalanguage$pandac$ASTNode* firstType940 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp941;
    org$pandalanguage$pandac$ASTNode* $tmp942;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    org$pandalanguage$pandac$ASTNode* $tmp949;
    panda$core$Int64 $tmp951;
    org$pandalanguage$pandac$parser$Token$Kind $tmp955;
    panda$core$Int64 $tmp956;
    org$pandalanguage$pandac$parser$Token$nullable nextName961;
    org$pandalanguage$pandac$parser$Token$Kind $tmp962;
    panda$core$Int64 $tmp963;
    org$pandalanguage$pandac$parser$Token$Kind $tmp966;
    panda$core$Int64 $tmp967;
    org$pandalanguage$pandac$ASTNode* $tmp970;
    org$pandalanguage$pandac$ASTNode* nextType976 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp977;
    org$pandalanguage$pandac$ASTNode* $tmp978;
    org$pandalanguage$pandac$ASTNode* $tmp980;
    org$pandalanguage$pandac$ASTNode* $tmp986;
    panda$core$Int64 $tmp988;
    panda$core$String* $tmp989;
    org$pandalanguage$pandac$parser$Token$Kind $tmp992;
    panda$core$Int64 $tmp993;
    org$pandalanguage$pandac$ASTNode* $tmp996;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1001;
    panda$core$Int64 $tmp1002;
    org$pandalanguage$pandac$ASTNode* $tmp1005;
    org$pandalanguage$pandac$ASTNode* body1010 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1011;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1014;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    org$pandalanguage$pandac$ASTNode* $tmp1020;
    panda$core$Int64 $tmp1022;
    panda$collections$ImmutableArray* $tmp1023;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1030;
    panda$core$Int64 $tmp1031;
    panda$collections$Array* parameters1036 = NULL;
    panda$collections$Array* $tmp1037;
    panda$collections$Array* $tmp1038;
    panda$core$Bit validLambda1040;
    panda$core$Bit $tmp1041;
    org$pandalanguage$pandac$ASTNode* nextExpr1047 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    org$pandalanguage$pandac$ASTNode* $tmp1049;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $tmp1059;
    panda$core$Int64 $tmp1064;
    panda$core$Bit $tmp1066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    panda$core$Int64 $tmp1071;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1073;
    panda$core$Int64 $tmp1074;
    org$pandalanguage$pandac$ASTNode* $tmp1077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1084;
    panda$core$Int64 $tmp1085;
    org$pandalanguage$pandac$ASTNode* body1091 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    org$pandalanguage$pandac$ASTNode* $tmp1093;
    org$pandalanguage$pandac$ASTNode* $tmp1095;
    org$pandalanguage$pandac$ASTNode* $tmp1101;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    panda$core$Int64 $tmp1104;
    panda$collections$ImmutableArray* $tmp1105;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1120;
    panda$core$Int64 $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1128;
    panda$core$Int64 $tmp1129;
    panda$collections$Array* parameters1134 = NULL;
    panda$collections$Array* $tmp1135;
    panda$collections$Array* $tmp1136;
    org$pandalanguage$pandac$ASTNode* body1138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    org$pandalanguage$pandac$ASTNode* $tmp1147;
    org$pandalanguage$pandac$ASTNode* $tmp1148;
    panda$core$Int64 $tmp1150;
    panda$collections$ImmutableArray* $tmp1151;
    org$pandalanguage$pandac$ASTNode* $tmp1158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1165;
    panda$core$Int64 $tmp1166;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1168;
    panda$core$Int64 $tmp1169;
    org$pandalanguage$pandac$ASTNode* $tmp1171;
    panda$collections$Array* arguments1176 = NULL;
    panda$collections$Array* $tmp1177;
    panda$collections$Array* $tmp1178;
    org$pandalanguage$pandac$ASTNode* nextExpr1185 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1186;
    org$pandalanguage$pandac$ASTNode* $tmp1187;
    org$pandalanguage$pandac$ASTNode* $tmp1189;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1197;
    panda$core$Int64 $tmp1198;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1200;
    panda$core$Int64 $tmp1201;
    org$pandalanguage$pandac$ASTNode* $tmp1204;
    int $tmp902;
    {
        panda$core$Int64$init$builtin_int64(&$tmp905, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp904, $tmp905);
        org$pandalanguage$pandac$parser$Token$nullable $tmp907 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp904, &$s906);
        start903 = $tmp907;
        if (((panda$core$Bit) { !start903.nonnull }).value) {
        {
            $tmp909 = NULL;
            $returnValue908 = $tmp909;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
            $tmp902 = 0;
            goto $l900;
            $l910:;
            return $returnValue908;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp915 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp914 = $tmp915;
        $tmp913 = $tmp914;
        expr912 = $tmp913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
        if (((panda$core$Bit) { expr912 == NULL }).value) {
        {
            $tmp916 = NULL;
            $returnValue908 = $tmp916;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp916));
            $tmp902 = 1;
            goto $l900;
            $l917:;
            return $returnValue908;
        }
        }
        int $tmp921;
        {
            $tmp923 = expr912;
            $match$445_9922 = $tmp923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
            panda$core$Int64$init$builtin_int64(&$tmp924, 20);
            panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$445_9922->$rawValue, $tmp924);
            if ($tmp925.value) {
            {
                org$pandalanguage$pandac$Position* $tmp927 = ((org$pandalanguage$pandac$Position*) ((char*) $match$445_9922->$data + 0));
                firstPosition926 = *$tmp927;
                panda$core$String** $tmp929 = ((panda$core$String**) ((char*) $match$445_9922->$data + 16));
                firstName928 = *$tmp929;
                panda$core$Int64$init$builtin_int64(&$tmp931, 95);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp930, $tmp931);
                org$pandalanguage$pandac$parser$Token$nullable $tmp932 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp930);
                if (((panda$core$Bit) { $tmp932.nonnull }).value) {
                {
                    int $tmp935;
                    {
                        panda$collections$Array* $tmp939 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp939);
                        $tmp938 = $tmp939;
                        $tmp937 = $tmp938;
                        parameters936 = $tmp937;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
                        org$pandalanguage$pandac$ASTNode* $tmp943 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp942 = $tmp943;
                        $tmp941 = $tmp942;
                        firstType940 = $tmp941;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
                        if (((panda$core$Bit) { firstType940 == NULL }).value) {
                        {
                            $tmp944 = NULL;
                            $returnValue908 = $tmp944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                            $tmp935 = 0;
                            goto $l933;
                            $l945:;
                            $tmp921 = 0;
                            goto $l919;
                            $l946:;
                            $tmp902 = 2;
                            goto $l900;
                            $l947:;
                            return $returnValue908;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp950 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp951, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp950, $tmp951, firstPosition926, firstName928, firstType940);
                        $tmp949 = $tmp950;
                        panda$collections$Array$add$panda$collections$Array$T(parameters936, ((panda$core$Object*) $tmp949));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
                        $l952:;
                        panda$core$Int64$init$builtin_int64(&$tmp956, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp955, $tmp956);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp957 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp955);
                        bool $tmp954 = ((panda$core$Bit) { $tmp957.nonnull }).value;
                        if (!$tmp954) goto $l953;
                        {
                            int $tmp960;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp963, 48);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp962, $tmp963);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp965 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp962, &$s964);
                                nextName961 = $tmp965;
                                panda$core$Int64$init$builtin_int64(&$tmp967, 95);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp966, $tmp967);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp969 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp966, &$s968);
                                if (((panda$core$Bit) { !$tmp969.nonnull }).value) {
                                {
                                    $tmp970 = NULL;
                                    $returnValue908 = $tmp970;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
                                    $tmp960 = 0;
                                    goto $l958;
                                    $l971:;
                                    $tmp935 = 1;
                                    goto $l933;
                                    $l972:;
                                    $tmp921 = 1;
                                    goto $l919;
                                    $l973:;
                                    $tmp902 = 3;
                                    goto $l900;
                                    $l974:;
                                    return $returnValue908;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp979 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp978 = $tmp979;
                                $tmp977 = $tmp978;
                                nextType976 = $tmp977;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                                if (((panda$core$Bit) { nextType976 == NULL }).value) {
                                {
                                    $tmp980 = NULL;
                                    $returnValue908 = $tmp980;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                                    $tmp960 = 1;
                                    goto $l958;
                                    $l981:;
                                    $tmp935 = 2;
                                    goto $l933;
                                    $l982:;
                                    $tmp921 = 2;
                                    goto $l919;
                                    $l983:;
                                    $tmp902 = 4;
                                    goto $l900;
                                    $l984:;
                                    return $returnValue908;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp987 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp988, 31);
                                panda$core$String* $tmp990 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName961.value));
                                $tmp989 = $tmp990;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp987, $tmp988, ((org$pandalanguage$pandac$parser$Token) nextName961.value).position, $tmp989, nextType976);
                                $tmp986 = $tmp987;
                                panda$collections$Array$add$panda$collections$Array$T(parameters936, ((panda$core$Object*) $tmp986));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                            }
                            $tmp960 = -1;
                            goto $l958;
                            $l958:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType976));
                            nextType976 = NULL;
                            switch ($tmp960) {
                                case 0: goto $l971;
                                case 1: goto $l981;
                                case -1: goto $l991;
                            }
                            $l991:;
                        }
                        goto $l952;
                        $l953:;
                        panda$core$Int64$init$builtin_int64(&$tmp993, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp992, $tmp993);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp995 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp992, &$s994);
                        if (((panda$core$Bit) { !$tmp995.nonnull }).value) {
                        {
                            $tmp996 = NULL;
                            $returnValue908 = $tmp996;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp996));
                            $tmp935 = 3;
                            goto $l933;
                            $l997:;
                            $tmp921 = 3;
                            goto $l919;
                            $l998:;
                            $tmp902 = 5;
                            goto $l900;
                            $l999:;
                            return $returnValue908;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1002, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1001, $tmp1002);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1001, &$s1003);
                        if (((panda$core$Bit) { !$tmp1004.nonnull }).value) {
                        {
                            $tmp1005 = NULL;
                            $returnValue908 = $tmp1005;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                            $tmp935 = 4;
                            goto $l933;
                            $l1006:;
                            $tmp921 = 4;
                            goto $l919;
                            $l1007:;
                            $tmp902 = 6;
                            goto $l900;
                            $l1008:;
                            return $returnValue908;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1013 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1012 = $tmp1013;
                        $tmp1011 = $tmp1012;
                        body1010 = $tmp1011;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1011));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
                        if (((panda$core$Bit) { body1010 == NULL }).value) {
                        {
                            $tmp1014 = NULL;
                            $returnValue908 = $tmp1014;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
                            $tmp935 = 5;
                            goto $l933;
                            $l1015:;
                            $tmp921 = 5;
                            goto $l919;
                            $l1016:;
                            $tmp902 = 7;
                            goto $l900;
                            $l1017:;
                            return $returnValue908;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1021 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1022, 43);
                        panda$collections$ImmutableArray* $tmp1024 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters936);
                        $tmp1023 = $tmp1024;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1021, $tmp1022, ((org$pandalanguage$pandac$parser$Token) start903.value).position, $tmp1023, body1010);
                        $tmp1020 = $tmp1021;
                        $tmp1019 = $tmp1020;
                        $returnValue908 = $tmp1019;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
                        $tmp935 = 6;
                        goto $l933;
                        $l1025:;
                        $tmp921 = 6;
                        goto $l919;
                        $l1026:;
                        $tmp902 = 8;
                        goto $l900;
                        $l1027:;
                        return $returnValue908;
                    }
                    $l933:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1010));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType940));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters936));
                    parameters936 = NULL;
                    firstType940 = NULL;
                    body1010 = NULL;
                    switch ($tmp935) {
                        case 4: goto $l1006;
                        case 3: goto $l997;
                        case 1: goto $l972;
                        case 0: goto $l945;
                        case 6: goto $l1025;
                        case 5: goto $l1015;
                        case 2: goto $l982;
                    }
                    $l1029:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1031, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1030, $tmp1031);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1030);
                if (((panda$core$Bit) { $tmp1032.nonnull }).value) {
                {
                    int $tmp1035;
                    {
                        panda$collections$Array* $tmp1039 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1039);
                        $tmp1038 = $tmp1039;
                        $tmp1037 = $tmp1038;
                        parameters1036 = $tmp1037;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1036, ((panda$core$Object*) expr912));
                        panda$core$Bit$init$builtin_bit(&$tmp1041, true);
                        validLambda1040 = $tmp1041;
                        $l1042:;
                        {
                            int $tmp1046;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1050 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1049 = $tmp1050;
                                $tmp1048 = $tmp1049;
                                nextExpr1047 = $tmp1048;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
                                if (((panda$core$Bit) { nextExpr1047 == NULL }).value) {
                                {
                                    $tmp1051 = NULL;
                                    $returnValue908 = $tmp1051;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                                    $tmp1046 = 0;
                                    goto $l1044;
                                    $l1052:;
                                    $tmp1035 = 0;
                                    goto $l1033;
                                    $l1053:;
                                    $tmp921 = 7;
                                    goto $l919;
                                    $l1054:;
                                    $tmp902 = 9;
                                    goto $l900;
                                    $l1055:;
                                    return $returnValue908;
                                }
                                }
                                bool $tmp1057 = validLambda1040.value;
                                if (!$tmp1057) goto $l1058;
                                $tmp1059 = nextExpr1047;
                                panda$core$Bit $tmp1063;
                                if (((panda$core$Bit) { $tmp1059 != NULL }).value) goto $l1060; else goto $l1061;
                                $l1060:;
                                panda$core$Int64$init$builtin_int64(&$tmp1064, 20);
                                panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1059->$rawValue, $tmp1064);
                                $tmp1063 = $tmp1065;
                                goto $l1062;
                                $l1061:;
                                panda$core$Bit$init$builtin_bit(&$tmp1066, false);
                                $tmp1063 = $tmp1066;
                                goto $l1062;
                                $l1062:;
                                $tmp1057 = $tmp1063.value;
                                $l1058:;
                                panda$core$Bit $tmp1067 = { $tmp1057 };
                                validLambda1040 = $tmp1067;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1036, ((panda$core$Object*) nextExpr1047));
                            }
                            $tmp1046 = -1;
                            goto $l1044;
                            $l1044:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1047));
                            nextExpr1047 = NULL;
                            switch ($tmp1046) {
                                case -1: goto $l1068;
                                case 0: goto $l1052;
                            }
                            $l1068:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1071, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, $tmp1071);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070);
                        bool $tmp1069 = ((panda$core$Bit) { $tmp1072.nonnull }).value;
                        if ($tmp1069) goto $l1042;
                        $l1043:;
                        panda$core$Int64$init$builtin_int64(&$tmp1074, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1073, $tmp1074);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1073, &$s1075);
                        if (((panda$core$Bit) { !$tmp1076.nonnull }).value) {
                        {
                            $tmp1077 = NULL;
                            $returnValue908 = $tmp1077;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                            $tmp1035 = 1;
                            goto $l1033;
                            $l1078:;
                            $tmp921 = 8;
                            goto $l919;
                            $l1079:;
                            $tmp902 = 10;
                            goto $l900;
                            $l1080:;
                            return $returnValue908;
                        }
                        }
                        bool $tmp1082 = validLambda1040.value;
                        if (!$tmp1082) goto $l1083;
                        panda$core$Int64$init$builtin_int64(&$tmp1085, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1084, $tmp1085);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1086 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1084);
                        $tmp1082 = ((panda$core$Bit) { $tmp1086.nonnull }).value;
                        $l1083:;
                        panda$core$Bit $tmp1087 = { $tmp1082 };
                        if ($tmp1087.value) {
                        {
                            int $tmp1090;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1094 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1093 = $tmp1094;
                                $tmp1092 = $tmp1093;
                                body1091 = $tmp1092;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1093));
                                if (((panda$core$Bit) { body1091 == NULL }).value) {
                                {
                                    $tmp1095 = NULL;
                                    $returnValue908 = $tmp1095;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                                    $tmp1090 = 0;
                                    goto $l1088;
                                    $l1096:;
                                    $tmp1035 = 2;
                                    goto $l1033;
                                    $l1097:;
                                    $tmp921 = 9;
                                    goto $l919;
                                    $l1098:;
                                    $tmp902 = 11;
                                    goto $l900;
                                    $l1099:;
                                    return $returnValue908;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1103 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1104, 45);
                                panda$collections$ImmutableArray* $tmp1106 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1036);
                                $tmp1105 = $tmp1106;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1103, $tmp1104, ((org$pandalanguage$pandac$parser$Token) start903.value).position, $tmp1105, body1091);
                                $tmp1102 = $tmp1103;
                                $tmp1101 = $tmp1102;
                                $returnValue908 = $tmp1101;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1101));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
                                $tmp1090 = 1;
                                goto $l1088;
                                $l1107:;
                                $tmp1035 = 3;
                                goto $l1033;
                                $l1108:;
                                $tmp921 = 10;
                                goto $l919;
                                $l1109:;
                                $tmp902 = 12;
                                goto $l900;
                                $l1110:;
                                return $returnValue908;
                            }
                            $l1088:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1091));
                            body1091 = NULL;
                            switch ($tmp1090) {
                                case 1: goto $l1107;
                                case 0: goto $l1096;
                            }
                            $l1112:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start903.value), &$s1113);
                        $tmp1114 = NULL;
                        $returnValue908 = $tmp1114;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1114));
                        $tmp1035 = 4;
                        goto $l1033;
                        $l1115:;
                        $tmp921 = 11;
                        goto $l919;
                        $l1116:;
                        $tmp902 = 13;
                        goto $l900;
                        $l1117:;
                        return $returnValue908;
                    }
                    $l1033:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1036));
                    parameters1036 = NULL;
                    switch ($tmp1035) {
                        case 3: goto $l1108;
                        case 0: goto $l1053;
                        case 4: goto $l1115;
                        case 2: goto $l1097;
                        case 1: goto $l1078;
                    }
                    $l1119:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1121, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1120, $tmp1121);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1120, &$s1122);
                if (((panda$core$Bit) { !$tmp1123.nonnull }).value) {
                {
                    $tmp1124 = NULL;
                    $returnValue908 = $tmp1124;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1124));
                    $tmp921 = 12;
                    goto $l919;
                    $l1125:;
                    $tmp902 = 14;
                    goto $l900;
                    $l1126:;
                    return $returnValue908;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1129, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1128, $tmp1129);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1130 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1128);
                if (((panda$core$Bit) { $tmp1130.nonnull }).value) {
                {
                    int $tmp1133;
                    {
                        panda$collections$Array* $tmp1137 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1137);
                        $tmp1136 = $tmp1137;
                        $tmp1135 = $tmp1136;
                        parameters1134 = $tmp1135;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1135));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1134, ((panda$core$Object*) expr912));
                        org$pandalanguage$pandac$ASTNode* $tmp1141 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1140 = $tmp1141;
                        $tmp1139 = $tmp1140;
                        body1138 = $tmp1139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                        if (((panda$core$Bit) { body1138 == NULL }).value) {
                        {
                            $tmp1142 = NULL;
                            $returnValue908 = $tmp1142;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
                            $tmp1133 = 0;
                            goto $l1131;
                            $l1143:;
                            $tmp921 = 13;
                            goto $l919;
                            $l1144:;
                            $tmp902 = 15;
                            goto $l900;
                            $l1145:;
                            return $returnValue908;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1149 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1150, 45);
                        panda$collections$ImmutableArray* $tmp1152 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1134);
                        $tmp1151 = $tmp1152;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1149, $tmp1150, ((org$pandalanguage$pandac$parser$Token) start903.value).position, $tmp1151, body1138);
                        $tmp1148 = $tmp1149;
                        $tmp1147 = $tmp1148;
                        $returnValue908 = $tmp1147;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                        $tmp1133 = 1;
                        goto $l1131;
                        $l1153:;
                        $tmp921 = 14;
                        goto $l919;
                        $l1154:;
                        $tmp902 = 16;
                        goto $l900;
                        $l1155:;
                        return $returnValue908;
                    }
                    $l1131:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1138));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1134));
                    parameters1134 = NULL;
                    body1138 = NULL;
                    switch ($tmp1133) {
                        case 1: goto $l1153;
                        case 0: goto $l1143;
                    }
                    $l1157:;
                }
                }
                $tmp1158 = expr912;
                $returnValue908 = $tmp1158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
                $tmp921 = 15;
                goto $l919;
                $l1159:;
                $tmp902 = 17;
                goto $l900;
                $l1160:;
                return $returnValue908;
            }
            }
            else {
            {
                int $tmp1164;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1166, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1165, $tmp1166);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1167 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1165);
                    if (((panda$core$Bit) { !$tmp1167.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1169, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1168, $tmp1169);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1168, &$s1170);
                        $tmp1171 = expr912;
                        $returnValue908 = $tmp1171;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
                        $tmp1164 = 0;
                        goto $l1162;
                        $l1172:;
                        $tmp921 = 16;
                        goto $l919;
                        $l1173:;
                        $tmp902 = 18;
                        goto $l900;
                        $l1174:;
                        return $returnValue908;
                    }
                    }
                    panda$collections$Array* $tmp1179 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1179);
                    $tmp1178 = $tmp1179;
                    $tmp1177 = $tmp1178;
                    arguments1176 = $tmp1177;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1176, ((panda$core$Object*) expr912));
                    $l1180:;
                    {
                        int $tmp1184;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1188 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1187 = $tmp1188;
                            $tmp1186 = $tmp1187;
                            nextExpr1185 = $tmp1186;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                            if (((panda$core$Bit) { nextExpr1185 == NULL }).value) {
                            {
                                $tmp1189 = NULL;
                                $returnValue908 = $tmp1189;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
                                $tmp1184 = 0;
                                goto $l1182;
                                $l1190:;
                                $tmp1164 = 1;
                                goto $l1162;
                                $l1191:;
                                $tmp921 = 17;
                                goto $l919;
                                $l1192:;
                                $tmp902 = 19;
                                goto $l900;
                                $l1193:;
                                return $returnValue908;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1176, ((panda$core$Object*) nextExpr1185));
                        }
                        $tmp1184 = -1;
                        goto $l1182;
                        $l1182:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1185));
                        nextExpr1185 = NULL;
                        switch ($tmp1184) {
                            case 0: goto $l1190;
                            case -1: goto $l1195;
                        }
                        $l1195:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1198, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1197, $tmp1198);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1197);
                    bool $tmp1196 = ((panda$core$Bit) { $tmp1199.nonnull }).value;
                    if ($tmp1196) goto $l1180;
                    $l1181:;
                    panda$core$Int64$init$builtin_int64(&$tmp1201, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1200, $tmp1201);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1200, &$s1202);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start903.value), &$s1203);
                    $tmp1204 = NULL;
                    $returnValue908 = $tmp1204;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
                    $tmp1164 = 2;
                    goto $l1162;
                    $l1205:;
                    $tmp921 = 18;
                    goto $l919;
                    $l1206:;
                    $tmp902 = 20;
                    goto $l900;
                    $l1207:;
                    return $returnValue908;
                }
                $l1162:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1176));
                arguments1176 = NULL;
                switch ($tmp1164) {
                    case 1: goto $l1191;
                    case 0: goto $l1172;
                    case 2: goto $l1205;
                }
                $l1209:;
            }
            }
        }
        $tmp921 = -1;
        goto $l919;
        $l919:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
        switch ($tmp921) {
            case 11: goto $l1116;
            case 6: goto $l1026;
            case 2: goto $l983;
            case 12: goto $l1125;
            case 14: goto $l1154;
            case 16: goto $l1173;
            case 4: goto $l1007;
            case 5: goto $l1016;
            case 9: goto $l1098;
            case 15: goto $l1159;
            case 18: goto $l1206;
            case 13: goto $l1144;
            case 17: goto $l1192;
            case 1: goto $l973;
            case 10: goto $l1109;
            case 3: goto $l998;
            case 0: goto $l946;
            case 7: goto $l1054;
            case -1: goto $l1210;
            case 8: goto $l1079;
        }
        $l1210:;
    }
    $tmp902 = -1;
    goto $l900;
    $l900:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr912));
    expr912 = NULL;
    switch ($tmp902) {
        case 13: goto $l1117;
        case 14: goto $l1126;
        case 4: goto $l984;
        case -1: goto $l1211;
        case 8: goto $l1027;
        case 18: goto $l1174;
        case 6: goto $l1008;
        case 7: goto $l1017;
        case 20: goto $l1207;
        case 11: goto $l1099;
        case 16: goto $l1155;
        case 15: goto $l1145;
        case 2: goto $l947;
        case 17: goto $l1160;
        case 19: goto $l1193;
        case 3: goto $l974;
        case 5: goto $l999;
        case 9: goto $l1055;
        case 12: goto $l1110;
        case 0: goto $l910;
        case 1: goto $l917;
        case 10: goto $l1080;
    }
    $l1211:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1215;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1216;
    panda$core$Int64 $tmp1217;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1220;
    panda$core$Int64 $tmp1221;
    org$pandalanguage$pandac$ASTNode* t1226 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1227;
    org$pandalanguage$pandac$ASTNode* $tmp1228;
    org$pandalanguage$pandac$ASTNode* $returnValue1230;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    panda$collections$Array* parameters1235 = NULL;
    panda$collections$Array* $tmp1236;
    panda$collections$Array* $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1239;
    panda$core$Int64 $tmp1241;
    panda$core$String* $tmp1242;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1244;
    panda$core$Int64 $tmp1245;
    org$pandalanguage$pandac$ASTNode* $tmp1248;
    org$pandalanguage$pandac$ASTNode* expr1252 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1253;
    org$pandalanguage$pandac$ASTNode* $tmp1254;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    org$pandalanguage$pandac$ASTNode* $tmp1260;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    panda$core$Int64 $tmp1263;
    panda$collections$ImmutableArray* $tmp1264;
    panda$collections$Array* parameters1270 = NULL;
    panda$collections$Array* $tmp1271;
    panda$collections$Array* $tmp1272;
    org$pandalanguage$pandac$ASTNode* $tmp1274;
    panda$core$Int64 $tmp1276;
    panda$core$String* $tmp1277;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1279;
    panda$core$Int64 $tmp1280;
    org$pandalanguage$pandac$ASTNode* $tmp1283;
    org$pandalanguage$pandac$ASTNode* expr1286 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1287;
    org$pandalanguage$pandac$ASTNode* $tmp1288;
    org$pandalanguage$pandac$ASTNode* $tmp1290;
    org$pandalanguage$pandac$ASTNode* $tmp1293;
    org$pandalanguage$pandac$ASTNode* $tmp1294;
    panda$core$Int64 $tmp1296;
    panda$collections$ImmutableArray* $tmp1297;
    int $tmp1214;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1217, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1216, $tmp1217);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1216, &$s1218);
        start1215 = $tmp1219;
        panda$core$Int64$init$builtin_int64(&$tmp1221, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1220, $tmp1221);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1222 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1220);
        if (((panda$core$Bit) { $tmp1222.nonnull }).value) {
        {
            int $tmp1225;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1229 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1228 = $tmp1229;
                $tmp1227 = $tmp1228;
                t1226 = $tmp1227;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                if (((panda$core$Bit) { t1226 == NULL }).value) {
                {
                    $tmp1231 = NULL;
                    $returnValue1230 = $tmp1231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    $tmp1225 = 0;
                    goto $l1223;
                    $l1232:;
                    $tmp1214 = 0;
                    goto $l1212;
                    $l1233:;
                    return $returnValue1230;
                }
                }
                panda$collections$Array* $tmp1238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1238);
                $tmp1237 = $tmp1238;
                $tmp1236 = $tmp1237;
                parameters1235 = $tmp1236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                org$pandalanguage$pandac$ASTNode* $tmp1240 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1241, 31);
                panda$core$String* $tmp1243 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1215.value));
                $tmp1242 = $tmp1243;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1240, $tmp1241, ((org$pandalanguage$pandac$parser$Token) start1215.value).position, $tmp1242, t1226);
                $tmp1239 = $tmp1240;
                panda$collections$Array$add$panda$collections$Array$T(parameters1235, ((panda$core$Object*) $tmp1239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Int64$init$builtin_int64(&$tmp1245, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1244, $tmp1245);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1247 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1244, &$s1246);
                if (((panda$core$Bit) { !$tmp1247.nonnull }).value) {
                {
                    $tmp1248 = NULL;
                    $returnValue1230 = $tmp1248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                    $tmp1225 = 1;
                    goto $l1223;
                    $l1249:;
                    $tmp1214 = 1;
                    goto $l1212;
                    $l1250:;
                    return $returnValue1230;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1255 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1254 = $tmp1255;
                $tmp1253 = $tmp1254;
                expr1252 = $tmp1253;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                if (((panda$core$Bit) { expr1252 == NULL }).value) {
                {
                    $tmp1256 = NULL;
                    $returnValue1230 = $tmp1256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
                    $tmp1225 = 2;
                    goto $l1223;
                    $l1257:;
                    $tmp1214 = 2;
                    goto $l1212;
                    $l1258:;
                    return $returnValue1230;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1263, 43);
                panda$collections$ImmutableArray* $tmp1265 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1235);
                $tmp1264 = $tmp1265;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1262, $tmp1263, ((org$pandalanguage$pandac$parser$Token) start1215.value).position, $tmp1264, expr1252);
                $tmp1261 = $tmp1262;
                $tmp1260 = $tmp1261;
                $returnValue1230 = $tmp1260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
                $tmp1225 = 3;
                goto $l1223;
                $l1266:;
                $tmp1214 = 3;
                goto $l1212;
                $l1267:;
                return $returnValue1230;
            }
            $l1223:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1235));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1226));
            t1226 = NULL;
            parameters1235 = NULL;
            expr1252 = NULL;
            switch ($tmp1225) {
                case 3: goto $l1266;
                case 1: goto $l1249;
                case 0: goto $l1232;
                case 2: goto $l1257;
            }
            $l1269:;
        }
        }
        panda$collections$Array* $tmp1273 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1273);
        $tmp1272 = $tmp1273;
        $tmp1271 = $tmp1272;
        parameters1270 = $tmp1271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
        org$pandalanguage$pandac$ASTNode* $tmp1275 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1276, 20);
        panda$core$String* $tmp1278 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1215.value));
        $tmp1277 = $tmp1278;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1275, $tmp1276, ((org$pandalanguage$pandac$parser$Token) start1215.value).position, $tmp1277);
        $tmp1274 = $tmp1275;
        panda$collections$Array$add$panda$collections$Array$T(parameters1270, ((panda$core$Object*) $tmp1274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
        panda$core$Int64$init$builtin_int64(&$tmp1280, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1279, $tmp1280);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1282 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1279, &$s1281);
        if (((panda$core$Bit) { !$tmp1282.nonnull }).value) {
        {
            $tmp1283 = NULL;
            $returnValue1230 = $tmp1283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
            $tmp1214 = 4;
            goto $l1212;
            $l1284:;
            return $returnValue1230;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1289 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1288 = $tmp1289;
        $tmp1287 = $tmp1288;
        expr1286 = $tmp1287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
        if (((panda$core$Bit) { expr1286 == NULL }).value) {
        {
            $tmp1290 = NULL;
            $returnValue1230 = $tmp1290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
            $tmp1214 = 5;
            goto $l1212;
            $l1291:;
            return $returnValue1230;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1295 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1296, 45);
        panda$collections$ImmutableArray* $tmp1298 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1270);
        $tmp1297 = $tmp1298;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1295, $tmp1296, ((org$pandalanguage$pandac$parser$Token) start1215.value).position, $tmp1297, expr1286);
        $tmp1294 = $tmp1295;
        $tmp1293 = $tmp1294;
        $returnValue1230 = $tmp1293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
        $tmp1214 = 6;
        goto $l1212;
        $l1299:;
        return $returnValue1230;
    }
    $l1212:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1286));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1270));
    parameters1270 = NULL;
    expr1286 = NULL;
    switch ($tmp1214) {
        case 0: goto $l1233;
        case 5: goto $l1291;
        case 2: goto $l1258;
        case 3: goto $l1267;
        case 6: goto $l1299;
        case 4: goto $l1284;
        case 1: goto $l1250;
    }
    $l1301:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1305;
    panda$core$Int64 $tmp1306;
    org$pandalanguage$pandac$ASTNode* $returnValue1309;
    org$pandalanguage$pandac$ASTNode* $tmp1310;
    org$pandalanguage$pandac$ASTNode* regex1313 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1314;
    org$pandalanguage$pandac$ASTNode* $tmp1315;
    org$pandalanguage$pandac$ASTNode* $tmp1317;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1320;
    panda$core$Int64 $tmp1321;
    org$pandalanguage$pandac$ASTNode* $tmp1323;
    int $tmp1304;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1306, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1305, $tmp1306);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1308 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1305, &$s1307);
        if (((panda$core$Bit) { !$tmp1308.nonnull }).value) {
        {
            $tmp1310 = NULL;
            $returnValue1309 = $tmp1310;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
            $tmp1304 = 0;
            goto $l1302;
            $l1311:;
            return $returnValue1309;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1316 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1315 = $tmp1316;
        $tmp1314 = $tmp1315;
        regex1313 = $tmp1314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1313 == NULL }).value) {
        {
            $tmp1317 = NULL;
            $returnValue1309 = $tmp1317;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
            $tmp1304 = 1;
            goto $l1302;
            $l1318:;
            return $returnValue1309;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1321, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1320, $tmp1321);
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1320, &$s1322);
        $tmp1323 = regex1313;
        $returnValue1309 = $tmp1323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
        $tmp1304 = 2;
        goto $l1302;
        $l1324:;
        return $returnValue1309;
    }
    $l1302:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1313));
    regex1313 = NULL;
    switch ($tmp1304) {
        case 2: goto $l1324;
        case 0: goto $l1311;
        case 1: goto $l1318;
    }
    $l1326:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1327;
    org$pandalanguage$pandac$parser$Token$Kind $match$605_91329;
    panda$core$Int64 $tmp1330;
    org$pandalanguage$pandac$parser$Token$Kind check1332;
    panda$core$Int64 $tmp1337;
    panda$core$Int64 $tmp1341;
    org$pandalanguage$pandac$ASTNode* $returnValue1344;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    org$pandalanguage$pandac$ASTNode* $tmp1346;
    org$pandalanguage$pandac$ASTNode* $tmp1349;
    org$pandalanguage$pandac$ASTNode* $tmp1350;
    panda$core$Int64 $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$Int64 $tmp1356;
    org$pandalanguage$pandac$ASTNode* $tmp1358;
    org$pandalanguage$pandac$ASTNode* $tmp1359;
    panda$core$Int64 $tmp1361;
    panda$core$String* $tmp1362;
    panda$core$Int64 $tmp1366;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    panda$core$Int64 $tmp1371;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1373;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1375;
    panda$core$Int64 $tmp1376;
    panda$core$Bit $tmp1377;
    panda$core$Int64 $tmp1379;
    panda$core$Int64 $tmp1382;
    org$pandalanguage$pandac$ASTNode* $tmp1384;
    org$pandalanguage$pandac$ASTNode* $tmp1385;
    panda$core$Int64 $tmp1387;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1389;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1391;
    panda$core$Int64 $tmp1392;
    panda$core$Bit $tmp1393;
    panda$core$Int64 $tmp1395;
    panda$core$Int64 $tmp1398;
    org$pandalanguage$pandac$ASTNode* $tmp1400;
    org$pandalanguage$pandac$ASTNode* $tmp1401;
    panda$core$Int64 $tmp1403;
    panda$core$String* $tmp1404;
    panda$core$Int64 $tmp1408;
    org$pandalanguage$pandac$ASTNode* $tmp1410;
    org$pandalanguage$pandac$ASTNode* $tmp1411;
    panda$core$Int64 $tmp1413;
    panda$core$Int64 $tmp1415;
    org$pandalanguage$pandac$ASTNode* $tmp1417;
    org$pandalanguage$pandac$ASTNode* $tmp1418;
    panda$core$Int64 $tmp1420;
    panda$core$Int64 $tmp1422;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    org$pandalanguage$pandac$ASTNode* $tmp1425;
    panda$core$Int64 $tmp1427;
    panda$core$Int64 $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    panda$core$Int64 $tmp1434;
    panda$core$Bit $tmp1435;
    panda$core$Int64 $tmp1437;
    org$pandalanguage$pandac$ASTNode* $tmp1439;
    org$pandalanguage$pandac$ASTNode* $tmp1440;
    panda$core$Int64 $tmp1442;
    panda$core$Bit $tmp1443;
    panda$core$Int64 $tmp1446;
    panda$core$Int64 $tmp1449;
    org$pandalanguage$pandac$ASTNode* $tmp1452;
    org$pandalanguage$pandac$ASTNode* $tmp1453;
    panda$core$Int64 $tmp1456;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$core$Int64 $tmp1462;
    panda$core$String* name1467 = NULL;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1476;
    panda$core$Int64 $tmp1477;
    org$pandalanguage$pandac$ASTNode* expr1479 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $tmp1481;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1483;
    panda$core$Int64 $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    org$pandalanguage$pandac$ASTNode* $tmp1487;
    panda$core$Int64 $tmp1489;
    org$pandalanguage$pandac$ASTNode* $tmp1496;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    panda$core$Int64 $tmp1499;
    panda$core$String* $tmp1502;
    panda$core$String* $tmp1503;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    panda$core$Int64 $tmp1513;
    panda$core$Int64 $tmp1516;
    org$pandalanguage$pandac$ASTNode* $tmp1519;
    org$pandalanguage$pandac$ASTNode* $tmp1520;
    panda$core$Int64 $tmp1523;
    org$pandalanguage$pandac$ASTNode* $tmp1525;
    org$pandalanguage$pandac$ASTNode* $tmp1526;
    panda$core$String* $tmp1529;
    panda$core$String* $tmp1530;
    panda$core$String* $tmp1532;
    org$pandalanguage$pandac$ASTNode* $tmp1537;
    org$pandalanguage$pandac$parser$Token $tmp1328 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1327 = $tmp1328;
    {
        $match$605_91329 = t1327.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1330, 48);
        panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1330);
        if ($tmp1331.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1333 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1332 = $tmp1333.kind;
            bool $tmp1335 = self->allowLambdas.value;
            if (!$tmp1335) goto $l1336;
            panda$core$Int64$init$builtin_int64(&$tmp1337, 95);
            panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1332.$rawValue, $tmp1337);
            $tmp1335 = $tmp1338.value;
            $l1336:;
            panda$core$Bit $tmp1339 = { $tmp1335 };
            bool $tmp1334 = $tmp1339.value;
            if ($tmp1334) goto $l1340;
            panda$core$Int64$init$builtin_int64(&$tmp1341, 90);
            panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1332.$rawValue, $tmp1341);
            $tmp1334 = $tmp1342.value;
            $l1340:;
            panda$core$Bit $tmp1343 = { $tmp1334 };
            if ($tmp1343.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1327);
                org$pandalanguage$pandac$ASTNode* $tmp1347 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1346 = $tmp1347;
                $tmp1345 = $tmp1346;
                $returnValue1344 = $tmp1345;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                return $returnValue1344;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1351 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1352, 20);
            panda$core$String* $tmp1354 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1353 = $tmp1354;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1351, $tmp1352, t1327.position, $tmp1353);
            $tmp1350 = $tmp1351;
            $tmp1349 = $tmp1350;
            $returnValue1344 = $tmp1349;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1356, 2);
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1356);
        if ($tmp1357.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1360 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1361, 22);
            panda$core$String* $tmp1363 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1362 = $tmp1363;
            panda$core$UInt64$nullable $tmp1364 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1362);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1360, $tmp1361, t1327.position, ((panda$core$UInt64) $tmp1364.value));
            $tmp1359 = $tmp1360;
            $tmp1358 = $tmp1359;
            $returnValue1344 = $tmp1358;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1366, 3);
        panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1366);
        if ($tmp1367.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1370 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1371, 22);
            panda$core$String* $tmp1374 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1373 = $tmp1374;
            panda$core$Int64$init$builtin_int64(&$tmp1376, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1377, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1375, ((panda$core$Int64$nullable) { $tmp1376, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1377);
            panda$core$String* $tmp1378 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1373, $tmp1375);
            $tmp1372 = $tmp1378;
            panda$core$Int64$init$builtin_int64(&$tmp1379, 2);
            panda$core$UInt64$nullable $tmp1380 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1372, $tmp1379);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1370, $tmp1371, t1327.position, ((panda$core$UInt64) $tmp1380.value));
            $tmp1369 = $tmp1370;
            $tmp1368 = $tmp1369;
            $returnValue1344 = $tmp1368;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1382, 4);
        panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1382);
        if ($tmp1383.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1387, 22);
            panda$core$String* $tmp1390 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1389 = $tmp1390;
            panda$core$Int64$init$builtin_int64(&$tmp1392, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1393, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1391, ((panda$core$Int64$nullable) { $tmp1392, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1393);
            panda$core$String* $tmp1394 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1389, $tmp1391);
            $tmp1388 = $tmp1394;
            panda$core$Int64$init$builtin_int64(&$tmp1395, 16);
            panda$core$UInt64$nullable $tmp1396 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1388, $tmp1395);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1386, $tmp1387, t1327.position, ((panda$core$UInt64) $tmp1396.value));
            $tmp1385 = $tmp1386;
            $tmp1384 = $tmp1385;
            $returnValue1344 = $tmp1384;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1398, 5);
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1398);
        if ($tmp1399.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1402 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1403, 34);
            panda$core$String* $tmp1405 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1404 = $tmp1405;
            panda$core$Real64$nullable $tmp1406 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1404);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1402, $tmp1403, t1327.position, ((panda$core$Real64) $tmp1406.value));
            $tmp1401 = $tmp1402;
            $tmp1400 = $tmp1401;
            $returnValue1344 = $tmp1400;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1408, 46);
        panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1408);
        if ($tmp1409.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1412 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1413, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1412, $tmp1413, t1327.position);
            $tmp1411 = $tmp1412;
            $tmp1410 = $tmp1411;
            $returnValue1344 = $tmp1410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1415, 47);
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1415);
        if ($tmp1416.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1419 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1420, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1419, $tmp1420, t1327.position);
            $tmp1418 = $tmp1419;
            $tmp1417 = $tmp1418;
            $returnValue1344 = $tmp1417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1422, 43);
        panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1422);
        if ($tmp1423.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1426 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1427, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1426, $tmp1427, t1327.position);
            $tmp1425 = $tmp1426;
            $tmp1424 = $tmp1425;
            $returnValue1344 = $tmp1424;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1429, 41);
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1429);
        if ($tmp1430.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1433 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1434, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1435, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1433, $tmp1434, t1327.position, $tmp1435);
            $tmp1432 = $tmp1433;
            $tmp1431 = $tmp1432;
            $returnValue1344 = $tmp1431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1437, 42);
        panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1437);
        if ($tmp1438.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1441 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1442, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1443, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1441, $tmp1442, t1327.position, $tmp1443);
            $tmp1440 = $tmp1441;
            $tmp1439 = $tmp1440;
            $returnValue1344 = $tmp1439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1446, 7);
        panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1446);
        bool $tmp1445 = $tmp1447.value;
        if ($tmp1445) goto $l1448;
        panda$core$Int64$init$builtin_int64(&$tmp1449, 6);
        panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1449);
        $tmp1445 = $tmp1450.value;
        $l1448:;
        panda$core$Bit $tmp1451 = { $tmp1445 };
        if ($tmp1451.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1327);
            org$pandalanguage$pandac$ASTNode* $tmp1454 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1453 = $tmp1454;
            $tmp1452 = $tmp1453;
            $returnValue1344 = $tmp1452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1453));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1456, 103);
        panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1456);
        if ($tmp1457.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1327);
            org$pandalanguage$pandac$ASTNode* $tmp1460 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1459 = $tmp1460;
            $tmp1458 = $tmp1459;
            $returnValue1344 = $tmp1458;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1462, 13);
        panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1462);
        if ($tmp1463.value) {
        {
            int $tmp1466;
            {
                panda$core$String* $tmp1470 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
                $tmp1469 = $tmp1470;
                $tmp1468 = $tmp1469;
                name1467 = $tmp1468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                panda$core$Bit $tmp1472 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1467, &$s1471);
                if ($tmp1472.value) {
                {
                    int $tmp1475;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1477, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1476, $tmp1477);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1476, &$s1478);
                        org$pandalanguage$pandac$ASTNode* $tmp1482 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1481 = $tmp1482;
                        $tmp1480 = $tmp1481;
                        expr1479 = $tmp1480;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                        panda$core$Int64$init$builtin_int64(&$tmp1484, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1483, $tmp1484);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1483, &$s1485);
                        org$pandalanguage$pandac$ASTNode* $tmp1488 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1489, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1488, $tmp1489, t1327.position, expr1479);
                        $tmp1487 = $tmp1488;
                        $tmp1486 = $tmp1487;
                        $returnValue1344 = $tmp1486;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
                        $tmp1475 = 0;
                        goto $l1473;
                        $l1490:;
                        $tmp1466 = 0;
                        goto $l1464;
                        $l1491:;
                        return $returnValue1344;
                    }
                    $l1473:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1479));
                    expr1479 = NULL;
                    switch ($tmp1475) {
                        case 0: goto $l1490;
                    }
                    $l1493:;
                }
                }
                else {
                panda$core$Bit $tmp1495 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1467, &$s1494);
                if ($tmp1495.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1498 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1499, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1498, $tmp1499, t1327.position);
                    $tmp1497 = $tmp1498;
                    $tmp1496 = $tmp1497;
                    $returnValue1344 = $tmp1496;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                    $tmp1466 = 1;
                    goto $l1464;
                    $l1500:;
                    return $returnValue1344;
                }
                }
                }
                panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1504, name1467);
                $tmp1503 = $tmp1505;
                panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1506);
                $tmp1502 = $tmp1507;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1327, $tmp1502);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                $tmp1508 = NULL;
                $returnValue1344 = $tmp1508;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                $tmp1466 = 2;
                goto $l1464;
                $l1509:;
                return $returnValue1344;
            }
            $l1464:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1467));
            name1467 = NULL;
            switch ($tmp1466) {
                case 0: goto $l1491;
                case 2: goto $l1509;
                case 1: goto $l1500;
            }
            $l1511:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1513, 20);
        panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1513);
        bool $tmp1512 = $tmp1514.value;
        if ($tmp1512) goto $l1515;
        panda$core$Int64$init$builtin_int64(&$tmp1516, 21);
        panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1516);
        $tmp1512 = $tmp1517.value;
        $l1515:;
        panda$core$Bit $tmp1518 = { $tmp1512 };
        if ($tmp1518.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1327);
            org$pandalanguage$pandac$ASTNode* $tmp1521 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1520 = $tmp1521;
            $tmp1519 = $tmp1520;
            $returnValue1344 = $tmp1519;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
            return $returnValue1344;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1523, 54);
        panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91329.$rawValue, $tmp1523);
        if ($tmp1524.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1327);
            org$pandalanguage$pandac$ASTNode* $tmp1527 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1526 = $tmp1527;
            $tmp1525 = $tmp1526;
            $returnValue1344 = $tmp1525;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1525));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
            return $returnValue1344;
        }
        }
        else {
        {
            panda$core$String* $tmp1533 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1327);
            $tmp1532 = $tmp1533;
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1531, $tmp1532);
            $tmp1530 = $tmp1534;
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, &$s1535);
            $tmp1529 = $tmp1536;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1327, $tmp1529);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
            $tmp1537 = NULL;
            $returnValue1344 = $tmp1537;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1537));
            return $returnValue1344;
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
    org$pandalanguage$pandac$ASTNode* $match$664_91542 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1543;
    panda$core$Int64 $tmp1544;
    panda$core$String* text1546 = NULL;
    panda$core$String* $returnValue1548;
    panda$core$String* $tmp1549;
    panda$core$Int64 $tmp1552;
    org$pandalanguage$pandac$ASTNode* base1554 = NULL;
    panda$core$String* field1556 = NULL;
    panda$core$String* result1561 = NULL;
    panda$core$String* $tmp1562;
    panda$core$String* $tmp1563;
    panda$core$String* $tmp1565;
    panda$core$String* $tmp1566;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1578;
    int $tmp1541;
    {
        $tmp1543 = p_expr;
        $match$664_91542 = $tmp1543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
        panda$core$Int64$init$builtin_int64(&$tmp1544, 20);
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$664_91542->$rawValue, $tmp1544);
        if ($tmp1545.value) {
        {
            panda$core$String** $tmp1547 = ((panda$core$String**) ((char*) $match$664_91542->$data + 16));
            text1546 = *$tmp1547;
            $tmp1549 = text1546;
            $returnValue1548 = $tmp1549;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
            $tmp1541 = 0;
            goto $l1539;
            $l1550:;
            return $returnValue1548;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1552, 15);
        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$664_91542->$rawValue, $tmp1552);
        if ($tmp1553.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1555 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$664_91542->$data + 16));
            base1554 = *$tmp1555;
            panda$core$String** $tmp1557 = ((panda$core$String**) ((char*) $match$664_91542->$data + 24));
            field1556 = *$tmp1557;
            int $tmp1560;
            {
                panda$core$String* $tmp1564 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1554);
                $tmp1563 = $tmp1564;
                $tmp1562 = $tmp1563;
                result1561 = $tmp1562;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
                if (((panda$core$Bit) { result1561 != NULL }).value) {
                {
                    {
                        $tmp1566 = result1561;
                        $tmp1565 = $tmp1566;
                        panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1570, field1556);
                        $tmp1569 = $tmp1571;
                        panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1561, $tmp1569);
                        $tmp1568 = $tmp1572;
                        $tmp1567 = $tmp1568;
                        result1561 = $tmp1567;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                    }
                }
                }
                $tmp1573 = result1561;
                $returnValue1548 = $tmp1573;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1573));
                $tmp1560 = 0;
                goto $l1558;
                $l1574:;
                $tmp1541 = 1;
                goto $l1539;
                $l1575:;
                return $returnValue1548;
            }
            $l1558:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1561));
            result1561 = NULL;
            switch ($tmp1560) {
                case 0: goto $l1574;
            }
            $l1577:;
        }
        }
        else {
        {
            $tmp1578 = NULL;
            $returnValue1548 = $tmp1578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1578));
            $tmp1541 = 2;
            goto $l1539;
            $l1579:;
            return $returnValue1548;
        }
        }
        }
    }
    $tmp1541 = -1;
    goto $l1539;
    $l1539:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
    switch ($tmp1541) {
        case 2: goto $l1579;
        case -1: goto $l1581;
        case 1: goto $l1575;
        case 0: goto $l1550;
    }
    $l1581:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1582;
    org$pandalanguage$pandac$parser$Token$Kind $match$684_91584;
    panda$core$Int64 $tmp1606;
    panda$core$Int64 $tmp1609;
    panda$core$Int64 $tmp1613;
    panda$core$Int64 $tmp1617;
    panda$core$Int64 $tmp1621;
    panda$core$Int64 $tmp1625;
    panda$core$Int64 $tmp1629;
    panda$core$Int64 $tmp1633;
    panda$core$Int64 $tmp1637;
    panda$core$Int64 $tmp1641;
    panda$core$Int64 $tmp1645;
    panda$core$Int64 $tmp1649;
    panda$core$Int64 $tmp1653;
    panda$core$Int64 $tmp1657;
    panda$core$Int64 $tmp1661;
    panda$core$Int64 $tmp1665;
    panda$core$Int64 $tmp1669;
    panda$core$Int64 $tmp1673;
    panda$core$Int64 $tmp1677;
    panda$core$Int64 $tmp1681;
    panda$core$Int64 $tmp1685;
    panda$core$Int64 $tmp1689;
    panda$core$String* $returnValue1692;
    panda$core$String* $tmp1693;
    panda$core$String* $tmp1694;
    panda$core$Int64 $tmp1697;
    org$pandalanguage$pandac$parser$Token token1699;
    panda$core$Int64 $tmp1701;
    panda$core$String* $tmp1703;
    panda$core$String* $tmp1706;
    panda$core$Int64 $tmp1709;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1711;
    panda$core$Int64 $tmp1712;
    panda$core$String* $tmp1715;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1717;
    panda$core$Int64 $tmp1718;
    panda$core$String* $tmp1720;
    panda$core$String* $tmp1723;
    panda$core$String* $tmp1726;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1734;
    org$pandalanguage$pandac$parser$Token $tmp1583 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1582 = $tmp1583;
    {
        $match$684_91584 = name1582.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1606, 48);
        panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1606);
        bool $tmp1605 = $tmp1607.value;
        if ($tmp1605) goto $l1608;
        panda$core$Int64$init$builtin_int64(&$tmp1609, 51);
        panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1609);
        $tmp1605 = $tmp1610.value;
        $l1608:;
        panda$core$Bit $tmp1611 = { $tmp1605 };
        bool $tmp1604 = $tmp1611.value;
        if ($tmp1604) goto $l1612;
        panda$core$Int64$init$builtin_int64(&$tmp1613, 52);
        panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1613);
        $tmp1604 = $tmp1614.value;
        $l1612:;
        panda$core$Bit $tmp1615 = { $tmp1604 };
        bool $tmp1603 = $tmp1615.value;
        if ($tmp1603) goto $l1616;
        panda$core$Int64$init$builtin_int64(&$tmp1617, 53);
        panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1617);
        $tmp1603 = $tmp1618.value;
        $l1616:;
        panda$core$Bit $tmp1619 = { $tmp1603 };
        bool $tmp1602 = $tmp1619.value;
        if ($tmp1602) goto $l1620;
        panda$core$Int64$init$builtin_int64(&$tmp1621, 54);
        panda$core$Bit $tmp1622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1621);
        $tmp1602 = $tmp1622.value;
        $l1620:;
        panda$core$Bit $tmp1623 = { $tmp1602 };
        bool $tmp1601 = $tmp1623.value;
        if ($tmp1601) goto $l1624;
        panda$core$Int64$init$builtin_int64(&$tmp1625, 55);
        panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1625);
        $tmp1601 = $tmp1626.value;
        $l1624:;
        panda$core$Bit $tmp1627 = { $tmp1601 };
        bool $tmp1600 = $tmp1627.value;
        if ($tmp1600) goto $l1628;
        panda$core$Int64$init$builtin_int64(&$tmp1629, 57);
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1629);
        $tmp1600 = $tmp1630.value;
        $l1628:;
        panda$core$Bit $tmp1631 = { $tmp1600 };
        bool $tmp1599 = $tmp1631.value;
        if ($tmp1599) goto $l1632;
        panda$core$Int64$init$builtin_int64(&$tmp1633, 58);
        panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1633);
        $tmp1599 = $tmp1634.value;
        $l1632:;
        panda$core$Bit $tmp1635 = { $tmp1599 };
        bool $tmp1598 = $tmp1635.value;
        if ($tmp1598) goto $l1636;
        panda$core$Int64$init$builtin_int64(&$tmp1637, 59);
        panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1637);
        $tmp1598 = $tmp1638.value;
        $l1636:;
        panda$core$Bit $tmp1639 = { $tmp1598 };
        bool $tmp1597 = $tmp1639.value;
        if ($tmp1597) goto $l1640;
        panda$core$Int64$init$builtin_int64(&$tmp1641, 62);
        panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1641);
        $tmp1597 = $tmp1642.value;
        $l1640:;
        panda$core$Bit $tmp1643 = { $tmp1597 };
        bool $tmp1596 = $tmp1643.value;
        if ($tmp1596) goto $l1644;
        panda$core$Int64$init$builtin_int64(&$tmp1645, 65);
        panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1645);
        $tmp1596 = $tmp1646.value;
        $l1644:;
        panda$core$Bit $tmp1647 = { $tmp1596 };
        bool $tmp1595 = $tmp1647.value;
        if ($tmp1595) goto $l1648;
        panda$core$Int64$init$builtin_int64(&$tmp1649, 64);
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1649);
        $tmp1595 = $tmp1650.value;
        $l1648:;
        panda$core$Bit $tmp1651 = { $tmp1595 };
        bool $tmp1594 = $tmp1651.value;
        if ($tmp1594) goto $l1652;
        panda$core$Int64$init$builtin_int64(&$tmp1653, 56);
        panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1653);
        $tmp1594 = $tmp1654.value;
        $l1652:;
        panda$core$Bit $tmp1655 = { $tmp1594 };
        bool $tmp1593 = $tmp1655.value;
        if ($tmp1593) goto $l1656;
        panda$core$Int64$init$builtin_int64(&$tmp1657, 66);
        panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1657);
        $tmp1593 = $tmp1658.value;
        $l1656:;
        panda$core$Bit $tmp1659 = { $tmp1593 };
        bool $tmp1592 = $tmp1659.value;
        if ($tmp1592) goto $l1660;
        panda$core$Int64$init$builtin_int64(&$tmp1661, 67);
        panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1661);
        $tmp1592 = $tmp1662.value;
        $l1660:;
        panda$core$Bit $tmp1663 = { $tmp1592 };
        bool $tmp1591 = $tmp1663.value;
        if ($tmp1591) goto $l1664;
        panda$core$Int64$init$builtin_int64(&$tmp1665, 68);
        panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1665);
        $tmp1591 = $tmp1666.value;
        $l1664:;
        panda$core$Bit $tmp1667 = { $tmp1591 };
        bool $tmp1590 = $tmp1667.value;
        if ($tmp1590) goto $l1668;
        panda$core$Int64$init$builtin_int64(&$tmp1669, 69);
        panda$core$Bit $tmp1670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1669);
        $tmp1590 = $tmp1670.value;
        $l1668:;
        panda$core$Bit $tmp1671 = { $tmp1590 };
        bool $tmp1589 = $tmp1671.value;
        if ($tmp1589) goto $l1672;
        panda$core$Int64$init$builtin_int64(&$tmp1673, 70);
        panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1673);
        $tmp1589 = $tmp1674.value;
        $l1672:;
        panda$core$Bit $tmp1675 = { $tmp1589 };
        bool $tmp1588 = $tmp1675.value;
        if ($tmp1588) goto $l1676;
        panda$core$Int64$init$builtin_int64(&$tmp1677, 71);
        panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1677);
        $tmp1588 = $tmp1678.value;
        $l1676:;
        panda$core$Bit $tmp1679 = { $tmp1588 };
        bool $tmp1587 = $tmp1679.value;
        if ($tmp1587) goto $l1680;
        panda$core$Int64$init$builtin_int64(&$tmp1681, 49);
        panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1681);
        $tmp1587 = $tmp1682.value;
        $l1680:;
        panda$core$Bit $tmp1683 = { $tmp1587 };
        bool $tmp1586 = $tmp1683.value;
        if ($tmp1586) goto $l1684;
        panda$core$Int64$init$builtin_int64(&$tmp1685, 50);
        panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1685);
        $tmp1586 = $tmp1686.value;
        $l1684:;
        panda$core$Bit $tmp1687 = { $tmp1586 };
        bool $tmp1585 = $tmp1687.value;
        if ($tmp1585) goto $l1688;
        panda$core$Int64$init$builtin_int64(&$tmp1689, 72);
        panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1689);
        $tmp1585 = $tmp1690.value;
        $l1688:;
        panda$core$Bit $tmp1691 = { $tmp1585 };
        if ($tmp1691.value) {
        {
            panda$core$String* $tmp1695 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1582);
            $tmp1694 = $tmp1695;
            $tmp1693 = $tmp1694;
            $returnValue1692 = $tmp1693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
            return $returnValue1692;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1697, 63);
        panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1697);
        if ($tmp1698.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1700 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1699 = $tmp1700;
            panda$core$Int64$init$builtin_int64(&$tmp1701, 63);
            panda$core$Bit $tmp1702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1699.kind.$rawValue, $tmp1701);
            if ($tmp1702.value) {
            {
                $tmp1703 = &$s1704;
                $returnValue1692 = $tmp1703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1703));
                return $returnValue1692;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1699);
                $tmp1706 = &$s1707;
                $returnValue1692 = $tmp1706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
                return $returnValue1692;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1709, 101);
        panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$684_91584.$rawValue, $tmp1709);
        if ($tmp1710.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1712, 102);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1711, $tmp1712);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1714 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1711, &$s1713);
            if (((panda$core$Bit) { !$tmp1714.nonnull }).value) {
            {
                $tmp1715 = NULL;
                $returnValue1692 = $tmp1715;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                return $returnValue1692;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1718, 73);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1717, $tmp1718);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1719 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1717);
            if (((panda$core$Bit) { $tmp1719.nonnull }).value) {
            {
                $tmp1720 = &$s1721;
                $returnValue1692 = $tmp1720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
                return $returnValue1692;
            }
            }
            $tmp1723 = &$s1724;
            $returnValue1692 = $tmp1723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
            return $returnValue1692;
        }
        }
        else {
        {
            panda$core$String* $tmp1730 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1582);
            $tmp1729 = $tmp1730;
            panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1728, $tmp1729);
            $tmp1727 = $tmp1731;
            panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1732);
            $tmp1726 = $tmp1733;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1582, $tmp1726);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
            $tmp1734 = NULL;
            $returnValue1692 = $tmp1734;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
            return $returnValue1692;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1736;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    org$pandalanguage$pandac$ASTNode* $tmp1738;
    panda$core$Bit $tmp1739;
    panda$core$Bit$init$builtin_bit(&$tmp1739, true);
    org$pandalanguage$pandac$ASTNode* $tmp1740 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1739);
    $tmp1738 = $tmp1740;
    $tmp1737 = $tmp1738;
    $returnValue1736 = $tmp1737;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
    return $returnValue1736;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1745;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1746;
    panda$core$Int64 $tmp1747;
    org$pandalanguage$pandac$ASTNode* $returnValue1750;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    panda$collections$Array* subtypes1754 = NULL;
    panda$collections$Array* $tmp1755;
    panda$collections$Array* $tmp1756;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1758;
    panda$core$Int64 $tmp1759;
    org$pandalanguage$pandac$ASTNode* t1764 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1765;
    org$pandalanguage$pandac$ASTNode* $tmp1766;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1775;
    panda$core$Int64 $tmp1776;
    org$pandalanguage$pandac$ASTNode* $tmp1778;
    org$pandalanguage$pandac$ASTNode* $tmp1779;
    org$pandalanguage$pandac$ASTNode* $tmp1780;
    org$pandalanguage$pandac$ASTNode* $tmp1782;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1786;
    panda$core$Int64 $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$parser$Token yields1795;
    org$pandalanguage$pandac$parser$Token$Kind $match$748_91797;
    panda$core$Int64 $tmp1801;
    panda$core$Int64 $tmp1804;
    panda$core$Int64 $tmp1808;
    panda$core$Int64 $tmp1812;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1818;
    panda$core$Int64 $tmp1819;
    org$pandalanguage$pandac$ASTNode* $tmp1822;
    panda$collections$Array* returnTypes1826 = NULL;
    panda$collections$Array* $tmp1827;
    panda$collections$Array* $tmp1828;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1830;
    panda$core$Int64 $tmp1831;
    org$pandalanguage$pandac$ASTNode* t1836 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    org$pandalanguage$pandac$ASTNode* $tmp1838;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1848;
    panda$core$Int64 $tmp1849;
    org$pandalanguage$pandac$ASTNode* $tmp1851;
    org$pandalanguage$pandac$ASTNode* $tmp1852;
    org$pandalanguage$pandac$ASTNode* $tmp1853;
    org$pandalanguage$pandac$ASTNode* $tmp1855;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1860;
    panda$core$Int64 $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1864;
    org$pandalanguage$pandac$ASTNode* returnType1870 = NULL;
    panda$core$Int64 $tmp1872;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    org$pandalanguage$pandac$ASTNode* $tmp1875;
    panda$core$Int64 $tmp1877;
    org$pandalanguage$pandac$ASTNode* $tmp1879;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    panda$core$Object* $tmp1881;
    panda$core$Int64 $tmp1882;
    org$pandalanguage$pandac$ASTNode* $tmp1885;
    org$pandalanguage$pandac$ASTNode* $tmp1889;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    panda$core$Int64 $tmp1892;
    panda$collections$ImmutableArray* $tmp1893;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    int $tmp1744;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1747, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1746, $tmp1747);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1746, &$s1748);
        start1745 = $tmp1749;
        if (((panda$core$Bit) { !start1745.nonnull }).value) {
        {
            $tmp1751 = NULL;
            $returnValue1750 = $tmp1751;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
            $tmp1744 = 0;
            goto $l1742;
            $l1752:;
            return $returnValue1750;
        }
        }
        panda$collections$Array* $tmp1757 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1757);
        $tmp1756 = $tmp1757;
        $tmp1755 = $tmp1756;
        subtypes1754 = $tmp1755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
        panda$core$Int64$init$builtin_int64(&$tmp1759, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1758, $tmp1759);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1760 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1758);
        if (((panda$core$Bit) { !$tmp1760.nonnull }).value) {
        {
            int $tmp1763;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1767 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1766 = $tmp1767;
                $tmp1765 = $tmp1766;
                t1764 = $tmp1765;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
                if (((panda$core$Bit) { t1764 == NULL }).value) {
                {
                    $tmp1768 = NULL;
                    $returnValue1750 = $tmp1768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
                    $tmp1763 = 0;
                    goto $l1761;
                    $l1769:;
                    $tmp1744 = 1;
                    goto $l1742;
                    $l1770:;
                    return $returnValue1750;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1754, ((panda$core$Object*) t1764));
                $l1772:;
                panda$core$Int64$init$builtin_int64(&$tmp1776, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1775, $tmp1776);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1777 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1775);
                bool $tmp1774 = ((panda$core$Bit) { $tmp1777.nonnull }).value;
                if (!$tmp1774) goto $l1773;
                {
                    {
                        $tmp1778 = t1764;
                        org$pandalanguage$pandac$ASTNode* $tmp1781 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1780 = $tmp1781;
                        $tmp1779 = $tmp1780;
                        t1764 = $tmp1779;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                    }
                    if (((panda$core$Bit) { t1764 == NULL }).value) {
                    {
                        $tmp1782 = NULL;
                        $returnValue1750 = $tmp1782;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
                        $tmp1763 = 1;
                        goto $l1761;
                        $l1783:;
                        $tmp1744 = 2;
                        goto $l1742;
                        $l1784:;
                        return $returnValue1750;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1754, ((panda$core$Object*) t1764));
                }
                goto $l1772;
                $l1773:;
                panda$core$Int64$init$builtin_int64(&$tmp1787, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1786, $tmp1787);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1789 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1786, &$s1788);
                if (((panda$core$Bit) { !$tmp1789.nonnull }).value) {
                {
                    $tmp1790 = NULL;
                    $returnValue1750 = $tmp1790;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                    $tmp1763 = 2;
                    goto $l1761;
                    $l1791:;
                    $tmp1744 = 3;
                    goto $l1742;
                    $l1792:;
                    return $returnValue1750;
                }
                }
            }
            $tmp1763 = -1;
            goto $l1761;
            $l1761:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1764));
            t1764 = NULL;
            switch ($tmp1763) {
                case 0: goto $l1769;
                case -1: goto $l1794;
                case 1: goto $l1783;
                case 2: goto $l1791;
            }
            $l1794:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1796 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1795 = $tmp1796;
        {
            $match$748_91797 = yields1795.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1801, 90);
            panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$748_91797.$rawValue, $tmp1801);
            bool $tmp1800 = $tmp1802.value;
            if ($tmp1800) goto $l1803;
            panda$core$Int64$init$builtin_int64(&$tmp1804, 91);
            panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$748_91797.$rawValue, $tmp1804);
            $tmp1800 = $tmp1805.value;
            $l1803:;
            panda$core$Bit $tmp1806 = { $tmp1800 };
            bool $tmp1799 = $tmp1806.value;
            if ($tmp1799) goto $l1807;
            panda$core$Int64$init$builtin_int64(&$tmp1808, 92);
            panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$748_91797.$rawValue, $tmp1808);
            $tmp1799 = $tmp1809.value;
            $l1807:;
            panda$core$Bit $tmp1810 = { $tmp1799 };
            bool $tmp1798 = $tmp1810.value;
            if ($tmp1798) goto $l1811;
            panda$core$Int64$init$builtin_int64(&$tmp1812, 93);
            panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$748_91797.$rawValue, $tmp1812);
            $tmp1798 = $tmp1813.value;
            $l1811:;
            panda$core$Bit $tmp1814 = { $tmp1798 };
            if ($tmp1814.value) {
            {
                int $tmp1817;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1819, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1818, $tmp1819);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1821 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1818, &$s1820);
                    if (((panda$core$Bit) { !$tmp1821.nonnull }).value) {
                    {
                        $tmp1822 = NULL;
                        $returnValue1750 = $tmp1822;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                        $tmp1817 = 0;
                        goto $l1815;
                        $l1823:;
                        $tmp1744 = 4;
                        goto $l1742;
                        $l1824:;
                        return $returnValue1750;
                    }
                    }
                    panda$collections$Array* $tmp1829 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1829);
                    $tmp1828 = $tmp1829;
                    $tmp1827 = $tmp1828;
                    returnTypes1826 = $tmp1827;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
                    panda$core$Int64$init$builtin_int64(&$tmp1831, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1830, $tmp1831);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1832 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1830);
                    if (((panda$core$Bit) { !$tmp1832.nonnull }).value) {
                    {
                        int $tmp1835;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1839 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1838 = $tmp1839;
                            $tmp1837 = $tmp1838;
                            t1836 = $tmp1837;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1838));
                            if (((panda$core$Bit) { t1836 == NULL }).value) {
                            {
                                $tmp1840 = NULL;
                                $returnValue1750 = $tmp1840;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
                                $tmp1835 = 0;
                                goto $l1833;
                                $l1841:;
                                $tmp1817 = 1;
                                goto $l1815;
                                $l1842:;
                                $tmp1744 = 5;
                                goto $l1742;
                                $l1843:;
                                return $returnValue1750;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1826, ((panda$core$Object*) t1836));
                            $l1845:;
                            panda$core$Int64$init$builtin_int64(&$tmp1849, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1848, $tmp1849);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1850 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1848);
                            bool $tmp1847 = ((panda$core$Bit) { $tmp1850.nonnull }).value;
                            if (!$tmp1847) goto $l1846;
                            {
                                {
                                    $tmp1851 = t1836;
                                    org$pandalanguage$pandac$ASTNode* $tmp1854 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1853 = $tmp1854;
                                    $tmp1852 = $tmp1853;
                                    t1836 = $tmp1852;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
                                }
                                if (((panda$core$Bit) { t1836 == NULL }).value) {
                                {
                                    $tmp1855 = NULL;
                                    $returnValue1750 = $tmp1855;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1855));
                                    $tmp1835 = 1;
                                    goto $l1833;
                                    $l1856:;
                                    $tmp1817 = 2;
                                    goto $l1815;
                                    $l1857:;
                                    $tmp1744 = 6;
                                    goto $l1742;
                                    $l1858:;
                                    return $returnValue1750;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1826, ((panda$core$Object*) t1836));
                            }
                            goto $l1845;
                            $l1846:;
                            panda$core$Int64$init$builtin_int64(&$tmp1861, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1860, $tmp1861);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1863 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1860, &$s1862);
                            if (((panda$core$Bit) { !$tmp1863.nonnull }).value) {
                            {
                                $tmp1864 = NULL;
                                $returnValue1750 = $tmp1864;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
                                $tmp1835 = 2;
                                goto $l1833;
                                $l1865:;
                                $tmp1817 = 3;
                                goto $l1815;
                                $l1866:;
                                $tmp1744 = 7;
                                goto $l1742;
                                $l1867:;
                                return $returnValue1750;
                            }
                            }
                        }
                        $tmp1835 = -1;
                        goto $l1833;
                        $l1833:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1836));
                        t1836 = NULL;
                        switch ($tmp1835) {
                            case 1: goto $l1856;
                            case -1: goto $l1869;
                            case 0: goto $l1841;
                            case 2: goto $l1865;
                        }
                        $l1869:;
                    }
                    }
                    memset(&returnType1870, 0, sizeof(returnType1870));
                    panda$core$Int64 $tmp1871 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1826);
                    panda$core$Int64$init$builtin_int64(&$tmp1872, 0);
                    panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1871, $tmp1872);
                    if ($tmp1873.value) {
                    {
                        {
                            $tmp1874 = returnType1870;
                            $tmp1875 = NULL;
                            returnType1870 = $tmp1875;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1876 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1826);
                    panda$core$Int64$init$builtin_int64(&$tmp1877, 1);
                    panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1876, $tmp1877);
                    if ($tmp1878.value) {
                    {
                        {
                            $tmp1879 = returnType1870;
                            panda$core$Int64$init$builtin_int64(&$tmp1882, 0);
                            panda$core$Object* $tmp1883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1826, $tmp1882);
                            $tmp1881 = $tmp1883;
                            $tmp1880 = ((org$pandalanguage$pandac$ASTNode*) $tmp1881);
                            returnType1870 = $tmp1880;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
                            panda$core$Panda$unref$panda$core$Object($tmp1881);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1745.value), &$s1884);
                        $tmp1885 = NULL;
                        $returnValue1750 = $tmp1885;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
                        $tmp1817 = 4;
                        goto $l1815;
                        $l1886:;
                        $tmp1744 = 8;
                        goto $l1742;
                        $l1887:;
                        return $returnValue1750;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1891 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1892, 27);
                    panda$collections$ImmutableArray* $tmp1894 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1754);
                    $tmp1893 = $tmp1894;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1891, $tmp1892, ((org$pandalanguage$pandac$parser$Token) start1745.value).position, yields1795.kind, $tmp1893, returnType1870);
                    $tmp1890 = $tmp1891;
                    $tmp1889 = $tmp1890;
                    $returnValue1750 = $tmp1889;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
                    $tmp1817 = 5;
                    goto $l1815;
                    $l1895:;
                    $tmp1744 = 9;
                    goto $l1742;
                    $l1896:;
                    return $returnValue1750;
                }
                $l1815:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1870));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1826));
                returnTypes1826 = NULL;
                switch ($tmp1817) {
                    case 2: goto $l1857;
                    case 1: goto $l1842;
                    case 3: goto $l1866;
                    case 0: goto $l1823;
                    case 5: goto $l1895;
                    case 4: goto $l1886;
                }
                $l1898:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1745.value), &$s1899);
                $tmp1900 = NULL;
                $returnValue1750 = $tmp1900;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                $tmp1744 = 10;
                goto $l1742;
                $l1901:;
                return $returnValue1750;
            }
            }
        }
    }
    $tmp1744 = -1;
    goto $l1742;
    $l1742:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1754));
    subtypes1754 = NULL;
    switch ($tmp1744) {
        case 3: goto $l1792;
        case 1: goto $l1770;
        case 10: goto $l1901;
        case 7: goto $l1867;
        case 9: goto $l1896;
        case 8: goto $l1887;
        case -1: goto $l1903;
        case 6: goto $l1858;
        case 5: goto $l1843;
        case 4: goto $l1824;
        case 2: goto $l1784;
        case 0: goto $l1752;
    }
    $l1903:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1907 = NULL;
    panda$core$Int64 $tmp1909;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* $tmp1912;
    org$pandalanguage$pandac$ASTNode* $tmp1913;
    org$pandalanguage$pandac$ASTNode* $returnValue1915;
    org$pandalanguage$pandac$ASTNode* $tmp1916;
    org$pandalanguage$pandac$parser$Token$nullable start1922;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1923;
    panda$core$Int64 $tmp1924;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    panda$core$MutableString* name1931 = NULL;
    panda$core$MutableString* $tmp1932;
    panda$core$MutableString* $tmp1933;
    panda$core$String* $tmp1935;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1940;
    panda$core$Int64 $tmp1941;
    org$pandalanguage$pandac$parser$Token$nullable id1943;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1944;
    panda$core$Int64 $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    panda$core$Char8 $tmp1952;
    panda$core$UInt8 $tmp1953;
    panda$core$String* $tmp1954;
    panda$core$String* finalName1956 = NULL;
    panda$core$String* $tmp1957;
    panda$core$String* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $tmp1960;
    org$pandalanguage$pandac$ASTNode* $tmp1961;
    org$pandalanguage$pandac$ASTNode* $tmp1962;
    panda$core$Int64 $tmp1964;
    panda$core$Int64 $tmp1966;
    panda$collections$Array* children1971 = NULL;
    panda$collections$Array* $tmp1972;
    panda$collections$Array* $tmp1973;
    org$pandalanguage$pandac$ASTNode* t1975 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1976;
    org$pandalanguage$pandac$ASTNode* $tmp1977;
    panda$core$Bit $tmp1978;
    org$pandalanguage$pandac$ASTNode* $tmp1980;
    org$pandalanguage$pandac$ASTNode* $tmp1985;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1993;
    panda$core$Int64 $tmp1994;
    org$pandalanguage$pandac$ASTNode* $tmp1996;
    org$pandalanguage$pandac$ASTNode* $tmp1997;
    org$pandalanguage$pandac$ASTNode* $tmp1998;
    panda$core$Bit $tmp1999;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2011;
    panda$core$Int64 $tmp2012;
    org$pandalanguage$pandac$ASTNode* $tmp2015;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2026;
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    panda$core$Int64 $tmp2029;
    panda$collections$ImmutableArray* $tmp2030;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2034;
    panda$core$Int64 $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
    org$pandalanguage$pandac$ASTNode* $tmp2039;
    panda$core$Int64 $tmp2041;
    org$pandalanguage$pandac$ASTNode* $tmp2044;
    int $tmp1906;
    {
        memset(&result1907, 0, sizeof(result1907));
        org$pandalanguage$pandac$parser$Token $tmp1908 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1909, 103);
        panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1908.kind.$rawValue, $tmp1909);
        if ($tmp1910.value) {
        {
            {
                $tmp1911 = result1907;
                org$pandalanguage$pandac$ASTNode* $tmp1914 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1913 = $tmp1914;
                $tmp1912 = $tmp1913;
                result1907 = $tmp1912;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
            }
            if (((panda$core$Bit) { result1907 == NULL }).value) {
            {
                $tmp1916 = NULL;
                $returnValue1915 = $tmp1916;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1916));
                $tmp1906 = 0;
                goto $l1904;
                $l1917:;
                return $returnValue1915;
            }
            }
        }
        }
        else {
        {
            int $tmp1921;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1924, 48);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1923, $tmp1924);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1926 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1923, &$s1925);
                start1922 = $tmp1926;
                if (((panda$core$Bit) { !start1922.nonnull }).value) {
                {
                    $tmp1927 = NULL;
                    $returnValue1915 = $tmp1927;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
                    $tmp1921 = 0;
                    goto $l1919;
                    $l1928:;
                    $tmp1906 = 1;
                    goto $l1904;
                    $l1929:;
                    return $returnValue1915;
                }
                }
                panda$core$MutableString* $tmp1934 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1936 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1922.value));
                $tmp1935 = $tmp1936;
                panda$core$MutableString$init$panda$core$String($tmp1934, $tmp1935);
                $tmp1933 = $tmp1934;
                $tmp1932 = $tmp1933;
                name1931 = $tmp1932;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                $l1937:;
                panda$core$Int64$init$builtin_int64(&$tmp1941, 98);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1940, $tmp1941);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1942 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1940);
                bool $tmp1939 = ((panda$core$Bit) { $tmp1942.nonnull }).value;
                if (!$tmp1939) goto $l1938;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1945, 48);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1944, $tmp1945);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1947 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1944, &$s1946);
                    id1943 = $tmp1947;
                    if (((panda$core$Bit) { !id1943.nonnull }).value) {
                    {
                        $tmp1948 = NULL;
                        $returnValue1915 = $tmp1948;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
                        $tmp1921 = 1;
                        goto $l1919;
                        $l1949:;
                        $tmp1906 = 2;
                        goto $l1904;
                        $l1950:;
                        return $returnValue1915;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1953, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1952, $tmp1953);
                    panda$core$MutableString$append$panda$core$Char8(name1931, $tmp1952);
                    panda$core$String* $tmp1955 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1943.value));
                    $tmp1954 = $tmp1955;
                    panda$core$MutableString$append$panda$core$String(name1931, $tmp1954);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                }
                goto $l1937;
                $l1938:;
                panda$core$String* $tmp1959 = panda$core$MutableString$finish$R$panda$core$String(name1931);
                $tmp1958 = $tmp1959;
                $tmp1957 = $tmp1958;
                finalName1956 = $tmp1957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
                {
                    $tmp1960 = result1907;
                    org$pandalanguage$pandac$ASTNode* $tmp1963 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1964, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1963, $tmp1964, ((org$pandalanguage$pandac$parser$Token) start1922.value).position, finalName1956);
                    $tmp1962 = $tmp1963;
                    $tmp1961 = $tmp1962;
                    result1907 = $tmp1961;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                }
                org$pandalanguage$pandac$parser$Token $tmp1965 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp1966, 62);
                panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965.kind.$rawValue, $tmp1966);
                if ($tmp1967.value) {
                {
                    int $tmp1970;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp1974 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1974);
                        $tmp1973 = $tmp1974;
                        $tmp1972 = $tmp1973;
                        children1971 = $tmp1972;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                        panda$core$Bit$init$builtin_bit(&$tmp1978, false);
                        org$pandalanguage$pandac$ASTNode* $tmp1979 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1978);
                        $tmp1977 = $tmp1979;
                        $tmp1976 = $tmp1977;
                        t1975 = $tmp1976;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                        if (((panda$core$Bit) { t1975 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1980 = result1907;
                                $returnValue1915 = $tmp1980;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
                                $tmp1970 = 0;
                                goto $l1968;
                                $l1981:;
                                $tmp1921 = 2;
                                goto $l1919;
                                $l1982:;
                                $tmp1906 = 3;
                                goto $l1904;
                                $l1983:;
                                return $returnValue1915;
                            }
                            }
                            $tmp1985 = NULL;
                            $returnValue1915 = $tmp1985;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
                            $tmp1970 = 1;
                            goto $l1968;
                            $l1986:;
                            $tmp1921 = 3;
                            goto $l1919;
                            $l1987:;
                            $tmp1906 = 4;
                            goto $l1904;
                            $l1988:;
                            return $returnValue1915;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children1971, ((panda$core$Object*) t1975));
                        $l1990:;
                        panda$core$Int64$init$builtin_int64(&$tmp1994, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1993, $tmp1994);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1995 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1993);
                        bool $tmp1992 = ((panda$core$Bit) { $tmp1995.nonnull }).value;
                        if (!$tmp1992) goto $l1991;
                        {
                            {
                                $tmp1996 = t1975;
                                panda$core$Bit$init$builtin_bit(&$tmp1999, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2000 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1999);
                                $tmp1998 = $tmp2000;
                                $tmp1997 = $tmp1998;
                                t1975 = $tmp1997;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1996));
                            }
                            if (((panda$core$Bit) { t1975 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2001 = result1907;
                                    $returnValue1915 = $tmp2001;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
                                    $tmp1970 = 2;
                                    goto $l1968;
                                    $l2002:;
                                    $tmp1921 = 4;
                                    goto $l1919;
                                    $l2003:;
                                    $tmp1906 = 5;
                                    goto $l1904;
                                    $l2004:;
                                    return $returnValue1915;
                                }
                                }
                                $tmp2006 = NULL;
                                $returnValue1915 = $tmp2006;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
                                $tmp1970 = 3;
                                goto $l1968;
                                $l2007:;
                                $tmp1921 = 5;
                                goto $l1919;
                                $l2008:;
                                $tmp1906 = 6;
                                goto $l1904;
                                $l2009:;
                                return $returnValue1915;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children1971, ((panda$core$Object*) t1975));
                        }
                        goto $l1990;
                        $l1991:;
                        panda$core$Int64$init$builtin_int64(&$tmp2012, 63);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2011, $tmp2012);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2011, &$s2013);
                        if (((panda$core$Bit) { !$tmp2014.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2015 = result1907;
                                $returnValue1915 = $tmp2015;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
                                $tmp1970 = 4;
                                goto $l1968;
                                $l2016:;
                                $tmp1921 = 6;
                                goto $l1919;
                                $l2017:;
                                $tmp1906 = 7;
                                goto $l1904;
                                $l2018:;
                                return $returnValue1915;
                            }
                            }
                            $tmp2020 = NULL;
                            $returnValue1915 = $tmp2020;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2020));
                            $tmp1970 = 5;
                            goto $l1968;
                            $l2021:;
                            $tmp1921 = 7;
                            goto $l1919;
                            $l2022:;
                            $tmp1906 = 8;
                            goto $l1904;
                            $l2023:;
                            return $returnValue1915;
                        }
                        }
                        {
                            $tmp2025 = result1907;
                            org$pandalanguage$pandac$ASTNode* $tmp2028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2029, 19);
                            panda$collections$ImmutableArray* $tmp2031 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1971);
                            $tmp2030 = $tmp2031;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2028, $tmp2029, ((org$pandalanguage$pandac$parser$Token) start1922.value).position, finalName1956, $tmp2030);
                            $tmp2027 = $tmp2028;
                            $tmp2026 = $tmp2027;
                            result1907 = $tmp2026;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2026));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp1970 = -1;
                    goto $l1968;
                    $l1968:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1975));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1971));
                    children1971 = NULL;
                    t1975 = NULL;
                    switch ($tmp1970) {
                        case -1: goto $l2032;
                        case 5: goto $l2021;
                        case 0: goto $l1981;
                        case 2: goto $l2002;
                        case 1: goto $l1986;
                        case 4: goto $l2016;
                        case 3: goto $l2007;
                    }
                    $l2032:;
                }
                }
            }
            $tmp1921 = -1;
            goto $l1919;
            $l1919:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1956));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1931));
            name1931 = NULL;
            finalName1956 = NULL;
            switch ($tmp1921) {
                case 1: goto $l1949;
                case 5: goto $l2008;
                case 3: goto $l1987;
                case 2: goto $l1982;
                case 0: goto $l1928;
                case -1: goto $l2033;
                case 7: goto $l2022;
                case 6: goto $l2017;
                case 4: goto $l2003;
            }
            $l2033:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2035, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2034, $tmp2035);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2036 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2034);
        if (((panda$core$Bit) { $tmp2036.nonnull }).value) {
        {
            {
                $tmp2037 = result1907;
                org$pandalanguage$pandac$ASTNode* $tmp2040 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2041, 29);
                org$pandalanguage$pandac$Position $tmp2043 = (($fn2042) result1907->$class->vtable[2])(result1907);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2040, $tmp2041, $tmp2043, result1907);
                $tmp2039 = $tmp2040;
                $tmp2038 = $tmp2039;
                result1907 = $tmp2038;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
            }
        }
        }
        $tmp2044 = result1907;
        $returnValue1915 = $tmp2044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
        $tmp1906 = 9;
        goto $l1904;
        $l2045:;
        return $returnValue1915;
    }
    $l1904:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1907));
    switch ($tmp1906) {
        case 6: goto $l2009;
        case 4: goto $l1988;
        case 2: goto $l1950;
        case 3: goto $l1983;
        case 5: goto $l2004;
        case 0: goto $l1917;
        case 9: goto $l2045;
        case 8: goto $l2023;
        case 7: goto $l2018;
        case 1: goto $l1929;
    }
    $l2047:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2051 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2053;
    org$pandalanguage$pandac$ASTNode* $returnValue2055;
    org$pandalanguage$pandac$ASTNode* $tmp2056;
    org$pandalanguage$pandac$parser$Token token2061;
    org$pandalanguage$pandac$parser$Token$Kind $match$886_132063;
    panda$core$Int64 $tmp2064;
    panda$core$Object* $tmp2069;
    panda$core$Bit $tmp2070;
    panda$collections$Array* args2072 = NULL;
    panda$collections$Array* $tmp2073;
    panda$collections$Array* $tmp2074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2076;
    panda$core$Int64 $tmp2077;
    org$pandalanguage$pandac$ASTNode* expr2082 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2083;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    panda$core$Object* $tmp2086;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2096;
    panda$core$Int64 $tmp2097;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2100;
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    panda$core$Object* $tmp2103;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2110;
    panda$core$Int64 $tmp2111;
    panda$core$Object* $tmp2114;
    org$pandalanguage$pandac$ASTNode* $tmp2116;
    panda$core$Object* $tmp2122;
    org$pandalanguage$pandac$ASTNode* $tmp2124;
    org$pandalanguage$pandac$ASTNode* $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    panda$core$Int64 $tmp2128;
    panda$collections$ImmutableArray* $tmp2129;
    panda$core$Int64 $tmp2132;
    org$pandalanguage$pandac$ASTNode* arg2137 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    org$pandalanguage$pandac$ASTNode* $tmp2139;
    org$pandalanguage$pandac$ASTNode* $tmp2141;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2145;
    panda$core$Int64 $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2149;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    panda$core$Int64 $tmp2157;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2158;
    panda$core$Int64 $tmp2159;
    panda$core$Int64 $tmp2161;
    panda$core$String* name2166 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2167;
    panda$core$Int64 $tmp2168;
    panda$core$String* $tmp2170;
    panda$core$String* $tmp2171;
    panda$core$String* $tmp2173;
    panda$core$String* $tmp2174;
    panda$core$String* $tmp2175;
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    org$pandalanguage$pandac$ASTNode* $tmp2182;
    org$pandalanguage$pandac$ASTNode* $tmp2183;
    panda$core$Int64 $tmp2185;
    panda$core$Int64 $tmp2187;
    org$pandalanguage$pandac$ASTNode* target2192 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2193;
    org$pandalanguage$pandac$ASTNode* $tmp2194;
    org$pandalanguage$pandac$ASTNode* $tmp2196;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2202;
    panda$core$Int64 $tmp2204;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2205;
    panda$core$Int64 $tmp2206;
    panda$core$Int64 $tmp2208;
    panda$core$String* name2213 = NULL;
    panda$core$String* $tmp2214;
    panda$core$String* $tmp2215;
    panda$collections$Array* types2220 = NULL;
    panda$collections$Array* $tmp2221;
    panda$collections$Array* $tmp2222;
    org$pandalanguage$pandac$ASTNode* t2224 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
    panda$core$Bit $tmp2227;
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2237;
    panda$core$Int64 $tmp2238;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    panda$core$Bit $tmp2243;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$parser$Token$nullable gt2250;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2251;
    panda$core$Int64 $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    panda$core$Bit shouldAccept2260;
    panda$core$Object* $tmp2261;
    panda$core$Int64 $tmp2262;
    org$pandalanguage$pandac$parser$Token n2264;
    org$pandalanguage$pandac$parser$Token$Kind $match$999_292266;
    panda$core$Int64 $tmp2269;
    panda$core$Int64 $tmp2272;
    panda$core$Int64 $tmp2276;
    panda$core$Bit $tmp2279;
    panda$core$Int64 $tmp2280;
    panda$core$Int64 $tmp2285;
    panda$core$Bit $tmp2289;
    panda$core$Bit $tmp2290;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2293;
    panda$core$Int64 $tmp2295;
    panda$collections$ImmutableArray* $tmp2298;
    org$pandalanguage$pandac$ASTNode* $tmp2302;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    int $tmp2050;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2054 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2053 = $tmp2054;
        $tmp2052 = $tmp2053;
        result2051 = $tmp2052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
        if (((panda$core$Bit) { result2051 == NULL }).value) {
        {
            $tmp2056 = NULL;
            $returnValue2055 = $tmp2056;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
            $tmp2050 = 0;
            goto $l2048;
            $l2057:;
            return $returnValue2055;
        }
        }
        $l2059:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2062 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2061 = $tmp2062;
            {
                $match$886_132063 = token2061.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2064, 103);
                panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$886_132063.$rawValue, $tmp2064);
                if ($tmp2065.value) {
                {
                    int $tmp2068;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2070, true);
                        panda$core$Bit$wrapper* $tmp2071;
                        $tmp2071 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2071->value = $tmp2070;
                        $tmp2069 = ((panda$core$Object*) $tmp2071);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2069);
                        panda$core$Panda$unref$panda$core$Object($tmp2069);
                        panda$collections$Array* $tmp2075 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2075);
                        $tmp2074 = $tmp2075;
                        $tmp2073 = $tmp2074;
                        args2072 = $tmp2073;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                        panda$core$Int64$init$builtin_int64(&$tmp2077, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2076, $tmp2077);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2078 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2076);
                        if (((panda$core$Bit) { !$tmp2078.nonnull }).value) {
                        {
                            int $tmp2081;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2085 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2084 = $tmp2085;
                                $tmp2083 = $tmp2084;
                                expr2082 = $tmp2083;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                                if (((panda$core$Bit) { expr2082 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2087 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2086 = $tmp2087;
                                    panda$core$Panda$unref$panda$core$Object($tmp2086);
                                    $tmp2088 = NULL;
                                    $returnValue2055 = $tmp2088;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                                    $tmp2081 = 0;
                                    goto $l2079;
                                    $l2089:;
                                    $tmp2068 = 0;
                                    goto $l2066;
                                    $l2090:;
                                    $tmp2050 = 1;
                                    goto $l2048;
                                    $l2091:;
                                    return $returnValue2055;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2072, ((panda$core$Object*) expr2082));
                                $l2093:;
                                panda$core$Int64$init$builtin_int64(&$tmp2097, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2096, $tmp2097);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2098 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2096);
                                bool $tmp2095 = ((panda$core$Bit) { $tmp2098.nonnull }).value;
                                if (!$tmp2095) goto $l2094;
                                {
                                    {
                                        $tmp2099 = expr2082;
                                        org$pandalanguage$pandac$ASTNode* $tmp2102 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2101 = $tmp2102;
                                        $tmp2100 = $tmp2101;
                                        expr2082 = $tmp2100;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                                    }
                                    if (((panda$core$Bit) { expr2082 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2104 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2103 = $tmp2104;
                                        panda$core$Panda$unref$panda$core$Object($tmp2103);
                                        $tmp2105 = NULL;
                                        $returnValue2055 = $tmp2105;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2105));
                                        $tmp2081 = 1;
                                        goto $l2079;
                                        $l2106:;
                                        $tmp2068 = 1;
                                        goto $l2066;
                                        $l2107:;
                                        $tmp2050 = 2;
                                        goto $l2048;
                                        $l2108:;
                                        return $returnValue2055;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2072, ((panda$core$Object*) expr2082));
                                }
                                goto $l2093;
                                $l2094:;
                                panda$core$Int64$init$builtin_int64(&$tmp2111, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2110, $tmp2111);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2113 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2110, &$s2112);
                                if (((panda$core$Bit) { !$tmp2113.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2115 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2114 = $tmp2115;
                                    panda$core$Panda$unref$panda$core$Object($tmp2114);
                                    $tmp2116 = NULL;
                                    $returnValue2055 = $tmp2116;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                    $tmp2081 = 2;
                                    goto $l2079;
                                    $l2117:;
                                    $tmp2068 = 2;
                                    goto $l2066;
                                    $l2118:;
                                    $tmp2050 = 3;
                                    goto $l2048;
                                    $l2119:;
                                    return $returnValue2055;
                                }
                                }
                            }
                            $tmp2081 = -1;
                            goto $l2079;
                            $l2079:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2082));
                            expr2082 = NULL;
                            switch ($tmp2081) {
                                case 0: goto $l2089;
                                case 1: goto $l2106;
                                case 2: goto $l2117;
                                case -1: goto $l2121;
                            }
                            $l2121:;
                        }
                        }
                        panda$core$Object* $tmp2123 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2122 = $tmp2123;
                        panda$core$Panda$unref$panda$core$Object($tmp2122);
                        {
                            $tmp2124 = result2051;
                            org$pandalanguage$pandac$ASTNode* $tmp2127 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2128, 8);
                            panda$collections$ImmutableArray* $tmp2130 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2072);
                            $tmp2129 = $tmp2130;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2127, $tmp2128, token2061.position, result2051, $tmp2129);
                            $tmp2126 = $tmp2127;
                            $tmp2125 = $tmp2126;
                            result2051 = $tmp2125;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2126));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
                        }
                    }
                    $tmp2068 = -1;
                    goto $l2066;
                    $l2066:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2072));
                    args2072 = NULL;
                    switch ($tmp2068) {
                        case -1: goto $l2131;
                        case 1: goto $l2107;
                        case 0: goto $l2090;
                        case 2: goto $l2118;
                    }
                    $l2131:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2132, 101);
                panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$886_132063.$rawValue, $tmp2132);
                if ($tmp2133.value) {
                {
                    int $tmp2136;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2140 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2139 = $tmp2140;
                        $tmp2138 = $tmp2139;
                        arg2137 = $tmp2138;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
                        if (((panda$core$Bit) { arg2137 == NULL }).value) {
                        {
                            $tmp2141 = NULL;
                            $returnValue2055 = $tmp2141;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2141));
                            $tmp2136 = 0;
                            goto $l2134;
                            $l2142:;
                            $tmp2050 = 4;
                            goto $l2048;
                            $l2143:;
                            return $returnValue2055;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2146, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2145, $tmp2146);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2148 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2145, &$s2147);
                        if (((panda$core$Bit) { !$tmp2148.nonnull }).value) {
                        {
                            $tmp2149 = NULL;
                            $returnValue2055 = $tmp2149;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
                            $tmp2136 = 1;
                            goto $l2134;
                            $l2150:;
                            $tmp2050 = 5;
                            goto $l2048;
                            $l2151:;
                            return $returnValue2055;
                        }
                        }
                        {
                            $tmp2153 = result2051;
                            org$pandalanguage$pandac$ASTNode* $tmp2156 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2157, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2159, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2158, $tmp2159);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2156, $tmp2157, token2061.position, result2051, $tmp2158, arg2137);
                            $tmp2155 = $tmp2156;
                            $tmp2154 = $tmp2155;
                            result2051 = $tmp2154;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                        }
                    }
                    $tmp2136 = -1;
                    goto $l2134;
                    $l2134:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2137));
                    arg2137 = NULL;
                    switch ($tmp2136) {
                        case -1: goto $l2160;
                        case 0: goto $l2142;
                        case 1: goto $l2150;
                    }
                    $l2160:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2161, 98);
                panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$886_132063.$rawValue, $tmp2161);
                if ($tmp2162.value) {
                {
                    int $tmp2165;
                    {
                        memset(&name2166, 0, sizeof(name2166));
                        panda$core$Int64$init$builtin_int64(&$tmp2168, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2167, $tmp2168);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2169 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2167);
                        if (((panda$core$Bit) { $tmp2169.nonnull }).value) {
                        {
                            {
                                $tmp2170 = name2166;
                                $tmp2171 = &$s2172;
                                name2166 = $tmp2171;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2173 = name2166;
                                panda$core$String* $tmp2176 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2175 = $tmp2176;
                                $tmp2174 = $tmp2175;
                                name2166 = $tmp2174;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2174));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                            }
                            if (((panda$core$Bit) { name2166 == NULL }).value) {
                            {
                                $tmp2177 = NULL;
                                $returnValue2055 = $tmp2177;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                                $tmp2165 = 0;
                                goto $l2163;
                                $l2178:;
                                $tmp2050 = 6;
                                goto $l2048;
                                $l2179:;
                                return $returnValue2055;
                            }
                            }
                        }
                        }
                        {
                            $tmp2181 = result2051;
                            org$pandalanguage$pandac$ASTNode* $tmp2184 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2185, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2184, $tmp2185, token2061.position, result2051, name2166);
                            $tmp2183 = $tmp2184;
                            $tmp2182 = $tmp2183;
                            result2051 = $tmp2182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                        }
                    }
                    $tmp2165 = -1;
                    goto $l2163;
                    $l2163:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2166));
                    switch ($tmp2165) {
                        case 0: goto $l2178;
                        case -1: goto $l2186;
                    }
                    $l2186:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2187, 89);
                panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$886_132063.$rawValue, $tmp2187);
                if ($tmp2188.value) {
                {
                    int $tmp2191;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2195 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2194 = $tmp2195;
                        $tmp2193 = $tmp2194;
                        target2192 = $tmp2193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
                        if (((panda$core$Bit) { target2192 == NULL }).value) {
                        {
                            $tmp2196 = NULL;
                            $returnValue2055 = $tmp2196;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                            $tmp2191 = 0;
                            goto $l2189;
                            $l2197:;
                            $tmp2050 = 7;
                            goto $l2048;
                            $l2198:;
                            return $returnValue2055;
                        }
                        }
                        {
                            $tmp2200 = result2051;
                            org$pandalanguage$pandac$ASTNode* $tmp2203 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2204, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2206, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2205, $tmp2206);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2203, $tmp2204, token2061.position, result2051, $tmp2205, target2192);
                            $tmp2202 = $tmp2203;
                            $tmp2201 = $tmp2202;
                            result2051 = $tmp2201;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                        }
                    }
                    $tmp2191 = -1;
                    goto $l2189;
                    $l2189:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2192));
                    target2192 = NULL;
                    switch ($tmp2191) {
                        case 0: goto $l2197;
                        case -1: goto $l2207;
                    }
                    $l2207:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2208, 62);
                panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$886_132063.$rawValue, $tmp2208);
                if ($tmp2209.value) {
                {
                    int $tmp2212;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2061);
                        panda$core$String* $tmp2216 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2051);
                        $tmp2215 = $tmp2216;
                        $tmp2214 = $tmp2215;
                        name2213 = $tmp2214;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                        if (((panda$core$Bit) { name2213 != NULL }).value) {
                        {
                            int $tmp2219;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2223 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2223);
                                $tmp2222 = $tmp2223;
                                $tmp2221 = $tmp2222;
                                types2220 = $tmp2221;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                                panda$core$Bit$init$builtin_bit(&$tmp2227, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2228 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2227);
                                $tmp2226 = $tmp2228;
                                $tmp2225 = $tmp2226;
                                t2224 = $tmp2225;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                                if (((panda$core$Bit) { t2224 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2229 = result2051;
                                    $returnValue2055 = $tmp2229;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
                                    $tmp2219 = 0;
                                    goto $l2217;
                                    $l2230:;
                                    $tmp2212 = 0;
                                    goto $l2210;
                                    $l2231:;
                                    $tmp2050 = 8;
                                    goto $l2048;
                                    $l2232:;
                                    return $returnValue2055;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2220, ((panda$core$Object*) t2224));
                                $l2234:;
                                panda$core$Int64$init$builtin_int64(&$tmp2238, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2237, $tmp2238);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2237);
                                bool $tmp2236 = ((panda$core$Bit) { $tmp2239.nonnull }).value;
                                if (!$tmp2236) goto $l2235;
                                {
                                    {
                                        $tmp2240 = t2224;
                                        panda$core$Bit$init$builtin_bit(&$tmp2243, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2244 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2243);
                                        $tmp2242 = $tmp2244;
                                        $tmp2241 = $tmp2242;
                                        t2224 = $tmp2241;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
                                    }
                                    if (((panda$core$Bit) { t2224 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2245 = result2051;
                                        $returnValue2055 = $tmp2245;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                                        $tmp2219 = 1;
                                        goto $l2217;
                                        $l2246:;
                                        $tmp2212 = 1;
                                        goto $l2210;
                                        $l2247:;
                                        $tmp2050 = 9;
                                        goto $l2048;
                                        $l2248:;
                                        return $returnValue2055;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2220, ((panda$core$Object*) t2224));
                                }
                                goto $l2234;
                                $l2235:;
                                panda$core$Int64$init$builtin_int64(&$tmp2252, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2251, $tmp2252);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2251, &$s2253);
                                gt2250 = $tmp2254;
                                if (((panda$core$Bit) { !gt2250.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2255 = result2051;
                                    $returnValue2055 = $tmp2255;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
                                    $tmp2219 = 2;
                                    goto $l2217;
                                    $l2256:;
                                    $tmp2212 = 2;
                                    goto $l2210;
                                    $l2257:;
                                    $tmp2050 = 10;
                                    goto $l2048;
                                    $l2258:;
                                    return $returnValue2055;
                                }
                                }
                                memset(&shouldAccept2260, 0, sizeof(shouldAccept2260));
                                panda$core$Int64$init$builtin_int64(&$tmp2262, 0);
                                panda$core$Object* $tmp2263 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2262);
                                $tmp2261 = $tmp2263;
                                panda$core$Panda$unref$panda$core$Object($tmp2261);
                                if (((panda$core$Bit$wrapper*) $tmp2261)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2265 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2264 = $tmp2265;
                                    {
                                        $match$999_292266 = n2264.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2269, 98);
                                        panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$999_292266.$rawValue, $tmp2269);
                                        bool $tmp2268 = $tmp2270.value;
                                        if ($tmp2268) goto $l2271;
                                        panda$core$Int64$init$builtin_int64(&$tmp2272, 105);
                                        panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$999_292266.$rawValue, $tmp2272);
                                        $tmp2268 = $tmp2273.value;
                                        $l2271:;
                                        panda$core$Bit $tmp2274 = { $tmp2268 };
                                        bool $tmp2267 = $tmp2274.value;
                                        if ($tmp2267) goto $l2275;
                                        panda$core$Int64$init$builtin_int64(&$tmp2276, 89);
                                        panda$core$Bit $tmp2277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$999_292266.$rawValue, $tmp2276);
                                        $tmp2267 = $tmp2277.value;
                                        $l2275:;
                                        panda$core$Bit $tmp2278 = { $tmp2267 };
                                        if ($tmp2278.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2279, true);
                                            shouldAccept2260 = $tmp2279;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2280, 103);
                                        panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$999_292266.$rawValue, $tmp2280);
                                        if ($tmp2281.value) {
                                        {
                                            panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2264.position.line, ((org$pandalanguage$pandac$parser$Token) gt2250.value).position.line);
                                            bool $tmp2282 = $tmp2283.value;
                                            if (!$tmp2282) goto $l2284;
                                            panda$core$Int64$init$builtin_int64(&$tmp2285, 1);
                                            panda$core$Int64 $tmp2286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2250.value).position.column, $tmp2285);
                                            panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2264.position.column, $tmp2286);
                                            $tmp2282 = $tmp2287.value;
                                            $l2284:;
                                            panda$core$Bit $tmp2288 = { $tmp2282 };
                                            shouldAccept2260 = $tmp2288;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2289, false);
                                            shouldAccept2260 = $tmp2289;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2260.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2264);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2290, true);
                                    shouldAccept2260 = $tmp2290;
                                }
                                }
                                if (shouldAccept2260.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2291 = result2051;
                                        org$pandalanguage$pandac$ASTNode* $tmp2294 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2295, 19);
                                        org$pandalanguage$pandac$Position $tmp2297 = (($fn2296) result2051->$class->vtable[2])(result2051);
                                        panda$collections$ImmutableArray* $tmp2299 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2220);
                                        $tmp2298 = $tmp2299;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2294, $tmp2295, $tmp2297, name2213, $tmp2298);
                                        $tmp2293 = $tmp2294;
                                        $tmp2292 = $tmp2293;
                                        result2051 = $tmp2292;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
                                    }
                                    $tmp2219 = 3;
                                    goto $l2217;
                                    $l2300:;
                                    $tmp2212 = 3;
                                    goto $l2210;
                                    $l2301:;
                                    goto $l2059;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2302 = result2051;
                                    $returnValue2055 = $tmp2302;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
                                    $tmp2219 = 4;
                                    goto $l2217;
                                    $l2303:;
                                    $tmp2212 = 4;
                                    goto $l2210;
                                    $l2304:;
                                    $tmp2050 = 11;
                                    goto $l2048;
                                    $l2305:;
                                    return $returnValue2055;
                                }
                                }
                            }
                            $tmp2219 = -1;
                            goto $l2217;
                            $l2217:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2224));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2220));
                            types2220 = NULL;
                            t2224 = NULL;
                            switch ($tmp2219) {
                                case 3: goto $l2300;
                                case 0: goto $l2230;
                                case 4: goto $l2303;
                                case 2: goto $l2256;
                                case 1: goto $l2246;
                                case -1: goto $l2307;
                            }
                            $l2307:;
                        }
                        }
                        $tmp2308 = result2051;
                        $returnValue2055 = $tmp2308;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
                        $tmp2212 = 5;
                        goto $l2210;
                        $l2309:;
                        $tmp2050 = 12;
                        goto $l2048;
                        $l2310:;
                        return $returnValue2055;
                    }
                    $l2210:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2213));
                    name2213 = NULL;
                    switch ($tmp2212) {
                        case 1: goto $l2247;
                        case 2: goto $l2257;
                        case 0: goto $l2231;
                        case 3: goto $l2301;
                        case 4: goto $l2304;
                        case 5: goto $l2309;
                    }
                    $l2312:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2061);
                    $tmp2313 = result2051;
                    $returnValue2055 = $tmp2313;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
                    $tmp2050 = 13;
                    goto $l2048;
                    $l2314:;
                    return $returnValue2055;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2060:;
    }
    $tmp2050 = -1;
    goto $l2048;
    $l2048:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2051));
    result2051 = NULL;
    switch ($tmp2050) {
        case 10: goto $l2258;
        case 8: goto $l2232;
        case 7: goto $l2198;
        case 11: goto $l2305;
        case 12: goto $l2310;
        case 4: goto $l2143;
        case 6: goto $l2179;
        case 5: goto $l2151;
        case 13: goto $l2314;
        case 1: goto $l2091;
        case 2: goto $l2108;
        case -1: goto $l2316;
        case 3: goto $l2119;
        case 0: goto $l2057;
        case 9: goto $l2248;
    }
    $l2316:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2320 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2321;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $returnValue2324;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    org$pandalanguage$pandac$parser$Token$nullable op2333;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2334;
    panda$core$Int64 $tmp2335;
    org$pandalanguage$pandac$ASTNode* next2338 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$ASTNode* $tmp2340;
    org$pandalanguage$pandac$ASTNode* $tmp2342;
    org$pandalanguage$pandac$ASTNode* $tmp2346;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    panda$core$Int64 $tmp2350;
    org$pandalanguage$pandac$ASTNode* $tmp2352;
    int $tmp2319;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2323 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2322 = $tmp2323;
        $tmp2321 = $tmp2322;
        result2320 = $tmp2321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
        if (((panda$core$Bit) { result2320 == NULL }).value) {
        {
            $tmp2325 = NULL;
            $returnValue2324 = $tmp2325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
            $tmp2319 = 0;
            goto $l2317;
            $l2326:;
            return $returnValue2324;
        }
        }
        $l2328:;
        while (true) {
        {
            int $tmp2332;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2335, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2334, $tmp2335);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2336 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2334);
                op2333 = $tmp2336;
                if (((panda$core$Bit) { !op2333.nonnull }).value) {
                {
                    $tmp2332 = 0;
                    goto $l2330;
                    $l2337:;
                    goto $l2329;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2341 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2340 = $tmp2341;
                $tmp2339 = $tmp2340;
                next2338 = $tmp2339;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                if (((panda$core$Bit) { next2338 == NULL }).value) {
                {
                    $tmp2342 = NULL;
                    $returnValue2324 = $tmp2342;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
                    $tmp2332 = 1;
                    goto $l2330;
                    $l2343:;
                    $tmp2319 = 1;
                    goto $l2317;
                    $l2344:;
                    return $returnValue2324;
                }
                }
                {
                    $tmp2346 = result2320;
                    org$pandalanguage$pandac$ASTNode* $tmp2349 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2350, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2349, $tmp2350, ((org$pandalanguage$pandac$parser$Token) op2333.value).position, result2320, ((org$pandalanguage$pandac$parser$Token) op2333.value).kind, next2338);
                    $tmp2348 = $tmp2349;
                    $tmp2347 = $tmp2348;
                    result2320 = $tmp2347;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
                }
            }
            $tmp2332 = -1;
            goto $l2330;
            $l2330:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2338));
            next2338 = NULL;
            switch ($tmp2332) {
                case -1: goto $l2351;
                case 0: goto $l2337;
                case 1: goto $l2343;
            }
            $l2351:;
        }
        }
        $l2329:;
        $tmp2352 = result2320;
        $returnValue2324 = $tmp2352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2352));
        $tmp2319 = 2;
        goto $l2317;
        $l2353:;
        return $returnValue2324;
    }
    $l2317:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2320));
    result2320 = NULL;
    switch ($tmp2319) {
        case 1: goto $l2344;
        case 2: goto $l2353;
        case 0: goto $l2326;
    }
    $l2355:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2356;
    org$pandalanguage$pandac$parser$Token$Kind $match$1060_92358;
    panda$core$Int64 $tmp2361;
    panda$core$Int64 $tmp2364;
    panda$core$Int64 $tmp2368;
    org$pandalanguage$pandac$ASTNode* base2374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $returnValue2378;
    org$pandalanguage$pandac$ASTNode* $tmp2379;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    org$pandalanguage$pandac$ASTNode* $tmp2383;
    panda$core$Int64 $tmp2385;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2390;
    org$pandalanguage$pandac$parser$Token $tmp2357 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2356 = $tmp2357;
    {
        $match$1060_92358 = op2356.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2361, 52);
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1060_92358.$rawValue, $tmp2361);
        bool $tmp2360 = $tmp2362.value;
        if ($tmp2360) goto $l2363;
        panda$core$Int64$init$builtin_int64(&$tmp2364, 49);
        panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1060_92358.$rawValue, $tmp2364);
        $tmp2360 = $tmp2365.value;
        $l2363:;
        panda$core$Bit $tmp2366 = { $tmp2360 };
        bool $tmp2359 = $tmp2366.value;
        if ($tmp2359) goto $l2367;
        panda$core$Int64$init$builtin_int64(&$tmp2368, 50);
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1060_92358.$rawValue, $tmp2368);
        $tmp2359 = $tmp2369.value;
        $l2367:;
        panda$core$Bit $tmp2370 = { $tmp2359 };
        if ($tmp2370.value) {
        {
            int $tmp2373;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2377 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2376 = $tmp2377;
                $tmp2375 = $tmp2376;
                base2374 = $tmp2375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
                if (((panda$core$Bit) { base2374 == NULL }).value) {
                {
                    $tmp2379 = NULL;
                    $returnValue2378 = $tmp2379;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
                    $tmp2373 = 0;
                    goto $l2371;
                    $l2380:;
                    return $returnValue2378;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2384 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2385, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2384, $tmp2385, op2356.position, op2356.kind, base2374);
                $tmp2383 = $tmp2384;
                $tmp2382 = $tmp2383;
                $returnValue2378 = $tmp2382;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
                $tmp2373 = 1;
                goto $l2371;
                $l2386:;
                return $returnValue2378;
            }
            $l2371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2374));
            base2374 = NULL;
            switch ($tmp2373) {
                case 1: goto $l2386;
                case 0: goto $l2380;
            }
            $l2388:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2356);
            org$pandalanguage$pandac$ASTNode* $tmp2391 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2390 = $tmp2391;
            $tmp2389 = $tmp2390;
            $returnValue2378 = $tmp2389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
            return $returnValue2378;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2396 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    org$pandalanguage$pandac$ASTNode* $returnValue2400;
    org$pandalanguage$pandac$ASTNode* $tmp2401;
    org$pandalanguage$pandac$parser$Token op2406;
    org$pandalanguage$pandac$parser$Token$Kind $match$1086_132408;
    panda$core$Int64 $tmp2415;
    panda$core$Int64 $tmp2418;
    panda$core$Int64 $tmp2422;
    panda$core$Int64 $tmp2426;
    panda$core$Int64 $tmp2430;
    panda$core$Int64 $tmp2434;
    panda$core$Int64 $tmp2438;
    org$pandalanguage$pandac$ASTNode* next2444 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    org$pandalanguage$pandac$ASTNode* $tmp2446;
    org$pandalanguage$pandac$ASTNode* $tmp2448;
    org$pandalanguage$pandac$ASTNode* $tmp2452;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    panda$core$Int64 $tmp2456;
    panda$core$Int64 $tmp2458;
    org$pandalanguage$pandac$parser$Token nextToken2460;
    panda$core$Int64 $tmp2462;
    org$pandalanguage$pandac$ASTNode* next2467 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    org$pandalanguage$pandac$ASTNode* $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2476;
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    panda$core$Int64 $tmp2479;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2480;
    panda$core$Int64 $tmp2481;
    org$pandalanguage$pandac$ASTNode* $tmp2483;
    org$pandalanguage$pandac$ASTNode* $tmp2486;
    int $tmp2395;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2399 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2398 = $tmp2399;
        $tmp2397 = $tmp2398;
        result2396 = $tmp2397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
        if (((panda$core$Bit) { result2396 == NULL }).value) {
        {
            $tmp2401 = NULL;
            $returnValue2400 = $tmp2401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
            $tmp2395 = 0;
            goto $l2393;
            $l2402:;
            return $returnValue2400;
        }
        }
        $l2404:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2407 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2406 = $tmp2407;
            {
                $match$1086_132408 = op2406.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2415, 53);
                panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2415);
                bool $tmp2414 = $tmp2416.value;
                if ($tmp2414) goto $l2417;
                panda$core$Int64$init$builtin_int64(&$tmp2418, 54);
                panda$core$Bit $tmp2419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2418);
                $tmp2414 = $tmp2419.value;
                $l2417:;
                panda$core$Bit $tmp2420 = { $tmp2414 };
                bool $tmp2413 = $tmp2420.value;
                if ($tmp2413) goto $l2421;
                panda$core$Int64$init$builtin_int64(&$tmp2422, 55);
                panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2422);
                $tmp2413 = $tmp2423.value;
                $l2421:;
                panda$core$Bit $tmp2424 = { $tmp2413 };
                bool $tmp2412 = $tmp2424.value;
                if ($tmp2412) goto $l2425;
                panda$core$Int64$init$builtin_int64(&$tmp2426, 56);
                panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2426);
                $tmp2412 = $tmp2427.value;
                $l2425:;
                panda$core$Bit $tmp2428 = { $tmp2412 };
                bool $tmp2411 = $tmp2428.value;
                if ($tmp2411) goto $l2429;
                panda$core$Int64$init$builtin_int64(&$tmp2430, 72);
                panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2430);
                $tmp2411 = $tmp2431.value;
                $l2429:;
                panda$core$Bit $tmp2432 = { $tmp2411 };
                bool $tmp2410 = $tmp2432.value;
                if ($tmp2410) goto $l2433;
                panda$core$Int64$init$builtin_int64(&$tmp2434, 67);
                panda$core$Bit $tmp2435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2434);
                $tmp2410 = $tmp2435.value;
                $l2433:;
                panda$core$Bit $tmp2436 = { $tmp2410 };
                bool $tmp2409 = $tmp2436.value;
                if ($tmp2409) goto $l2437;
                panda$core$Int64$init$builtin_int64(&$tmp2438, 69);
                panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2438);
                $tmp2409 = $tmp2439.value;
                $l2437:;
                panda$core$Bit $tmp2440 = { $tmp2409 };
                if ($tmp2440.value) {
                {
                    int $tmp2443;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2447 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2446 = $tmp2447;
                        $tmp2445 = $tmp2446;
                        next2444 = $tmp2445;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
                        if (((panda$core$Bit) { next2444 == NULL }).value) {
                        {
                            $tmp2448 = NULL;
                            $returnValue2400 = $tmp2448;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
                            $tmp2443 = 0;
                            goto $l2441;
                            $l2449:;
                            $tmp2395 = 1;
                            goto $l2393;
                            $l2450:;
                            return $returnValue2400;
                        }
                        }
                        {
                            $tmp2452 = result2396;
                            org$pandalanguage$pandac$ASTNode* $tmp2455 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2456, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2455, $tmp2456, op2406.position, result2396, op2406.kind, next2444);
                            $tmp2454 = $tmp2455;
                            $tmp2453 = $tmp2454;
                            result2396 = $tmp2453;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2452));
                        }
                    }
                    $tmp2443 = -1;
                    goto $l2441;
                    $l2441:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2444));
                    next2444 = NULL;
                    switch ($tmp2443) {
                        case 0: goto $l2449;
                        case -1: goto $l2457;
                    }
                    $l2457:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2458, 63);
                panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1086_132408.$rawValue, $tmp2458);
                if ($tmp2459.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2461 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2460 = $tmp2461;
                    panda$core$Int64$init$builtin_int64(&$tmp2462, 63);
                    panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2460.kind.$rawValue, $tmp2462);
                    if ($tmp2463.value) {
                    {
                        int $tmp2466;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2470 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2469 = $tmp2470;
                            $tmp2468 = $tmp2469;
                            next2467 = $tmp2468;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                            if (((panda$core$Bit) { next2467 == NULL }).value) {
                            {
                                $tmp2471 = NULL;
                                $returnValue2400 = $tmp2471;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
                                $tmp2466 = 0;
                                goto $l2464;
                                $l2472:;
                                $tmp2395 = 2;
                                goto $l2393;
                                $l2473:;
                                return $returnValue2400;
                            }
                            }
                            {
                                $tmp2475 = result2396;
                                org$pandalanguage$pandac$ASTNode* $tmp2478 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2479, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2481, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2480, $tmp2481);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2478, $tmp2479, op2406.position, result2396, $tmp2480, next2467);
                                $tmp2477 = $tmp2478;
                                $tmp2476 = $tmp2477;
                                result2396 = $tmp2476;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
                            }
                        }
                        $tmp2466 = -1;
                        goto $l2464;
                        $l2464:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2467));
                        next2467 = NULL;
                        switch ($tmp2466) {
                            case 0: goto $l2472;
                            case -1: goto $l2482;
                        }
                        $l2482:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2460);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2406);
                        $tmp2483 = result2396;
                        $returnValue2400 = $tmp2483;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
                        $tmp2395 = 3;
                        goto $l2393;
                        $l2484:;
                        return $returnValue2400;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2406);
                    $tmp2486 = result2396;
                    $returnValue2400 = $tmp2486;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
                    $tmp2395 = 4;
                    goto $l2393;
                    $l2487:;
                    return $returnValue2400;
                }
                }
                }
            }
        }
        }
        $l2405:;
    }
    $tmp2395 = -1;
    goto $l2393;
    $l2393:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2396));
    result2396 = NULL;
    switch ($tmp2395) {
        case -1: goto $l2489;
        case 3: goto $l2484;
        case 4: goto $l2487;
        case 1: goto $l2450;
        case 0: goto $l2402;
        case 2: goto $l2473;
    }
    $l2489:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2493 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2494;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $returnValue2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$parser$Token op2503;
    org$pandalanguage$pandac$parser$Token$Kind $match$1127_132505;
    panda$core$Int64 $tmp2508;
    panda$core$Int64 $tmp2511;
    panda$core$Int64 $tmp2515;
    org$pandalanguage$pandac$ASTNode* next2521 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$ASTNode* $tmp2523;
    org$pandalanguage$pandac$ASTNode* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2529;
    org$pandalanguage$pandac$ASTNode* $tmp2530;
    org$pandalanguage$pandac$ASTNode* $tmp2531;
    panda$core$Int64 $tmp2533;
    org$pandalanguage$pandac$ASTNode* $tmp2535;
    int $tmp2492;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2496 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2495 = $tmp2496;
        $tmp2494 = $tmp2495;
        result2493 = $tmp2494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
        if (((panda$core$Bit) { result2493 == NULL }).value) {
        {
            $tmp2498 = NULL;
            $returnValue2497 = $tmp2498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
            $tmp2492 = 0;
            goto $l2490;
            $l2499:;
            return $returnValue2497;
        }
        }
        $l2501:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2504 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2503 = $tmp2504;
            {
                $match$1127_132505 = op2503.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2508, 51);
                panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1127_132505.$rawValue, $tmp2508);
                bool $tmp2507 = $tmp2509.value;
                if ($tmp2507) goto $l2510;
                panda$core$Int64$init$builtin_int64(&$tmp2511, 52);
                panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1127_132505.$rawValue, $tmp2511);
                $tmp2507 = $tmp2512.value;
                $l2510:;
                panda$core$Bit $tmp2513 = { $tmp2507 };
                bool $tmp2506 = $tmp2513.value;
                if ($tmp2506) goto $l2514;
                panda$core$Int64$init$builtin_int64(&$tmp2515, 71);
                panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1127_132505.$rawValue, $tmp2515);
                $tmp2506 = $tmp2516.value;
                $l2514:;
                panda$core$Bit $tmp2517 = { $tmp2506 };
                if ($tmp2517.value) {
                {
                    int $tmp2520;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2524 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2523 = $tmp2524;
                        $tmp2522 = $tmp2523;
                        next2521 = $tmp2522;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2522));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                        if (((panda$core$Bit) { next2521 == NULL }).value) {
                        {
                            $tmp2525 = NULL;
                            $returnValue2497 = $tmp2525;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
                            $tmp2520 = 0;
                            goto $l2518;
                            $l2526:;
                            $tmp2492 = 1;
                            goto $l2490;
                            $l2527:;
                            return $returnValue2497;
                        }
                        }
                        {
                            $tmp2529 = result2493;
                            org$pandalanguage$pandac$ASTNode* $tmp2532 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2533, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2532, $tmp2533, op2503.position, result2493, op2503.kind, next2521);
                            $tmp2531 = $tmp2532;
                            $tmp2530 = $tmp2531;
                            result2493 = $tmp2530;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                        }
                    }
                    $tmp2520 = -1;
                    goto $l2518;
                    $l2518:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2521));
                    next2521 = NULL;
                    switch ($tmp2520) {
                        case -1: goto $l2534;
                        case 0: goto $l2526;
                    }
                    $l2534:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2503);
                    $tmp2535 = result2493;
                    $returnValue2497 = $tmp2535;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
                    $tmp2492 = 2;
                    goto $l2490;
                    $l2536:;
                    return $returnValue2497;
                }
                }
            }
        }
        }
        $l2502:;
    }
    $tmp2492 = -1;
    goto $l2490;
    $l2490:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2493));
    result2493 = NULL;
    switch ($tmp2492) {
        case 1: goto $l2527;
        case -1: goto $l2538;
        case 0: goto $l2499;
        case 2: goto $l2536;
    }
    $l2538:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2542 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1147_92543;
    panda$core$Int64 $tmp2546;
    panda$core$Int64 $tmp2549;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    org$pandalanguage$pandac$ASTNode* $tmp2555;
    org$pandalanguage$pandac$ASTNode* $tmp2556;
    org$pandalanguage$pandac$ASTNode* $returnValue2558;
    org$pandalanguage$pandac$ASTNode* $tmp2559;
    org$pandalanguage$pandac$parser$Token op2562;
    org$pandalanguage$pandac$parser$Token$Kind $match$1157_92564;
    panda$core$Int64 $tmp2566;
    panda$core$Int64 $tmp2569;
    org$pandalanguage$pandac$parser$Token next2575;
    org$pandalanguage$pandac$ASTNode* right2577 = NULL;
    panda$core$Int64 $tmp2580;
    panda$core$Int64 $tmp2583;
    panda$core$Int64 $tmp2587;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    org$pandalanguage$pandac$ASTNode* $tmp2594;
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* step2600 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2601;
    panda$core$Int64 $tmp2602;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    org$pandalanguage$pandac$ASTNode* $tmp2606;
    org$pandalanguage$pandac$ASTNode* $tmp2608;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2613;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2615;
    panda$core$Int64 $tmp2617;
    panda$core$Int64 $tmp2618;
    org$pandalanguage$pandac$ASTNode* $tmp2624;
    int $tmp2541;
    {
        memset(&result2542, 0, sizeof(result2542));
        {
            org$pandalanguage$pandac$parser$Token $tmp2544 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1147_92543 = $tmp2544.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2546, 97);
            panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1147_92543.$rawValue, $tmp2546);
            bool $tmp2545 = $tmp2547.value;
            if ($tmp2545) goto $l2548;
            panda$core$Int64$init$builtin_int64(&$tmp2549, 96);
            panda$core$Bit $tmp2550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1147_92543.$rawValue, $tmp2549);
            $tmp2545 = $tmp2550.value;
            $l2548:;
            panda$core$Bit $tmp2551 = { $tmp2545 };
            if ($tmp2551.value) {
            {
                {
                    $tmp2552 = result2542;
                    $tmp2553 = NULL;
                    result2542 = $tmp2553;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
                }
            }
            }
            else {
            {
                {
                    $tmp2554 = result2542;
                    org$pandalanguage$pandac$ASTNode* $tmp2557 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2556 = $tmp2557;
                    $tmp2555 = $tmp2556;
                    result2542 = $tmp2555;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2555));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                }
                if (((panda$core$Bit) { result2542 == NULL }).value) {
                {
                    $tmp2559 = NULL;
                    $returnValue2558 = $tmp2559;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2559));
                    $tmp2541 = 0;
                    goto $l2539;
                    $l2560:;
                    return $returnValue2558;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2563 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2562 = $tmp2563;
        {
            $match$1157_92564 = op2562.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2566, 97);
            panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1157_92564.$rawValue, $tmp2566);
            bool $tmp2565 = $tmp2567.value;
            if ($tmp2565) goto $l2568;
            panda$core$Int64$init$builtin_int64(&$tmp2569, 96);
            panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1157_92564.$rawValue, $tmp2569);
            $tmp2565 = $tmp2570.value;
            $l2568:;
            panda$core$Bit $tmp2571 = { $tmp2565 };
            if ($tmp2571.value) {
            {
                int $tmp2574;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2576 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2575 = $tmp2576;
                    memset(&right2577, 0, sizeof(right2577));
                    panda$core$Int64$init$builtin_int64(&$tmp2580, 102);
                    panda$core$Bit $tmp2581 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2575.kind.$rawValue, $tmp2580);
                    bool $tmp2579 = $tmp2581.value;
                    if (!$tmp2579) goto $l2582;
                    panda$core$Int64$init$builtin_int64(&$tmp2583, 104);
                    panda$core$Bit $tmp2584 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2575.kind.$rawValue, $tmp2583);
                    $tmp2579 = $tmp2584.value;
                    $l2582:;
                    panda$core$Bit $tmp2585 = { $tmp2579 };
                    bool $tmp2578 = $tmp2585.value;
                    if (!$tmp2578) goto $l2586;
                    panda$core$Int64$init$builtin_int64(&$tmp2587, 33);
                    panda$core$Bit $tmp2588 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2575.kind.$rawValue, $tmp2587);
                    $tmp2578 = $tmp2588.value;
                    $l2586:;
                    panda$core$Bit $tmp2589 = { $tmp2578 };
                    if ($tmp2589.value) {
                    {
                        {
                            $tmp2590 = right2577;
                            org$pandalanguage$pandac$ASTNode* $tmp2593 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2592 = $tmp2593;
                            $tmp2591 = $tmp2592;
                            right2577 = $tmp2591;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2591));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                        }
                        if (((panda$core$Bit) { right2577 == NULL }).value) {
                        {
                            $tmp2594 = NULL;
                            $returnValue2558 = $tmp2594;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2594));
                            $tmp2574 = 0;
                            goto $l2572;
                            $l2595:;
                            $tmp2541 = 1;
                            goto $l2539;
                            $l2596:;
                            return $returnValue2558;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2598 = right2577;
                            $tmp2599 = NULL;
                            right2577 = $tmp2599;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
                        }
                    }
                    }
                    memset(&step2600, 0, sizeof(step2600));
                    panda$core$Int64$init$builtin_int64(&$tmp2602, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2601, $tmp2602);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2603 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2601);
                    if (((panda$core$Bit) { $tmp2603.nonnull }).value) {
                    {
                        {
                            $tmp2604 = step2600;
                            org$pandalanguage$pandac$ASTNode* $tmp2607 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2606 = $tmp2607;
                            $tmp2605 = $tmp2606;
                            step2600 = $tmp2605;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2604));
                        }
                        if (((panda$core$Bit) { step2600 == NULL }).value) {
                        {
                            $tmp2608 = NULL;
                            $returnValue2558 = $tmp2608;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2608));
                            $tmp2574 = 1;
                            goto $l2572;
                            $l2609:;
                            $tmp2541 = 2;
                            goto $l2539;
                            $l2610:;
                            return $returnValue2558;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2612 = step2600;
                            $tmp2613 = NULL;
                            step2600 = $tmp2613;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2616 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2617, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2618, 96);
                    panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2562.kind.$rawValue, $tmp2618);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2616, $tmp2617, op2562.position, result2542, right2577, $tmp2619, step2600);
                    $tmp2615 = $tmp2616;
                    $tmp2614 = $tmp2615;
                    $returnValue2558 = $tmp2614;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2614));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
                    $tmp2574 = 2;
                    goto $l2572;
                    $l2620:;
                    $tmp2541 = 3;
                    goto $l2539;
                    $l2621:;
                    return $returnValue2558;
                }
                $l2572:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2577));
                switch ($tmp2574) {
                    case 2: goto $l2620;
                    case 1: goto $l2609;
                    case 0: goto $l2595;
                }
                $l2623:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2562);
                $tmp2624 = result2542;
                $returnValue2558 = $tmp2624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
                $tmp2541 = 4;
                goto $l2539;
                $l2625:;
                return $returnValue2558;
            }
            }
        }
    }
    $tmp2541 = -1;
    goto $l2539;
    $l2539:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2542));
    switch ($tmp2541) {
        case 4: goto $l2625;
        case 0: goto $l2560;
        case 3: goto $l2621;
        case 2: goto $l2610;
        case 1: goto $l2596;
        case -1: goto $l2627;
    }
    $l2627:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2631 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2632;
    org$pandalanguage$pandac$ASTNode* $tmp2633;
    org$pandalanguage$pandac$ASTNode* $returnValue2635;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$parser$Token op2641;
    org$pandalanguage$pandac$parser$Token$Kind $match$1200_132643;
    panda$core$Int64 $tmp2651;
    panda$core$Int64 $tmp2654;
    panda$core$Int64 $tmp2658;
    panda$core$Int64 $tmp2662;
    panda$core$Int64 $tmp2666;
    panda$core$Int64 $tmp2670;
    panda$core$Int64 $tmp2674;
    panda$core$Int64 $tmp2678;
    org$pandalanguage$pandac$ASTNode* next2684 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2685;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    org$pandalanguage$pandac$ASTNode* $tmp2692;
    org$pandalanguage$pandac$ASTNode* $tmp2693;
    org$pandalanguage$pandac$ASTNode* $tmp2694;
    panda$core$Int64 $tmp2696;
    org$pandalanguage$pandac$ASTNode* $tmp2698;
    int $tmp2630;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2634 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2633 = $tmp2634;
        $tmp2632 = $tmp2633;
        result2631 = $tmp2632;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2633));
        if (((panda$core$Bit) { result2631 == NULL }).value) {
        {
            $tmp2636 = NULL;
            $returnValue2635 = $tmp2636;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
            $tmp2630 = 0;
            goto $l2628;
            $l2637:;
            return $returnValue2635;
        }
        }
        $l2639:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2642 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2641 = $tmp2642;
            {
                $match$1200_132643 = op2641.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2651, 58);
                panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2651);
                bool $tmp2650 = $tmp2652.value;
                if ($tmp2650) goto $l2653;
                panda$core$Int64$init$builtin_int64(&$tmp2654, 59);
                panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2654);
                $tmp2650 = $tmp2655.value;
                $l2653:;
                panda$core$Bit $tmp2656 = { $tmp2650 };
                bool $tmp2649 = $tmp2656.value;
                if ($tmp2649) goto $l2657;
                panda$core$Int64$init$builtin_int64(&$tmp2658, 60);
                panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2658);
                $tmp2649 = $tmp2659.value;
                $l2657:;
                panda$core$Bit $tmp2660 = { $tmp2649 };
                bool $tmp2648 = $tmp2660.value;
                if ($tmp2648) goto $l2661;
                panda$core$Int64$init$builtin_int64(&$tmp2662, 61);
                panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2662);
                $tmp2648 = $tmp2663.value;
                $l2661:;
                panda$core$Bit $tmp2664 = { $tmp2648 };
                bool $tmp2647 = $tmp2664.value;
                if ($tmp2647) goto $l2665;
                panda$core$Int64$init$builtin_int64(&$tmp2666, 62);
                panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2666);
                $tmp2647 = $tmp2667.value;
                $l2665:;
                panda$core$Bit $tmp2668 = { $tmp2647 };
                bool $tmp2646 = $tmp2668.value;
                if ($tmp2646) goto $l2669;
                panda$core$Int64$init$builtin_int64(&$tmp2670, 63);
                panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2670);
                $tmp2646 = $tmp2671.value;
                $l2669:;
                panda$core$Bit $tmp2672 = { $tmp2646 };
                bool $tmp2645 = $tmp2672.value;
                if ($tmp2645) goto $l2673;
                panda$core$Int64$init$builtin_int64(&$tmp2674, 64);
                panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2674);
                $tmp2645 = $tmp2675.value;
                $l2673:;
                panda$core$Bit $tmp2676 = { $tmp2645 };
                bool $tmp2644 = $tmp2676.value;
                if ($tmp2644) goto $l2677;
                panda$core$Int64$init$builtin_int64(&$tmp2678, 65);
                panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1200_132643.$rawValue, $tmp2678);
                $tmp2644 = $tmp2679.value;
                $l2677:;
                panda$core$Bit $tmp2680 = { $tmp2644 };
                if ($tmp2680.value) {
                {
                    int $tmp2683;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2687 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2686 = $tmp2687;
                        $tmp2685 = $tmp2686;
                        next2684 = $tmp2685;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2685));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2686));
                        if (((panda$core$Bit) { next2684 == NULL }).value) {
                        {
                            $tmp2688 = NULL;
                            $returnValue2635 = $tmp2688;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
                            $tmp2683 = 0;
                            goto $l2681;
                            $l2689:;
                            $tmp2630 = 1;
                            goto $l2628;
                            $l2690:;
                            return $returnValue2635;
                        }
                        }
                        {
                            $tmp2692 = result2631;
                            org$pandalanguage$pandac$ASTNode* $tmp2695 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2696, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2695, $tmp2696, op2641.position, result2631, op2641.kind, next2684);
                            $tmp2694 = $tmp2695;
                            $tmp2693 = $tmp2694;
                            result2631 = $tmp2693;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2693));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2694));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2692));
                        }
                    }
                    $tmp2683 = -1;
                    goto $l2681;
                    $l2681:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2684));
                    next2684 = NULL;
                    switch ($tmp2683) {
                        case -1: goto $l2697;
                        case 0: goto $l2689;
                    }
                    $l2697:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2641);
                    $tmp2698 = result2631;
                    $returnValue2635 = $tmp2698;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2698));
                    $tmp2630 = 2;
                    goto $l2628;
                    $l2699:;
                    return $returnValue2635;
                }
                }
            }
        }
        }
        $l2640:;
    }
    $tmp2630 = -1;
    goto $l2628;
    $l2628:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2631));
    result2631 = NULL;
    switch ($tmp2630) {
        case 1: goto $l2690;
        case 2: goto $l2699;
        case 0: goto $l2637;
        case -1: goto $l2701;
    }
    $l2701:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    org$pandalanguage$pandac$ASTNode* $tmp2707;
    org$pandalanguage$pandac$ASTNode* $returnValue2709;
    org$pandalanguage$pandac$ASTNode* $tmp2710;
    org$pandalanguage$pandac$parser$Token op2715;
    org$pandalanguage$pandac$parser$Token$Kind $match$1231_132717;
    panda$core$Int64 $tmp2719;
    panda$core$Int64 $tmp2722;
    org$pandalanguage$pandac$ASTNode* next2728 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2729;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    org$pandalanguage$pandac$ASTNode* $tmp2736;
    org$pandalanguage$pandac$ASTNode* $tmp2737;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    panda$core$Int64 $tmp2740;
    org$pandalanguage$pandac$ASTNode* $tmp2742;
    int $tmp2704;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2708 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2707 = $tmp2708;
        $tmp2706 = $tmp2707;
        result2705 = $tmp2706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2707));
        if (((panda$core$Bit) { result2705 == NULL }).value) {
        {
            $tmp2710 = NULL;
            $returnValue2709 = $tmp2710;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
            $tmp2704 = 0;
            goto $l2702;
            $l2711:;
            return $returnValue2709;
        }
        }
        $l2713:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2716 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2715 = $tmp2716;
            {
                $match$1231_132717 = op2715.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2719, 66);
                panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1231_132717.$rawValue, $tmp2719);
                bool $tmp2718 = $tmp2720.value;
                if ($tmp2718) goto $l2721;
                panda$core$Int64$init$builtin_int64(&$tmp2722, 70);
                panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1231_132717.$rawValue, $tmp2722);
                $tmp2718 = $tmp2723.value;
                $l2721:;
                panda$core$Bit $tmp2724 = { $tmp2718 };
                if ($tmp2724.value) {
                {
                    int $tmp2727;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2731 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2730 = $tmp2731;
                        $tmp2729 = $tmp2730;
                        next2728 = $tmp2729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2730));
                        if (((panda$core$Bit) { next2728 == NULL }).value) {
                        {
                            $tmp2732 = NULL;
                            $returnValue2709 = $tmp2732;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2732));
                            $tmp2727 = 0;
                            goto $l2725;
                            $l2733:;
                            $tmp2704 = 1;
                            goto $l2702;
                            $l2734:;
                            return $returnValue2709;
                        }
                        }
                        {
                            $tmp2736 = result2705;
                            org$pandalanguage$pandac$ASTNode* $tmp2739 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2740, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2739, $tmp2740, op2715.position, result2705, op2715.kind, next2728);
                            $tmp2738 = $tmp2739;
                            $tmp2737 = $tmp2738;
                            result2705 = $tmp2737;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2737));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2738));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2736));
                        }
                    }
                    $tmp2727 = -1;
                    goto $l2725;
                    $l2725:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2728));
                    next2728 = NULL;
                    switch ($tmp2727) {
                        case -1: goto $l2741;
                        case 0: goto $l2733;
                    }
                    $l2741:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2715);
                    $tmp2742 = result2705;
                    $returnValue2709 = $tmp2742;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2742));
                    $tmp2704 = 2;
                    goto $l2702;
                    $l2743:;
                    return $returnValue2709;
                }
                }
            }
        }
        }
        $l2714:;
    }
    $tmp2704 = -1;
    goto $l2702;
    $l2702:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2705));
    result2705 = NULL;
    switch ($tmp2704) {
        case 1: goto $l2734;
        case 2: goto $l2743;
        case -1: goto $l2745;
        case 0: goto $l2711;
    }
    $l2745:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2749 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2750;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $returnValue2753;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$parser$Token$nullable op2762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2763;
    panda$core$Int64 $tmp2764;
    org$pandalanguage$pandac$ASTNode* next2767 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2768;
    org$pandalanguage$pandac$ASTNode* $tmp2769;
    org$pandalanguage$pandac$ASTNode* $tmp2771;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    panda$core$Int64 $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    int $tmp2748;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2752 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2751 = $tmp2752;
        $tmp2750 = $tmp2751;
        result2749 = $tmp2750;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2751));
        if (((panda$core$Bit) { result2749 == NULL }).value) {
        {
            $tmp2754 = NULL;
            $returnValue2753 = $tmp2754;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2754));
            $tmp2748 = 0;
            goto $l2746;
            $l2755:;
            return $returnValue2753;
        }
        }
        $l2757:;
        while (true) {
        {
            int $tmp2761;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2764, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2763, $tmp2764);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2765 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2763);
                op2762 = $tmp2765;
                if (((panda$core$Bit) { !op2762.nonnull }).value) {
                {
                    $tmp2761 = 0;
                    goto $l2759;
                    $l2766:;
                    goto $l2758;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2770 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2769 = $tmp2770;
                $tmp2768 = $tmp2769;
                next2767 = $tmp2768;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2769));
                if (((panda$core$Bit) { next2767 == NULL }).value) {
                {
                    $tmp2771 = NULL;
                    $returnValue2753 = $tmp2771;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2771));
                    $tmp2761 = 1;
                    goto $l2759;
                    $l2772:;
                    $tmp2748 = 1;
                    goto $l2746;
                    $l2773:;
                    return $returnValue2753;
                }
                }
                {
                    $tmp2775 = result2749;
                    org$pandalanguage$pandac$ASTNode* $tmp2778 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2779, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2778, $tmp2779, ((org$pandalanguage$pandac$parser$Token) op2762.value).position, result2749, ((org$pandalanguage$pandac$parser$Token) op2762.value).kind, next2767);
                    $tmp2777 = $tmp2778;
                    $tmp2776 = $tmp2777;
                    result2749 = $tmp2776;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2775));
                }
            }
            $tmp2761 = -1;
            goto $l2759;
            $l2759:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2767));
            next2767 = NULL;
            switch ($tmp2761) {
                case 0: goto $l2766;
                case -1: goto $l2780;
                case 1: goto $l2772;
            }
            $l2780:;
        }
        }
        $l2758:;
        $tmp2781 = result2749;
        $returnValue2753 = $tmp2781;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2781));
        $tmp2748 = 2;
        goto $l2746;
        $l2782:;
        return $returnValue2753;
    }
    $l2746:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2749));
    result2749 = NULL;
    switch ($tmp2748) {
        case 1: goto $l2773;
        case 2: goto $l2782;
        case 0: goto $l2755;
    }
    $l2784:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2788;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2789;
    panda$core$Int64 $tmp2790;
    org$pandalanguage$pandac$ASTNode* $returnValue2793;
    org$pandalanguage$pandac$ASTNode* $tmp2794;
    org$pandalanguage$pandac$ASTNode* test2797 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    org$pandalanguage$pandac$ASTNode* $tmp2801;
    panda$collections$ImmutableArray* ifTrue2804 = NULL;
    panda$collections$ImmutableArray* $tmp2805;
    panda$collections$ImmutableArray* $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2808;
    org$pandalanguage$pandac$ASTNode* ifFalse2811 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2812;
    panda$core$Int64 $tmp2813;
    panda$core$Int64 $tmp2816;
    org$pandalanguage$pandac$ASTNode* $tmp2818;
    org$pandalanguage$pandac$ASTNode* $tmp2819;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $tmp2826;
    org$pandalanguage$pandac$ASTNode* $tmp2827;
    org$pandalanguage$pandac$ASTNode* $tmp2829;
    org$pandalanguage$pandac$ASTNode* $tmp2832;
    org$pandalanguage$pandac$ASTNode* $tmp2833;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    panda$core$Int64 $tmp2837;
    int $tmp2787;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2790, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2789, $tmp2790);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2792 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2789, &$s2791);
        start2788 = $tmp2792;
        if (((panda$core$Bit) { !start2788.nonnull }).value) {
        {
            $tmp2794 = NULL;
            $returnValue2793 = $tmp2794;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2794));
            $tmp2787 = 0;
            goto $l2785;
            $l2795:;
            return $returnValue2793;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2800 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2799 = $tmp2800;
        $tmp2798 = $tmp2799;
        test2797 = $tmp2798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
        if (((panda$core$Bit) { test2797 == NULL }).value) {
        {
            $tmp2801 = NULL;
            $returnValue2793 = $tmp2801;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2801));
            $tmp2787 = 1;
            goto $l2785;
            $l2802:;
            return $returnValue2793;
        }
        }
        panda$collections$ImmutableArray* $tmp2807 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2806 = $tmp2807;
        $tmp2805 = $tmp2806;
        ifTrue2804 = $tmp2805;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2805));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2806));
        if (((panda$core$Bit) { ifTrue2804 == NULL }).value) {
        {
            $tmp2808 = NULL;
            $returnValue2793 = $tmp2808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
            $tmp2787 = 2;
            goto $l2785;
            $l2809:;
            return $returnValue2793;
        }
        }
        memset(&ifFalse2811, 0, sizeof(ifFalse2811));
        panda$core$Int64$init$builtin_int64(&$tmp2813, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2812, $tmp2813);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2814 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2812);
        if (((panda$core$Bit) { $tmp2814.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2815 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2816, 36);
            panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2815.kind.$rawValue, $tmp2816);
            if ($tmp2817.value) {
            {
                {
                    $tmp2818 = ifFalse2811;
                    org$pandalanguage$pandac$ASTNode* $tmp2821 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2820 = $tmp2821;
                    $tmp2819 = $tmp2820;
                    ifFalse2811 = $tmp2819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2820));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2818));
                }
                if (((panda$core$Bit) { ifFalse2811 == NULL }).value) {
                {
                    $tmp2822 = NULL;
                    $returnValue2793 = $tmp2822;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2822));
                    $tmp2787 = 3;
                    goto $l2785;
                    $l2823:;
                    return $returnValue2793;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2825 = ifFalse2811;
                    org$pandalanguage$pandac$ASTNode* $tmp2828 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2827 = $tmp2828;
                    $tmp2826 = $tmp2827;
                    ifFalse2811 = $tmp2826;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2827));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2825));
                }
                if (((panda$core$Bit) { ifFalse2811 == NULL }).value) {
                {
                    $tmp2829 = NULL;
                    $returnValue2793 = $tmp2829;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2829));
                    $tmp2787 = 4;
                    goto $l2785;
                    $l2830:;
                    return $returnValue2793;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2832 = ifFalse2811;
                $tmp2833 = NULL;
                ifFalse2811 = $tmp2833;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2836 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2837, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2836, $tmp2837, ((org$pandalanguage$pandac$parser$Token) start2788.value).position, test2797, ifTrue2804, ifFalse2811);
        $tmp2835 = $tmp2836;
        $tmp2834 = $tmp2835;
        $returnValue2793 = $tmp2834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
        $tmp2787 = 5;
        goto $l2785;
        $l2838:;
        return $returnValue2793;
    }
    $l2785:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2811));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2804));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2797));
    test2797 = NULL;
    ifTrue2804 = NULL;
    switch ($tmp2787) {
        case 2: goto $l2809;
        case 5: goto $l2838;
        case 1: goto $l2802;
        case 3: goto $l2823;
        case 4: goto $l2830;
        case 0: goto $l2795;
    }
    $l2840:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2841;
    panda$core$Int64 $tmp2842;
    org$pandalanguage$pandac$ASTNode* $returnValue2845;
    org$pandalanguage$pandac$ASTNode* $tmp2846;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    panda$core$Bit $tmp2850;
    panda$core$Int64$init$builtin_int64(&$tmp2842, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2841, $tmp2842);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2844 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2841, &$s2843);
    if (((panda$core$Bit) { !$tmp2844.nonnull }).value) {
    {
        $tmp2846 = NULL;
        $returnValue2845 = $tmp2846;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2846));
        return $returnValue2845;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2850, false);
    org$pandalanguage$pandac$ASTNode* $tmp2851 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2850);
    $tmp2849 = $tmp2851;
    $tmp2848 = $tmp2849;
    $returnValue2845 = $tmp2848;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
    return $returnValue2845;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2854;
    panda$core$Int64 $tmp2855;
    org$pandalanguage$pandac$ASTNode* $returnValue2858;
    org$pandalanguage$pandac$ASTNode* $tmp2859;
    panda$core$Int64 $tmp2862;
    org$pandalanguage$pandac$ASTNode* type2867 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* $tmp2869;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    org$pandalanguage$pandac$ASTNode* $tmp2874;
    org$pandalanguage$pandac$ASTNode* $tmp2875;
    panda$core$Int64 $tmp2877;
    panda$core$String* $tmp2878;
    org$pandalanguage$pandac$ASTNode* $tmp2883;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    panda$core$Int64 $tmp2886;
    panda$core$String* $tmp2887;
    panda$core$Int64$init$builtin_int64(&$tmp2855, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2854, $tmp2855);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2854, &$s2856);
    id2853 = $tmp2857;
    if (((panda$core$Bit) { !id2853.nonnull }).value) {
    {
        $tmp2859 = NULL;
        $returnValue2858 = $tmp2859;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2859));
        return $returnValue2858;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2861 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2862, 95);
    panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2861.kind.$rawValue, $tmp2862);
    if ($tmp2863.value) {
    {
        int $tmp2866;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2870 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2869 = $tmp2870;
            $tmp2868 = $tmp2869;
            type2867 = $tmp2868;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2869));
            if (((panda$core$Bit) { type2867 == NULL }).value) {
            {
                $tmp2871 = NULL;
                $returnValue2858 = $tmp2871;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2871));
                $tmp2866 = 0;
                goto $l2864;
                $l2872:;
                return $returnValue2858;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2877, 44);
            panda$core$String* $tmp2879 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2853.value));
            $tmp2878 = $tmp2879;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2876, $tmp2877, ((org$pandalanguage$pandac$parser$Token) id2853.value).position, $tmp2878, type2867);
            $tmp2875 = $tmp2876;
            $tmp2874 = $tmp2875;
            $returnValue2858 = $tmp2874;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2878));
            $tmp2866 = 1;
            goto $l2864;
            $l2880:;
            return $returnValue2858;
        }
        $l2864:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2867));
        type2867 = NULL;
        switch ($tmp2866) {
            case 1: goto $l2880;
            case 0: goto $l2872;
        }
        $l2882:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2885 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2886, 20);
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2853.value));
    $tmp2887 = $tmp2888;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2885, $tmp2886, ((org$pandalanguage$pandac$parser$Token) id2853.value).position, $tmp2887);
    $tmp2884 = $tmp2885;
    $tmp2883 = $tmp2884;
    $returnValue2858 = $tmp2883;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2883));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2884));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2887));
    return $returnValue2858;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2894;
    panda$core$Int64 $tmp2895;
    org$pandalanguage$pandac$ASTNode* $returnValue2898;
    org$pandalanguage$pandac$ASTNode* $tmp2899;
    org$pandalanguage$pandac$ASTNode* t2902 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $tmp2906;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2909;
    panda$core$Int64 $tmp2910;
    org$pandalanguage$pandac$ASTNode* $tmp2913;
    org$pandalanguage$pandac$ASTNode* list2916 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2917;
    org$pandalanguage$pandac$ASTNode* $tmp2918;
    org$pandalanguage$pandac$ASTNode* $tmp2920;
    panda$collections$ImmutableArray* block2923 = NULL;
    panda$collections$ImmutableArray* $tmp2924;
    panda$collections$ImmutableArray* $tmp2925;
    org$pandalanguage$pandac$ASTNode* $tmp2927;
    org$pandalanguage$pandac$ASTNode* $tmp2930;
    org$pandalanguage$pandac$ASTNode* $tmp2931;
    panda$core$Int64 $tmp2933;
    int $tmp2892;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2895, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2894, $tmp2895);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2897 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2894, &$s2896);
        start2893 = $tmp2897;
        if (((panda$core$Bit) { !start2893.nonnull }).value) {
        {
            $tmp2899 = NULL;
            $returnValue2898 = $tmp2899;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2899));
            $tmp2892 = 0;
            goto $l2890;
            $l2900:;
            return $returnValue2898;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2905 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2904 = $tmp2905;
        $tmp2903 = $tmp2904;
        t2902 = $tmp2903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2904));
        if (((panda$core$Bit) { t2902 == NULL }).value) {
        {
            $tmp2906 = NULL;
            $returnValue2898 = $tmp2906;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2906));
            $tmp2892 = 1;
            goto $l2890;
            $l2907:;
            return $returnValue2898;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2910, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2909, $tmp2910);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2912 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2909, &$s2911);
        if (((panda$core$Bit) { !$tmp2912.nonnull }).value) {
        {
            $tmp2913 = NULL;
            $returnValue2898 = $tmp2913;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2913));
            $tmp2892 = 2;
            goto $l2890;
            $l2914:;
            return $returnValue2898;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2919 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2918 = $tmp2919;
        $tmp2917 = $tmp2918;
        list2916 = $tmp2917;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2917));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2918));
        if (((panda$core$Bit) { list2916 == NULL }).value) {
        {
            $tmp2920 = NULL;
            $returnValue2898 = $tmp2920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2920));
            $tmp2892 = 3;
            goto $l2890;
            $l2921:;
            return $returnValue2898;
        }
        }
        panda$collections$ImmutableArray* $tmp2926 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2925 = $tmp2926;
        $tmp2924 = $tmp2925;
        block2923 = $tmp2924;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2924));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
        if (((panda$core$Bit) { block2923 == NULL }).value) {
        {
            $tmp2927 = NULL;
            $returnValue2898 = $tmp2927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2927));
            $tmp2892 = 4;
            goto $l2890;
            $l2928:;
            return $returnValue2898;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2933, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2932, $tmp2933, ((org$pandalanguage$pandac$parser$Token) start2893.value).position, p_label, t2902, list2916, block2923);
        $tmp2931 = $tmp2932;
        $tmp2930 = $tmp2931;
        $returnValue2898 = $tmp2930;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2930));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
        $tmp2892 = 5;
        goto $l2890;
        $l2934:;
        return $returnValue2898;
    }
    $l2890:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2923));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2916));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2902));
    t2902 = NULL;
    list2916 = NULL;
    block2923 = NULL;
    switch ($tmp2892) {
        case 5: goto $l2934;
        case 3: goto $l2921;
        case 2: goto $l2914;
        case 4: goto $l2928;
        case 1: goto $l2907;
        case 0: goto $l2900;
    }
    $l2936:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2941;
    panda$core$Int64 $tmp2942;
    org$pandalanguage$pandac$ASTNode* $returnValue2945;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* test2949 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$ASTNode* $tmp2953;
    panda$collections$ImmutableArray* body2956 = NULL;
    panda$collections$ImmutableArray* $tmp2957;
    panda$collections$ImmutableArray* $tmp2958;
    org$pandalanguage$pandac$ASTNode* $tmp2960;
    org$pandalanguage$pandac$ASTNode* $tmp2963;
    org$pandalanguage$pandac$ASTNode* $tmp2964;
    panda$core$Int64 $tmp2966;
    int $tmp2939;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2942, 31);
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
        org$pandalanguage$pandac$ASTNode* $tmp2952 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2951 = $tmp2952;
        $tmp2950 = $tmp2951;
        test2949 = $tmp2950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
        if (((panda$core$Bit) { test2949 == NULL }).value) {
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
        panda$collections$ImmutableArray* $tmp2959 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2958 = $tmp2959;
        $tmp2957 = $tmp2958;
        body2956 = $tmp2957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
        if (((panda$core$Bit) { body2956 == NULL }).value) {
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
        org$pandalanguage$pandac$ASTNode* $tmp2965 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2966, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2965, $tmp2966, ((org$pandalanguage$pandac$parser$Token) start2940.value).position, p_label, test2949, body2956);
        $tmp2964 = $tmp2965;
        $tmp2963 = $tmp2964;
        $returnValue2945 = $tmp2963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2964));
        $tmp2939 = 3;
        goto $l2937;
        $l2967:;
        return $returnValue2945;
    }
    $l2937:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2956));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2949));
    test2949 = NULL;
    body2956 = NULL;
    switch ($tmp2939) {
        case 3: goto $l2967;
        case 2: goto $l2961;
        case 1: goto $l2954;
        case 0: goto $l2947;
    }
    $l2969:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2973;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2974;
    panda$core$Int64 $tmp2975;
    org$pandalanguage$pandac$ASTNode* $returnValue2978;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    panda$collections$ImmutableArray* body2982 = NULL;
    panda$collections$ImmutableArray* $tmp2983;
    panda$collections$ImmutableArray* $tmp2984;
    org$pandalanguage$pandac$ASTNode* $tmp2986;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2989;
    panda$core$Int64 $tmp2990;
    org$pandalanguage$pandac$ASTNode* $tmp2993;
    org$pandalanguage$pandac$ASTNode* test2996 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp2998;
    org$pandalanguage$pandac$ASTNode* $tmp3000;
    org$pandalanguage$pandac$ASTNode* $tmp3003;
    org$pandalanguage$pandac$ASTNode* $tmp3004;
    panda$core$Int64 $tmp3006;
    int $tmp2972;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2975, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2974, $tmp2975);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2977 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2974, &$s2976);
        start2973 = $tmp2977;
        if (((panda$core$Bit) { !start2973.nonnull }).value) {
        {
            $tmp2979 = NULL;
            $returnValue2978 = $tmp2979;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
            $tmp2972 = 0;
            goto $l2970;
            $l2980:;
            return $returnValue2978;
        }
        }
        panda$collections$ImmutableArray* $tmp2985 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2984 = $tmp2985;
        $tmp2983 = $tmp2984;
        body2982 = $tmp2983;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2983));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2984));
        if (((panda$core$Bit) { body2982 == NULL }).value) {
        {
            $tmp2986 = NULL;
            $returnValue2978 = $tmp2986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2986));
            $tmp2972 = 1;
            goto $l2970;
            $l2987:;
            return $returnValue2978;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2990, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2989, $tmp2990);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2992 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2989, &$s2991);
        if (((panda$core$Bit) { !$tmp2992.nonnull }).value) {
        {
            $tmp2993 = NULL;
            $returnValue2978 = $tmp2993;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2993));
            $tmp2972 = 2;
            goto $l2970;
            $l2994:;
            return $returnValue2978;
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
            $returnValue2978 = $tmp3000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3000));
            $tmp2972 = 3;
            goto $l2970;
            $l3001:;
            return $returnValue2978;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3005 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3006, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3005, $tmp3006, ((org$pandalanguage$pandac$parser$Token) start2973.value).position, p_label, body2982, test2996);
        $tmp3004 = $tmp3005;
        $tmp3003 = $tmp3004;
        $returnValue2978 = $tmp3003;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
        $tmp2972 = 4;
        goto $l2970;
        $l3007:;
        return $returnValue2978;
    }
    $l2970:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2996));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2982));
    body2982 = NULL;
    test2996 = NULL;
    switch ($tmp2972) {
        case 2: goto $l2994;
        case 1: goto $l2987;
        case 4: goto $l3007;
        case 3: goto $l3001;
        case 0: goto $l2980;
    }
    $l3009:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3013;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3014;
    panda$core$Int64 $tmp3015;
    org$pandalanguage$pandac$ASTNode* $returnValue3018;
    org$pandalanguage$pandac$ASTNode* $tmp3019;
    panda$collections$ImmutableArray* body3022 = NULL;
    panda$collections$ImmutableArray* $tmp3023;
    panda$collections$ImmutableArray* $tmp3024;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    org$pandalanguage$pandac$ASTNode* $tmp3029;
    org$pandalanguage$pandac$ASTNode* $tmp3030;
    panda$core$Int64 $tmp3032;
    int $tmp3012;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3015, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3014, $tmp3015);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3017 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3014, &$s3016);
        start3013 = $tmp3017;
        if (((panda$core$Bit) { !start3013.nonnull }).value) {
        {
            $tmp3019 = NULL;
            $returnValue3018 = $tmp3019;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
            $tmp3012 = 0;
            goto $l3010;
            $l3020:;
            return $returnValue3018;
        }
        }
        panda$collections$ImmutableArray* $tmp3025 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3024 = $tmp3025;
        $tmp3023 = $tmp3024;
        body3022 = $tmp3023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
        if (((panda$core$Bit) { body3022 == NULL }).value) {
        {
            $tmp3026 = NULL;
            $returnValue3018 = $tmp3026;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
            $tmp3012 = 1;
            goto $l3010;
            $l3027:;
            return $returnValue3018;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3031 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3032, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3031, $tmp3032, ((org$pandalanguage$pandac$parser$Token) start3013.value).position, p_label, body3022);
        $tmp3030 = $tmp3031;
        $tmp3029 = $tmp3030;
        $returnValue3018 = $tmp3029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
        $tmp3012 = 2;
        goto $l3010;
        $l3033:;
        return $returnValue3018;
    }
    $l3010:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3022));
    body3022 = NULL;
    switch ($tmp3012) {
        case 2: goto $l3033;
        case 0: goto $l3020;
        case 1: goto $l3027;
    }
    $l3035:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3039;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3040;
    panda$core$Int64 $tmp3041;
    org$pandalanguage$pandac$ASTNode* $returnValue3044;
    org$pandalanguage$pandac$ASTNode* $tmp3045;
    org$pandalanguage$pandac$ASTNode* expr3048 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3049;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    org$pandalanguage$pandac$ASTNode* $tmp3052;
    org$pandalanguage$pandac$ASTNode* message3055 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3056;
    panda$core$Int64 $tmp3057;
    org$pandalanguage$pandac$ASTNode* $tmp3059;
    org$pandalanguage$pandac$ASTNode* $tmp3060;
    org$pandalanguage$pandac$ASTNode* $tmp3061;
    org$pandalanguage$pandac$ASTNode* $tmp3063;
    org$pandalanguage$pandac$ASTNode* $tmp3066;
    org$pandalanguage$pandac$ASTNode* $tmp3067;
    org$pandalanguage$pandac$ASTNode* $tmp3068;
    org$pandalanguage$pandac$ASTNode* $tmp3069;
    panda$core$Int64 $tmp3071;
    int $tmp3038;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3041, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3040, $tmp3041);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3043 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3040, &$s3042);
        start3039 = $tmp3043;
        if (((panda$core$Bit) { !start3039.nonnull }).value) {
        {
            $tmp3045 = NULL;
            $returnValue3044 = $tmp3045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
            $tmp3038 = 0;
            goto $l3036;
            $l3046:;
            return $returnValue3044;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3051 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3050 = $tmp3051;
        $tmp3049 = $tmp3050;
        expr3048 = $tmp3049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
        if (((panda$core$Bit) { expr3048 == NULL }).value) {
        {
            $tmp3052 = NULL;
            $returnValue3044 = $tmp3052;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3052));
            $tmp3038 = 1;
            goto $l3036;
            $l3053:;
            return $returnValue3044;
        }
        }
        memset(&message3055, 0, sizeof(message3055));
        panda$core$Int64$init$builtin_int64(&$tmp3057, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3056, $tmp3057);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3058 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3056);
        if (((panda$core$Bit) { $tmp3058.nonnull }).value) {
        {
            {
                $tmp3059 = message3055;
                org$pandalanguage$pandac$ASTNode* $tmp3062 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3061 = $tmp3062;
                $tmp3060 = $tmp3061;
                message3055 = $tmp3060;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3059));
            }
            if (((panda$core$Bit) { message3055 == NULL }).value) {
            {
                $tmp3063 = NULL;
                $returnValue3044 = $tmp3063;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3063));
                $tmp3038 = 2;
                goto $l3036;
                $l3064:;
                return $returnValue3044;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3066 = message3055;
                $tmp3067 = NULL;
                message3055 = $tmp3067;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3066));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3070 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3071, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3070, $tmp3071, ((org$pandalanguage$pandac$parser$Token) start3039.value).position, expr3048, message3055);
        $tmp3069 = $tmp3070;
        $tmp3068 = $tmp3069;
        $returnValue3044 = $tmp3068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
        $tmp3038 = 3;
        goto $l3036;
        $l3072:;
        return $returnValue3044;
    }
    $l3036:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3055));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3048));
    expr3048 = NULL;
    switch ($tmp3038) {
        case 3: goto $l3072;
        case 2: goto $l3064;
        case 1: goto $l3053;
        case 0: goto $l3046;
    }
    $l3074:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3085;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3086;
    panda$core$Int64 $tmp3087;
    org$pandalanguage$pandac$ASTNode* $returnValue3090;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    panda$core$Bit $tmp3095;
    panda$collections$Array* expressions3096 = NULL;
    panda$collections$Array* $tmp3097;
    panda$collections$Array* $tmp3098;
    org$pandalanguage$pandac$ASTNode* expr3100 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3101;
    org$pandalanguage$pandac$ASTNode* $tmp3102;
    panda$core$Bit $tmp3104;
    org$pandalanguage$pandac$ASTNode* $tmp3105;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3112;
    panda$core$Int64 $tmp3113;
    org$pandalanguage$pandac$ASTNode* $tmp3115;
    org$pandalanguage$pandac$ASTNode* $tmp3116;
    org$pandalanguage$pandac$ASTNode* $tmp3117;
    panda$core$Bit $tmp3119;
    org$pandalanguage$pandac$ASTNode* $tmp3120;
    panda$core$Bit $tmp3124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3125;
    panda$core$Int64 $tmp3126;
    org$pandalanguage$pandac$ASTNode* $tmp3129;
    panda$collections$Array* statements3133 = NULL;
    panda$collections$Array* $tmp3134;
    panda$collections$Array* $tmp3135;
    org$pandalanguage$pandac$parser$Token$Kind $match$1471_133139;
    panda$core$Int64 $tmp3143;
    panda$core$Int64 $tmp3146;
    panda$core$Int64 $tmp3150;
    panda$core$Int64 $tmp3155;
    panda$core$Int64 $tmp3158;
    panda$core$Int64 $tmp3162;
    org$pandalanguage$pandac$ASTNode* stmt3168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3170;
    org$pandalanguage$pandac$ASTNode* $tmp3172;
    org$pandalanguage$pandac$ASTNode* stmt3182 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3183;
    org$pandalanguage$pandac$ASTNode* $tmp3184;
    org$pandalanguage$pandac$ASTNode* $tmp3186;
    org$pandalanguage$pandac$ASTNode* $tmp3192;
    org$pandalanguage$pandac$ASTNode* $tmp3193;
    panda$core$Int64 $tmp3195;
    panda$collections$ImmutableArray* $tmp3196;
    panda$collections$ImmutableArray* $tmp3198;
    int $tmp3077;
    {
        if (self->allowLambdas.value) goto $l3078; else goto $l3079;
        $l3079:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3080, (panda$core$Int64) { 1444 }, &$s3081);
        abort();
        $l3078:;
        int $tmp3084;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3087, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3086, $tmp3087);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3089 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3086, &$s3088);
            start3085 = $tmp3089;
            if (((panda$core$Bit) { !start3085.nonnull }).value) {
            {
                $tmp3091 = NULL;
                $returnValue3090 = $tmp3091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
                $tmp3084 = 0;
                goto $l3082;
                $l3092:;
                $tmp3077 = 0;
                goto $l3075;
                $l3093:;
                return $returnValue3090;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3095, false);
            self->allowLambdas = $tmp3095;
            panda$collections$Array* $tmp3099 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3099);
            $tmp3098 = $tmp3099;
            $tmp3097 = $tmp3098;
            expressions3096 = $tmp3097;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
            org$pandalanguage$pandac$ASTNode* $tmp3103 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3102 = $tmp3103;
            $tmp3101 = $tmp3102;
            expr3100 = $tmp3101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3102));
            if (((panda$core$Bit) { expr3100 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3104, true);
                self->allowLambdas = $tmp3104;
                $tmp3105 = NULL;
                $returnValue3090 = $tmp3105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3105));
                $tmp3084 = 1;
                goto $l3082;
                $l3106:;
                $tmp3077 = 1;
                goto $l3075;
                $l3107:;
                return $returnValue3090;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3096, ((panda$core$Object*) expr3100));
            $l3109:;
            panda$core$Int64$init$builtin_int64(&$tmp3113, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3112, $tmp3113);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3114 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3112);
            bool $tmp3111 = ((panda$core$Bit) { $tmp3114.nonnull }).value;
            if (!$tmp3111) goto $l3110;
            {
                {
                    $tmp3115 = expr3100;
                    org$pandalanguage$pandac$ASTNode* $tmp3118 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3117 = $tmp3118;
                    $tmp3116 = $tmp3117;
                    expr3100 = $tmp3116;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3116));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3117));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3115));
                }
                if (((panda$core$Bit) { expr3100 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3119, true);
                    self->allowLambdas = $tmp3119;
                    $tmp3120 = NULL;
                    $returnValue3090 = $tmp3120;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3120));
                    $tmp3084 = 2;
                    goto $l3082;
                    $l3121:;
                    $tmp3077 = 2;
                    goto $l3075;
                    $l3122:;
                    return $returnValue3090;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3096, ((panda$core$Object*) expr3100));
            }
            goto $l3109;
            $l3110:;
            panda$core$Bit$init$builtin_bit(&$tmp3124, true);
            self->allowLambdas = $tmp3124;
            panda$core$Int64$init$builtin_int64(&$tmp3126, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3125, $tmp3126);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3128 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3125, &$s3127);
            if (((panda$core$Bit) { !$tmp3128.nonnull }).value) {
            {
                $tmp3129 = NULL;
                $returnValue3090 = $tmp3129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3129));
                $tmp3084 = 3;
                goto $l3082;
                $l3130:;
                $tmp3077 = 3;
                goto $l3075;
                $l3131:;
                return $returnValue3090;
            }
            }
            panda$collections$Array* $tmp3136 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3136);
            $tmp3135 = $tmp3136;
            $tmp3134 = $tmp3135;
            statements3133 = $tmp3134;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
            $l3137:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3140 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1471_133139 = $tmp3140.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3143, 39);
                    panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3143);
                    bool $tmp3142 = $tmp3144.value;
                    if ($tmp3142) goto $l3145;
                    panda$core$Int64$init$builtin_int64(&$tmp3146, 40);
                    panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3146);
                    $tmp3142 = $tmp3147.value;
                    $l3145:;
                    panda$core$Bit $tmp3148 = { $tmp3142 };
                    bool $tmp3141 = $tmp3148.value;
                    if ($tmp3141) goto $l3149;
                    panda$core$Int64$init$builtin_int64(&$tmp3150, 100);
                    panda$core$Bit $tmp3151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3150);
                    $tmp3141 = $tmp3151.value;
                    $l3149:;
                    panda$core$Bit $tmp3152 = { $tmp3141 };
                    if ($tmp3152.value) {
                    {
                        goto $l3138;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3155, 28);
                    panda$core$Bit $tmp3156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3155);
                    bool $tmp3154 = $tmp3156.value;
                    if ($tmp3154) goto $l3157;
                    panda$core$Int64$init$builtin_int64(&$tmp3158, 29);
                    panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3158);
                    $tmp3154 = $tmp3159.value;
                    $l3157:;
                    panda$core$Bit $tmp3160 = { $tmp3154 };
                    bool $tmp3153 = $tmp3160.value;
                    if ($tmp3153) goto $l3161;
                    panda$core$Int64$init$builtin_int64(&$tmp3162, 27);
                    panda$core$Bit $tmp3163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_133139.$rawValue, $tmp3162);
                    $tmp3153 = $tmp3163.value;
                    $l3161:;
                    panda$core$Bit $tmp3164 = { $tmp3153 };
                    if ($tmp3164.value) {
                    {
                        int $tmp3167;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3171 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3170 = $tmp3171;
                            $tmp3169 = $tmp3170;
                            stmt3168 = $tmp3169;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
                            if (((panda$core$Bit) { stmt3168 == NULL }).value) {
                            {
                                $tmp3172 = NULL;
                                $returnValue3090 = $tmp3172;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
                                $tmp3167 = 0;
                                goto $l3165;
                                $l3173:;
                                $tmp3084 = 4;
                                goto $l3082;
                                $l3174:;
                                $tmp3077 = 4;
                                goto $l3075;
                                $l3175:;
                                return $returnValue3090;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3133, ((panda$core$Object*) stmt3168));
                            $tmp3167 = 1;
                            goto $l3165;
                            $l3177:;
                            goto $l3138;
                        }
                        $l3165:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3168));
                        stmt3168 = NULL;
                        switch ($tmp3167) {
                            case 0: goto $l3173;
                            case 1: goto $l3177;
                        }
                        $l3178:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3181;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3185 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3184 = $tmp3185;
                                $tmp3183 = $tmp3184;
                                stmt3182 = $tmp3183;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3183));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3184));
                                if (((panda$core$Bit) { stmt3182 == NULL }).value) {
                                {
                                    $tmp3186 = NULL;
                                    $returnValue3090 = $tmp3186;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
                                    $tmp3181 = 0;
                                    goto $l3179;
                                    $l3187:;
                                    $tmp3084 = 5;
                                    goto $l3082;
                                    $l3188:;
                                    $tmp3077 = 5;
                                    goto $l3075;
                                    $l3189:;
                                    return $returnValue3090;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3133, ((panda$core$Object*) stmt3182));
                            }
                            $tmp3181 = -1;
                            goto $l3179;
                            $l3179:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3182));
                            stmt3182 = NULL;
                            switch ($tmp3181) {
                                case 0: goto $l3187;
                                case -1: goto $l3191;
                            }
                            $l3191:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3138:;
            org$pandalanguage$pandac$ASTNode* $tmp3194 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3195, 48);
            panda$collections$ImmutableArray* $tmp3197 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3096);
            $tmp3196 = $tmp3197;
            panda$collections$ImmutableArray* $tmp3199 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3133);
            $tmp3198 = $tmp3199;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3194, $tmp3195, ((org$pandalanguage$pandac$parser$Token) start3085.value).position, $tmp3196, $tmp3198);
            $tmp3193 = $tmp3194;
            $tmp3192 = $tmp3193;
            $returnValue3090 = $tmp3192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
            $tmp3084 = 6;
            goto $l3082;
            $l3200:;
            $tmp3077 = 6;
            goto $l3075;
            $l3201:;
            return $returnValue3090;
        }
        $l3082:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3096));
        expressions3096 = NULL;
        expr3100 = NULL;
        statements3133 = NULL;
        switch ($tmp3084) {
            case 5: goto $l3188;
            case 3: goto $l3130;
            case 1: goto $l3106;
            case 6: goto $l3200;
            case 4: goto $l3174;
            case 2: goto $l3121;
            case 0: goto $l3092;
        }
        $l3203:;
    }
    $tmp3077 = -1;
    goto $l3075;
    $l3075:;
    if (self->allowLambdas.value) goto $l3205; else goto $l3206;
    $l3206:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3207, (panda$core$Int64) { 1444 }, &$s3208);
    abort();
    $l3205:;
    switch ($tmp3077) {
        case 3: goto $l3131;
        case 6: goto $l3201;
        case -1: goto $l3204;
        case 5: goto $l3189;
        case 4: goto $l3175;
        case 2: goto $l3122;
        case 1: goto $l3107;
        case 0: goto $l3093;
    }
    $l3204:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3212;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3213;
    panda$core$Int64 $tmp3214;
    org$pandalanguage$pandac$ASTNode* $returnValue3217;
    org$pandalanguage$pandac$ASTNode* $tmp3218;
    org$pandalanguage$pandac$ASTNode* expr3221 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3222;
    org$pandalanguage$pandac$ASTNode* $tmp3223;
    org$pandalanguage$pandac$ASTNode* $tmp3225;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3228;
    panda$core$Int64 $tmp3229;
    org$pandalanguage$pandac$ASTNode* $tmp3232;
    panda$collections$Array* whens3235 = NULL;
    panda$collections$Array* $tmp3236;
    panda$collections$Array* $tmp3237;
    panda$collections$Array* other3239 = NULL;
    panda$collections$Array* $tmp3240;
    org$pandalanguage$pandac$parser$Token token3243;
    org$pandalanguage$pandac$parser$Token$Kind $match$1512_133245;
    panda$core$Int64 $tmp3246;
    panda$core$Int64 $tmp3248;
    org$pandalanguage$pandac$ASTNode* w3253 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3254;
    org$pandalanguage$pandac$ASTNode* $tmp3255;
    org$pandalanguage$pandac$ASTNode* $tmp3257;
    panda$core$Int64 $tmp3262;
    org$pandalanguage$pandac$parser$Token o3264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3266;
    panda$core$Int64 $tmp3267;
    org$pandalanguage$pandac$ASTNode* $tmp3270;
    panda$collections$Array* $tmp3273;
    panda$collections$Array* $tmp3274;
    panda$collections$Array* $tmp3275;
    org$pandalanguage$pandac$parser$Token$Kind $match$1528_253279;
    panda$core$Int64 $tmp3281;
    panda$core$Int64 $tmp3285;
    panda$core$Int64 $tmp3288;
    panda$core$Int64 $tmp3292;
    org$pandalanguage$pandac$ASTNode* stmt3298 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    org$pandalanguage$pandac$ASTNode* $tmp3300;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* stmt3311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3313;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    panda$core$String* $tmp3320;
    panda$core$String* $tmp3322;
    panda$core$String* $tmp3323;
    panda$core$String* $tmp3325;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3331;
    panda$core$Int64 $tmp3332;
    org$pandalanguage$pandac$ASTNode* $tmp3335;
    org$pandalanguage$pandac$ASTNode* $tmp3338;
    org$pandalanguage$pandac$ASTNode* $tmp3339;
    panda$core$Int64 $tmp3341;
    panda$collections$ImmutableArray* $tmp3342;
    panda$collections$ImmutableArray* $tmp3344;
    org$pandalanguage$pandac$ASTNode* $tmp3348;
    org$pandalanguage$pandac$ASTNode* $tmp3349;
    panda$core$Int64 $tmp3351;
    panda$collections$ImmutableArray* $tmp3352;
    int $tmp3211;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3214, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3213, $tmp3214);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3216 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3213, &$s3215);
        start3212 = $tmp3216;
        if (((panda$core$Bit) { !start3212.nonnull }).value) {
        {
            $tmp3218 = NULL;
            $returnValue3217 = $tmp3218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3218));
            $tmp3211 = 0;
            goto $l3209;
            $l3219:;
            return $returnValue3217;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3224 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3223 = $tmp3224;
        $tmp3222 = $tmp3223;
        expr3221 = $tmp3222;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
        if (((panda$core$Bit) { expr3221 == NULL }).value) {
        {
            $tmp3225 = NULL;
            $returnValue3217 = $tmp3225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
            $tmp3211 = 1;
            goto $l3209;
            $l3226:;
            return $returnValue3217;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3229, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3228, $tmp3229);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3231 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3228, &$s3230);
        if (((panda$core$Bit) { !$tmp3231.nonnull }).value) {
        {
            $tmp3232 = NULL;
            $returnValue3217 = $tmp3232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3232));
            $tmp3211 = 2;
            goto $l3209;
            $l3233:;
            return $returnValue3217;
        }
        }
        panda$collections$Array* $tmp3238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3238);
        $tmp3237 = $tmp3238;
        $tmp3236 = $tmp3237;
        whens3235 = $tmp3236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3237));
        $tmp3240 = NULL;
        other3239 = $tmp3240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3240));
        $l3241:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3244 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3243 = $tmp3244;
            {
                $match$1512_133245 = token3243.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3246, 100);
                panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1512_133245.$rawValue, $tmp3246);
                if ($tmp3247.value) {
                {
                    goto $l3242;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3248, 39);
                panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1512_133245.$rawValue, $tmp3248);
                if ($tmp3249.value) {
                {
                    int $tmp3252;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3256 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3255 = $tmp3256;
                        $tmp3254 = $tmp3255;
                        w3253 = $tmp3254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3255));
                        if (((panda$core$Bit) { w3253 == NULL }).value) {
                        {
                            $tmp3257 = NULL;
                            $returnValue3217 = $tmp3257;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3257));
                            $tmp3252 = 0;
                            goto $l3250;
                            $l3258:;
                            $tmp3211 = 3;
                            goto $l3209;
                            $l3259:;
                            return $returnValue3217;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3235, ((panda$core$Object*) w3253));
                    }
                    $tmp3252 = -1;
                    goto $l3250;
                    $l3250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3253));
                    w3253 = NULL;
                    switch ($tmp3252) {
                        case 0: goto $l3258;
                        case -1: goto $l3261;
                    }
                    $l3261:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3262, 40);
                panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1512_133245.$rawValue, $tmp3262);
                if ($tmp3263.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3265 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3264 = $tmp3265;
                    panda$core$Int64$init$builtin_int64(&$tmp3267, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3266, $tmp3267);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3269 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3266, &$s3268);
                    if (((panda$core$Bit) { !$tmp3269.nonnull }).value) {
                    {
                        $tmp3270 = NULL;
                        $returnValue3217 = $tmp3270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
                        $tmp3211 = 4;
                        goto $l3209;
                        $l3271:;
                        return $returnValue3217;
                    }
                    }
                    {
                        $tmp3273 = other3239;
                        panda$collections$Array* $tmp3276 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3276);
                        $tmp3275 = $tmp3276;
                        $tmp3274 = $tmp3275;
                        other3239 = $tmp3274;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3273));
                    }
                    $l3277:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3280 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1528_253279 = $tmp3280.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3281, 100);
                            panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1528_253279.$rawValue, $tmp3281);
                            if ($tmp3282.value) {
                            {
                                goto $l3278;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3285, 28);
                            panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1528_253279.$rawValue, $tmp3285);
                            bool $tmp3284 = $tmp3286.value;
                            if ($tmp3284) goto $l3287;
                            panda$core$Int64$init$builtin_int64(&$tmp3288, 29);
                            panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1528_253279.$rawValue, $tmp3288);
                            $tmp3284 = $tmp3289.value;
                            $l3287:;
                            panda$core$Bit $tmp3290 = { $tmp3284 };
                            bool $tmp3283 = $tmp3290.value;
                            if ($tmp3283) goto $l3291;
                            panda$core$Int64$init$builtin_int64(&$tmp3292, 27);
                            panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1528_253279.$rawValue, $tmp3292);
                            $tmp3283 = $tmp3293.value;
                            $l3291:;
                            panda$core$Bit $tmp3294 = { $tmp3283 };
                            if ($tmp3294.value) {
                            {
                                int $tmp3297;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3301 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3300 = $tmp3301;
                                    $tmp3299 = $tmp3300;
                                    stmt3298 = $tmp3299;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3300));
                                    if (((panda$core$Bit) { stmt3298 == NULL }).value) {
                                    {
                                        $tmp3302 = NULL;
                                        $returnValue3217 = $tmp3302;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3302));
                                        $tmp3297 = 0;
                                        goto $l3295;
                                        $l3303:;
                                        $tmp3211 = 5;
                                        goto $l3209;
                                        $l3304:;
                                        return $returnValue3217;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3239, ((panda$core$Object*) stmt3298));
                                    $tmp3297 = 1;
                                    goto $l3295;
                                    $l3306:;
                                    goto $l3278;
                                }
                                $l3295:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3298));
                                stmt3298 = NULL;
                                switch ($tmp3297) {
                                    case 0: goto $l3303;
                                    case 1: goto $l3306;
                                }
                                $l3307:;
                            }
                            }
                            else {
                            {
                                int $tmp3310;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3314 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3313 = $tmp3314;
                                    $tmp3312 = $tmp3313;
                                    stmt3311 = $tmp3312;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3312));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3313));
                                    if (((panda$core$Bit) { stmt3311 == NULL }).value) {
                                    {
                                        $tmp3315 = NULL;
                                        $returnValue3217 = $tmp3315;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
                                        $tmp3310 = 0;
                                        goto $l3308;
                                        $l3316:;
                                        $tmp3211 = 6;
                                        goto $l3209;
                                        $l3317:;
                                        return $returnValue3217;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3239, ((panda$core$Object*) stmt3311));
                                }
                                $tmp3310 = -1;
                                goto $l3308;
                                $l3308:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3311));
                                stmt3311 = NULL;
                                switch ($tmp3310) {
                                    case -1: goto $l3319;
                                    case 0: goto $l3316;
                                }
                                $l3319:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3278:;
                    goto $l3242;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3326 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3243);
                    $tmp3325 = $tmp3326;
                    panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3324, $tmp3325);
                    $tmp3323 = $tmp3327;
                    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3328);
                    $tmp3322 = $tmp3329;
                    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3321, $tmp3322);
                    $tmp3320 = $tmp3330;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3243, $tmp3320);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3325));
                    goto $l3242;
                }
                }
                }
                }
            }
        }
        }
        $l3242:;
        panda$core$Int64$init$builtin_int64(&$tmp3332, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3331, $tmp3332);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3334 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3331, &$s3333);
        if (((panda$core$Bit) { !$tmp3334.nonnull }).value) {
        {
            $tmp3335 = NULL;
            $returnValue3217 = $tmp3335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
            $tmp3211 = 7;
            goto $l3209;
            $l3336:;
            return $returnValue3217;
        }
        }
        if (((panda$core$Bit) { other3239 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3340 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3341, 25);
            panda$collections$ImmutableArray* $tmp3343 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3235);
            $tmp3342 = $tmp3343;
            panda$collections$ImmutableArray* $tmp3345 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3239);
            $tmp3344 = $tmp3345;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3340, $tmp3341, ((org$pandalanguage$pandac$parser$Token) start3212.value).position, expr3221, $tmp3342, $tmp3344);
            $tmp3339 = $tmp3340;
            $tmp3338 = $tmp3339;
            $returnValue3217 = $tmp3338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
            $tmp3211 = 8;
            goto $l3209;
            $l3346:;
            return $returnValue3217;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3350 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3351, 25);
        panda$collections$ImmutableArray* $tmp3353 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3235);
        $tmp3352 = $tmp3353;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3350, $tmp3351, ((org$pandalanguage$pandac$parser$Token) start3212.value).position, expr3221, $tmp3352, NULL);
        $tmp3349 = $tmp3350;
        $tmp3348 = $tmp3349;
        $returnValue3217 = $tmp3348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3352));
        $tmp3211 = 9;
        goto $l3209;
        $l3354:;
        return $returnValue3217;
    }
    $l3209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3239));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3221));
    expr3221 = NULL;
    whens3235 = NULL;
    switch ($tmp3211) {
        case 6: goto $l3317;
        case 4: goto $l3271;
        case 9: goto $l3354;
        case 1: goto $l3226;
        case 7: goto $l3336;
        case 8: goto $l3346;
        case 0: goto $l3219;
        case 5: goto $l3304;
        case 3: goto $l3259;
        case 2: goto $l3233;
    }
    $l3356:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3360;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3361;
    panda$core$Int64 $tmp3362;
    panda$collections$ImmutableArray* $returnValue3365;
    panda$collections$ImmutableArray* $tmp3366;
    panda$collections$Array* result3369 = NULL;
    panda$collections$Array* $tmp3370;
    panda$collections$Array* $tmp3371;
    org$pandalanguage$pandac$parser$Token$Kind $match$1573_133375;
    panda$core$Int64 $tmp3377;
    panda$core$Int64 $tmp3381;
    panda$core$Int64 $tmp3384;
    panda$core$Int64 $tmp3388;
    org$pandalanguage$pandac$ASTNode* stmt3394 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3395;
    org$pandalanguage$pandac$ASTNode* $tmp3396;
    panda$collections$ImmutableArray* $tmp3398;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3402;
    panda$core$Int64 $tmp3403;
    panda$collections$ImmutableArray* $tmp3406;
    org$pandalanguage$pandac$ASTNode* stmt3415 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3416;
    org$pandalanguage$pandac$ASTNode* $tmp3417;
    panda$collections$ImmutableArray* $tmp3419;
    panda$collections$ImmutableArray* $tmp3424;
    panda$collections$ImmutableArray* $tmp3425;
    int $tmp3359;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3362, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3361, $tmp3362);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3364 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3361, &$s3363);
        start3360 = $tmp3364;
        if (((panda$core$Bit) { !start3360.nonnull }).value) {
        {
            $tmp3366 = NULL;
            $returnValue3365 = $tmp3366;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
            $tmp3359 = 0;
            goto $l3357;
            $l3367:;
            return $returnValue3365;
        }
        }
        panda$collections$Array* $tmp3372 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3372);
        $tmp3371 = $tmp3372;
        $tmp3370 = $tmp3371;
        result3369 = $tmp3370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
        $l3373:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3376 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1573_133375 = $tmp3376.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3377, 100);
                panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1573_133375.$rawValue, $tmp3377);
                if ($tmp3378.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3374;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3381, 28);
                panda$core$Bit $tmp3382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1573_133375.$rawValue, $tmp3381);
                bool $tmp3380 = $tmp3382.value;
                if ($tmp3380) goto $l3383;
                panda$core$Int64$init$builtin_int64(&$tmp3384, 29);
                panda$core$Bit $tmp3385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1573_133375.$rawValue, $tmp3384);
                $tmp3380 = $tmp3385.value;
                $l3383:;
                panda$core$Bit $tmp3386 = { $tmp3380 };
                bool $tmp3379 = $tmp3386.value;
                if ($tmp3379) goto $l3387;
                panda$core$Int64$init$builtin_int64(&$tmp3388, 27);
                panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1573_133375.$rawValue, $tmp3388);
                $tmp3379 = $tmp3389.value;
                $l3387:;
                panda$core$Bit $tmp3390 = { $tmp3379 };
                if ($tmp3390.value) {
                {
                    int $tmp3393;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3397 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3396 = $tmp3397;
                        $tmp3395 = $tmp3396;
                        stmt3394 = $tmp3395;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
                        if (((panda$core$Bit) { stmt3394 == NULL }).value) {
                        {
                            $tmp3398 = NULL;
                            $returnValue3365 = $tmp3398;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3398));
                            $tmp3393 = 0;
                            goto $l3391;
                            $l3399:;
                            $tmp3359 = 1;
                            goto $l3357;
                            $l3400:;
                            return $returnValue3365;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3403, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3402, $tmp3403);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3405 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3402, &$s3404);
                        if (((panda$core$Bit) { !$tmp3405.nonnull }).value) {
                        {
                            $tmp3406 = NULL;
                            $returnValue3365 = $tmp3406;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3406));
                            $tmp3393 = 1;
                            goto $l3391;
                            $l3407:;
                            $tmp3359 = 2;
                            goto $l3357;
                            $l3408:;
                            return $returnValue3365;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3369, ((panda$core$Object*) stmt3394));
                        $tmp3393 = 2;
                        goto $l3391;
                        $l3410:;
                        goto $l3374;
                    }
                    $l3391:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3394));
                    stmt3394 = NULL;
                    switch ($tmp3393) {
                        case 0: goto $l3399;
                        case 2: goto $l3410;
                        case 1: goto $l3407;
                    }
                    $l3411:;
                }
                }
                else {
                {
                    int $tmp3414;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3418 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3417 = $tmp3418;
                        $tmp3416 = $tmp3417;
                        stmt3415 = $tmp3416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3416));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3417));
                        if (((panda$core$Bit) { stmt3415 == NULL }).value) {
                        {
                            $tmp3419 = NULL;
                            $returnValue3365 = $tmp3419;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3419));
                            $tmp3414 = 0;
                            goto $l3412;
                            $l3420:;
                            $tmp3359 = 3;
                            goto $l3357;
                            $l3421:;
                            return $returnValue3365;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3369, ((panda$core$Object*) stmt3415));
                    }
                    $tmp3414 = -1;
                    goto $l3412;
                    $l3412:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3415));
                    stmt3415 = NULL;
                    switch ($tmp3414) {
                        case 0: goto $l3420;
                        case -1: goto $l3423;
                    }
                    $l3423:;
                }
                }
                }
            }
        }
        }
        $l3374:;
        panda$collections$ImmutableArray* $tmp3426 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3369);
        $tmp3425 = $tmp3426;
        $tmp3424 = $tmp3425;
        $returnValue3365 = $tmp3424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3425));
        $tmp3359 = 4;
        goto $l3357;
        $l3427:;
        return $returnValue3365;
    }
    $l3357:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3369));
    result3369 = NULL;
    switch ($tmp3359) {
        case 2: goto $l3408;
        case 4: goto $l3427;
        case 1: goto $l3400;
        case 0: goto $l3367;
        case 3: goto $l3421;
    }
    $l3429:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3433 = NULL;
    panda$collections$ImmutableArray* $tmp3434;
    panda$collections$ImmutableArray* $tmp3435;
    org$pandalanguage$pandac$ASTNode* $returnValue3437;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    org$pandalanguage$pandac$ASTNode* $tmp3441;
    org$pandalanguage$pandac$ASTNode* $tmp3442;
    panda$core$Int64 $tmp3444;
    org$pandalanguage$pandac$Position $tmp3445;
    int $tmp3432;
    {
        panda$collections$ImmutableArray* $tmp3436 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3435 = $tmp3436;
        $tmp3434 = $tmp3435;
        statements3433 = $tmp3434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3435));
        if (((panda$core$Bit) { statements3433 == NULL }).value) {
        {
            $tmp3438 = NULL;
            $returnValue3437 = $tmp3438;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
            $tmp3432 = 0;
            goto $l3430;
            $l3439:;
            return $returnValue3437;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3443 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3444, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3445);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3443, $tmp3444, $tmp3445, statements3433);
        $tmp3442 = $tmp3443;
        $tmp3441 = $tmp3442;
        $returnValue3437 = $tmp3441;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3441));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3442));
        $tmp3432 = 1;
        goto $l3430;
        $l3446:;
        return $returnValue3437;
    }
    $l3430:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3433));
    statements3433 = NULL;
    switch ($tmp3432) {
        case 1: goto $l3446;
        case 0: goto $l3439;
    }
    $l3448:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3452 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3453;
    org$pandalanguage$pandac$ASTNode* $tmp3454;
    org$pandalanguage$pandac$ASTNode* $returnValue3456;
    org$pandalanguage$pandac$ASTNode* $tmp3457;
    org$pandalanguage$pandac$parser$Token$Kind $match$1617_93460;
    panda$core$Int64 $tmp3477;
    panda$core$Int64 $tmp3480;
    panda$core$Int64 $tmp3484;
    panda$core$Int64 $tmp3488;
    panda$core$Int64 $tmp3492;
    panda$core$Int64 $tmp3496;
    panda$core$Int64 $tmp3500;
    panda$core$Int64 $tmp3504;
    panda$core$Int64 $tmp3508;
    panda$core$Int64 $tmp3512;
    panda$core$Int64 $tmp3516;
    panda$core$Int64 $tmp3520;
    panda$core$Int64 $tmp3524;
    panda$core$Int64 $tmp3528;
    panda$core$Int64 $tmp3532;
    panda$core$Int64 $tmp3536;
    org$pandalanguage$pandac$parser$Token op3542;
    org$pandalanguage$pandac$ASTNode* rvalue3544 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3545;
    org$pandalanguage$pandac$ASTNode* $tmp3546;
    org$pandalanguage$pandac$ASTNode* $tmp3548;
    org$pandalanguage$pandac$ASTNode* $tmp3552;
    org$pandalanguage$pandac$ASTNode* $tmp3553;
    panda$core$Int64 $tmp3555;
    panda$core$Int64 $tmp3562;
    org$pandalanguage$pandac$parser$Token op3569;
    org$pandalanguage$pandac$ASTNode* rvalue3571 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3572;
    org$pandalanguage$pandac$ASTNode* $tmp3573;
    org$pandalanguage$pandac$ASTNode* $tmp3575;
    org$pandalanguage$pandac$ASTNode* $tmp3579;
    org$pandalanguage$pandac$ASTNode* $tmp3580;
    panda$core$Int64 $tmp3582;
    org$pandalanguage$pandac$ASTNode* $tmp3589;
    int $tmp3451;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3455 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3454 = $tmp3455;
        $tmp3453 = $tmp3454;
        start3452 = $tmp3453;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3453));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3454));
        if (((panda$core$Bit) { start3452 == NULL }).value) {
        {
            $tmp3457 = NULL;
            $returnValue3456 = $tmp3457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3457));
            $tmp3451 = 0;
            goto $l3449;
            $l3458:;
            return $returnValue3456;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3461 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1617_93460 = $tmp3461.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3477, 73);
            panda$core$Bit $tmp3478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3477);
            bool $tmp3476 = $tmp3478.value;
            if ($tmp3476) goto $l3479;
            panda$core$Int64$init$builtin_int64(&$tmp3480, 74);
            panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3480);
            $tmp3476 = $tmp3481.value;
            $l3479:;
            panda$core$Bit $tmp3482 = { $tmp3476 };
            bool $tmp3475 = $tmp3482.value;
            if ($tmp3475) goto $l3483;
            panda$core$Int64$init$builtin_int64(&$tmp3484, 75);
            panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3484);
            $tmp3475 = $tmp3485.value;
            $l3483:;
            panda$core$Bit $tmp3486 = { $tmp3475 };
            bool $tmp3474 = $tmp3486.value;
            if ($tmp3474) goto $l3487;
            panda$core$Int64$init$builtin_int64(&$tmp3488, 76);
            panda$core$Bit $tmp3489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3488);
            $tmp3474 = $tmp3489.value;
            $l3487:;
            panda$core$Bit $tmp3490 = { $tmp3474 };
            bool $tmp3473 = $tmp3490.value;
            if ($tmp3473) goto $l3491;
            panda$core$Int64$init$builtin_int64(&$tmp3492, 77);
            panda$core$Bit $tmp3493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3492);
            $tmp3473 = $tmp3493.value;
            $l3491:;
            panda$core$Bit $tmp3494 = { $tmp3473 };
            bool $tmp3472 = $tmp3494.value;
            if ($tmp3472) goto $l3495;
            panda$core$Int64$init$builtin_int64(&$tmp3496, 78);
            panda$core$Bit $tmp3497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3496);
            $tmp3472 = $tmp3497.value;
            $l3495:;
            panda$core$Bit $tmp3498 = { $tmp3472 };
            bool $tmp3471 = $tmp3498.value;
            if ($tmp3471) goto $l3499;
            panda$core$Int64$init$builtin_int64(&$tmp3500, 79);
            panda$core$Bit $tmp3501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3500);
            $tmp3471 = $tmp3501.value;
            $l3499:;
            panda$core$Bit $tmp3502 = { $tmp3471 };
            bool $tmp3470 = $tmp3502.value;
            if ($tmp3470) goto $l3503;
            panda$core$Int64$init$builtin_int64(&$tmp3504, 80);
            panda$core$Bit $tmp3505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3504);
            $tmp3470 = $tmp3505.value;
            $l3503:;
            panda$core$Bit $tmp3506 = { $tmp3470 };
            bool $tmp3469 = $tmp3506.value;
            if ($tmp3469) goto $l3507;
            panda$core$Int64$init$builtin_int64(&$tmp3508, 81);
            panda$core$Bit $tmp3509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3508);
            $tmp3469 = $tmp3509.value;
            $l3507:;
            panda$core$Bit $tmp3510 = { $tmp3469 };
            bool $tmp3468 = $tmp3510.value;
            if ($tmp3468) goto $l3511;
            panda$core$Int64$init$builtin_int64(&$tmp3512, 82);
            panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3512);
            $tmp3468 = $tmp3513.value;
            $l3511:;
            panda$core$Bit $tmp3514 = { $tmp3468 };
            bool $tmp3467 = $tmp3514.value;
            if ($tmp3467) goto $l3515;
            panda$core$Int64$init$builtin_int64(&$tmp3516, 83);
            panda$core$Bit $tmp3517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3516);
            $tmp3467 = $tmp3517.value;
            $l3515:;
            panda$core$Bit $tmp3518 = { $tmp3467 };
            bool $tmp3466 = $tmp3518.value;
            if ($tmp3466) goto $l3519;
            panda$core$Int64$init$builtin_int64(&$tmp3520, 84);
            panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3520);
            $tmp3466 = $tmp3521.value;
            $l3519:;
            panda$core$Bit $tmp3522 = { $tmp3466 };
            bool $tmp3465 = $tmp3522.value;
            if ($tmp3465) goto $l3523;
            panda$core$Int64$init$builtin_int64(&$tmp3524, 85);
            panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3524);
            $tmp3465 = $tmp3525.value;
            $l3523:;
            panda$core$Bit $tmp3526 = { $tmp3465 };
            bool $tmp3464 = $tmp3526.value;
            if ($tmp3464) goto $l3527;
            panda$core$Int64$init$builtin_int64(&$tmp3528, 86);
            panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3528);
            $tmp3464 = $tmp3529.value;
            $l3527:;
            panda$core$Bit $tmp3530 = { $tmp3464 };
            bool $tmp3463 = $tmp3530.value;
            if ($tmp3463) goto $l3531;
            panda$core$Int64$init$builtin_int64(&$tmp3532, 87);
            panda$core$Bit $tmp3533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3532);
            $tmp3463 = $tmp3533.value;
            $l3531:;
            panda$core$Bit $tmp3534 = { $tmp3463 };
            bool $tmp3462 = $tmp3534.value;
            if ($tmp3462) goto $l3535;
            panda$core$Int64$init$builtin_int64(&$tmp3536, 88);
            panda$core$Bit $tmp3537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3536);
            $tmp3462 = $tmp3537.value;
            $l3535:;
            panda$core$Bit $tmp3538 = { $tmp3462 };
            if ($tmp3538.value) {
            {
                int $tmp3541;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3543 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3542 = $tmp3543;
                    org$pandalanguage$pandac$ASTNode* $tmp3547 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3546 = $tmp3547;
                    $tmp3545 = $tmp3546;
                    rvalue3544 = $tmp3545;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3545));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3546));
                    if (((panda$core$Bit) { rvalue3544 == NULL }).value) {
                    {
                        $tmp3548 = NULL;
                        $returnValue3456 = $tmp3548;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3548));
                        $tmp3541 = 0;
                        goto $l3539;
                        $l3549:;
                        $tmp3451 = 1;
                        goto $l3449;
                        $l3550:;
                        return $returnValue3456;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3554 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3555, 4);
                    org$pandalanguage$pandac$Position $tmp3557 = (($fn3556) start3452->$class->vtable[2])(start3452);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3554, $tmp3555, $tmp3557, start3452, op3542.kind, rvalue3544);
                    $tmp3553 = $tmp3554;
                    $tmp3552 = $tmp3553;
                    $returnValue3456 = $tmp3552;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3553));
                    $tmp3541 = 1;
                    goto $l3539;
                    $l3558:;
                    $tmp3451 = 2;
                    goto $l3449;
                    $l3559:;
                    return $returnValue3456;
                }
                $l3539:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3544));
                rvalue3544 = NULL;
                switch ($tmp3541) {
                    case 1: goto $l3558;
                    case 0: goto $l3549;
                }
                $l3561:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3562, 58);
            panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1617_93460.$rawValue, $tmp3562);
            if ($tmp3563.value) {
            {
                int $tmp3566;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3567 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3567, &$s3568);
                    org$pandalanguage$pandac$parser$Token $tmp3570 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3569 = $tmp3570;
                    org$pandalanguage$pandac$ASTNode* $tmp3574 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3573 = $tmp3574;
                    $tmp3572 = $tmp3573;
                    rvalue3571 = $tmp3572;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3572));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3573));
                    if (((panda$core$Bit) { rvalue3571 == NULL }).value) {
                    {
                        $tmp3575 = NULL;
                        $returnValue3456 = $tmp3575;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3575));
                        $tmp3566 = 0;
                        goto $l3564;
                        $l3576:;
                        $tmp3451 = 3;
                        goto $l3449;
                        $l3577:;
                        return $returnValue3456;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3581 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3582, 4);
                    org$pandalanguage$pandac$Position $tmp3584 = (($fn3583) start3452->$class->vtable[2])(start3452);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3581, $tmp3582, $tmp3584, start3452, op3569.kind, rvalue3571);
                    $tmp3580 = $tmp3581;
                    $tmp3579 = $tmp3580;
                    $returnValue3456 = $tmp3579;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3579));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3580));
                    $tmp3566 = 1;
                    goto $l3564;
                    $l3585:;
                    $tmp3451 = 4;
                    goto $l3449;
                    $l3586:;
                    return $returnValue3456;
                }
                $l3564:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3571));
                rvalue3571 = NULL;
                switch ($tmp3566) {
                    case 0: goto $l3576;
                    case 1: goto $l3585;
                }
                $l3588:;
            }
            }
            else {
            {
                $tmp3589 = start3452;
                $returnValue3456 = $tmp3589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3589));
                $tmp3451 = 5;
                goto $l3449;
                $l3590:;
                return $returnValue3456;
            }
            }
            }
        }
    }
    $tmp3451 = -1;
    goto $l3449;
    $l3449:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3452));
    start3452 = NULL;
    switch ($tmp3451) {
        case 5: goto $l3590;
        case 2: goto $l3559;
        case 4: goto $l3586;
        case 1: goto $l3550;
        case 0: goto $l3458;
        case -1: goto $l3592;
        case 3: goto $l3577;
    }
    $l3592:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3596 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3598;
    org$pandalanguage$pandac$ASTNode* $returnValue3600;
    org$pandalanguage$pandac$ASTNode* $tmp3601;
    org$pandalanguage$pandac$ASTNode* value3604 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3605;
    panda$core$Int64 $tmp3606;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    org$pandalanguage$pandac$ASTNode* $tmp3610;
    org$pandalanguage$pandac$ASTNode* $tmp3612;
    panda$core$Int64 $tmp3616;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $tmp3621;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3627;
    org$pandalanguage$pandac$ASTNode* $tmp3628;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3630;
    panda$core$Int64 $tmp3632;
    int $tmp3595;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3599 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3598 = $tmp3599;
        $tmp3597 = $tmp3598;
        t3596 = $tmp3597;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
        if (((panda$core$Bit) { t3596 == NULL }).value) {
        {
            $tmp3601 = NULL;
            $returnValue3600 = $tmp3601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3601));
            $tmp3595 = 0;
            goto $l3593;
            $l3602:;
            return $returnValue3600;
        }
        }
        memset(&value3604, 0, sizeof(value3604));
        panda$core$Int64$init$builtin_int64(&$tmp3606, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3605, $tmp3606);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3607 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3605);
        if (((panda$core$Bit) { $tmp3607.nonnull }).value) {
        {
            {
                $tmp3608 = value3604;
                org$pandalanguage$pandac$ASTNode* $tmp3611 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3610 = $tmp3611;
                $tmp3609 = $tmp3610;
                value3604 = $tmp3609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
            }
            if (((panda$core$Bit) { value3604 == NULL }).value) {
            {
                $tmp3612 = NULL;
                $returnValue3600 = $tmp3612;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3612));
                $tmp3595 = 1;
                goto $l3593;
                $l3613:;
                return $returnValue3600;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3615 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3616, 58);
        panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3615.kind.$rawValue, $tmp3616);
        if ($tmp3617.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3618 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3618, &$s3619);
            {
                $tmp3620 = value3604;
                org$pandalanguage$pandac$ASTNode* $tmp3623 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3622 = $tmp3623;
                $tmp3621 = $tmp3622;
                value3604 = $tmp3621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3620));
            }
            if (((panda$core$Bit) { value3604 == NULL }).value) {
            {
                $tmp3624 = NULL;
                $returnValue3600 = $tmp3624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
                $tmp3595 = 2;
                goto $l3593;
                $l3625:;
                return $returnValue3600;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3627 = value3604;
                $tmp3628 = NULL;
                value3604 = $tmp3628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3631 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3632, 13);
        org$pandalanguage$pandac$Position $tmp3634 = (($fn3633) t3596->$class->vtable[2])(t3596);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3631, $tmp3632, $tmp3634, t3596, value3604);
        $tmp3630 = $tmp3631;
        $tmp3629 = $tmp3630;
        $returnValue3600 = $tmp3629;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
        $tmp3595 = 3;
        goto $l3593;
        $l3635:;
        return $returnValue3600;
    }
    $l3593:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3604));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3596));
    t3596 = NULL;
    switch ($tmp3595) {
        case 2: goto $l3625;
        case 1: goto $l3613;
        case 3: goto $l3635;
        case 0: goto $l3602;
    }
    $l3637:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3641;
    org$pandalanguage$pandac$Variable$Kind kind3643;
    org$pandalanguage$pandac$parser$Token$Kind $match$1676_93644;
    panda$core$Int64 $tmp3645;
    org$pandalanguage$pandac$Variable$Kind $tmp3647;
    panda$core$Int64 $tmp3648;
    panda$core$Int64 $tmp3649;
    org$pandalanguage$pandac$Variable$Kind $tmp3651;
    panda$core$Int64 $tmp3652;
    panda$core$Int64 $tmp3653;
    org$pandalanguage$pandac$Variable$Kind $tmp3655;
    panda$core$Int64 $tmp3656;
    panda$core$Int64 $tmp3657;
    org$pandalanguage$pandac$Variable$Kind $tmp3659;
    panda$core$Int64 $tmp3660;
    panda$collections$Array* declarations3662 = NULL;
    panda$collections$Array* $tmp3663;
    panda$collections$Array* $tmp3664;
    org$pandalanguage$pandac$ASTNode* decl3666 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    org$pandalanguage$pandac$ASTNode* $tmp3668;
    org$pandalanguage$pandac$ASTNode* $returnValue3670;
    org$pandalanguage$pandac$ASTNode* $tmp3671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3677;
    panda$core$Int64 $tmp3678;
    org$pandalanguage$pandac$ASTNode* decl3683 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3684;
    org$pandalanguage$pandac$ASTNode* $tmp3685;
    org$pandalanguage$pandac$ASTNode* $tmp3687;
    org$pandalanguage$pandac$ASTNode* $tmp3692;
    org$pandalanguage$pandac$ASTNode* $tmp3693;
    panda$core$Int64 $tmp3695;
    panda$collections$ImmutableArray* $tmp3696;
    int $tmp3640;
    {
        org$pandalanguage$pandac$parser$Token $tmp3642 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3641 = $tmp3642;
        memset(&kind3643, 0, sizeof(kind3643));
        {
            $match$1676_93644 = start3641.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3645, 23);
            panda$core$Bit $tmp3646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1676_93644.$rawValue, $tmp3645);
            if ($tmp3646.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3648, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3647, $tmp3648);
                kind3643 = $tmp3647;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3649, 24);
            panda$core$Bit $tmp3650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1676_93644.$rawValue, $tmp3649);
            if ($tmp3650.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3652, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3651, $tmp3652);
                kind3643 = $tmp3651;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3653, 25);
            panda$core$Bit $tmp3654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1676_93644.$rawValue, $tmp3653);
            if ($tmp3654.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3656, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3655, $tmp3656);
                kind3643 = $tmp3655;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3657, 26);
            panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1676_93644.$rawValue, $tmp3657);
            if ($tmp3658.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3660, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3659, $tmp3660);
                kind3643 = $tmp3659;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3641, &$s3661);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3665 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3665);
        $tmp3664 = $tmp3665;
        $tmp3663 = $tmp3664;
        declarations3662 = $tmp3663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3664));
        org$pandalanguage$pandac$ASTNode* $tmp3669 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3668 = $tmp3669;
        $tmp3667 = $tmp3668;
        decl3666 = $tmp3667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3668));
        if (((panda$core$Bit) { decl3666 == NULL }).value) {
        {
            $tmp3671 = NULL;
            $returnValue3670 = $tmp3671;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3671));
            $tmp3640 = 0;
            goto $l3638;
            $l3672:;
            return $returnValue3670;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3662, ((panda$core$Object*) decl3666));
        $l3674:;
        panda$core$Int64$init$builtin_int64(&$tmp3678, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3677, $tmp3678);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3679 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3677);
        bool $tmp3676 = ((panda$core$Bit) { $tmp3679.nonnull }).value;
        if (!$tmp3676) goto $l3675;
        {
            int $tmp3682;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3686 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3685 = $tmp3686;
                $tmp3684 = $tmp3685;
                decl3683 = $tmp3684;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3685));
                if (((panda$core$Bit) { decl3683 == NULL }).value) {
                {
                    $tmp3687 = NULL;
                    $returnValue3670 = $tmp3687;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3687));
                    $tmp3682 = 0;
                    goto $l3680;
                    $l3688:;
                    $tmp3640 = 1;
                    goto $l3638;
                    $l3689:;
                    return $returnValue3670;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3662, ((panda$core$Object*) decl3683));
            }
            $tmp3682 = -1;
            goto $l3680;
            $l3680:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3683));
            decl3683 = NULL;
            switch ($tmp3682) {
                case -1: goto $l3691;
                case 0: goto $l3688;
            }
            $l3691:;
        }
        goto $l3674;
        $l3675:;
        org$pandalanguage$pandac$ASTNode* $tmp3694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3695, 47);
        panda$collections$ImmutableArray* $tmp3697 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3662);
        $tmp3696 = $tmp3697;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3694, $tmp3695, start3641.position, kind3643, $tmp3696);
        $tmp3693 = $tmp3694;
        $tmp3692 = $tmp3693;
        $returnValue3670 = $tmp3692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3696));
        $tmp3640 = 2;
        goto $l3638;
        $l3698:;
        return $returnValue3670;
    }
    $l3638:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3666));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3662));
    declarations3662 = NULL;
    decl3666 = NULL;
    switch ($tmp3640) {
        case 1: goto $l3689;
        case 0: goto $l3672;
        case 2: goto $l3698;
    }
    $l3700:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3704;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3705;
    panda$core$Int64 $tmp3706;
    org$pandalanguage$pandac$ASTNode* $returnValue3709;
    org$pandalanguage$pandac$ASTNode* $tmp3710;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3713;
    panda$core$Int64 $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    panda$core$Object* $tmp3720;
    panda$core$Bit $tmp3721;
    org$pandalanguage$pandac$ASTNode* target3723 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3724;
    org$pandalanguage$pandac$ASTNode* $tmp3725;
    panda$core$Int64 $tmp3727;
    panda$core$String* $tmp3728;
    panda$collections$Array* args3730 = NULL;
    panda$collections$Array* $tmp3731;
    panda$collections$Array* $tmp3732;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3734;
    panda$core$Int64 $tmp3735;
    org$pandalanguage$pandac$ASTNode* expr3740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3741;
    org$pandalanguage$pandac$ASTNode* $tmp3742;
    panda$core$Object* $tmp3744;
    org$pandalanguage$pandac$ASTNode* $tmp3746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3753;
    panda$core$Int64 $tmp3754;
    org$pandalanguage$pandac$ASTNode* $tmp3756;
    org$pandalanguage$pandac$ASTNode* $tmp3757;
    org$pandalanguage$pandac$ASTNode* $tmp3758;
    panda$core$Object* $tmp3760;
    org$pandalanguage$pandac$ASTNode* $tmp3762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3766;
    panda$core$Int64 $tmp3767;
    panda$core$Object* $tmp3770;
    org$pandalanguage$pandac$ASTNode* $tmp3772;
    panda$core$Object* $tmp3777;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    panda$core$Int64 $tmp3782;
    panda$collections$ImmutableArray* $tmp3783;
    int $tmp3703;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3706, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3705, $tmp3706);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3705, &$s3707);
        start3704 = $tmp3708;
        if (((panda$core$Bit) { !start3704.nonnull }).value) {
        {
            $tmp3710 = NULL;
            $returnValue3709 = $tmp3710;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3710));
            $tmp3703 = 0;
            goto $l3701;
            $l3711:;
            return $returnValue3709;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3714, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3713, $tmp3714);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3716 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3713, &$s3715);
        if (((panda$core$Bit) { !$tmp3716.nonnull }).value) {
        {
            $tmp3717 = NULL;
            $returnValue3709 = $tmp3717;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3717));
            $tmp3703 = 1;
            goto $l3701;
            $l3718:;
            return $returnValue3709;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3721, true);
        panda$core$Bit$wrapper* $tmp3722;
        $tmp3722 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3722->value = $tmp3721;
        $tmp3720 = ((panda$core$Object*) $tmp3722);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3720);
        panda$core$Panda$unref$panda$core$Object($tmp3720);
        org$pandalanguage$pandac$ASTNode* $tmp3726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3727, 20);
        panda$core$String* $tmp3729 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3704.value));
        $tmp3728 = $tmp3729;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3726, $tmp3727, ((org$pandalanguage$pandac$parser$Token) start3704.value).position, $tmp3728);
        $tmp3725 = $tmp3726;
        $tmp3724 = $tmp3725;
        target3723 = $tmp3724;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3725));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3728));
        panda$collections$Array* $tmp3733 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3733);
        $tmp3732 = $tmp3733;
        $tmp3731 = $tmp3732;
        args3730 = $tmp3731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3732));
        panda$core$Int64$init$builtin_int64(&$tmp3735, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3734, $tmp3735);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3736 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3734);
        if (((panda$core$Bit) { !$tmp3736.nonnull }).value) {
        {
            int $tmp3739;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3743 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3742 = $tmp3743;
                $tmp3741 = $tmp3742;
                expr3740 = $tmp3741;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3742));
                if (((panda$core$Bit) { expr3740 == NULL }).value) {
                {
                    panda$core$Object* $tmp3745 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3744 = $tmp3745;
                    panda$core$Panda$unref$panda$core$Object($tmp3744);
                    $tmp3746 = NULL;
                    $returnValue3709 = $tmp3746;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3746));
                    $tmp3739 = 0;
                    goto $l3737;
                    $l3747:;
                    $tmp3703 = 2;
                    goto $l3701;
                    $l3748:;
                    return $returnValue3709;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3730, ((panda$core$Object*) expr3740));
                $l3750:;
                panda$core$Int64$init$builtin_int64(&$tmp3754, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3753, $tmp3754);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3755 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3753);
                bool $tmp3752 = ((panda$core$Bit) { $tmp3755.nonnull }).value;
                if (!$tmp3752) goto $l3751;
                {
                    {
                        $tmp3756 = expr3740;
                        org$pandalanguage$pandac$ASTNode* $tmp3759 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3758 = $tmp3759;
                        $tmp3757 = $tmp3758;
                        expr3740 = $tmp3757;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3757));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3758));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3756));
                    }
                    if (((panda$core$Bit) { expr3740 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3761 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3760 = $tmp3761;
                        panda$core$Panda$unref$panda$core$Object($tmp3760);
                        $tmp3762 = NULL;
                        $returnValue3709 = $tmp3762;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3762));
                        $tmp3739 = 1;
                        goto $l3737;
                        $l3763:;
                        $tmp3703 = 3;
                        goto $l3701;
                        $l3764:;
                        return $returnValue3709;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3730, ((panda$core$Object*) expr3740));
                }
                goto $l3750;
                $l3751:;
                panda$core$Int64$init$builtin_int64(&$tmp3767, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3766, $tmp3767);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3769 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3766, &$s3768);
                if (((panda$core$Bit) { !$tmp3769.nonnull }).value) {
                {
                    panda$core$Object* $tmp3771 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3770 = $tmp3771;
                    panda$core$Panda$unref$panda$core$Object($tmp3770);
                    $tmp3772 = NULL;
                    $returnValue3709 = $tmp3772;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3772));
                    $tmp3739 = 2;
                    goto $l3737;
                    $l3773:;
                    $tmp3703 = 4;
                    goto $l3701;
                    $l3774:;
                    return $returnValue3709;
                }
                }
            }
            $tmp3739 = -1;
            goto $l3737;
            $l3737:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3740));
            expr3740 = NULL;
            switch ($tmp3739) {
                case -1: goto $l3776;
                case 2: goto $l3773;
                case 1: goto $l3763;
                case 0: goto $l3747;
            }
            $l3776:;
        }
        }
        panda$core$Object* $tmp3778 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3777 = $tmp3778;
        panda$core$Panda$unref$panda$core$Object($tmp3777);
        org$pandalanguage$pandac$ASTNode* $tmp3781 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3782, 8);
        panda$collections$ImmutableArray* $tmp3784 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3730);
        $tmp3783 = $tmp3784;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3781, $tmp3782, ((org$pandalanguage$pandac$parser$Token) start3704.value).position, target3723, $tmp3783);
        $tmp3780 = $tmp3781;
        $tmp3779 = $tmp3780;
        $returnValue3709 = $tmp3779;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3783));
        $tmp3703 = 5;
        goto $l3701;
        $l3785:;
        return $returnValue3709;
    }
    $l3701:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3730));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3723));
    target3723 = NULL;
    args3730 = NULL;
    switch ($tmp3703) {
        case 4: goto $l3774;
        case 1: goto $l3718;
        case 2: goto $l3748;
        case 5: goto $l3785;
        case 3: goto $l3764;
        case 0: goto $l3711;
    }
    $l3787:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3788;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3789;
    panda$core$Int64 $tmp3790;
    org$pandalanguage$pandac$ASTNode* $returnValue3793;
    org$pandalanguage$pandac$ASTNode* $tmp3794;
    org$pandalanguage$pandac$parser$Token$nullable label3796;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3797;
    panda$core$Int64 $tmp3798;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    panda$core$Int64 $tmp3803;
    panda$core$String* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    org$pandalanguage$pandac$ASTNode* $tmp3808;
    panda$core$Int64 $tmp3810;
    panda$core$Int64$init$builtin_int64(&$tmp3790, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3789, $tmp3790);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3792 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3789, &$s3791);
    start3788 = $tmp3792;
    if (((panda$core$Bit) { !start3788.nonnull }).value) {
    {
        $tmp3794 = NULL;
        $returnValue3793 = $tmp3794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3794));
        return $returnValue3793;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3798, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3797, $tmp3798);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3799 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3797);
    label3796 = $tmp3799;
    if (((panda$core$Bit) { label3796.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3802 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3803, 7);
        panda$core$String* $tmp3805 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3796.value));
        $tmp3804 = $tmp3805;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3802, $tmp3803, ((org$pandalanguage$pandac$parser$Token) start3788.value).position, $tmp3804);
        $tmp3801 = $tmp3802;
        $tmp3800 = $tmp3801;
        $returnValue3793 = $tmp3800;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3801));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3804));
        return $returnValue3793;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3809 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3810, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3809, $tmp3810, ((org$pandalanguage$pandac$parser$Token) start3788.value).position, NULL);
    $tmp3808 = $tmp3809;
    $tmp3807 = $tmp3808;
    $returnValue3793 = $tmp3807;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3807));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3808));
    return $returnValue3793;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3812;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3813;
    panda$core$Int64 $tmp3814;
    org$pandalanguage$pandac$ASTNode* $returnValue3817;
    org$pandalanguage$pandac$ASTNode* $tmp3818;
    org$pandalanguage$pandac$parser$Token$nullable label3820;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3821;
    panda$core$Int64 $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3825;
    panda$core$Int64 $tmp3827;
    panda$core$String* $tmp3828;
    org$pandalanguage$pandac$ASTNode* $tmp3831;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    panda$core$Int64 $tmp3834;
    panda$core$Int64$init$builtin_int64(&$tmp3814, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3813, $tmp3814);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3816 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3813, &$s3815);
    start3812 = $tmp3816;
    if (((panda$core$Bit) { !start3812.nonnull }).value) {
    {
        $tmp3818 = NULL;
        $returnValue3817 = $tmp3818;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3818));
        return $returnValue3817;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3822, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3821, $tmp3822);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3823 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3821);
    label3820 = $tmp3823;
    if (((panda$core$Bit) { label3820.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3827, 12);
        panda$core$String* $tmp3829 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3820.value));
        $tmp3828 = $tmp3829;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3826, $tmp3827, ((org$pandalanguage$pandac$parser$Token) start3812.value).position, $tmp3828);
        $tmp3825 = $tmp3826;
        $tmp3824 = $tmp3825;
        $returnValue3817 = $tmp3824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3828));
        return $returnValue3817;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3833 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3834, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3833, $tmp3834, ((org$pandalanguage$pandac$parser$Token) start3812.value).position, NULL);
    $tmp3832 = $tmp3833;
    $tmp3831 = $tmp3832;
    $returnValue3817 = $tmp3831;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3831));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
    return $returnValue3817;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3837;
    panda$core$Int64 $tmp3838;
    org$pandalanguage$pandac$ASTNode* $returnValue3841;
    org$pandalanguage$pandac$ASTNode* $tmp3842;
    org$pandalanguage$pandac$parser$Token$Kind $match$1780_93844;
    panda$core$Int64 $tmp3848;
    panda$core$Int64 $tmp3851;
    panda$core$Int64 $tmp3855;
    org$pandalanguage$pandac$ASTNode* $tmp3858;
    org$pandalanguage$pandac$ASTNode* $tmp3859;
    panda$core$Int64 $tmp3861;
    panda$collections$Array* children3866 = NULL;
    panda$collections$Array* $tmp3867;
    panda$collections$Array* $tmp3868;
    org$pandalanguage$pandac$ASTNode* expr3870 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3871;
    org$pandalanguage$pandac$ASTNode* $tmp3872;
    org$pandalanguage$pandac$ASTNode* $tmp3874;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    panda$core$Int64 $tmp3880;
    panda$core$Int64$init$builtin_int64(&$tmp3838, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3837, $tmp3838);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3840 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3837, &$s3839);
    start3836 = $tmp3840;
    if (((panda$core$Bit) { !start3836.nonnull }).value) {
    {
        $tmp3842 = NULL;
        $returnValue3841 = $tmp3842;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3842));
        return $returnValue3841;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3845 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1780_93844 = $tmp3845.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3848, 100);
        panda$core$Bit $tmp3849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1780_93844.$rawValue, $tmp3848);
        bool $tmp3847 = $tmp3849.value;
        if ($tmp3847) goto $l3850;
        panda$core$Int64$init$builtin_int64(&$tmp3851, 39);
        panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1780_93844.$rawValue, $tmp3851);
        $tmp3847 = $tmp3852.value;
        $l3850:;
        panda$core$Bit $tmp3853 = { $tmp3847 };
        bool $tmp3846 = $tmp3853.value;
        if ($tmp3846) goto $l3854;
        panda$core$Int64$init$builtin_int64(&$tmp3855, 40);
        panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1780_93844.$rawValue, $tmp3855);
        $tmp3846 = $tmp3856.value;
        $l3854:;
        panda$core$Bit $tmp3857 = { $tmp3846 };
        if ($tmp3857.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3860 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3861, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3860, $tmp3861, ((org$pandalanguage$pandac$parser$Token) start3836.value).position, NULL);
            $tmp3859 = $tmp3860;
            $tmp3858 = $tmp3859;
            $returnValue3841 = $tmp3858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3859));
            return $returnValue3841;
        }
        }
        else {
        {
            int $tmp3865;
            {
                panda$collections$Array* $tmp3869 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3869);
                $tmp3868 = $tmp3869;
                $tmp3867 = $tmp3868;
                children3866 = $tmp3867;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3868));
                org$pandalanguage$pandac$ASTNode* $tmp3873 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3872 = $tmp3873;
                $tmp3871 = $tmp3872;
                expr3870 = $tmp3871;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3872));
                if (((panda$core$Bit) { expr3870 == NULL }).value) {
                {
                    $tmp3874 = NULL;
                    $returnValue3841 = $tmp3874;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3874));
                    $tmp3865 = 0;
                    goto $l3863;
                    $l3875:;
                    return $returnValue3841;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3866, ((panda$core$Object*) expr3870));
                org$pandalanguage$pandac$ASTNode* $tmp3879 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3880, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3879, $tmp3880, ((org$pandalanguage$pandac$parser$Token) start3836.value).position, expr3870);
                $tmp3878 = $tmp3879;
                $tmp3877 = $tmp3878;
                $returnValue3841 = $tmp3877;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3878));
                $tmp3865 = 1;
                goto $l3863;
                $l3881:;
                return $returnValue3841;
            }
            $l3863:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3866));
            children3866 = NULL;
            expr3870 = NULL;
            switch ($tmp3865) {
                case 0: goto $l3875;
                case 1: goto $l3881;
            }
            $l3883:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1798_93884;
    panda$core$Int64 $tmp3886;
    org$pandalanguage$pandac$ASTNode* $returnValue3888;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    org$pandalanguage$pandac$ASTNode* $tmp3890;
    panda$core$Int64 $tmp3893;
    org$pandalanguage$pandac$ASTNode* $tmp3895;
    org$pandalanguage$pandac$ASTNode* $tmp3896;
    panda$core$Int64 $tmp3899;
    org$pandalanguage$pandac$ASTNode* $tmp3901;
    org$pandalanguage$pandac$ASTNode* $tmp3902;
    panda$core$Bit $tmp3905;
    {
        org$pandalanguage$pandac$parser$Token $tmp3885 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1798_93884 = $tmp3885.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3886, 28);
        panda$core$Bit $tmp3887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1798_93884.$rawValue, $tmp3886);
        if ($tmp3887.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3891 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3890 = $tmp3891;
            $tmp3889 = $tmp3890;
            $returnValue3888 = $tmp3889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3890));
            return $returnValue3888;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3893, 29);
        panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1798_93884.$rawValue, $tmp3893);
        if ($tmp3894.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3897 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3896 = $tmp3897;
            $tmp3895 = $tmp3896;
            $returnValue3888 = $tmp3895;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
            return $returnValue3888;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3899, 27);
        panda$core$Bit $tmp3900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1798_93884.$rawValue, $tmp3899);
        if ($tmp3900.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3903 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3902 = $tmp3903;
            $tmp3901 = $tmp3902;
            $returnValue3888 = $tmp3901;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3901));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3902));
            return $returnValue3888;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3905, false);
            if ($tmp3905.value) goto $l3906; else goto $l3907;
            $l3907:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3908, (panda$core$Int64) { 1802 });
            abort();
            $l3906:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1810_93909;
    panda$core$Int64 $tmp3911;
    org$pandalanguage$pandac$ASTNode* $returnValue3913;
    org$pandalanguage$pandac$ASTNode* $tmp3914;
    org$pandalanguage$pandac$ASTNode* $tmp3915;
    panda$core$Int64 $tmp3918;
    org$pandalanguage$pandac$ASTNode* $tmp3920;
    org$pandalanguage$pandac$ASTNode* $tmp3921;
    panda$core$Int64 $tmp3924;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    org$pandalanguage$pandac$ASTNode* $tmp3927;
    panda$core$Int64 $tmp3930;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    org$pandalanguage$pandac$ASTNode* $tmp3933;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3936;
    panda$core$Int64 $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    {
        org$pandalanguage$pandac$parser$Token $tmp3910 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1810_93909 = $tmp3910.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3911, 30);
        panda$core$Bit $tmp3912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1810_93909.$rawValue, $tmp3911);
        if ($tmp3912.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3916 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3915 = $tmp3916;
            $tmp3914 = $tmp3915;
            $returnValue3913 = $tmp3914;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3914));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3915));
            return $returnValue3913;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3918, 32);
        panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1810_93909.$rawValue, $tmp3918);
        if ($tmp3919.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3922 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3921 = $tmp3922;
            $tmp3920 = $tmp3921;
            $returnValue3913 = $tmp3920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
            return $returnValue3913;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3924, 35);
        panda$core$Bit $tmp3925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1810_93909.$rawValue, $tmp3924);
        if ($tmp3925.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3928 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3927 = $tmp3928;
            $tmp3926 = $tmp3927;
            $returnValue3913 = $tmp3926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3927));
            return $returnValue3913;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3930, 31);
        panda$core$Bit $tmp3931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1810_93909.$rawValue, $tmp3930);
        if ($tmp3931.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3934 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3933 = $tmp3934;
            $tmp3932 = $tmp3933;
            $returnValue3913 = $tmp3932;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3933));
            return $returnValue3913;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3937, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3936, $tmp3937);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3936, &$s3938);
            $tmp3939 = NULL;
            $returnValue3913 = $tmp3939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3939));
            return $returnValue3913;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3944;
    org$pandalanguage$pandac$parser$Token$nullable start3945;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3946;
    panda$core$Int64 $tmp3947;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3949;
    panda$core$Int64 $tmp3950;
    org$pandalanguage$pandac$ASTNode* $returnValue3953;
    org$pandalanguage$pandac$ASTNode* $tmp3954;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3957;
    panda$core$Int64 $tmp3958;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3959;
    panda$core$Int64 $tmp3960;
    org$pandalanguage$pandac$parser$Token$nullable name3961;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3962;
    panda$core$Int64 $tmp3963;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    panda$collections$ImmutableArray* params3969 = NULL;
    panda$collections$ImmutableArray* $tmp3970;
    panda$collections$ImmutableArray* $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* returnType3976 = NULL;
    panda$core$Int64 $tmp3978;
    org$pandalanguage$pandac$ASTNode* $tmp3980;
    org$pandalanguage$pandac$ASTNode* $tmp3981;
    org$pandalanguage$pandac$ASTNode* $tmp3982;
    org$pandalanguage$pandac$ASTNode* $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3987;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    panda$collections$ImmutableArray* body3989 = NULL;
    panda$collections$ImmutableArray* $tmp3990;
    panda$collections$ImmutableArray* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3993;
    org$pandalanguage$pandac$ASTNode* $tmp3996;
    org$pandalanguage$pandac$ASTNode* $tmp3997;
    panda$core$Int64 $tmp3999;
    panda$collections$ImmutableArray* $tmp4000;
    panda$core$String* $tmp4002;
    int $tmp3943;
    {
        memset(&kind3944, 0, sizeof(kind3944));
        panda$core$Int64$init$builtin_int64(&$tmp3947, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3946, $tmp3947);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3948 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3946);
        start3945 = $tmp3948;
        if (((panda$core$Bit) { !start3945.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3950, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3949, $tmp3950);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3952 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3949, &$s3951);
            start3945 = $tmp3952;
            if (((panda$core$Bit) { !start3945.nonnull }).value) {
            {
                $tmp3954 = NULL;
                $returnValue3953 = $tmp3954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3954));
                $tmp3943 = 0;
                goto $l3941;
                $l3955:;
                return $returnValue3953;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3958, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3957, $tmp3958);
            kind3944 = $tmp3957;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3960, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3959, $tmp3960);
            kind3944 = $tmp3959;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3963, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3962, $tmp3963);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3965 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3962, &$s3964);
        name3961 = $tmp3965;
        if (((panda$core$Bit) { !name3961.nonnull }).value) {
        {
            $tmp3966 = NULL;
            $returnValue3953 = $tmp3966;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3966));
            $tmp3943 = 1;
            goto $l3941;
            $l3967:;
            return $returnValue3953;
        }
        }
        panda$collections$ImmutableArray* $tmp3972 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3971 = $tmp3972;
        $tmp3970 = $tmp3971;
        params3969 = $tmp3970;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3970));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3971));
        if (((panda$core$Bit) { params3969 == NULL }).value) {
        {
            $tmp3973 = NULL;
            $returnValue3953 = $tmp3973;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
            $tmp3943 = 2;
            goto $l3941;
            $l3974:;
            return $returnValue3953;
        }
        }
        memset(&returnType3976, 0, sizeof(returnType3976));
        org$pandalanguage$pandac$parser$Token $tmp3977 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3978, 95);
        panda$core$Bit $tmp3979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3977.kind.$rawValue, $tmp3978);
        if ($tmp3979.value) {
        {
            {
                $tmp3980 = returnType3976;
                org$pandalanguage$pandac$ASTNode* $tmp3983 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3982 = $tmp3983;
                $tmp3981 = $tmp3982;
                returnType3976 = $tmp3981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3980));
            }
            if (((panda$core$Bit) { returnType3976 == NULL }).value) {
            {
                $tmp3984 = NULL;
                $returnValue3953 = $tmp3984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3984));
                $tmp3943 = 3;
                goto $l3941;
                $l3985:;
                return $returnValue3953;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3987 = returnType3976;
                $tmp3988 = NULL;
                returnType3976 = $tmp3988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3987));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3992 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3991 = $tmp3992;
        $tmp3990 = $tmp3991;
        body3989 = $tmp3990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3990));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3991));
        if (((panda$core$Bit) { body3989 == NULL }).value) {
        {
            $tmp3993 = NULL;
            $returnValue3953 = $tmp3993;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3993));
            $tmp3943 = 4;
            goto $l3941;
            $l3994:;
            return $returnValue3953;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3998 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3999, 26);
        panda$collections$ImmutableArray* $tmp4001 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4001);
        $tmp4000 = $tmp4001;
        panda$core$String* $tmp4003 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3961.value));
        $tmp4002 = $tmp4003;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3998, $tmp3999, ((org$pandalanguage$pandac$parser$Token) start3945.value).position, NULL, $tmp4000, kind3944, $tmp4002, NULL, params3969, returnType3976, body3989);
        $tmp3997 = $tmp3998;
        $tmp3996 = $tmp3997;
        $returnValue3953 = $tmp3996;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3996));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4000));
        $tmp3943 = 5;
        goto $l3941;
        $l4004:;
        return $returnValue3953;
    }
    $l3941:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3989));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3976));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3969));
    params3969 = NULL;
    body3989 = NULL;
    switch ($tmp3943) {
        case 1: goto $l3967;
        case 5: goto $l4004;
        case 2: goto $l3974;
        case 4: goto $l3994;
        case 3: goto $l3985;
        case 0: goto $l3955;
    }
    $l4006:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1869_94007;
    panda$core$Int64 $tmp4009;
    org$pandalanguage$pandac$ASTNode* $returnValue4011;
    org$pandalanguage$pandac$ASTNode* $tmp4012;
    org$pandalanguage$pandac$ASTNode* $tmp4013;
    panda$core$Int64 $tmp4016;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $tmp4019;
    panda$core$Int64 $tmp4022;
    org$pandalanguage$pandac$ASTNode* $tmp4024;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    panda$core$Int64 $tmp4028;
    org$pandalanguage$pandac$ASTNode* $tmp4030;
    org$pandalanguage$pandac$ASTNode* $tmp4031;
    panda$core$Int64 $tmp4034;
    org$pandalanguage$pandac$ASTNode* $tmp4036;
    org$pandalanguage$pandac$ASTNode* $tmp4037;
    panda$core$Int64 $tmp4040;
    org$pandalanguage$pandac$ASTNode* $tmp4042;
    org$pandalanguage$pandac$ASTNode* $tmp4043;
    panda$core$Int64 $tmp4046;
    org$pandalanguage$pandac$ASTNode* $tmp4048;
    org$pandalanguage$pandac$ASTNode* $tmp4049;
    panda$core$Int64 $tmp4052;
    org$pandalanguage$pandac$ASTNode* $tmp4054;
    org$pandalanguage$pandac$ASTNode* $tmp4055;
    panda$core$Int64 $tmp4058;
    org$pandalanguage$pandac$parser$Token id4060;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4062;
    panda$core$Int64 $tmp4063;
    org$pandalanguage$pandac$ASTNode* $tmp4065;
    org$pandalanguage$pandac$ASTNode* $tmp4066;
    panda$core$String* $tmp4067;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$ASTNode* $tmp4072;
    panda$core$Int64 $tmp4076;
    panda$core$Int64 $tmp4079;
    org$pandalanguage$pandac$ASTNode* $tmp4082;
    org$pandalanguage$pandac$ASTNode* $tmp4083;
    panda$core$Int64 $tmp4089;
    panda$core$Int64 $tmp4092;
    panda$core$Int64 $tmp4096;
    panda$core$Int64 $tmp4100;
    org$pandalanguage$pandac$ASTNode* $tmp4103;
    org$pandalanguage$pandac$ASTNode* $tmp4104;
    panda$core$Int64 $tmp4107;
    org$pandalanguage$pandac$ASTNode* $tmp4109;
    org$pandalanguage$pandac$ASTNode* $tmp4110;
    panda$core$Int64 $tmp4114;
    panda$core$Int64 $tmp4117;
    org$pandalanguage$pandac$ASTNode* $tmp4120;
    org$pandalanguage$pandac$ASTNode* $tmp4121;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4124;
    panda$core$Int64 $tmp4125;
    org$pandalanguage$pandac$ASTNode* $tmp4127;
    {
        org$pandalanguage$pandac$parser$Token $tmp4008 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1869_94007 = $tmp4008.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4009, 36);
        panda$core$Bit $tmp4010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4009);
        if ($tmp4010.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4014 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4013 = $tmp4014;
            $tmp4012 = $tmp4013;
            $returnValue4011 = $tmp4012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4012));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4013));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4016, 32);
        panda$core$Bit $tmp4017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4016);
        if ($tmp4017.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4020 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4019 = $tmp4020;
            $tmp4018 = $tmp4019;
            $returnValue4011 = $tmp4018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4019));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4022, 31);
        panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4022);
        if ($tmp4023.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4026 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4025 = $tmp4026;
            $tmp4024 = $tmp4025;
            $returnValue4011 = $tmp4024;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4024));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4025));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4028, 30);
        panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4028);
        if ($tmp4029.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4032 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4031 = $tmp4032;
            $tmp4030 = $tmp4031;
            $returnValue4011 = $tmp4030;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4031));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4034, 35);
        panda$core$Bit $tmp4035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4034);
        if ($tmp4035.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4038 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4037 = $tmp4038;
            $tmp4036 = $tmp4037;
            $returnValue4011 = $tmp4036;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4036));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4037));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4040, 44);
        panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4040);
        if ($tmp4041.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4044 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4043 = $tmp4044;
            $tmp4042 = $tmp4043;
            $returnValue4011 = $tmp4042;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4042));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4043));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4046, 38);
        panda$core$Bit $tmp4047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4046);
        if ($tmp4047.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4050 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4049 = $tmp4050;
            $tmp4048 = $tmp4049;
            $returnValue4011 = $tmp4048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4049));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4052, 99);
        panda$core$Bit $tmp4053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4052);
        if ($tmp4053.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4056 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4055 = $tmp4056;
            $tmp4054 = $tmp4055;
            $returnValue4011 = $tmp4054;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4054));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4055));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4058, 48);
        panda$core$Bit $tmp4059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4058);
        if ($tmp4059.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4061 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4060 = $tmp4061;
            panda$core$Int64$init$builtin_int64(&$tmp4063, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4062, $tmp4063);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4064 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4062);
            if (((panda$core$Bit) { $tmp4064.nonnull }).value) {
            {
                panda$core$String* $tmp4068 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4060);
                $tmp4067 = $tmp4068;
                org$pandalanguage$pandac$ASTNode* $tmp4069 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4067);
                $tmp4066 = $tmp4069;
                $tmp4065 = $tmp4066;
                $returnValue4011 = $tmp4065;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4067));
                return $returnValue4011;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4060);
            org$pandalanguage$pandac$ASTNode* $tmp4073 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4072 = $tmp4073;
            $tmp4071 = $tmp4072;
            $returnValue4011 = $tmp4071;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4072));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4076, 46);
        panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4076);
        bool $tmp4075 = $tmp4077.value;
        if ($tmp4075) goto $l4078;
        panda$core$Int64$init$builtin_int64(&$tmp4079, 47);
        panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4079);
        $tmp4075 = $tmp4080.value;
        $l4078:;
        panda$core$Bit $tmp4081 = { $tmp4075 };
        if ($tmp4081.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4084 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4083 = $tmp4084;
            $tmp4082 = $tmp4083;
            $returnValue4011 = $tmp4082;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4082));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4083));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4089, 23);
        panda$core$Bit $tmp4090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4089);
        bool $tmp4088 = $tmp4090.value;
        if ($tmp4088) goto $l4091;
        panda$core$Int64$init$builtin_int64(&$tmp4092, 24);
        panda$core$Bit $tmp4093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4092);
        $tmp4088 = $tmp4093.value;
        $l4091:;
        panda$core$Bit $tmp4094 = { $tmp4088 };
        bool $tmp4087 = $tmp4094.value;
        if ($tmp4087) goto $l4095;
        panda$core$Int64$init$builtin_int64(&$tmp4096, 25);
        panda$core$Bit $tmp4097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4096);
        $tmp4087 = $tmp4097.value;
        $l4095:;
        panda$core$Bit $tmp4098 = { $tmp4087 };
        bool $tmp4086 = $tmp4098.value;
        if ($tmp4086) goto $l4099;
        panda$core$Int64$init$builtin_int64(&$tmp4100, 26);
        panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4100);
        $tmp4086 = $tmp4101.value;
        $l4099:;
        panda$core$Bit $tmp4102 = { $tmp4086 };
        if ($tmp4102.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4105 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4104 = $tmp4105;
            $tmp4103 = $tmp4104;
            $returnValue4011 = $tmp4103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4104));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4107, 22);
        panda$core$Bit $tmp4108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4107);
        if ($tmp4108.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4111 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4110 = $tmp4111;
            $tmp4109 = $tmp4110;
            $returnValue4011 = $tmp4109;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4109));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4110));
            return $returnValue4011;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4114, 21);
        panda$core$Bit $tmp4115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4114);
        bool $tmp4113 = $tmp4115.value;
        if ($tmp4113) goto $l4116;
        panda$core$Int64$init$builtin_int64(&$tmp4117, 20);
        panda$core$Bit $tmp4118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1869_94007.$rawValue, $tmp4117);
        $tmp4113 = $tmp4118.value;
        $l4116:;
        panda$core$Bit $tmp4119 = { $tmp4113 };
        if ($tmp4119.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4122 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4121 = $tmp4122;
            $tmp4120 = $tmp4121;
            $returnValue4011 = $tmp4120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4121));
            return $returnValue4011;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4125, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4124, $tmp4125);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4124, &$s4126);
            $tmp4127 = NULL;
            $returnValue4011 = $tmp4127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4127));
            return $returnValue4011;
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
    org$pandalanguage$pandac$parser$Token$nullable start4132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4133;
    panda$core$Int64 $tmp4134;
    org$pandalanguage$pandac$ASTNode* $returnValue4137;
    org$pandalanguage$pandac$ASTNode* $tmp4138;
    org$pandalanguage$pandac$parser$Token$nullable next4141;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4142;
    panda$core$Int64 $tmp4143;
    org$pandalanguage$pandac$ASTNode* $tmp4146;
    panda$core$MutableString* name4149 = NULL;
    panda$core$MutableString* $tmp4150;
    panda$core$MutableString* $tmp4151;
    panda$core$String* $tmp4153;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4157;
    panda$core$Int64 $tmp4158;
    panda$core$Char8 $tmp4160;
    panda$core$UInt8 $tmp4161;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4162;
    panda$core$Int64 $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4166;
    panda$core$String* $tmp4169;
    org$pandalanguage$pandac$ASTNode* $tmp4171;
    org$pandalanguage$pandac$ASTNode* $tmp4172;
    panda$core$Int64 $tmp4174;
    panda$core$String* $tmp4175;
    int $tmp4131;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4134, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4133, $tmp4134);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4133, &$s4135);
        start4132 = $tmp4136;
        if (((panda$core$Bit) { !start4132.nonnull }).value) {
        {
            $tmp4138 = NULL;
            $returnValue4137 = $tmp4138;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4138));
            $tmp4131 = 0;
            goto $l4129;
            $l4139:;
            return $returnValue4137;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4143, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4142, $tmp4143);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4142, &$s4144);
        next4141 = $tmp4145;
        if (((panda$core$Bit) { !next4141.nonnull }).value) {
        {
            $tmp4146 = NULL;
            $returnValue4137 = $tmp4146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4146));
            $tmp4131 = 1;
            goto $l4129;
            $l4147:;
            return $returnValue4137;
        }
        }
        panda$core$MutableString* $tmp4152 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4154 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4141.value));
        $tmp4153 = $tmp4154;
        panda$core$MutableString$init$panda$core$String($tmp4152, $tmp4153);
        $tmp4151 = $tmp4152;
        $tmp4150 = $tmp4151;
        name4149 = $tmp4150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
        $l4155:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4158, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4157, $tmp4158);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4159 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4157);
            next4141 = $tmp4159;
            if (((panda$core$Bit) { !next4141.nonnull }).value) {
            {
                goto $l4156;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4161, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4160, $tmp4161);
            panda$core$MutableString$append$panda$core$Char8(name4149, $tmp4160);
            panda$core$Int64$init$builtin_int64(&$tmp4163, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4162, $tmp4163);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4165 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4162, &$s4164);
            next4141 = $tmp4165;
            if (((panda$core$Bit) { !next4141.nonnull }).value) {
            {
                $tmp4166 = NULL;
                $returnValue4137 = $tmp4166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4166));
                $tmp4131 = 2;
                goto $l4129;
                $l4167:;
                return $returnValue4137;
            }
            }
            panda$core$String* $tmp4170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4141.value));
            $tmp4169 = $tmp4170;
            panda$core$MutableString$append$panda$core$String(name4149, $tmp4169);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4169));
        }
        }
        $l4156:;
        org$pandalanguage$pandac$ASTNode* $tmp4173 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4174, 30);
        panda$core$String* $tmp4176 = panda$core$MutableString$finish$R$panda$core$String(name4149);
        $tmp4175 = $tmp4176;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4173, $tmp4174, ((org$pandalanguage$pandac$parser$Token) start4132.value).position, $tmp4175);
        $tmp4172 = $tmp4173;
        $tmp4171 = $tmp4172;
        $returnValue4137 = $tmp4171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4175));
        $tmp4131 = 3;
        goto $l4129;
        $l4177:;
        return $returnValue4137;
    }
    $l4129:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4149));
    name4149 = NULL;
    switch ($tmp4131) {
        case 2: goto $l4167;
        case 1: goto $l4147;
        case 3: goto $l4177;
        case 0: goto $l4139;
    }
    $l4179:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4183;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4184;
    panda$core$Int64 $tmp4185;
    org$pandalanguage$pandac$ASTNode* $returnValue4188;
    org$pandalanguage$pandac$ASTNode* $tmp4189;
    org$pandalanguage$pandac$parser$Token$nullable next4192;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4193;
    panda$core$Int64 $tmp4194;
    org$pandalanguage$pandac$ASTNode* $tmp4197;
    panda$core$MutableString* name4200 = NULL;
    panda$core$MutableString* $tmp4201;
    panda$core$MutableString* $tmp4202;
    panda$core$String* $tmp4204;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4208;
    panda$core$Int64 $tmp4209;
    panda$core$Char8 $tmp4211;
    panda$core$UInt8 $tmp4212;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4213;
    panda$core$Int64 $tmp4214;
    org$pandalanguage$pandac$ASTNode* $tmp4217;
    panda$core$String* $tmp4220;
    org$pandalanguage$pandac$ASTNode* $tmp4222;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    panda$core$Int64 $tmp4225;
    panda$core$String* $tmp4226;
    int $tmp4182;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4185, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4184, $tmp4185);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4187 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4184, &$s4186);
        start4183 = $tmp4187;
        if (((panda$core$Bit) { !start4183.nonnull }).value) {
        {
            $tmp4189 = NULL;
            $returnValue4188 = $tmp4189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4189));
            $tmp4182 = 0;
            goto $l4180;
            $l4190:;
            return $returnValue4188;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4194, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4193, $tmp4194);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4196 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4193, &$s4195);
        next4192 = $tmp4196;
        if (((panda$core$Bit) { !next4192.nonnull }).value) {
        {
            $tmp4197 = NULL;
            $returnValue4188 = $tmp4197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4197));
            $tmp4182 = 1;
            goto $l4180;
            $l4198:;
            return $returnValue4188;
        }
        }
        panda$core$MutableString* $tmp4203 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4205 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4192.value));
        $tmp4204 = $tmp4205;
        panda$core$MutableString$init$panda$core$String($tmp4203, $tmp4204);
        $tmp4202 = $tmp4203;
        $tmp4201 = $tmp4202;
        name4200 = $tmp4201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4204));
        $l4206:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4209, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4208, $tmp4209);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4210 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4208);
            next4192 = $tmp4210;
            if (((panda$core$Bit) { !next4192.nonnull }).value) {
            {
                goto $l4207;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4212, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4211, $tmp4212);
            panda$core$MutableString$append$panda$core$Char8(name4200, $tmp4211);
            panda$core$Int64$init$builtin_int64(&$tmp4214, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4213, $tmp4214);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4216 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4213, &$s4215);
            next4192 = $tmp4216;
            if (((panda$core$Bit) { !next4192.nonnull }).value) {
            {
                $tmp4217 = NULL;
                $returnValue4188 = $tmp4217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4217));
                $tmp4182 = 2;
                goto $l4180;
                $l4218:;
                return $returnValue4188;
            }
            }
            panda$core$String* $tmp4221 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4192.value));
            $tmp4220 = $tmp4221;
            panda$core$MutableString$append$panda$core$String(name4200, $tmp4220);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4220));
        }
        }
        $l4207:;
        org$pandalanguage$pandac$ASTNode* $tmp4224 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4225, 46);
        panda$core$String* $tmp4227 = panda$core$MutableString$finish$R$panda$core$String(name4200);
        $tmp4226 = $tmp4227;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4224, $tmp4225, ((org$pandalanguage$pandac$parser$Token) start4183.value).position, $tmp4226);
        $tmp4223 = $tmp4224;
        $tmp4222 = $tmp4223;
        $returnValue4188 = $tmp4222;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4226));
        $tmp4182 = 3;
        goto $l4180;
        $l4228:;
        return $returnValue4188;
    }
    $l4180:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4200));
    name4200 = NULL;
    switch ($tmp4182) {
        case 1: goto $l4198;
        case 2: goto $l4218;
        case 3: goto $l4228;
        case 0: goto $l4190;
    }
    $l4230:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4235;
    panda$core$Int64 $tmp4236;
    panda$collections$ImmutableArray* $returnValue4239;
    panda$collections$ImmutableArray* $tmp4240;
    org$pandalanguage$pandac$parser$Token$nullable id4243;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4244;
    panda$core$Int64 $tmp4245;
    panda$collections$ImmutableArray* $tmp4248;
    panda$collections$Array* parameters4251 = NULL;
    panda$collections$Array* $tmp4252;
    panda$collections$Array* $tmp4253;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4255;
    panda$core$Int64 $tmp4256;
    org$pandalanguage$pandac$ASTNode* t4261 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4262;
    org$pandalanguage$pandac$ASTNode* $tmp4263;
    panda$collections$ImmutableArray* $tmp4265;
    org$pandalanguage$pandac$ASTNode* $tmp4269;
    panda$core$Int64 $tmp4271;
    panda$core$String* $tmp4272;
    org$pandalanguage$pandac$ASTNode* $tmp4275;
    panda$core$Int64 $tmp4277;
    panda$core$String* $tmp4278;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4283;
    panda$core$Int64 $tmp4284;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4286;
    panda$core$Int64 $tmp4287;
    panda$collections$ImmutableArray* $tmp4290;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4293;
    panda$core$Int64 $tmp4294;
    org$pandalanguage$pandac$ASTNode* t4299 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4300;
    org$pandalanguage$pandac$ASTNode* $tmp4301;
    panda$collections$ImmutableArray* $tmp4303;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    panda$core$Int64 $tmp4309;
    panda$core$String* $tmp4310;
    org$pandalanguage$pandac$ASTNode* $tmp4313;
    panda$core$Int64 $tmp4315;
    panda$core$String* $tmp4316;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4318;
    panda$core$Int64 $tmp4319;
    panda$collections$ImmutableArray* $tmp4322;
    panda$collections$ImmutableArray* $tmp4325;
    panda$collections$ImmutableArray* $tmp4326;
    int $tmp4233;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4236, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4235, $tmp4236);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4238 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4235, &$s4237);
        start4234 = $tmp4238;
        if (((panda$core$Bit) { !start4234.nonnull }).value) {
        {
            $tmp4240 = NULL;
            $returnValue4239 = $tmp4240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4240));
            $tmp4233 = 0;
            goto $l4231;
            $l4241:;
            return $returnValue4239;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4245, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4244, $tmp4245);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4247 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4244, &$s4246);
        id4243 = $tmp4247;
        if (((panda$core$Bit) { !id4243.nonnull }).value) {
        {
            $tmp4248 = NULL;
            $returnValue4239 = $tmp4248;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4248));
            $tmp4233 = 1;
            goto $l4231;
            $l4249:;
            return $returnValue4239;
        }
        }
        panda$collections$Array* $tmp4254 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4254);
        $tmp4253 = $tmp4254;
        $tmp4252 = $tmp4253;
        parameters4251 = $tmp4252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4253));
        panda$core$Int64$init$builtin_int64(&$tmp4256, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4255, $tmp4256);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4257 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4255);
        if (((panda$core$Bit) { $tmp4257.nonnull }).value) {
        {
            int $tmp4260;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4264 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4263 = $tmp4264;
                $tmp4262 = $tmp4263;
                t4261 = $tmp4262;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4263));
                if (((panda$core$Bit) { t4261 == NULL }).value) {
                {
                    $tmp4265 = NULL;
                    $returnValue4239 = $tmp4265;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4265));
                    $tmp4260 = 0;
                    goto $l4258;
                    $l4266:;
                    $tmp4233 = 2;
                    goto $l4231;
                    $l4267:;
                    return $returnValue4239;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4270 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4271, 44);
                panda$core$String* $tmp4273 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4243.value));
                $tmp4272 = $tmp4273;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4270, $tmp4271, ((org$pandalanguage$pandac$parser$Token) id4243.value).position, $tmp4272, t4261);
                $tmp4269 = $tmp4270;
                panda$collections$Array$add$panda$collections$Array$T(parameters4251, ((panda$core$Object*) $tmp4269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4272));
            }
            $tmp4260 = -1;
            goto $l4258;
            $l4258:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4261));
            t4261 = NULL;
            switch ($tmp4260) {
                case -1: goto $l4274;
                case 0: goto $l4266;
            }
            $l4274:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4276 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4277, 20);
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4243.value));
            $tmp4278 = $tmp4279;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4276, $tmp4277, ((org$pandalanguage$pandac$parser$Token) id4243.value).position, $tmp4278);
            $tmp4275 = $tmp4276;
            panda$collections$Array$add$panda$collections$Array$T(parameters4251, ((panda$core$Object*) $tmp4275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4278));
        }
        }
        $l4280:;
        panda$core$Int64$init$builtin_int64(&$tmp4284, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4283, $tmp4284);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4285 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4283);
        bool $tmp4282 = ((panda$core$Bit) { $tmp4285.nonnull }).value;
        if (!$tmp4282) goto $l4281;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4287, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4286, $tmp4287);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4289 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4286, &$s4288);
            id4243 = $tmp4289;
            if (((panda$core$Bit) { !id4243.nonnull }).value) {
            {
                $tmp4290 = NULL;
                $returnValue4239 = $tmp4290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4290));
                $tmp4233 = 3;
                goto $l4231;
                $l4291:;
                return $returnValue4239;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4294, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4293, $tmp4294);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4295 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4293);
            if (((panda$core$Bit) { $tmp4295.nonnull }).value) {
            {
                int $tmp4298;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4302 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4301 = $tmp4302;
                    $tmp4300 = $tmp4301;
                    t4299 = $tmp4300;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4300));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4301));
                    if (((panda$core$Bit) { t4299 == NULL }).value) {
                    {
                        $tmp4303 = NULL;
                        $returnValue4239 = $tmp4303;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4303));
                        $tmp4298 = 0;
                        goto $l4296;
                        $l4304:;
                        $tmp4233 = 4;
                        goto $l4231;
                        $l4305:;
                        return $returnValue4239;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4308 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4309, 44);
                    panda$core$String* $tmp4311 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4243.value));
                    $tmp4310 = $tmp4311;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4308, $tmp4309, ((org$pandalanguage$pandac$parser$Token) id4243.value).position, $tmp4310, t4299);
                    $tmp4307 = $tmp4308;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4251, ((panda$core$Object*) $tmp4307));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4310));
                }
                $tmp4298 = -1;
                goto $l4296;
                $l4296:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4299));
                t4299 = NULL;
                switch ($tmp4298) {
                    case -1: goto $l4312;
                    case 0: goto $l4304;
                }
                $l4312:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4314 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4315, 20);
                panda$core$String* $tmp4317 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4243.value));
                $tmp4316 = $tmp4317;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4314, $tmp4315, ((org$pandalanguage$pandac$parser$Token) id4243.value).position, $tmp4316);
                $tmp4313 = $tmp4314;
                panda$collections$Array$add$panda$collections$Array$T(parameters4251, ((panda$core$Object*) $tmp4313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4316));
            }
            }
        }
        goto $l4280;
        $l4281:;
        panda$core$Int64$init$builtin_int64(&$tmp4319, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4318, $tmp4319);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4321 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4318, &$s4320);
        if (((panda$core$Bit) { !$tmp4321.nonnull }).value) {
        {
            $tmp4322 = NULL;
            $returnValue4239 = $tmp4322;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4322));
            $tmp4233 = 5;
            goto $l4231;
            $l4323:;
            return $returnValue4239;
        }
        }
        panda$collections$ImmutableArray* $tmp4327 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4251);
        $tmp4326 = $tmp4327;
        $tmp4325 = $tmp4326;
        $returnValue4239 = $tmp4325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4326));
        $tmp4233 = 6;
        goto $l4231;
        $l4328:;
        return $returnValue4239;
    }
    $l4231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4251));
    parameters4251 = NULL;
    switch ($tmp4233) {
        case 6: goto $l4328;
        case 5: goto $l4323;
        case 1: goto $l4249;
        case 4: goto $l4305;
        case 2: goto $l4267;
        case 0: goto $l4241;
        case 3: goto $l4291;
    }
    $l4330:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4334;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4335;
    panda$core$Int64 $tmp4336;
    panda$collections$ImmutableArray* $returnValue4339;
    panda$collections$ImmutableArray* $tmp4340;
    panda$collections$Array* result4343 = NULL;
    panda$collections$Array* $tmp4344;
    panda$collections$Array* $tmp4345;
    org$pandalanguage$pandac$ASTNode* t4347 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4348;
    org$pandalanguage$pandac$ASTNode* $tmp4349;
    panda$collections$ImmutableArray* $tmp4351;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4357;
    panda$core$Int64 $tmp4358;
    org$pandalanguage$pandac$ASTNode* $tmp4360;
    org$pandalanguage$pandac$ASTNode* $tmp4361;
    org$pandalanguage$pandac$ASTNode* $tmp4362;
    panda$collections$ImmutableArray* $tmp4364;
    panda$collections$ImmutableArray* $tmp4367;
    panda$collections$ImmutableArray* $tmp4368;
    int $tmp4333;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4336, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4335, $tmp4336);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4338 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4335, &$s4337);
        start4334 = $tmp4338;
        if (((panda$core$Bit) { !start4334.nonnull }).value) {
        {
            $tmp4340 = NULL;
            $returnValue4339 = $tmp4340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4340));
            $tmp4333 = 0;
            goto $l4331;
            $l4341:;
            return $returnValue4339;
        }
        }
        panda$collections$Array* $tmp4346 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4346);
        $tmp4345 = $tmp4346;
        $tmp4344 = $tmp4345;
        result4343 = $tmp4344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4345));
        org$pandalanguage$pandac$ASTNode* $tmp4350 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4349 = $tmp4350;
        $tmp4348 = $tmp4349;
        t4347 = $tmp4348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4349));
        if (((panda$core$Bit) { t4347 == NULL }).value) {
        {
            $tmp4351 = NULL;
            $returnValue4339 = $tmp4351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4351));
            $tmp4333 = 1;
            goto $l4331;
            $l4352:;
            return $returnValue4339;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4343, ((panda$core$Object*) t4347));
        $l4354:;
        panda$core$Int64$init$builtin_int64(&$tmp4358, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4357, $tmp4358);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4359 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4357);
        bool $tmp4356 = ((panda$core$Bit) { $tmp4359.nonnull }).value;
        if (!$tmp4356) goto $l4355;
        {
            {
                $tmp4360 = t4347;
                org$pandalanguage$pandac$ASTNode* $tmp4363 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4362 = $tmp4363;
                $tmp4361 = $tmp4362;
                t4347 = $tmp4361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4361));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4362));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4360));
            }
            if (((panda$core$Bit) { t4347 == NULL }).value) {
            {
                $tmp4364 = NULL;
                $returnValue4339 = $tmp4364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4364));
                $tmp4333 = 2;
                goto $l4331;
                $l4365:;
                return $returnValue4339;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4343, ((panda$core$Object*) t4347));
        }
        goto $l4354;
        $l4355:;
        panda$collections$ImmutableArray* $tmp4369 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4343);
        $tmp4368 = $tmp4369;
        $tmp4367 = $tmp4368;
        $returnValue4339 = $tmp4367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4368));
        $tmp4333 = 3;
        goto $l4331;
        $l4370:;
        return $returnValue4339;
    }
    $l4331:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4343));
    result4343 = NULL;
    t4347 = NULL;
    switch ($tmp4333) {
        case 2: goto $l4365;
        case 3: goto $l4370;
        case 0: goto $l4341;
        case 1: goto $l4352;
    }
    $l4372:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4376;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4377;
    panda$core$Int64 $tmp4378;
    org$pandalanguage$pandac$ASTNode* expr4381 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4382;
    panda$core$Int64 $tmp4383;
    org$pandalanguage$pandac$ASTNode* $tmp4385;
    org$pandalanguage$pandac$ASTNode* $tmp4386;
    org$pandalanguage$pandac$ASTNode* $tmp4387;
    org$pandalanguage$pandac$ASTNode* $returnValue4389;
    org$pandalanguage$pandac$ASTNode* $tmp4390;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4393;
    panda$core$Int64 $tmp4394;
    org$pandalanguage$pandac$ASTNode* $tmp4396;
    org$pandalanguage$pandac$ASTNode* $tmp4397;
    panda$core$Int64 $tmp4399;
    panda$core$String* $tmp4400;
    int $tmp4375;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4378, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4377, $tmp4378);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4380 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4377, &$s4379);
        a4376 = $tmp4380;
        memset(&expr4381, 0, sizeof(expr4381));
        panda$core$Int64$init$builtin_int64(&$tmp4383, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4382, $tmp4383);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4384 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4382);
        if (((panda$core$Bit) { $tmp4384.nonnull }).value) {
        {
            {
                $tmp4385 = expr4381;
                org$pandalanguage$pandac$ASTNode* $tmp4388 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4387 = $tmp4388;
                $tmp4386 = $tmp4387;
                expr4381 = $tmp4386;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4385));
            }
            if (((panda$core$Bit) { expr4381 == NULL }).value) {
            {
                $tmp4390 = NULL;
                $returnValue4389 = $tmp4390;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4390));
                $tmp4375 = 0;
                goto $l4373;
                $l4391:;
                return $returnValue4389;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4394, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4393, $tmp4394);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4393, &$s4395);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4398 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4399, 0);
        panda$core$String* $tmp4401 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4376.value));
        $tmp4400 = $tmp4401;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4398, $tmp4399, ((org$pandalanguage$pandac$parser$Token) a4376.value).position, $tmp4400, expr4381);
        $tmp4397 = $tmp4398;
        $tmp4396 = $tmp4397;
        $returnValue4389 = $tmp4396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4400));
        $tmp4375 = 1;
        goto $l4373;
        $l4402:;
        return $returnValue4389;
    }
    $l4373:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4381));
    switch ($tmp4375) {
        case 1: goto $l4402;
        case 0: goto $l4391;
    }
    $l4404:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4408 = NULL;
    panda$collections$Array* $tmp4409;
    panda$collections$Array* $tmp4410;
    panda$core$Int64 $tmp4416;
    org$pandalanguage$pandac$ASTNode* a4421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4422;
    org$pandalanguage$pandac$ASTNode* $tmp4423;
    panda$collections$ImmutableArray* $returnValue4427;
    panda$collections$ImmutableArray* $tmp4428;
    panda$collections$ImmutableArray* $tmp4429;
    int $tmp4407;
    {
        panda$collections$Array* $tmp4411 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4411);
        $tmp4410 = $tmp4411;
        $tmp4409 = $tmp4410;
        result4408 = $tmp4409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4410));
        $l4412:;
        org$pandalanguage$pandac$parser$Token $tmp4415 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4416, 13);
        panda$core$Bit $tmp4417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4415.kind.$rawValue, $tmp4416);
        bool $tmp4414 = $tmp4417.value;
        if (!$tmp4414) goto $l4413;
        {
            int $tmp4420;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4424 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4423 = $tmp4424;
                $tmp4422 = $tmp4423;
                a4421 = $tmp4422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4423));
                if (((panda$core$Bit) { a4421 == NULL }).value) {
                {
                    $tmp4420 = 0;
                    goto $l4418;
                    $l4425:;
                    goto $l4413;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4408, ((panda$core$Object*) a4421));
            }
            $tmp4420 = -1;
            goto $l4418;
            $l4418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4421));
            a4421 = NULL;
            switch ($tmp4420) {
                case 0: goto $l4425;
                case -1: goto $l4426;
            }
            $l4426:;
        }
        goto $l4412;
        $l4413:;
        panda$collections$ImmutableArray* $tmp4430 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4408);
        $tmp4429 = $tmp4430;
        $tmp4428 = $tmp4429;
        $returnValue4427 = $tmp4428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4429));
        $tmp4407 = 0;
        goto $l4405;
        $l4431:;
        return $returnValue4427;
    }
    $l4405:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4408));
    result4408 = NULL;
    switch ($tmp4407) {
        case 0: goto $l4431;
    }
    $l4433:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4437;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4438;
    panda$core$Int64 $tmp4439;
    org$pandalanguage$pandac$ASTNode* $returnValue4442;
    org$pandalanguage$pandac$ASTNode* $tmp4443;
    panda$core$MutableString* result4446 = NULL;
    panda$core$MutableString* $tmp4447;
    panda$core$MutableString* $tmp4448;
    org$pandalanguage$pandac$parser$Token next4452;
    panda$core$Int64 $tmp4454;
    panda$core$Int64 $tmp4456;
    org$pandalanguage$pandac$ASTNode* $tmp4459;
    panda$core$String* $tmp4462;
    org$pandalanguage$pandac$ASTNode* $tmp4464;
    org$pandalanguage$pandac$ASTNode* $tmp4465;
    panda$core$Int64 $tmp4467;
    panda$core$String* $tmp4468;
    int $tmp4436;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4439, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4438, $tmp4439);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4441 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4438, &$s4440);
        start4437 = $tmp4441;
        if (((panda$core$Bit) { !start4437.nonnull }).value) {
        {
            $tmp4443 = NULL;
            $returnValue4442 = $tmp4443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4443));
            $tmp4436 = 0;
            goto $l4434;
            $l4444:;
            return $returnValue4442;
        }
        }
        panda$core$MutableString* $tmp4449 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4449);
        $tmp4448 = $tmp4449;
        $tmp4447 = $tmp4448;
        result4446 = $tmp4447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4448));
        $l4450:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4453 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4452 = $tmp4453;
            panda$core$Int64$init$builtin_int64(&$tmp4454, 11);
            panda$core$Bit $tmp4455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4452.kind.$rawValue, $tmp4454);
            if ($tmp4455.value) {
            {
                goto $l4451;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4456, 0);
            panda$core$Bit $tmp4457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4452.kind.$rawValue, $tmp4456);
            if ($tmp4457.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4437.value), &$s4458);
                $tmp4459 = NULL;
                $returnValue4442 = $tmp4459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4459));
                $tmp4436 = 1;
                goto $l4434;
                $l4460:;
                return $returnValue4442;
            }
            }
            panda$core$String* $tmp4463 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4452);
            $tmp4462 = $tmp4463;
            panda$core$MutableString$append$panda$core$String(result4446, $tmp4462);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4462));
        }
        }
        $l4451:;
        org$pandalanguage$pandac$ASTNode* $tmp4466 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4467, 38);
        panda$core$String* $tmp4469 = panda$core$MutableString$finish$R$panda$core$String(result4446);
        $tmp4468 = $tmp4469;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4466, $tmp4467, ((org$pandalanguage$pandac$parser$Token) start4437.value).position, $tmp4468);
        $tmp4465 = $tmp4466;
        $tmp4464 = $tmp4465;
        $returnValue4442 = $tmp4464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4464));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4468));
        $tmp4436 = 2;
        goto $l4434;
        $l4470:;
        return $returnValue4442;
    }
    $l4434:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4446));
    result4446 = NULL;
    switch ($tmp4436) {
        case 2: goto $l4470;
        case 1: goto $l4460;
        case 0: goto $l4444;
    }
    $l4472:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4476;
    panda$core$Int64 $tmp4477;
    org$pandalanguage$pandac$parser$Token$nullable id4478;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4479;
    panda$core$Int64 $tmp4480;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4483;
    panda$core$Int64 $tmp4484;
    org$pandalanguage$pandac$ASTNode* $returnValue4485;
    org$pandalanguage$pandac$ASTNode* $tmp4486;
    org$pandalanguage$pandac$ASTNode* t4489 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4490;
    org$pandalanguage$pandac$ASTNode* $tmp4491;
    org$pandalanguage$pandac$ASTNode* $tmp4493;
    org$pandalanguage$pandac$ASTNode* $tmp4496;
    org$pandalanguage$pandac$ASTNode* $tmp4497;
    panda$core$Int64 $tmp4499;
    panda$core$String* $tmp4500;
    int $tmp4475;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4477, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4476, $tmp4477);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4476);
        panda$core$Int64$init$builtin_int64(&$tmp4480, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4479, $tmp4480);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4482 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4479, &$s4481);
        id4478 = $tmp4482;
        panda$core$Int64$init$builtin_int64(&$tmp4484, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4483, $tmp4484);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4483);
        if (((panda$core$Bit) { !id4478.nonnull }).value) {
        {
            $tmp4486 = NULL;
            $returnValue4485 = $tmp4486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4486));
            $tmp4475 = 0;
            goto $l4473;
            $l4487:;
            return $returnValue4485;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4492 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4491 = $tmp4492;
        $tmp4490 = $tmp4491;
        t4489 = $tmp4490;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4491));
        if (((panda$core$Bit) { t4489 == NULL }).value) {
        {
            $tmp4493 = NULL;
            $returnValue4485 = $tmp4493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4493));
            $tmp4475 = 1;
            goto $l4473;
            $l4494:;
            return $returnValue4485;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4498 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4499, 31);
        panda$core$String* $tmp4501 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4478.value));
        $tmp4500 = $tmp4501;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4498, $tmp4499, ((org$pandalanguage$pandac$parser$Token) id4478.value).position, $tmp4500, t4489);
        $tmp4497 = $tmp4498;
        $tmp4496 = $tmp4497;
        $returnValue4485 = $tmp4496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
        $tmp4475 = 2;
        goto $l4473;
        $l4502:;
        return $returnValue4485;
    }
    $l4473:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4489));
    t4489 = NULL;
    switch ($tmp4475) {
        case 1: goto $l4494;
        case 2: goto $l4502;
        case 0: goto $l4487;
    }
    $l4504:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4508;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4509;
    panda$core$Int64 $tmp4510;
    panda$collections$ImmutableArray* $returnValue4513;
    panda$collections$ImmutableArray* $tmp4514;
    panda$collections$Array* result4517 = NULL;
    panda$collections$Array* $tmp4518;
    panda$collections$Array* $tmp4519;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4521;
    panda$core$Int64 $tmp4522;
    org$pandalanguage$pandac$ASTNode* param4527 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4528;
    org$pandalanguage$pandac$ASTNode* $tmp4529;
    panda$collections$ImmutableArray* $tmp4531;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4538;
    panda$core$Int64 $tmp4539;
    org$pandalanguage$pandac$ASTNode* $tmp4541;
    org$pandalanguage$pandac$ASTNode* $tmp4542;
    org$pandalanguage$pandac$ASTNode* $tmp4543;
    panda$collections$ImmutableArray* $tmp4545;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4549;
    panda$core$Int64 $tmp4550;
    panda$collections$ImmutableArray* $tmp4553;
    panda$collections$ImmutableArray* $tmp4558;
    panda$collections$ImmutableArray* $tmp4559;
    int $tmp4507;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4510, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4509, $tmp4510);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4512 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4509, &$s4511);
        start4508 = $tmp4512;
        if (((panda$core$Bit) { !start4508.nonnull }).value) {
        {
            $tmp4514 = NULL;
            $returnValue4513 = $tmp4514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4514));
            $tmp4507 = 0;
            goto $l4505;
            $l4515:;
            return $returnValue4513;
        }
        }
        panda$collections$Array* $tmp4520 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4520);
        $tmp4519 = $tmp4520;
        $tmp4518 = $tmp4519;
        result4517 = $tmp4518;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4519));
        panda$core$Int64$init$builtin_int64(&$tmp4522, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4521, $tmp4522);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4523 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4521);
        if (((panda$core$Bit) { !$tmp4523.nonnull }).value) {
        {
            int $tmp4526;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4530 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4529 = $tmp4530;
                $tmp4528 = $tmp4529;
                param4527 = $tmp4528;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4528));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4529));
                if (((panda$core$Bit) { param4527 == NULL }).value) {
                {
                    $tmp4531 = NULL;
                    $returnValue4513 = $tmp4531;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4531));
                    $tmp4526 = 0;
                    goto $l4524;
                    $l4532:;
                    $tmp4507 = 1;
                    goto $l4505;
                    $l4533:;
                    return $returnValue4513;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4517, ((panda$core$Object*) param4527));
                $l4535:;
                panda$core$Int64$init$builtin_int64(&$tmp4539, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4538, $tmp4539);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4540 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4538);
                bool $tmp4537 = ((panda$core$Bit) { $tmp4540.nonnull }).value;
                if (!$tmp4537) goto $l4536;
                {
                    {
                        $tmp4541 = param4527;
                        org$pandalanguage$pandac$ASTNode* $tmp4544 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4543 = $tmp4544;
                        $tmp4542 = $tmp4543;
                        param4527 = $tmp4542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4542));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4543));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4541));
                    }
                    if (((panda$core$Bit) { param4527 == NULL }).value) {
                    {
                        $tmp4545 = NULL;
                        $returnValue4513 = $tmp4545;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4545));
                        $tmp4526 = 1;
                        goto $l4524;
                        $l4546:;
                        $tmp4507 = 2;
                        goto $l4505;
                        $l4547:;
                        return $returnValue4513;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4517, ((panda$core$Object*) param4527));
                }
                goto $l4535;
                $l4536:;
                panda$core$Int64$init$builtin_int64(&$tmp4550, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4549, $tmp4550);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4552 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4549, &$s4551);
                if (((panda$core$Bit) { !$tmp4552.nonnull }).value) {
                {
                    $tmp4553 = NULL;
                    $returnValue4513 = $tmp4553;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4553));
                    $tmp4526 = 2;
                    goto $l4524;
                    $l4554:;
                    $tmp4507 = 3;
                    goto $l4505;
                    $l4555:;
                    return $returnValue4513;
                }
                }
            }
            $tmp4526 = -1;
            goto $l4524;
            $l4524:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4527));
            param4527 = NULL;
            switch ($tmp4526) {
                case 0: goto $l4532;
                case -1: goto $l4557;
                case 2: goto $l4554;
                case 1: goto $l4546;
            }
            $l4557:;
        }
        }
        panda$collections$ImmutableArray* $tmp4560 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4517);
        $tmp4559 = $tmp4560;
        $tmp4558 = $tmp4559;
        $returnValue4513 = $tmp4558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4559));
        $tmp4507 = 4;
        goto $l4505;
        $l4561:;
        return $returnValue4513;
    }
    $l4505:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4517));
    result4517 = NULL;
    switch ($tmp4507) {
        case 2: goto $l4547;
        case 4: goto $l4561;
        case 3: goto $l4555;
        case 1: goto $l4533;
        case 0: goto $l4515;
    }
    $l4563:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4567;
    org$pandalanguage$pandac$parser$Token$nullable start4568;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4569;
    panda$core$Int64 $tmp4570;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4572;
    panda$core$Int64 $tmp4573;
    org$pandalanguage$pandac$ASTNode* $returnValue4576;
    org$pandalanguage$pandac$ASTNode* $tmp4577;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4580;
    panda$core$Int64 $tmp4581;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4582;
    panda$core$Int64 $tmp4583;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4584;
    panda$core$Int64 $tmp4585;
    panda$core$String* name4586 = NULL;
    panda$core$String* $tmp4587;
    panda$core$String* $tmp4588;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4590;
    panda$core$Int64 $tmp4591;
    org$pandalanguage$pandac$ASTNode* $tmp4592;
    panda$collections$ImmutableArray* generics4595 = NULL;
    panda$core$Int64 $tmp4597;
    panda$collections$ImmutableArray* $tmp4599;
    panda$collections$ImmutableArray* $tmp4600;
    panda$collections$ImmutableArray* $tmp4601;
    panda$collections$ImmutableArray* $tmp4603;
    panda$collections$ImmutableArray* $tmp4604;
    panda$collections$ImmutableArray* params4605 = NULL;
    panda$collections$ImmutableArray* $tmp4606;
    panda$collections$ImmutableArray* $tmp4607;
    org$pandalanguage$pandac$ASTNode* $tmp4609;
    org$pandalanguage$pandac$ASTNode* returnType4612 = NULL;
    panda$core$Int64 $tmp4614;
    org$pandalanguage$pandac$ASTNode* $tmp4616;
    org$pandalanguage$pandac$ASTNode* $tmp4617;
    org$pandalanguage$pandac$ASTNode* $tmp4618;
    org$pandalanguage$pandac$ASTNode* $tmp4620;
    org$pandalanguage$pandac$ASTNode* $tmp4623;
    org$pandalanguage$pandac$ASTNode* $tmp4624;
    panda$collections$ImmutableArray* body4625 = NULL;
    panda$core$Int64 $tmp4627;
    panda$collections$ImmutableArray* $tmp4629;
    panda$collections$ImmutableArray* $tmp4630;
    panda$collections$ImmutableArray* $tmp4631;
    org$pandalanguage$pandac$ASTNode* $tmp4633;
    panda$collections$ImmutableArray* $tmp4636;
    panda$collections$ImmutableArray* $tmp4637;
    org$pandalanguage$pandac$ASTNode* $tmp4638;
    org$pandalanguage$pandac$ASTNode* $tmp4639;
    panda$core$Int64 $tmp4641;
    int $tmp4566;
    {
        memset(&kind4567, 0, sizeof(kind4567));
        panda$core$Int64$init$builtin_int64(&$tmp4570, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4569, $tmp4570);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4571 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4569);
        start4568 = $tmp4571;
        if (((panda$core$Bit) { !start4568.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4573, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4572, $tmp4573);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4575 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4572, &$s4574);
            start4568 = $tmp4575;
            if (((panda$core$Bit) { !start4568.nonnull }).value) {
            {
                $tmp4577 = NULL;
                $returnValue4576 = $tmp4577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4577));
                $tmp4566 = 0;
                goto $l4564;
                $l4578:;
                return $returnValue4576;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4581, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4580, $tmp4581);
            kind4567 = $tmp4580;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4583, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4582, $tmp4583);
            kind4567 = $tmp4582;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4585, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4584, $tmp4585);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4584);
        panda$core$String* $tmp4589 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4588 = $tmp4589;
        $tmp4587 = $tmp4588;
        name4586 = $tmp4587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4588));
        panda$core$Int64$init$builtin_int64(&$tmp4591, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4590, $tmp4591);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4590);
        if (((panda$core$Bit) { name4586 == NULL }).value) {
        {
            $tmp4592 = NULL;
            $returnValue4576 = $tmp4592;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4592));
            $tmp4566 = 1;
            goto $l4564;
            $l4593:;
            return $returnValue4576;
        }
        }
        memset(&generics4595, 0, sizeof(generics4595));
        org$pandalanguage$pandac$parser$Token $tmp4596 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4597, 62);
        panda$core$Bit $tmp4598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4596.kind.$rawValue, $tmp4597);
        if ($tmp4598.value) {
        {
            {
                $tmp4599 = generics4595;
                panda$collections$ImmutableArray* $tmp4602 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4601 = $tmp4602;
                $tmp4600 = $tmp4601;
                generics4595 = $tmp4600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4599));
            }
        }
        }
        else {
        {
            {
                $tmp4603 = generics4595;
                $tmp4604 = NULL;
                generics4595 = $tmp4604;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4603));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4608 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4607 = $tmp4608;
        $tmp4606 = $tmp4607;
        params4605 = $tmp4606;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4607));
        if (((panda$core$Bit) { params4605 == NULL }).value) {
        {
            $tmp4609 = NULL;
            $returnValue4576 = $tmp4609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4609));
            $tmp4566 = 2;
            goto $l4564;
            $l4610:;
            return $returnValue4576;
        }
        }
        memset(&returnType4612, 0, sizeof(returnType4612));
        org$pandalanguage$pandac$parser$Token $tmp4613 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4614, 95);
        panda$core$Bit $tmp4615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4613.kind.$rawValue, $tmp4614);
        if ($tmp4615.value) {
        {
            {
                $tmp4616 = returnType4612;
                org$pandalanguage$pandac$ASTNode* $tmp4619 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4618 = $tmp4619;
                $tmp4617 = $tmp4618;
                returnType4612 = $tmp4617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4616));
            }
            if (((panda$core$Bit) { returnType4612 == NULL }).value) {
            {
                $tmp4620 = NULL;
                $returnValue4576 = $tmp4620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4620));
                $tmp4566 = 3;
                goto $l4564;
                $l4621:;
                return $returnValue4576;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4623 = returnType4612;
                $tmp4624 = NULL;
                returnType4612 = $tmp4624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4623));
            }
        }
        }
        memset(&body4625, 0, sizeof(body4625));
        org$pandalanguage$pandac$parser$Token $tmp4626 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4627, 99);
        panda$core$Bit $tmp4628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4626.kind.$rawValue, $tmp4627);
        if ($tmp4628.value) {
        {
            {
                $tmp4629 = body4625;
                panda$collections$ImmutableArray* $tmp4632 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4631 = $tmp4632;
                $tmp4630 = $tmp4631;
                body4625 = $tmp4630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4629));
            }
            if (((panda$core$Bit) { body4625 == NULL }).value) {
            {
                $tmp4633 = NULL;
                $returnValue4576 = $tmp4633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4633));
                $tmp4566 = 4;
                goto $l4564;
                $l4634:;
                return $returnValue4576;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4636 = body4625;
                $tmp4637 = NULL;
                body4625 = $tmp4637;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4640 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4641, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4640, $tmp4641, ((org$pandalanguage$pandac$parser$Token) start4568.value).position, p_doccomment, p_annotations, kind4567, name4586, generics4595, params4605, returnType4612, body4625);
        $tmp4639 = $tmp4640;
        $tmp4638 = $tmp4639;
        $returnValue4576 = $tmp4638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4639));
        $tmp4566 = 5;
        goto $l4564;
        $l4642:;
        return $returnValue4576;
    }
    $l4564:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4625));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4612));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4605));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4595));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4586));
    name4586 = NULL;
    params4605 = NULL;
    switch ($tmp4566) {
        case 5: goto $l4642;
        case 4: goto $l4634;
        case 3: goto $l4621;
        case 2: goto $l4610;
        case 1: goto $l4593;
        case 0: goto $l4578;
    }
    $l4644:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4648;
    org$pandalanguage$pandac$parser$Token$nullable start4649;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4650;
    panda$core$Int64 $tmp4651;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4653;
    panda$core$Int64 $tmp4654;
    org$pandalanguage$pandac$ASTNode* $returnValue4657;
    org$pandalanguage$pandac$ASTNode* $tmp4658;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4661;
    panda$core$Int64 $tmp4662;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4663;
    panda$core$Int64 $tmp4664;
    panda$collections$ImmutableArray* params4665 = NULL;
    panda$collections$ImmutableArray* $tmp4666;
    panda$collections$ImmutableArray* $tmp4667;
    org$pandalanguage$pandac$ASTNode* $tmp4669;
    org$pandalanguage$pandac$ASTNode* returnType4672 = NULL;
    panda$core$Int64 $tmp4674;
    org$pandalanguage$pandac$ASTNode* $tmp4676;
    org$pandalanguage$pandac$ASTNode* $tmp4677;
    org$pandalanguage$pandac$ASTNode* $tmp4678;
    org$pandalanguage$pandac$ASTNode* $tmp4680;
    org$pandalanguage$pandac$ASTNode* $tmp4683;
    org$pandalanguage$pandac$ASTNode* $tmp4684;
    panda$collections$ImmutableArray* body4685 = NULL;
    panda$collections$ImmutableArray* $tmp4686;
    panda$collections$ImmutableArray* $tmp4687;
    org$pandalanguage$pandac$ASTNode* $tmp4689;
    org$pandalanguage$pandac$ASTNode* $tmp4692;
    org$pandalanguage$pandac$ASTNode* $tmp4693;
    panda$core$Int64 $tmp4695;
    panda$collections$ImmutableArray* $tmp4696;
    int $tmp4647;
    {
        memset(&kind4648, 0, sizeof(kind4648));
        panda$core$Int64$init$builtin_int64(&$tmp4651, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4650, $tmp4651);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4650);
        start4649 = $tmp4652;
        if (((panda$core$Bit) { !start4649.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4654, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4653, $tmp4654);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4656 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4653, &$s4655);
            start4649 = $tmp4656;
            if (((panda$core$Bit) { !start4649.nonnull }).value) {
            {
                $tmp4658 = NULL;
                $returnValue4657 = $tmp4658;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4658));
                $tmp4647 = 0;
                goto $l4645;
                $l4659:;
                return $returnValue4657;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4662, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4661, $tmp4662);
            kind4648 = $tmp4661;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4664, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4663, $tmp4664);
            kind4648 = $tmp4663;
        }
        }
        panda$collections$ImmutableArray* $tmp4668 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4667 = $tmp4668;
        $tmp4666 = $tmp4667;
        params4665 = $tmp4666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4667));
        if (((panda$core$Bit) { params4665 == NULL }).value) {
        {
            $tmp4669 = NULL;
            $returnValue4657 = $tmp4669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4669));
            $tmp4647 = 1;
            goto $l4645;
            $l4670:;
            return $returnValue4657;
        }
        }
        memset(&returnType4672, 0, sizeof(returnType4672));
        org$pandalanguage$pandac$parser$Token $tmp4673 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4674, 95);
        panda$core$Bit $tmp4675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4673.kind.$rawValue, $tmp4674);
        if ($tmp4675.value) {
        {
            {
                $tmp4676 = returnType4672;
                org$pandalanguage$pandac$ASTNode* $tmp4679 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4678 = $tmp4679;
                $tmp4677 = $tmp4678;
                returnType4672 = $tmp4677;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4677));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4676));
            }
            if (((panda$core$Bit) { returnType4672 == NULL }).value) {
            {
                $tmp4680 = NULL;
                $returnValue4657 = $tmp4680;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4680));
                $tmp4647 = 2;
                goto $l4645;
                $l4681:;
                return $returnValue4657;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4683 = returnType4672;
                $tmp4684 = NULL;
                returnType4672 = $tmp4684;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4688 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4687 = $tmp4688;
        $tmp4686 = $tmp4687;
        body4685 = $tmp4686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4687));
        if (((panda$core$Bit) { body4685 == NULL }).value) {
        {
            $tmp4689 = NULL;
            $returnValue4657 = $tmp4689;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4689));
            $tmp4647 = 3;
            goto $l4645;
            $l4690:;
            return $returnValue4657;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4695, 26);
        panda$collections$ImmutableArray* $tmp4697 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4697);
        $tmp4696 = $tmp4697;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4694, $tmp4695, ((org$pandalanguage$pandac$parser$Token) start4649.value).position, NULL, $tmp4696, kind4648, &$s4698, NULL, params4665, returnType4672, body4685);
        $tmp4693 = $tmp4694;
        $tmp4692 = $tmp4693;
        $returnValue4657 = $tmp4692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4696));
        $tmp4647 = 4;
        goto $l4645;
        $l4699:;
        return $returnValue4657;
    }
    $l4645:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4685));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4672));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4665));
    params4665 = NULL;
    body4685 = NULL;
    switch ($tmp4647) {
        case 4: goto $l4699;
        case 3: goto $l4690;
        case 2: goto $l4681;
        case 0: goto $l4659;
        case 1: goto $l4670;
    }
    $l4701:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4705;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4706;
    panda$core$Int64 $tmp4707;
    org$pandalanguage$pandac$ASTNode* $returnValue4710;
    org$pandalanguage$pandac$ASTNode* $tmp4711;
    panda$collections$ImmutableArray* params4714 = NULL;
    panda$collections$ImmutableArray* $tmp4715;
    panda$collections$ImmutableArray* $tmp4716;
    org$pandalanguage$pandac$ASTNode* $tmp4718;
    panda$collections$ImmutableArray* b4721 = NULL;
    panda$collections$ImmutableArray* $tmp4722;
    panda$collections$ImmutableArray* $tmp4723;
    org$pandalanguage$pandac$ASTNode* $tmp4725;
    org$pandalanguage$pandac$ASTNode* $tmp4728;
    org$pandalanguage$pandac$ASTNode* $tmp4729;
    panda$core$Int64 $tmp4731;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4732;
    panda$core$Int64 $tmp4733;
    int $tmp4704;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4707, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4706, $tmp4707);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4709 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4706, &$s4708);
        start4705 = $tmp4709;
        if (((panda$core$Bit) { !start4705.nonnull }).value) {
        {
            $tmp4711 = NULL;
            $returnValue4710 = $tmp4711;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4711));
            $tmp4704 = 0;
            goto $l4702;
            $l4712:;
            return $returnValue4710;
        }
        }
        panda$collections$ImmutableArray* $tmp4717 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4716 = $tmp4717;
        $tmp4715 = $tmp4716;
        params4714 = $tmp4715;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4715));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
        if (((panda$core$Bit) { params4714 == NULL }).value) {
        {
            $tmp4718 = NULL;
            $returnValue4710 = $tmp4718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
            $tmp4704 = 1;
            goto $l4702;
            $l4719:;
            return $returnValue4710;
        }
        }
        panda$collections$ImmutableArray* $tmp4724 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4723 = $tmp4724;
        $tmp4722 = $tmp4723;
        b4721 = $tmp4722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4723));
        if (((panda$core$Bit) { b4721 == NULL }).value) {
        {
            $tmp4725 = NULL;
            $returnValue4710 = $tmp4725;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4725));
            $tmp4704 = 2;
            goto $l4702;
            $l4726:;
            return $returnValue4710;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4730 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4731, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4733, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4732, $tmp4733);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4730, $tmp4731, ((org$pandalanguage$pandac$parser$Token) start4705.value).position, p_doccomment, p_annotations, $tmp4732, &$s4734, NULL, params4714, NULL, b4721);
        $tmp4729 = $tmp4730;
        $tmp4728 = $tmp4729;
        $returnValue4710 = $tmp4728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4729));
        $tmp4704 = 3;
        goto $l4702;
        $l4735:;
        return $returnValue4710;
    }
    $l4702:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4714));
    params4714 = NULL;
    b4721 = NULL;
    switch ($tmp4704) {
        case 3: goto $l4735;
        case 2: goto $l4726;
        case 0: goto $l4712;
        case 1: goto $l4719;
    }
    $l4737:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4741 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4742;
    org$pandalanguage$pandac$ASTNode* $tmp4743;
    org$pandalanguage$pandac$ASTNode* $returnValue4745;
    org$pandalanguage$pandac$ASTNode* $tmp4746;
    org$pandalanguage$pandac$ASTNode* $tmp4749;
    org$pandalanguage$pandac$ASTNode* $tmp4750;
    panda$core$Int64 $tmp4752;
    int $tmp4740;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4744 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4743 = $tmp4744;
        $tmp4742 = $tmp4743;
        decl4741 = $tmp4742;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4743));
        if (((panda$core$Bit) { decl4741 == NULL }).value) {
        {
            $tmp4746 = NULL;
            $returnValue4745 = $tmp4746;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4746));
            $tmp4740 = 0;
            goto $l4738;
            $l4747:;
            return $returnValue4745;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4751 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4752, 16);
        org$pandalanguage$pandac$Position $tmp4754 = (($fn4753) decl4741->$class->vtable[2])(decl4741);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4751, $tmp4752, $tmp4754, p_doccomment, p_annotations, decl4741);
        $tmp4750 = $tmp4751;
        $tmp4749 = $tmp4750;
        $returnValue4745 = $tmp4749;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4749));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4750));
        $tmp4740 = 1;
        goto $l4738;
        $l4755:;
        return $returnValue4745;
    }
    $l4738:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4741));
    decl4741 = NULL;
    switch ($tmp4740) {
        case 1: goto $l4755;
        case 0: goto $l4747;
    }
    $l4757:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4761;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4762;
    panda$core$Int64 $tmp4763;
    org$pandalanguage$pandac$ASTNode* $returnValue4766;
    org$pandalanguage$pandac$ASTNode* $tmp4767;
    panda$collections$Array* fields4770 = NULL;
    panda$collections$Array* $tmp4771;
    panda$collections$Array* $tmp4772;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4774;
    panda$core$Int64 $tmp4775;
    panda$core$Int64 $tmp4778;
    org$pandalanguage$pandac$ASTNode* field4783 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4784;
    org$pandalanguage$pandac$ASTNode* $tmp4785;
    org$pandalanguage$pandac$ASTNode* $tmp4787;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4794;
    panda$core$Int64 $tmp4795;
    org$pandalanguage$pandac$ASTNode* $tmp4797;
    org$pandalanguage$pandac$ASTNode* $tmp4798;
    org$pandalanguage$pandac$ASTNode* $tmp4799;
    org$pandalanguage$pandac$ASTNode* $tmp4801;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4806;
    panda$core$Int64 $tmp4807;
    org$pandalanguage$pandac$ASTNode* $tmp4810;
    org$pandalanguage$pandac$ASTNode* $tmp4813;
    org$pandalanguage$pandac$ASTNode* $tmp4814;
    panda$core$Int64 $tmp4816;
    panda$core$String* $tmp4817;
    panda$collections$ImmutableArray* $tmp4819;
    int $tmp4760;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4763, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4762, $tmp4763);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4765 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4762, &$s4764);
        name4761 = $tmp4765;
        if (((panda$core$Bit) { !name4761.nonnull }).value) {
        {
            $tmp4767 = NULL;
            $returnValue4766 = $tmp4767;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4767));
            $tmp4760 = 0;
            goto $l4758;
            $l4768:;
            return $returnValue4766;
        }
        }
        panda$collections$Array* $tmp4773 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4773);
        $tmp4772 = $tmp4773;
        $tmp4771 = $tmp4772;
        fields4770 = $tmp4771;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4772));
        panda$core$Int64$init$builtin_int64(&$tmp4775, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4774, $tmp4775);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4776 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4774);
        if (((panda$core$Bit) { $tmp4776.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4777 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4778, 104);
            panda$core$Bit $tmp4779 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4777.kind.$rawValue, $tmp4778);
            if ($tmp4779.value) {
            {
                int $tmp4782;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4786 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4785 = $tmp4786;
                    $tmp4784 = $tmp4785;
                    field4783 = $tmp4784;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4784));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4785));
                    if (((panda$core$Bit) { field4783 == NULL }).value) {
                    {
                        $tmp4787 = NULL;
                        $returnValue4766 = $tmp4787;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4787));
                        $tmp4782 = 0;
                        goto $l4780;
                        $l4788:;
                        $tmp4760 = 1;
                        goto $l4758;
                        $l4789:;
                        return $returnValue4766;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4770, ((panda$core$Object*) field4783));
                    $l4791:;
                    panda$core$Int64$init$builtin_int64(&$tmp4795, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4794, $tmp4795);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4796 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4794);
                    bool $tmp4793 = ((panda$core$Bit) { $tmp4796.nonnull }).value;
                    if (!$tmp4793) goto $l4792;
                    {
                        {
                            $tmp4797 = field4783;
                            org$pandalanguage$pandac$ASTNode* $tmp4800 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4799 = $tmp4800;
                            $tmp4798 = $tmp4799;
                            field4783 = $tmp4798;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4798));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4799));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4797));
                        }
                        if (((panda$core$Bit) { field4783 == NULL }).value) {
                        {
                            $tmp4801 = NULL;
                            $returnValue4766 = $tmp4801;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4801));
                            $tmp4782 = 1;
                            goto $l4780;
                            $l4802:;
                            $tmp4760 = 2;
                            goto $l4758;
                            $l4803:;
                            return $returnValue4766;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4770, ((panda$core$Object*) field4783));
                    }
                    goto $l4791;
                    $l4792:;
                }
                $tmp4782 = -1;
                goto $l4780;
                $l4780:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4783));
                field4783 = NULL;
                switch ($tmp4782) {
                    case -1: goto $l4805;
                    case 1: goto $l4802;
                    case 0: goto $l4788;
                }
                $l4805:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4807, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4806, $tmp4807);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4809 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4806, &$s4808);
            if (((panda$core$Bit) { !$tmp4809.nonnull }).value) {
            {
                $tmp4810 = NULL;
                $returnValue4766 = $tmp4810;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4810));
                $tmp4760 = 3;
                goto $l4758;
                $l4811:;
                return $returnValue4766;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4815 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4816, 9);
        panda$core$String* $tmp4818 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4761.value));
        $tmp4817 = $tmp4818;
        panda$collections$ImmutableArray* $tmp4820 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4770);
        $tmp4819 = $tmp4820;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4815, $tmp4816, ((org$pandalanguage$pandac$parser$Token) name4761.value).position, p_doccomment, $tmp4817, $tmp4819);
        $tmp4814 = $tmp4815;
        $tmp4813 = $tmp4814;
        $returnValue4766 = $tmp4813;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4813));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4819));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4817));
        $tmp4760 = 4;
        goto $l4758;
        $l4821:;
        return $returnValue4766;
    }
    $l4758:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4770));
    fields4770 = NULL;
    switch ($tmp4760) {
        case 2: goto $l4803;
        case 4: goto $l4821;
        case 3: goto $l4811;
        case 0: goto $l4768;
        case 1: goto $l4789;
    }
    $l4823:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4827;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4828;
    panda$core$Int64 $tmp4829;
    org$pandalanguage$pandac$ASTNode* $returnValue4832;
    org$pandalanguage$pandac$ASTNode* $tmp4833;
    org$pandalanguage$pandac$parser$Token$nullable name4836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4837;
    panda$core$Int64 $tmp4838;
    org$pandalanguage$pandac$ASTNode* $tmp4841;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4844;
    panda$core$Int64 $tmp4845;
    org$pandalanguage$pandac$ASTNode* $tmp4848;
    panda$collections$Array* members4851 = NULL;
    panda$collections$Array* $tmp4852;
    panda$collections$Array* $tmp4853;
    org$pandalanguage$pandac$ASTNode* dc4855 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4856;
    org$pandalanguage$pandac$parser$Token next4859;
    org$pandalanguage$pandac$parser$Token$Kind $match$2300_134861;
    panda$core$Int64 $tmp4871;
    panda$core$Int64 $tmp4874;
    panda$core$Int64 $tmp4878;
    panda$core$Int64 $tmp4882;
    panda$core$Int64 $tmp4886;
    panda$core$Int64 $tmp4890;
    panda$core$Int64 $tmp4894;
    panda$core$Int64 $tmp4898;
    panda$core$Int64 $tmp4902;
    panda$core$Int64 $tmp4906;
    panda$core$Int64 $tmp4909;
    panda$core$String* $tmp4911;
    panda$core$String* $tmp4912;
    panda$core$String* $tmp4914;
    org$pandalanguage$pandac$ASTNode* $tmp4919;
    org$pandalanguage$pandac$ASTNode* $tmp4920;
    org$pandalanguage$pandac$ASTNode* $tmp4921;
    panda$core$Int64 $tmp4923;
    org$pandalanguage$pandac$ASTNode* c4928 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4929;
    org$pandalanguage$pandac$ASTNode* $tmp4930;
    org$pandalanguage$pandac$ASTNode* $tmp4932;
    org$pandalanguage$pandac$ASTNode* $tmp4936;
    org$pandalanguage$pandac$ASTNode* $tmp4937;
    panda$collections$ImmutableArray* a4939 = NULL;
    panda$collections$ImmutableArray* $tmp4940;
    panda$collections$ImmutableArray* $tmp4941;
    org$pandalanguage$pandac$parser$Token next4945;
    org$pandalanguage$pandac$parser$Token$Kind $match$2324_134947;
    panda$core$Int64 $tmp4948;
    panda$core$Int64 $tmp4951;
    panda$core$String* $tmp4953;
    panda$core$String* $tmp4954;
    panda$core$String* $tmp4956;
    org$pandalanguage$pandac$ASTNode* $tmp4961;
    panda$collections$ImmutableArray* $tmp4964;
    panda$collections$ImmutableArray* $tmp4965;
    panda$collections$ImmutableArray* $tmp4966;
    panda$core$Int64 $tmp4968;
    panda$core$Int64 $tmp4973;
    panda$core$String* $tmp4976;
    panda$core$String* $tmp4977;
    panda$core$String* $tmp4979;
    org$pandalanguage$pandac$ASTNode* $tmp4984;
    org$pandalanguage$pandac$ASTNode* $tmp4987;
    org$pandalanguage$pandac$ASTNode* $tmp4988;
    org$pandalanguage$pandac$ASTNode* $tmp4989;
    panda$core$Int64 $tmp4991;
    org$pandalanguage$pandac$ASTNode* decl4996 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4997;
    org$pandalanguage$pandac$ASTNode* $tmp4998;
    org$pandalanguage$pandac$ASTNode* $tmp5000;
    org$pandalanguage$pandac$ASTNode* $tmp5004;
    org$pandalanguage$pandac$ASTNode* $tmp5005;
    panda$collections$ImmutableArray* $tmp5006;
    panda$collections$ImmutableArray* $tmp5007;
    panda$collections$ImmutableArray* $tmp5008;
    panda$core$Int64 $tmp5011;
    org$pandalanguage$pandac$ASTNode* decl5016 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5017;
    org$pandalanguage$pandac$ASTNode* $tmp5018;
    org$pandalanguage$pandac$ASTNode* $tmp5020;
    org$pandalanguage$pandac$ASTNode* $tmp5024;
    org$pandalanguage$pandac$ASTNode* $tmp5025;
    panda$collections$ImmutableArray* $tmp5026;
    panda$collections$ImmutableArray* $tmp5027;
    panda$collections$ImmutableArray* $tmp5028;
    panda$core$Int64 $tmp5031;
    org$pandalanguage$pandac$ASTNode* decl5036 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5037;
    org$pandalanguage$pandac$ASTNode* $tmp5038;
    org$pandalanguage$pandac$ASTNode* $tmp5040;
    org$pandalanguage$pandac$ASTNode* $tmp5044;
    org$pandalanguage$pandac$ASTNode* $tmp5045;
    panda$collections$ImmutableArray* $tmp5046;
    panda$collections$ImmutableArray* $tmp5047;
    panda$collections$ImmutableArray* $tmp5048;
    panda$core$Int64 $tmp5052;
    panda$core$Int64 $tmp5055;
    org$pandalanguage$pandac$ASTNode* decl5061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5062;
    org$pandalanguage$pandac$ASTNode* $tmp5063;
    org$pandalanguage$pandac$ASTNode* $tmp5065;
    org$pandalanguage$pandac$ASTNode* $tmp5069;
    org$pandalanguage$pandac$ASTNode* $tmp5070;
    panda$collections$ImmutableArray* $tmp5071;
    panda$collections$ImmutableArray* $tmp5072;
    panda$collections$ImmutableArray* $tmp5073;
    panda$core$Int64 $tmp5079;
    panda$core$Int64 $tmp5082;
    panda$core$Int64 $tmp5086;
    panda$core$Int64 $tmp5090;
    org$pandalanguage$pandac$ASTNode* decl5096 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5097;
    org$pandalanguage$pandac$ASTNode* $tmp5098;
    org$pandalanguage$pandac$ASTNode* $tmp5100;
    org$pandalanguage$pandac$ASTNode* $tmp5104;
    org$pandalanguage$pandac$ASTNode* $tmp5105;
    panda$collections$ImmutableArray* $tmp5106;
    panda$collections$ImmutableArray* $tmp5107;
    panda$collections$ImmutableArray* $tmp5108;
    panda$core$Int64 $tmp5111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5113;
    panda$core$Int64 $tmp5114;
    panda$core$String* $tmp5116;
    panda$core$String* $tmp5117;
    panda$core$String* $tmp5119;
    org$pandalanguage$pandac$ASTNode* $tmp5124;
    org$pandalanguage$pandac$ASTNode* $tmp5127;
    org$pandalanguage$pandac$ASTNode* $tmp5128;
    panda$core$Int64 $tmp5130;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5131;
    panda$core$Int64 $tmp5132;
    panda$core$String* $tmp5133;
    panda$collections$ImmutableArray* $tmp5135;
    int $tmp4826;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4829, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4828, $tmp4829);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4831 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4828, &$s4830);
        start4827 = $tmp4831;
        if (((panda$core$Bit) { !start4827.nonnull }).value) {
        {
            $tmp4833 = NULL;
            $returnValue4832 = $tmp4833;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4833));
            $tmp4826 = 0;
            goto $l4824;
            $l4834:;
            return $returnValue4832;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4838, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4837, $tmp4838);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4840 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4837, &$s4839);
        name4836 = $tmp4840;
        if (((panda$core$Bit) { !name4836.nonnull }).value) {
        {
            $tmp4841 = NULL;
            $returnValue4832 = $tmp4841;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4841));
            $tmp4826 = 1;
            goto $l4824;
            $l4842:;
            return $returnValue4832;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4845, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4844, $tmp4845);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4847 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4844, &$s4846);
        if (((panda$core$Bit) { !$tmp4847.nonnull }).value) {
        {
            $tmp4848 = NULL;
            $returnValue4832 = $tmp4848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4848));
            $tmp4826 = 2;
            goto $l4824;
            $l4849:;
            return $returnValue4832;
        }
        }
        panda$collections$Array* $tmp4854 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4854);
        $tmp4853 = $tmp4854;
        $tmp4852 = $tmp4853;
        members4851 = $tmp4852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
        $tmp4856 = NULL;
        dc4855 = $tmp4856;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4856));
        $l4857:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4860 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4859 = $tmp4860;
            {
                $match$2300_134861 = next4859.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4871, 17);
                panda$core$Bit $tmp4872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4871);
                bool $tmp4870 = $tmp4872.value;
                if ($tmp4870) goto $l4873;
                panda$core$Int64$init$builtin_int64(&$tmp4874, 18);
                panda$core$Bit $tmp4875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4874);
                $tmp4870 = $tmp4875.value;
                $l4873:;
                panda$core$Bit $tmp4876 = { $tmp4870 };
                bool $tmp4869 = $tmp4876.value;
                if ($tmp4869) goto $l4877;
                panda$core$Int64$init$builtin_int64(&$tmp4878, 19);
                panda$core$Bit $tmp4879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4878);
                $tmp4869 = $tmp4879.value;
                $l4877:;
                panda$core$Bit $tmp4880 = { $tmp4869 };
                bool $tmp4868 = $tmp4880.value;
                if ($tmp4868) goto $l4881;
                panda$core$Int64$init$builtin_int64(&$tmp4882, 21);
                panda$core$Bit $tmp4883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4882);
                $tmp4868 = $tmp4883.value;
                $l4881:;
                panda$core$Bit $tmp4884 = { $tmp4868 };
                bool $tmp4867 = $tmp4884.value;
                if ($tmp4867) goto $l4885;
                panda$core$Int64$init$builtin_int64(&$tmp4886, 20);
                panda$core$Bit $tmp4887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4886);
                $tmp4867 = $tmp4887.value;
                $l4885:;
                panda$core$Bit $tmp4888 = { $tmp4867 };
                bool $tmp4866 = $tmp4888.value;
                if ($tmp4866) goto $l4889;
                panda$core$Int64$init$builtin_int64(&$tmp4890, 13);
                panda$core$Bit $tmp4891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4890);
                $tmp4866 = $tmp4891.value;
                $l4889:;
                panda$core$Bit $tmp4892 = { $tmp4866 };
                bool $tmp4865 = $tmp4892.value;
                if ($tmp4865) goto $l4893;
                panda$core$Int64$init$builtin_int64(&$tmp4894, 23);
                panda$core$Bit $tmp4895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4894);
                $tmp4865 = $tmp4895.value;
                $l4893:;
                panda$core$Bit $tmp4896 = { $tmp4865 };
                bool $tmp4864 = $tmp4896.value;
                if ($tmp4864) goto $l4897;
                panda$core$Int64$init$builtin_int64(&$tmp4898, 24);
                panda$core$Bit $tmp4899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4898);
                $tmp4864 = $tmp4899.value;
                $l4897:;
                panda$core$Bit $tmp4900 = { $tmp4864 };
                bool $tmp4863 = $tmp4900.value;
                if ($tmp4863) goto $l4901;
                panda$core$Int64$init$builtin_int64(&$tmp4902, 25);
                panda$core$Bit $tmp4903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4902);
                $tmp4863 = $tmp4903.value;
                $l4901:;
                panda$core$Bit $tmp4904 = { $tmp4863 };
                bool $tmp4862 = $tmp4904.value;
                if ($tmp4862) goto $l4905;
                panda$core$Int64$init$builtin_int64(&$tmp4906, 26);
                panda$core$Bit $tmp4907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4906);
                $tmp4862 = $tmp4907.value;
                $l4905:;
                panda$core$Bit $tmp4908 = { $tmp4862 };
                if ($tmp4908.value) {
                {
                    goto $l4858;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4909, 11);
                panda$core$Bit $tmp4910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4909);
                if ($tmp4910.value) {
                {
                    if (((panda$core$Bit) { dc4855 != NULL }).value) {
                    {
                        panda$core$String* $tmp4915 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4859);
                        $tmp4914 = $tmp4915;
                        panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4913, $tmp4914);
                        $tmp4912 = $tmp4916;
                        panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, &$s4917);
                        $tmp4911 = $tmp4918;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4859, $tmp4911);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4911));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4912));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4914));
                    }
                    }
                    {
                        $tmp4919 = dc4855;
                        org$pandalanguage$pandac$ASTNode* $tmp4922 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4921 = $tmp4922;
                        $tmp4920 = $tmp4921;
                        dc4855 = $tmp4920;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4920));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4921));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4919));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4923, 48);
                panda$core$Bit $tmp4924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2300_134861.$rawValue, $tmp4923);
                if ($tmp4924.value) {
                {
                    int $tmp4927;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4931 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855);
                        $tmp4930 = $tmp4931;
                        $tmp4929 = $tmp4930;
                        c4928 = $tmp4929;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4929));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4930));
                        if (((panda$core$Bit) { c4928 == NULL }).value) {
                        {
                            $tmp4932 = NULL;
                            $returnValue4832 = $tmp4932;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4932));
                            $tmp4927 = 0;
                            goto $l4925;
                            $l4933:;
                            $tmp4826 = 3;
                            goto $l4824;
                            $l4934:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) c4928));
                        {
                            $tmp4936 = dc4855;
                            $tmp4937 = NULL;
                            dc4855 = $tmp4937;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4936));
                        }
                    }
                    $tmp4927 = -1;
                    goto $l4925;
                    $l4925:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4928));
                    c4928 = NULL;
                    switch ($tmp4927) {
                        case 0: goto $l4933;
                        case -1: goto $l4938;
                    }
                    $l4938:;
                }
                }
                else {
                {
                    goto $l4858;
                }
                }
                }
                }
            }
        }
        }
        $l4858:;
        panda$collections$ImmutableArray* $tmp4942 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4942);
        $tmp4941 = $tmp4942;
        $tmp4940 = $tmp4941;
        a4939 = $tmp4940;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4941));
        $l4943:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4946 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4945 = $tmp4946;
            {
                $match$2324_134947 = next4945.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4948, 13);
                panda$core$Bit $tmp4949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp4948);
                if ($tmp4949.value) {
                {
                    panda$core$Int64 $tmp4950 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4939);
                    panda$core$Int64$init$builtin_int64(&$tmp4951, 0);
                    panda$core$Bit $tmp4952 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4950, $tmp4951);
                    if ($tmp4952.value) {
                    {
                        panda$core$String* $tmp4957 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4945);
                        $tmp4956 = $tmp4957;
                        panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4955, $tmp4956);
                        $tmp4954 = $tmp4958;
                        panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4959);
                        $tmp4953 = $tmp4960;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4945, $tmp4953);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4953));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4954));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4956));
                        $tmp4961 = NULL;
                        $returnValue4832 = $tmp4961;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4961));
                        $tmp4826 = 4;
                        goto $l4824;
                        $l4962:;
                        return $returnValue4832;
                    }
                    }
                    {
                        $tmp4964 = a4939;
                        panda$collections$ImmutableArray* $tmp4967 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4966 = $tmp4967;
                        $tmp4965 = $tmp4966;
                        a4939 = $tmp4965;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4965));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4966));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4964));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4968, 11);
                panda$core$Bit $tmp4969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp4968);
                if ($tmp4969.value) {
                {
                    bool $tmp4970 = ((panda$core$Bit) { dc4855 != NULL }).value;
                    if ($tmp4970) goto $l4971;
                    panda$core$Int64 $tmp4972 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4939);
                    panda$core$Int64$init$builtin_int64(&$tmp4973, 0);
                    panda$core$Bit $tmp4974 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4972, $tmp4973);
                    $tmp4970 = $tmp4974.value;
                    $l4971:;
                    panda$core$Bit $tmp4975 = { $tmp4970 };
                    if ($tmp4975.value) {
                    {
                        panda$core$String* $tmp4980 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4945);
                        $tmp4979 = $tmp4980;
                        panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4978, $tmp4979);
                        $tmp4977 = $tmp4981;
                        panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4982);
                        $tmp4976 = $tmp4983;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4945, $tmp4976);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4976));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4977));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4979));
                        $tmp4984 = NULL;
                        $returnValue4832 = $tmp4984;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4984));
                        $tmp4826 = 5;
                        goto $l4824;
                        $l4985:;
                        return $returnValue4832;
                    }
                    }
                    {
                        $tmp4987 = dc4855;
                        org$pandalanguage$pandac$ASTNode* $tmp4990 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4989 = $tmp4990;
                        $tmp4988 = $tmp4989;
                        dc4855 = $tmp4988;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4988));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4989));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4987));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4991, 17);
                panda$core$Bit $tmp4992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp4991);
                if ($tmp4992.value) {
                {
                    int $tmp4995;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4999 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855, a4939);
                        $tmp4998 = $tmp4999;
                        $tmp4997 = $tmp4998;
                        decl4996 = $tmp4997;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4997));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4998));
                        if (((panda$core$Bit) { decl4996 == NULL }).value) {
                        {
                            $tmp5000 = NULL;
                            $returnValue4832 = $tmp5000;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5000));
                            $tmp4995 = 0;
                            goto $l4993;
                            $l5001:;
                            $tmp4826 = 6;
                            goto $l4824;
                            $l5002:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) decl4996));
                        {
                            $tmp5004 = dc4855;
                            $tmp5005 = NULL;
                            dc4855 = $tmp5005;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5005));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5004));
                        }
                        {
                            $tmp5006 = a4939;
                            panda$collections$ImmutableArray* $tmp5009 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5009);
                            $tmp5008 = $tmp5009;
                            $tmp5007 = $tmp5008;
                            a4939 = $tmp5007;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5007));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5008));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5006));
                        }
                    }
                    $tmp4995 = -1;
                    goto $l4993;
                    $l4993:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4996));
                    decl4996 = NULL;
                    switch ($tmp4995) {
                        case 0: goto $l5001;
                        case -1: goto $l5010;
                    }
                    $l5010:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5011, 18);
                panda$core$Bit $tmp5012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5011);
                if ($tmp5012.value) {
                {
                    int $tmp5015;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5019 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855, a4939);
                        $tmp5018 = $tmp5019;
                        $tmp5017 = $tmp5018;
                        decl5016 = $tmp5017;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5018));
                        if (((panda$core$Bit) { decl5016 == NULL }).value) {
                        {
                            $tmp5020 = NULL;
                            $returnValue4832 = $tmp5020;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5020));
                            $tmp5015 = 0;
                            goto $l5013;
                            $l5021:;
                            $tmp4826 = 7;
                            goto $l4824;
                            $l5022:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) decl5016));
                        {
                            $tmp5024 = dc4855;
                            $tmp5025 = NULL;
                            dc4855 = $tmp5025;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5025));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5024));
                        }
                        {
                            $tmp5026 = a4939;
                            panda$collections$ImmutableArray* $tmp5029 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5029);
                            $tmp5028 = $tmp5029;
                            $tmp5027 = $tmp5028;
                            a4939 = $tmp5027;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5027));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5028));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5026));
                        }
                    }
                    $tmp5015 = -1;
                    goto $l5013;
                    $l5013:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5016));
                    decl5016 = NULL;
                    switch ($tmp5015) {
                        case 0: goto $l5021;
                        case -1: goto $l5030;
                    }
                    $l5030:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5031, 19);
                panda$core$Bit $tmp5032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5031);
                if ($tmp5032.value) {
                {
                    int $tmp5035;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5039 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855, a4939);
                        $tmp5038 = $tmp5039;
                        $tmp5037 = $tmp5038;
                        decl5036 = $tmp5037;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5037));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5038));
                        if (((panda$core$Bit) { decl5036 == NULL }).value) {
                        {
                            $tmp5040 = NULL;
                            $returnValue4832 = $tmp5040;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5040));
                            $tmp5035 = 0;
                            goto $l5033;
                            $l5041:;
                            $tmp4826 = 8;
                            goto $l4824;
                            $l5042:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) decl5036));
                        {
                            $tmp5044 = dc4855;
                            $tmp5045 = NULL;
                            dc4855 = $tmp5045;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5045));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5044));
                        }
                        {
                            $tmp5046 = a4939;
                            panda$collections$ImmutableArray* $tmp5049 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5049);
                            $tmp5048 = $tmp5049;
                            $tmp5047 = $tmp5048;
                            a4939 = $tmp5047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5047));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5048));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5046));
                        }
                    }
                    $tmp5035 = -1;
                    goto $l5033;
                    $l5033:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5036));
                    decl5036 = NULL;
                    switch ($tmp5035) {
                        case -1: goto $l5050;
                        case 0: goto $l5041;
                    }
                    $l5050:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5052, 21);
                panda$core$Bit $tmp5053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5052);
                bool $tmp5051 = $tmp5053.value;
                if ($tmp5051) goto $l5054;
                panda$core$Int64$init$builtin_int64(&$tmp5055, 20);
                panda$core$Bit $tmp5056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5055);
                $tmp5051 = $tmp5056.value;
                $l5054:;
                panda$core$Bit $tmp5057 = { $tmp5051 };
                if ($tmp5057.value) {
                {
                    int $tmp5060;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5064 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855, a4939);
                        $tmp5063 = $tmp5064;
                        $tmp5062 = $tmp5063;
                        decl5061 = $tmp5062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5063));
                        if (((panda$core$Bit) { decl5061 == NULL }).value) {
                        {
                            $tmp5065 = NULL;
                            $returnValue4832 = $tmp5065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5065));
                            $tmp5060 = 0;
                            goto $l5058;
                            $l5066:;
                            $tmp4826 = 9;
                            goto $l4824;
                            $l5067:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) decl5061));
                        {
                            $tmp5069 = dc4855;
                            $tmp5070 = NULL;
                            dc4855 = $tmp5070;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5070));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5069));
                        }
                        {
                            $tmp5071 = a4939;
                            panda$collections$ImmutableArray* $tmp5074 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5074);
                            $tmp5073 = $tmp5074;
                            $tmp5072 = $tmp5073;
                            a4939 = $tmp5072;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5072));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5073));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5071));
                        }
                    }
                    $tmp5060 = -1;
                    goto $l5058;
                    $l5058:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5061));
                    decl5061 = NULL;
                    switch ($tmp5060) {
                        case -1: goto $l5075;
                        case 0: goto $l5066;
                    }
                    $l5075:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5079, 23);
                panda$core$Bit $tmp5080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5079);
                bool $tmp5078 = $tmp5080.value;
                if ($tmp5078) goto $l5081;
                panda$core$Int64$init$builtin_int64(&$tmp5082, 24);
                panda$core$Bit $tmp5083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5082);
                $tmp5078 = $tmp5083.value;
                $l5081:;
                panda$core$Bit $tmp5084 = { $tmp5078 };
                bool $tmp5077 = $tmp5084.value;
                if ($tmp5077) goto $l5085;
                panda$core$Int64$init$builtin_int64(&$tmp5086, 25);
                panda$core$Bit $tmp5087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5086);
                $tmp5077 = $tmp5087.value;
                $l5085:;
                panda$core$Bit $tmp5088 = { $tmp5077 };
                bool $tmp5076 = $tmp5088.value;
                if ($tmp5076) goto $l5089;
                panda$core$Int64$init$builtin_int64(&$tmp5090, 26);
                panda$core$Bit $tmp5091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5090);
                $tmp5076 = $tmp5091.value;
                $l5089:;
                panda$core$Bit $tmp5092 = { $tmp5076 };
                if ($tmp5092.value) {
                {
                    int $tmp5095;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5099 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4855, a4939);
                        $tmp5098 = $tmp5099;
                        $tmp5097 = $tmp5098;
                        decl5096 = $tmp5097;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5097));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5098));
                        if (((panda$core$Bit) { decl5096 == NULL }).value) {
                        {
                            $tmp5100 = NULL;
                            $returnValue4832 = $tmp5100;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5100));
                            $tmp5095 = 0;
                            goto $l5093;
                            $l5101:;
                            $tmp4826 = 10;
                            goto $l4824;
                            $l5102:;
                            return $returnValue4832;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4851, ((panda$core$Object*) decl5096));
                        {
                            $tmp5104 = dc4855;
                            $tmp5105 = NULL;
                            dc4855 = $tmp5105;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5105));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5104));
                        }
                        {
                            $tmp5106 = a4939;
                            panda$collections$ImmutableArray* $tmp5109 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5109);
                            $tmp5108 = $tmp5109;
                            $tmp5107 = $tmp5108;
                            a4939 = $tmp5107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5107));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5108));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5106));
                        }
                    }
                    $tmp5095 = -1;
                    goto $l5093;
                    $l5093:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5096));
                    decl5096 = NULL;
                    switch ($tmp5095) {
                        case 0: goto $l5101;
                        case -1: goto $l5110;
                    }
                    $l5110:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5111, 100);
                panda$core$Bit $tmp5112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2324_134947.$rawValue, $tmp5111);
                if ($tmp5112.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5114, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5113, $tmp5114);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5113, &$s5115);
                    goto $l4944;
                }
                }
                else {
                {
                    panda$core$String* $tmp5120 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4945);
                    $tmp5119 = $tmp5120;
                    panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5118, $tmp5119);
                    $tmp5117 = $tmp5121;
                    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5122);
                    $tmp5116 = $tmp5123;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4945, $tmp5116);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5116));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5117));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5119));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5124 = NULL;
                    $returnValue4832 = $tmp5124;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5124));
                    $tmp4826 = 11;
                    goto $l4824;
                    $l5125:;
                    return $returnValue4832;
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
        $l4944:;
        org$pandalanguage$pandac$ASTNode* $tmp5129 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5130, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5132, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5131, $tmp5132);
        panda$core$String* $tmp5134 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4836.value));
        $tmp5133 = $tmp5134;
        panda$collections$ImmutableArray* $tmp5136 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4851);
        $tmp5135 = $tmp5136;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5129, $tmp5130, ((org$pandalanguage$pandac$parser$Token) start4827.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5131, $tmp5133, NULL, NULL, $tmp5135);
        $tmp5128 = $tmp5129;
        $tmp5127 = $tmp5128;
        $returnValue4832 = $tmp5127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5133));
        $tmp4826 = 12;
        goto $l4824;
        $l5137:;
        return $returnValue4832;
    }
    $l4824:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4939));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4855));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4851));
    members4851 = NULL;
    a4939 = NULL;
    switch ($tmp4826) {
        case 8: goto $l5042;
        case 7: goto $l5022;
        case 9: goto $l5067;
        case 1: goto $l4842;
        case 2: goto $l4849;
        case 5: goto $l4985;
        case 6: goto $l5002;
        case 12: goto $l5137;
        case 4: goto $l4962;
        case 10: goto $l5102;
        case 3: goto $l4934;
        case 0: goto $l4834;
        case 11: goto $l5125;
    }
    $l5139:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5143;
    org$pandalanguage$pandac$ASTNode* dc5145 = NULL;
    panda$core$Int64 $tmp5146;
    org$pandalanguage$pandac$ASTNode* $tmp5148;
    org$pandalanguage$pandac$ASTNode* $tmp5149;
    org$pandalanguage$pandac$ASTNode* $tmp5150;
    org$pandalanguage$pandac$ASTNode* $returnValue5152;
    org$pandalanguage$pandac$ASTNode* $tmp5153;
    org$pandalanguage$pandac$ASTNode* $tmp5156;
    org$pandalanguage$pandac$ASTNode* $tmp5157;
    panda$collections$ImmutableArray* a5158 = NULL;
    panda$collections$ImmutableArray* $tmp5159;
    panda$collections$ImmutableArray* $tmp5160;
    org$pandalanguage$pandac$ASTNode* $tmp5162;
    org$pandalanguage$pandac$parser$Token$Kind $match$2410_95165;
    panda$core$Int64 $tmp5167;
    org$pandalanguage$pandac$ASTNode* $tmp5169;
    org$pandalanguage$pandac$ASTNode* $tmp5170;
    panda$core$Int64 $tmp5174;
    org$pandalanguage$pandac$ASTNode* $tmp5176;
    org$pandalanguage$pandac$ASTNode* $tmp5177;
    panda$core$Int64 $tmp5181;
    org$pandalanguage$pandac$ASTNode* $tmp5183;
    org$pandalanguage$pandac$ASTNode* $tmp5184;
    panda$core$Int64 $tmp5189;
    panda$core$Int64 $tmp5192;
    org$pandalanguage$pandac$ASTNode* $tmp5195;
    org$pandalanguage$pandac$ASTNode* $tmp5196;
    panda$core$Int64 $tmp5200;
    org$pandalanguage$pandac$ASTNode* $tmp5202;
    org$pandalanguage$pandac$ASTNode* $tmp5203;
    panda$core$Int64 $tmp5210;
    panda$core$Int64 $tmp5213;
    panda$core$Int64 $tmp5217;
    panda$core$Int64 $tmp5221;
    org$pandalanguage$pandac$ASTNode* $tmp5224;
    org$pandalanguage$pandac$ASTNode* $tmp5225;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5229;
    panda$core$Int64 $tmp5230;
    org$pandalanguage$pandac$ASTNode* $tmp5232;
    int $tmp5142;
    {
        org$pandalanguage$pandac$parser$Token $tmp5144 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5143 = $tmp5144;
        memset(&dc5145, 0, sizeof(dc5145));
        panda$core$Int64$init$builtin_int64(&$tmp5146, 11);
        panda$core$Bit $tmp5147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5143.kind.$rawValue, $tmp5146);
        if ($tmp5147.value) {
        {
            {
                $tmp5148 = dc5145;
                org$pandalanguage$pandac$ASTNode* $tmp5151 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5150 = $tmp5151;
                $tmp5149 = $tmp5150;
                dc5145 = $tmp5149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5148));
            }
            if (((panda$core$Bit) { dc5145 == NULL }).value) {
            {
                $tmp5153 = NULL;
                $returnValue5152 = $tmp5153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5153));
                $tmp5142 = 0;
                goto $l5140;
                $l5154:;
                return $returnValue5152;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5156 = dc5145;
                $tmp5157 = NULL;
                dc5145 = $tmp5157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5156));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5161 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5160 = $tmp5161;
        $tmp5159 = $tmp5160;
        a5158 = $tmp5159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5160));
        if (((panda$core$Bit) { a5158 == NULL }).value) {
        {
            $tmp5162 = NULL;
            $returnValue5152 = $tmp5162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5162));
            $tmp5142 = 1;
            goto $l5140;
            $l5163:;
            return $returnValue5152;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5166 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2410_95165 = $tmp5166.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5167, 17);
            panda$core$Bit $tmp5168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5167);
            if ($tmp5168.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5171 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5170 = $tmp5171;
                $tmp5169 = $tmp5170;
                $returnValue5152 = $tmp5169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5170));
                $tmp5142 = 2;
                goto $l5140;
                $l5172:;
                return $returnValue5152;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5174, 18);
            panda$core$Bit $tmp5175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5174);
            if ($tmp5175.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5178 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5177 = $tmp5178;
                $tmp5176 = $tmp5177;
                $returnValue5152 = $tmp5176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5177));
                $tmp5142 = 3;
                goto $l5140;
                $l5179:;
                return $returnValue5152;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5181, 19);
            panda$core$Bit $tmp5182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5181);
            if ($tmp5182.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5185 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5184 = $tmp5185;
                $tmp5183 = $tmp5184;
                $returnValue5152 = $tmp5183;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5184));
                $tmp5142 = 4;
                goto $l5140;
                $l5186:;
                return $returnValue5152;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5189, 21);
            panda$core$Bit $tmp5190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5189);
            bool $tmp5188 = $tmp5190.value;
            if ($tmp5188) goto $l5191;
            panda$core$Int64$init$builtin_int64(&$tmp5192, 20);
            panda$core$Bit $tmp5193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5192);
            $tmp5188 = $tmp5193.value;
            $l5191:;
            panda$core$Bit $tmp5194 = { $tmp5188 };
            if ($tmp5194.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5197 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5196 = $tmp5197;
                $tmp5195 = $tmp5196;
                $returnValue5152 = $tmp5195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5196));
                $tmp5142 = 5;
                goto $l5140;
                $l5198:;
                return $returnValue5152;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5200, 22);
            panda$core$Bit $tmp5201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5200);
            if ($tmp5201.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5204 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5203 = $tmp5204;
                $tmp5202 = $tmp5203;
                $returnValue5152 = $tmp5202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5203));
                $tmp5142 = 6;
                goto $l5140;
                $l5205:;
                return $returnValue5152;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5210, 23);
            panda$core$Bit $tmp5211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5210);
            bool $tmp5209 = $tmp5211.value;
            if ($tmp5209) goto $l5212;
            panda$core$Int64$init$builtin_int64(&$tmp5213, 24);
            panda$core$Bit $tmp5214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5213);
            $tmp5209 = $tmp5214.value;
            $l5212:;
            panda$core$Bit $tmp5215 = { $tmp5209 };
            bool $tmp5208 = $tmp5215.value;
            if ($tmp5208) goto $l5216;
            panda$core$Int64$init$builtin_int64(&$tmp5217, 25);
            panda$core$Bit $tmp5218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5217);
            $tmp5208 = $tmp5218.value;
            $l5216:;
            panda$core$Bit $tmp5219 = { $tmp5208 };
            bool $tmp5207 = $tmp5219.value;
            if ($tmp5207) goto $l5220;
            panda$core$Int64$init$builtin_int64(&$tmp5221, 26);
            panda$core$Bit $tmp5222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2410_95165.$rawValue, $tmp5221);
            $tmp5207 = $tmp5222.value;
            $l5220:;
            panda$core$Bit $tmp5223 = { $tmp5207 };
            if ($tmp5223.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5226 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5145, a5158);
                $tmp5225 = $tmp5226;
                $tmp5224 = $tmp5225;
                $returnValue5152 = $tmp5224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5225));
                $tmp5142 = 7;
                goto $l5140;
                $l5227:;
                return $returnValue5152;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5230, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5229, $tmp5230);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5229, &$s5231);
                $tmp5232 = NULL;
                $returnValue5152 = $tmp5232;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5232));
                $tmp5142 = 8;
                goto $l5140;
                $l5233:;
                return $returnValue5152;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5142 = -1;
    goto $l5140;
    $l5140:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5145));
    a5158 = NULL;
    switch ($tmp5142) {
        case 7: goto $l5227;
        case 5: goto $l5198;
        case 3: goto $l5179;
        case -1: goto $l5235;
        case 4: goto $l5186;
        case 2: goto $l5172;
        case 1: goto $l5163;
        case 8: goto $l5233;
        case 6: goto $l5205;
        case 0: goto $l5154;
    }
    $l5235:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5239;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5240;
    panda$core$Int64 $tmp5241;
    org$pandalanguage$pandac$ASTNode* $returnValue5244;
    org$pandalanguage$pandac$ASTNode* $tmp5245;
    org$pandalanguage$pandac$parser$Token$nullable name5248;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5249;
    panda$core$Int64 $tmp5250;
    org$pandalanguage$pandac$ASTNode* $tmp5253;
    panda$collections$ImmutableArray* generics5256 = NULL;
    panda$core$Int64 $tmp5258;
    panda$collections$ImmutableArray* $tmp5260;
    panda$collections$ImmutableArray* $tmp5261;
    panda$collections$ImmutableArray* $tmp5262;
    org$pandalanguage$pandac$ASTNode* $tmp5264;
    panda$collections$ImmutableArray* $tmp5267;
    panda$collections$ImmutableArray* $tmp5268;
    panda$collections$ImmutableArray* stypes5269 = NULL;
    panda$core$Int64 $tmp5271;
    panda$collections$ImmutableArray* $tmp5273;
    panda$collections$ImmutableArray* $tmp5274;
    panda$collections$ImmutableArray* $tmp5275;
    org$pandalanguage$pandac$ASTNode* $tmp5277;
    panda$collections$ImmutableArray* $tmp5280;
    panda$collections$ImmutableArray* $tmp5281;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5282;
    panda$core$Int64 $tmp5283;
    org$pandalanguage$pandac$ASTNode* $tmp5286;
    panda$collections$Array* members5289 = NULL;
    panda$collections$Array* $tmp5290;
    panda$collections$Array* $tmp5291;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5296;
    panda$core$Int64 $tmp5297;
    org$pandalanguage$pandac$ASTNode* member5302 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5303;
    org$pandalanguage$pandac$ASTNode* $tmp5304;
    org$pandalanguage$pandac$ASTNode* $tmp5306;
    org$pandalanguage$pandac$ASTNode* $tmp5311;
    org$pandalanguage$pandac$ASTNode* $tmp5312;
    panda$core$Int64 $tmp5314;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5315;
    panda$core$Int64 $tmp5316;
    panda$core$String* $tmp5317;
    panda$collections$ImmutableArray* $tmp5319;
    int $tmp5238;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5241, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5240, $tmp5241);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5243 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5240, &$s5242);
        start5239 = $tmp5243;
        if (((panda$core$Bit) { !start5239.nonnull }).value) {
        {
            $tmp5245 = NULL;
            $returnValue5244 = $tmp5245;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5245));
            $tmp5238 = 0;
            goto $l5236;
            $l5246:;
            return $returnValue5244;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5250, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5249, $tmp5250);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5252 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5249, &$s5251);
        name5248 = $tmp5252;
        if (((panda$core$Bit) { !name5248.nonnull }).value) {
        {
            $tmp5253 = NULL;
            $returnValue5244 = $tmp5253;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5253));
            $tmp5238 = 1;
            goto $l5236;
            $l5254:;
            return $returnValue5244;
        }
        }
        memset(&generics5256, 0, sizeof(generics5256));
        org$pandalanguage$pandac$parser$Token $tmp5257 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5258, 62);
        panda$core$Bit $tmp5259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5257.kind.$rawValue, $tmp5258);
        if ($tmp5259.value) {
        {
            {
                $tmp5260 = generics5256;
                panda$collections$ImmutableArray* $tmp5263 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5262 = $tmp5263;
                $tmp5261 = $tmp5262;
                generics5256 = $tmp5261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5260));
            }
            if (((panda$core$Bit) { generics5256 == NULL }).value) {
            {
                $tmp5264 = NULL;
                $returnValue5244 = $tmp5264;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5264));
                $tmp5238 = 2;
                goto $l5236;
                $l5265:;
                return $returnValue5244;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5267 = generics5256;
                $tmp5268 = NULL;
                generics5256 = $tmp5268;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5268));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5267));
            }
        }
        }
        memset(&stypes5269, 0, sizeof(stypes5269));
        org$pandalanguage$pandac$parser$Token $tmp5270 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5271, 95);
        panda$core$Bit $tmp5272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5270.kind.$rawValue, $tmp5271);
        if ($tmp5272.value) {
        {
            {
                $tmp5273 = stypes5269;
                panda$collections$ImmutableArray* $tmp5276 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5275 = $tmp5276;
                $tmp5274 = $tmp5275;
                stypes5269 = $tmp5274;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5273));
            }
            if (((panda$core$Bit) { stypes5269 == NULL }).value) {
            {
                $tmp5277 = NULL;
                $returnValue5244 = $tmp5277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5277));
                $tmp5238 = 3;
                goto $l5236;
                $l5278:;
                return $returnValue5244;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5280 = stypes5269;
                $tmp5281 = NULL;
                stypes5269 = $tmp5281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5280));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5283, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5282, $tmp5283);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5285 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5282, &$s5284);
        if (((panda$core$Bit) { !$tmp5285.nonnull }).value) {
        {
            $tmp5286 = NULL;
            $returnValue5244 = $tmp5286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5286));
            $tmp5238 = 4;
            goto $l5236;
            $l5287:;
            return $returnValue5244;
        }
        }
        panda$collections$Array* $tmp5292 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5292);
        $tmp5291 = $tmp5292;
        $tmp5290 = $tmp5291;
        members5289 = $tmp5290;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5291));
        $l5293:;
        panda$core$Int64$init$builtin_int64(&$tmp5297, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5296, $tmp5297);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5298 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5296);
        bool $tmp5295 = ((panda$core$Bit) { !$tmp5298.nonnull }).value;
        if (!$tmp5295) goto $l5294;
        {
            int $tmp5301;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5305 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5304 = $tmp5305;
                $tmp5303 = $tmp5304;
                member5302 = $tmp5303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5304));
                if (((panda$core$Bit) { member5302 == NULL }).value) {
                {
                    $tmp5306 = NULL;
                    $returnValue5244 = $tmp5306;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5306));
                    $tmp5301 = 0;
                    goto $l5299;
                    $l5307:;
                    $tmp5238 = 5;
                    goto $l5236;
                    $l5308:;
                    return $returnValue5244;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5289, ((panda$core$Object*) member5302));
            }
            $tmp5301 = -1;
            goto $l5299;
            $l5299:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5302));
            member5302 = NULL;
            switch ($tmp5301) {
                case -1: goto $l5310;
                case 0: goto $l5307;
            }
            $l5310:;
        }
        goto $l5293;
        $l5294:;
        org$pandalanguage$pandac$ASTNode* $tmp5313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5314, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5316, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5315, $tmp5316);
        panda$core$String* $tmp5318 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5248.value));
        $tmp5317 = $tmp5318;
        panda$collections$ImmutableArray* $tmp5320 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5289);
        $tmp5319 = $tmp5320;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5313, $tmp5314, ((org$pandalanguage$pandac$parser$Token) start5239.value).position, p_doccomment, p_annotations, $tmp5315, $tmp5317, generics5256, stypes5269, $tmp5319);
        $tmp5312 = $tmp5313;
        $tmp5311 = $tmp5312;
        $returnValue5244 = $tmp5311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5317));
        $tmp5238 = 6;
        goto $l5236;
        $l5321:;
        return $returnValue5244;
    }
    $l5236:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5289));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5256));
    members5289 = NULL;
    switch ($tmp5238) {
        case 3: goto $l5278;
        case 4: goto $l5287;
        case 1: goto $l5254;
        case 6: goto $l5321;
        case 5: goto $l5308;
        case 2: goto $l5265;
        case 0: goto $l5246;
    }
    $l5323:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5327;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5328;
    panda$core$Int64 $tmp5329;
    org$pandalanguage$pandac$ASTNode* $returnValue5332;
    org$pandalanguage$pandac$ASTNode* $tmp5333;
    org$pandalanguage$pandac$parser$Token$nullable name5336;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5337;
    panda$core$Int64 $tmp5338;
    org$pandalanguage$pandac$ASTNode* $tmp5341;
    panda$collections$ImmutableArray* generics5344 = NULL;
    panda$core$Int64 $tmp5346;
    panda$collections$ImmutableArray* $tmp5348;
    panda$collections$ImmutableArray* $tmp5349;
    panda$collections$ImmutableArray* $tmp5350;
    org$pandalanguage$pandac$ASTNode* $tmp5352;
    panda$collections$ImmutableArray* $tmp5355;
    panda$collections$ImmutableArray* $tmp5356;
    panda$collections$ImmutableArray* $tmp5357;
    panda$collections$Array* intfs5359 = NULL;
    panda$collections$Array* $tmp5360;
    panda$collections$Array* $tmp5361;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5363;
    panda$core$Int64 $tmp5364;
    org$pandalanguage$pandac$ASTNode* t5369 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5370;
    org$pandalanguage$pandac$ASTNode* $tmp5371;
    org$pandalanguage$pandac$ASTNode* $tmp5373;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5380;
    panda$core$Int64 $tmp5381;
    org$pandalanguage$pandac$ASTNode* $tmp5383;
    org$pandalanguage$pandac$ASTNode* $tmp5384;
    org$pandalanguage$pandac$ASTNode* $tmp5385;
    org$pandalanguage$pandac$ASTNode* $tmp5387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5392;
    panda$core$Int64 $tmp5393;
    org$pandalanguage$pandac$ASTNode* $tmp5396;
    panda$collections$Array* members5399 = NULL;
    panda$collections$Array* $tmp5400;
    panda$collections$Array* $tmp5401;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5406;
    panda$core$Int64 $tmp5407;
    org$pandalanguage$pandac$ASTNode* member5412 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5413;
    org$pandalanguage$pandac$ASTNode* $tmp5414;
    org$pandalanguage$pandac$ASTNode* $tmp5416;
    org$pandalanguage$pandac$ASTNode* $tmp5421;
    org$pandalanguage$pandac$ASTNode* $tmp5422;
    panda$core$Int64 $tmp5424;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5425;
    panda$core$Int64 $tmp5426;
    panda$core$String* $tmp5427;
    panda$collections$ImmutableArray* $tmp5429;
    panda$collections$ImmutableArray* $tmp5431;
    int $tmp5326;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5329, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5328, $tmp5329);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5331 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5328, &$s5330);
        start5327 = $tmp5331;
        if (((panda$core$Bit) { !start5327.nonnull }).value) {
        {
            $tmp5333 = NULL;
            $returnValue5332 = $tmp5333;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5333));
            $tmp5326 = 0;
            goto $l5324;
            $l5334:;
            return $returnValue5332;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5338, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5337, $tmp5338);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5340 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5337, &$s5339);
        name5336 = $tmp5340;
        if (((panda$core$Bit) { !name5336.nonnull }).value) {
        {
            $tmp5341 = NULL;
            $returnValue5332 = $tmp5341;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5341));
            $tmp5326 = 1;
            goto $l5324;
            $l5342:;
            return $returnValue5332;
        }
        }
        memset(&generics5344, 0, sizeof(generics5344));
        org$pandalanguage$pandac$parser$Token $tmp5345 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5346, 62);
        panda$core$Bit $tmp5347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5345.kind.$rawValue, $tmp5346);
        if ($tmp5347.value) {
        {
            {
                $tmp5348 = generics5344;
                panda$collections$ImmutableArray* $tmp5351 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5350 = $tmp5351;
                $tmp5349 = $tmp5350;
                generics5344 = $tmp5349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5348));
            }
            if (((panda$core$Bit) { generics5344 == NULL }).value) {
            {
                $tmp5352 = NULL;
                $returnValue5332 = $tmp5352;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5352));
                $tmp5326 = 2;
                goto $l5324;
                $l5353:;
                return $returnValue5332;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5355 = generics5344;
                panda$collections$ImmutableArray* $tmp5358 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5358);
                $tmp5357 = $tmp5358;
                $tmp5356 = $tmp5357;
                generics5344 = $tmp5356;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5355));
            }
        }
        }
        panda$collections$Array* $tmp5362 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5362);
        $tmp5361 = $tmp5362;
        $tmp5360 = $tmp5361;
        intfs5359 = $tmp5360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5361));
        panda$core$Int64$init$builtin_int64(&$tmp5364, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5363, $tmp5364);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5365 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5363);
        if (((panda$core$Bit) { $tmp5365.nonnull }).value) {
        {
            int $tmp5368;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5372 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5371 = $tmp5372;
                $tmp5370 = $tmp5371;
                t5369 = $tmp5370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5371));
                if (((panda$core$Bit) { t5369 == NULL }).value) {
                {
                    $tmp5373 = NULL;
                    $returnValue5332 = $tmp5373;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5373));
                    $tmp5368 = 0;
                    goto $l5366;
                    $l5374:;
                    $tmp5326 = 3;
                    goto $l5324;
                    $l5375:;
                    return $returnValue5332;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5359, ((panda$core$Object*) t5369));
                $l5377:;
                panda$core$Int64$init$builtin_int64(&$tmp5381, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5380, $tmp5381);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5382 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5380);
                bool $tmp5379 = ((panda$core$Bit) { $tmp5382.nonnull }).value;
                if (!$tmp5379) goto $l5378;
                {
                    {
                        $tmp5383 = t5369;
                        org$pandalanguage$pandac$ASTNode* $tmp5386 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5385 = $tmp5386;
                        $tmp5384 = $tmp5385;
                        t5369 = $tmp5384;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5384));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5383));
                    }
                    if (((panda$core$Bit) { t5369 == NULL }).value) {
                    {
                        $tmp5387 = NULL;
                        $returnValue5332 = $tmp5387;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5387));
                        $tmp5368 = 1;
                        goto $l5366;
                        $l5388:;
                        $tmp5326 = 4;
                        goto $l5324;
                        $l5389:;
                        return $returnValue5332;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5359, ((panda$core$Object*) t5369));
                }
                goto $l5377;
                $l5378:;
            }
            $tmp5368 = -1;
            goto $l5366;
            $l5366:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5369));
            t5369 = NULL;
            switch ($tmp5368) {
                case -1: goto $l5391;
                case 0: goto $l5374;
                case 1: goto $l5388;
            }
            $l5391:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5393, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5392, $tmp5393);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5395 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5392, &$s5394);
        if (((panda$core$Bit) { !$tmp5395.nonnull }).value) {
        {
            $tmp5396 = NULL;
            $returnValue5332 = $tmp5396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5396));
            $tmp5326 = 5;
            goto $l5324;
            $l5397:;
            return $returnValue5332;
        }
        }
        panda$collections$Array* $tmp5402 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5402);
        $tmp5401 = $tmp5402;
        $tmp5400 = $tmp5401;
        members5399 = $tmp5400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5401));
        $l5403:;
        panda$core$Int64$init$builtin_int64(&$tmp5407, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5406, $tmp5407);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5408 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5406);
        bool $tmp5405 = ((panda$core$Bit) { !$tmp5408.nonnull }).value;
        if (!$tmp5405) goto $l5404;
        {
            int $tmp5411;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5415 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5414 = $tmp5415;
                $tmp5413 = $tmp5414;
                member5412 = $tmp5413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5414));
                if (((panda$core$Bit) { member5412 == NULL }).value) {
                {
                    $tmp5416 = NULL;
                    $returnValue5332 = $tmp5416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5416));
                    $tmp5411 = 0;
                    goto $l5409;
                    $l5417:;
                    $tmp5326 = 6;
                    goto $l5324;
                    $l5418:;
                    return $returnValue5332;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5399, ((panda$core$Object*) member5412));
            }
            $tmp5411 = -1;
            goto $l5409;
            $l5409:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5412));
            member5412 = NULL;
            switch ($tmp5411) {
                case 0: goto $l5417;
                case -1: goto $l5420;
            }
            $l5420:;
        }
        goto $l5403;
        $l5404:;
        org$pandalanguage$pandac$ASTNode* $tmp5423 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5424, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5426, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5425, $tmp5426);
        panda$core$String* $tmp5428 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5336.value));
        $tmp5427 = $tmp5428;
        panda$collections$ImmutableArray* $tmp5430 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5359);
        $tmp5429 = $tmp5430;
        panda$collections$ImmutableArray* $tmp5432 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5399);
        $tmp5431 = $tmp5432;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5423, $tmp5424, ((org$pandalanguage$pandac$parser$Token) start5327.value).position, p_doccomment, p_annotations, $tmp5425, $tmp5427, generics5344, $tmp5429, $tmp5431);
        $tmp5422 = $tmp5423;
        $tmp5421 = $tmp5422;
        $returnValue5332 = $tmp5421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5427));
        $tmp5326 = 7;
        goto $l5324;
        $l5433:;
        return $returnValue5332;
    }
    $l5324:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5344));
    intfs5359 = NULL;
    members5399 = NULL;
    switch ($tmp5326) {
        case 4: goto $l5389;
        case 7: goto $l5433;
        case 6: goto $l5418;
        case 5: goto $l5397;
        case 2: goto $l5353;
        case 1: goto $l5342;
        case 0: goto $l5334;
        case 3: goto $l5375;
    }
    $l5435:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2534_95436;
    panda$core$Int64 $tmp5438;
    org$pandalanguage$pandac$ASTNode* $returnValue5440;
    org$pandalanguage$pandac$ASTNode* $tmp5441;
    org$pandalanguage$pandac$ASTNode* $tmp5442;
    panda$core$Int64 $tmp5445;
    org$pandalanguage$pandac$ASTNode* $tmp5447;
    org$pandalanguage$pandac$ASTNode* $tmp5448;
    org$pandalanguage$pandac$ASTNode* $tmp5451;
    org$pandalanguage$pandac$ASTNode* $tmp5452;
    {
        org$pandalanguage$pandac$parser$Token $tmp5437 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2534_95436 = $tmp5437.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5438, 15);
        panda$core$Bit $tmp5439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2534_95436.$rawValue, $tmp5438);
        if ($tmp5439.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5443 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5442 = $tmp5443;
            $tmp5441 = $tmp5442;
            $returnValue5440 = $tmp5441;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5442));
            return $returnValue5440;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5445, 14);
        panda$core$Bit $tmp5446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2534_95436.$rawValue, $tmp5445);
        if ($tmp5446.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5449 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5448 = $tmp5449;
            $tmp5447 = $tmp5448;
            $returnValue5440 = $tmp5447;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5447));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5448));
            return $returnValue5440;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5453 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5452 = $tmp5453;
            $tmp5451 = $tmp5452;
            $returnValue5440 = $tmp5451;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5451));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5452));
            return $returnValue5440;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5458 = NULL;
    panda$collections$Array* $tmp5459;
    panda$collections$Array* $tmp5460;
    panda$core$Int64 $tmp5466;
    org$pandalanguage$pandac$ASTNode* entry5471 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5472;
    org$pandalanguage$pandac$ASTNode* $tmp5473;
    org$pandalanguage$pandac$ASTNode* $returnValue5475;
    org$pandalanguage$pandac$ASTNode* $tmp5476;
    org$pandalanguage$pandac$ASTNode* $tmp5485;
    org$pandalanguage$pandac$ASTNode* $tmp5486;
    panda$core$Int64 $tmp5488;
    panda$collections$ImmutableArray* $tmp5489;
    int $tmp5457;
    {
        panda$collections$Array* $tmp5461 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5461);
        $tmp5460 = $tmp5461;
        $tmp5459 = $tmp5460;
        entries5458 = $tmp5459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5460));
        $l5462:;
        org$pandalanguage$pandac$parser$Token $tmp5465 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5466, 0);
        panda$core$Bit $tmp5467 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5465.kind.$rawValue, $tmp5466);
        bool $tmp5464 = $tmp5467.value;
        if (!$tmp5464) goto $l5463;
        {
            int $tmp5470;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5474 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5473 = $tmp5474;
                $tmp5472 = $tmp5473;
                entry5471 = $tmp5472;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5473));
                if (((panda$core$Bit) { entry5471 == NULL }).value) {
                {
                    $tmp5476 = NULL;
                    $returnValue5475 = $tmp5476;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5476));
                    $tmp5470 = 0;
                    goto $l5468;
                    $l5477:;
                    $tmp5457 = 0;
                    goto $l5455;
                    $l5478:;
                    return $returnValue5475;
                }
                }
                panda$core$Bit $tmp5480 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5480.value) goto $l5481; else goto $l5482;
                $l5482:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5483, (panda$core$Int64) { 2554 });
                abort();
                $l5481:;
                panda$collections$Array$add$panda$collections$Array$T(entries5458, ((panda$core$Object*) entry5471));
            }
            $tmp5470 = -1;
            goto $l5468;
            $l5468:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5471));
            entry5471 = NULL;
            switch ($tmp5470) {
                case -1: goto $l5484;
                case 0: goto $l5477;
            }
            $l5484:;
        }
        goto $l5462;
        $l5463:;
        org$pandalanguage$pandac$ASTNode* $tmp5487 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5488, 17);
        panda$collections$ImmutableArray* $tmp5490 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5458);
        $tmp5489 = $tmp5490;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5487, $tmp5488, $tmp5489);
        $tmp5486 = $tmp5487;
        $tmp5485 = $tmp5486;
        $returnValue5475 = $tmp5485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5489));
        $tmp5457 = 1;
        goto $l5455;
        $l5491:;
        return $returnValue5475;
    }
    $l5455:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5458));
    entries5458 = NULL;
    switch ($tmp5457) {
        case 0: goto $l5478;
        case 1: goto $l5491;
    }
    $l5493:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5496;
    {
    }
    $tmp5496 = -1;
    goto $l5494;
    $l5494:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5496) {
        case -1: goto $l5497;
    }
    $l5497:;
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

