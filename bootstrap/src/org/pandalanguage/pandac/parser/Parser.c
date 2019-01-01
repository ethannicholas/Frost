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
#include "panda/core/UInt64.h"
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

typedef void (*$fn56)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn61)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn73)(panda$collections$CollectionView*);
typedef void (*$fn96)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn113)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn136)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn145)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn151)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn156)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn240)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn254)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn269)(panda$collections$CollectionView*);
typedef void (*$fn282)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn286)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn293)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn305)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn320)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn332)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn367)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn375)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn417)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn515)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn560)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn574)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn689)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn703)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn793)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn800)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn808)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn815)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn837)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn848)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn872)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn917)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn933)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn1024)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1032)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1043)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1060)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1096)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1104)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1123)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn1141)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1683)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1687)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1703)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1707)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn1729)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1740)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2053)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2204)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2213)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2255)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2312)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2404)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2673)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2825)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2936)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2947)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2959)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2998)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3177)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3230)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3805)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3830)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3871)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3888)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4225)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4314)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4322)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4647)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4680)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4691)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4816)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4838)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4859)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4919)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn4992)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn5018)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5083)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5181)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5211)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5393)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5506)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5524)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5599)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5709)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5728)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 115, 3267958933078468177, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x6f\x72\x6d\x61\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, -6104022719463629235, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 150, 5596123724125244779, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -3528500452895244303, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, -447243349616865045, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x67\x65\x74\x43\x6c\x61\x73\x73\x4e\x61\x6d\x65\x28\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 143, 3966034510964126636, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 4113279969965127102, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x4f\x72\x54\x75\x70\x6c\x65\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, 1133438859089359542, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, 4799290866155849891, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 7025835381767841785, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 1288059034360540827, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -6498999101577693159, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4989268421802719344, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5520043150958930526, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, -4330199518315084178, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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

// line 65
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp36 = &param0->reportErrors;
*$tmp36 = $tmp35;
// line 66
org$pandalanguage$pandac$parser$Lexer** $tmp37 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp38 = *$tmp37;
org$pandalanguage$pandac$parser$Lexer$start$panda$core$String($tmp38, param2);
// line 67
panda$io$File** $tmp39 = &param0->path;
panda$io$File* $tmp40 = *$tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp41 = &param0->path;
*$tmp41 = param1;
// line 68
panda$core$String** $tmp42 = &param0->source;
panda$core$String* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp44 = &param0->source;
*$tmp44 = param2;
// line 69
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp45 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp46 = *$tmp45;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp46);
// line 70
org$pandalanguage$regex$RegexParser** $tmp47 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp48 = *$tmp47;
org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String($tmp48, param1, param2);
// line 71
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp49 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp50 = *$tmp49;
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block1:;
// line 72
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp53 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp54 = *$tmp53;
$fn56 $tmp55 = ($fn56) $tmp54->$class->vtable[2];
$tmp55($tmp54);
goto block2;
block2:;
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
panda$core$Bit local3;
// line 77
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp57 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp58 = *$tmp57;
ITable* $tmp59 = ((panda$collections$CollectionView*) $tmp58)->$class->itable;
while ($tmp59->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
panda$core$Int64 $tmp62 = $tmp60(((panda$collections$CollectionView*) $tmp58));
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 != $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block1:;
// line 78
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp69 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp70 = *$tmp69;
ITable* $tmp71 = ((panda$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
panda$core$Int64 $tmp74 = $tmp72(((panda$collections$CollectionView*) $tmp70));
panda$core$Int64 $tmp75 = (panda$core$Int64) {1};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
panda$core$Int64 $tmp79 = (panda$core$Int64) {$tmp78};
*(&local0) = $tmp79;
// line 79
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp80 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp81 = *$tmp80;
panda$core$Int64 $tmp82 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp83 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp81, $tmp82);
*(&local1) = $tmp83;
// line 80
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp84 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp87 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp85, $tmp86);
// line 81
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp88 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp89 = *$tmp88;
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block3; else goto block4;
block3:;
// line 82
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp92 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp93 = *$tmp92;
org$pandalanguage$pandac$parser$Token $tmp94 = *(&local1);
$fn96 $tmp95 = ($fn96) $tmp93->$class->vtable[6];
$tmp95($tmp93, $tmp94);
goto block4;
block4:;
// line 84
org$pandalanguage$pandac$parser$Token $tmp97 = *(&local1);
return $tmp97;
block2:;
// line 86
org$pandalanguage$pandac$parser$Lexer** $tmp98 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp99 = *$tmp98;
org$pandalanguage$pandac$parser$Token $tmp100 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token($tmp99);
*(&local2) = $tmp100;
// line 87
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp101 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp102 = *$tmp101;
panda$core$Bit $tmp103 = panda$core$Bit$init$builtin_bit($tmp102 != NULL);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block5; else goto block6;
block5:;
// line 88
org$pandalanguage$pandac$parser$Token $tmp105 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp106 = $tmp105.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp107;
$tmp107 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp107->value = $tmp106;
panda$core$Int64 $tmp108 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp109 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp108);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp110;
$tmp110 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp110->value = $tmp109;
ITable* $tmp111 = ((panda$core$Equatable*) $tmp107)->$class->itable;
while ($tmp111->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
panda$core$Bit $tmp114 = $tmp112(((panda$core$Equatable*) $tmp107), ((panda$core$Equatable*) $tmp110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp107)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp110)));
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block7; else goto block8;
block7:;
// line 89
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp116 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp117 = *$tmp116;
panda$collections$Stack** $tmp118 = &$tmp117->stack;
panda$collections$Stack* $tmp119 = *$tmp118;
panda$core$Int64 $tmp120 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp119);
panda$core$Int64 $tmp121 = (panda$core$Int64) {0};
panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp120, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block9; else goto block10;
block9:;
*(&local3) = $tmp122;
goto block11;
block10:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp124 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp125 = *$tmp124;
panda$collections$Stack** $tmp126 = &$tmp125->stack;
panda$collections$Stack* $tmp127 = *$tmp126;
panda$core$Int64 $tmp128 = (panda$core$Int64) {0};
panda$core$Object* $tmp129 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp127, $tmp128);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp130;
$tmp130 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp130->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp129)->value;
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp132 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp131);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp133;
$tmp133 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp133->value = $tmp132;
ITable* $tmp134 = ((panda$core$Equatable*) $tmp130)->$class->itable;
while ($tmp134->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
panda$core$Bit $tmp137 = $tmp135(((panda$core$Equatable*) $tmp130), ((panda$core$Equatable*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp130)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp133)));
*(&local3) = $tmp137;
goto block11;
block11:;
panda$core$Bit $tmp138 = *(&local3);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block12; else goto block14;
block12:;
// line 91
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp140 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp141 = *$tmp140;
panda$core$Int64 $tmp142 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp143 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp142);
$fn145 $tmp144 = ($fn145) $tmp141->$class->vtable[3];
$tmp144($tmp141, $tmp143);
goto block13;
block14:;
// line 1
// line 94
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp146 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp147 = *$tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp149 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp148);
$fn151 $tmp150 = ($fn151) $tmp147->$class->vtable[4];
$tmp150($tmp147, $tmp149);
goto block13;
block13:;
goto block8;
block8:;
// line 97
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp152 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp153 = *$tmp152;
org$pandalanguage$pandac$parser$Token $tmp154 = *(&local2);
$fn156 $tmp155 = ($fn156) $tmp153->$class->vtable[6];
$tmp155($tmp153, $tmp154);
goto block6;
block6:;
// line 99
panda$core$Bit* $tmp157 = &param0->inSpeculative;
panda$core$Bit $tmp158 = *$tmp157;
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block15; else goto block16;
block15:;
// line 100
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp160 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp161 = *$tmp160;
org$pandalanguage$pandac$parser$Token $tmp162 = *(&local2);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp161, $tmp162);
goto block16;
block16:;
// line 102
org$pandalanguage$pandac$parser$Token $tmp163 = *(&local2);
return $tmp163;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
// line 106
goto block1;
block1:;
// line 107
org$pandalanguage$pandac$parser$Token $tmp164 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp164;
// line 108
org$pandalanguage$pandac$parser$Token $tmp165 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp166 = $tmp165.kind;
panda$core$Int64 $tmp167 = $tmp166.$rawValue;
panda$core$Int64 $tmp168 = (panda$core$Int64) {13};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block4; else goto block5;
block4:;
// line 110
goto block1;
block5:;
panda$core$Int64 $tmp171 = (panda$core$Int64) {9};
panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block6; else goto block7;
block6:;
// line 112
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp174 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp175 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp176 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp175);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp174, param0, $tmp176);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp177 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
*(&local1) = $tmp174;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// line 113
goto block8;
block8:;
// line 114
org$pandalanguage$pandac$parser$Token $tmp178 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp178;
// line 115
org$pandalanguage$pandac$parser$Token $tmp179 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp180 = $tmp179.kind;
panda$core$Int64 $tmp181 = $tmp180.$rawValue;
panda$core$Int64 $tmp182 = (panda$core$Int64) {13};
panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block11; else goto block12;
block11:;
// line 117
org$pandalanguage$pandac$parser$Token $tmp185 = *(&local2);
panda$core$String* $tmp186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp185);
panda$core$Bit $tmp187 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp186, &$s188);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
bool $tmp189 = $tmp187.value;
if ($tmp189) goto block13; else goto block14;
block13:;
// line 118
goto block9;
block14:;
goto block10;
block12:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {0};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block15; else goto block10;
block15:;
// line 121
org$pandalanguage$pandac$parser$Token $tmp193 = *(&local2);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp194 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp193;
block10:;
goto block8;
block9:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
panda$core$Int64 $tmp196 = (panda$core$Int64) {10};
panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block16; else goto block17;
block16:;
// line 125
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp199 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp200 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp201 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp200);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp199, param0, $tmp201);
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp202 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local3) = $tmp199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// line 126
goto block18;
block18:;
// line 127
org$pandalanguage$pandac$parser$Token $tmp203 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp203;
// line 128
org$pandalanguage$pandac$parser$Token $tmp204 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp205 = $tmp204.kind;
panda$core$Int64 $tmp206 = $tmp205.$rawValue;
panda$core$Int64 $tmp207 = (panda$core$Int64) {11};
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block21; else goto block22;
block21:;
// line 130
goto block19;
block22:;
panda$core$Int64 $tmp210 = (panda$core$Int64) {0};
panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block23; else goto block20;
block23:;
// line 132
org$pandalanguage$pandac$parser$Token $tmp213 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp213, &$s214);
// line 133
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp216 = &param0->reportErrors;
*$tmp216 = $tmp215;
// line 134
org$pandalanguage$pandac$parser$Token $tmp217 = *(&local4);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp218 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp217;
block20:;
goto block18;
block19:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp219 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 138
org$pandalanguage$pandac$parser$Token $tmp220 = *(&local0);
return $tmp220;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit(false);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp223 = (panda$core$Int64) {105};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 144
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp226 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp227 = *$tmp226;
panda$core$Bit $tmp228 = panda$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 145
goto block3;
block3:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp230 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp231 = *$tmp230;
panda$collections$Array** $tmp232 = &$tmp231->tokens;
panda$collections$Array* $tmp233 = *$tmp232;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp234 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp235 = *$tmp234;
panda$collections$Array** $tmp236 = &$tmp235->tokens;
panda$collections$Array* $tmp237 = *$tmp236;
ITable* $tmp238 = ((panda$collections$CollectionView*) $tmp237)->$class->itable;
while ($tmp238->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
panda$core$Int64 $tmp241 = $tmp239(((panda$collections$CollectionView*) $tmp237));
panda$core$Int64 $tmp242 = (panda$core$Int64) {1};
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243 - $tmp244;
panda$core$Int64 $tmp246 = (panda$core$Int64) {$tmp245};
panda$core$Object* $tmp247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp233, $tmp246);
panda$core$Object** $tmp248 = &((org$pandalanguage$pandac$Pair*) $tmp247)->first;
panda$core$Object* $tmp249 = *$tmp248;
panda$core$String* $tmp250 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp249)->value);
panda$core$String* $tmp251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, param1);
ITable* $tmp252 = ((panda$core$Equatable*) $tmp250)->$class->itable;
while ($tmp252->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[1];
panda$core$Bit $tmp255 = $tmp253(((panda$core$Equatable*) $tmp250), ((panda$core$Equatable*) $tmp251));
panda$core$Panda$unref$panda$core$Object$Q($tmp247);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block4; else goto block5;
block4:;
// line 147
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp257 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp258 = *$tmp257;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp259 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp260 = *$tmp259;
panda$collections$Array** $tmp261 = &$tmp260->tokens;
panda$collections$Array* $tmp262 = *$tmp261;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp263 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp264 = *$tmp263;
panda$collections$Array** $tmp265 = &$tmp264->tokens;
panda$collections$Array* $tmp266 = *$tmp265;
ITable* $tmp267 = ((panda$collections$CollectionView*) $tmp266)->$class->itable;
while ($tmp267->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[0];
panda$core$Int64 $tmp270 = $tmp268(((panda$collections$CollectionView*) $tmp266));
panda$core$Int64 $tmp271 = (panda$core$Int64) {1};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 - $tmp273;
panda$core$Int64 $tmp275 = (panda$core$Int64) {$tmp274};
panda$core$Object* $tmp276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp262, $tmp275);
panda$core$Object** $tmp277 = &((org$pandalanguage$pandac$Pair*) $tmp276)->first;
panda$core$Object* $tmp278 = *$tmp277;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp258, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp278)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp276);
// line 149
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp279 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp280 = *$tmp279;
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[7];
$tmp281($tmp280);
goto block3;
block5:;
// line 151
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp283 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp284 = *$tmp283;
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[7];
$tmp285($tmp284);
goto block2;
block2:;
// line 153
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp287 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp288 = *$tmp287;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp288, param1);
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

// line 157
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp289 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp290 = *$tmp289;
ITable* $tmp291 = ((panda$collections$CollectionView*) $tmp290)->$class->itable;
while ($tmp291->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
panda$core$Int64 $tmp294 = $tmp292(((panda$collections$CollectionView*) $tmp290));
panda$core$Int64 $tmp295 = (panda$core$Int64) {0};
panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp294, $tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block1; else goto block2;
block1:;
// line 158
org$pandalanguage$pandac$parser$Token $tmp298 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp298);
goto block2;
block2:;
// line 160
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp299 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp300 = *$tmp299;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp301 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp302 = *$tmp301;
ITable* $tmp303 = ((panda$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
panda$core$Int64 $tmp306 = $tmp304(((panda$collections$CollectionView*) $tmp302));
panda$core$Int64 $tmp307 = (panda$core$Int64) {1};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
panda$core$Int64 $tmp311 = (panda$core$Int64) {$tmp310};
org$pandalanguage$pandac$parser$Token $tmp312 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp300, $tmp311);
return $tmp312;

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 164
org$pandalanguage$pandac$parser$Token $tmp313 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp313;
// line 165
org$pandalanguage$pandac$parser$Token $tmp314 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp315 = $tmp314.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp316;
$tmp316 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp316->value = $tmp315;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp317;
$tmp317 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp317->value = param1;
ITable* $tmp318 = ((panda$core$Equatable*) $tmp316)->$class->itable;
while ($tmp318->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
panda$core$Bit $tmp321 = $tmp319(((panda$core$Equatable*) $tmp316), ((panda$core$Equatable*) $tmp317));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp316)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp317)));
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block1; else goto block2;
block1:;
// line 166
org$pandalanguage$pandac$parser$Token $tmp323 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp323, true });
block2:;
// line 168
org$pandalanguage$pandac$parser$Token $tmp324 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp324);
// line 169
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1, panda$core$String* param2) {

org$pandalanguage$pandac$parser$Token local0;
// line 173
org$pandalanguage$pandac$parser$Token $tmp325 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp325;
// line 174
org$pandalanguage$pandac$parser$Token $tmp326 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp327 = $tmp326.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp328;
$tmp328 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp328->value = $tmp327;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp329;
$tmp329 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp329->value = param1;
ITable* $tmp330 = ((panda$core$Equatable*) $tmp328)->$class->itable;
while ($tmp330->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
panda$core$Bit $tmp333 = $tmp331(((panda$core$Equatable*) $tmp328), ((panda$core$Equatable*) $tmp329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp328)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp329)));
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
// line 175
org$pandalanguage$pandac$parser$Token $tmp335 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp335, true });
block2:;
// line 177
org$pandalanguage$pandac$parser$Token $tmp336 = *(&local0);
panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, param2);
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s340);
org$pandalanguage$pandac$parser$Token $tmp341 = *(&local0);
panda$core$String* $tmp342 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp341);
panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, $tmp342);
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s345);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp336, $tmp344);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// line 178
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1, panda$core$String* param2) {

panda$core$Bit local0;
// line 182
panda$core$Bit* $tmp346 = &param0->inSpeculative;
panda$core$Bit $tmp347 = *$tmp346;
panda$core$Bit $tmp348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block1; else goto block2;
block1:;
panda$core$Bit* $tmp350 = &param0->reportErrors;
panda$core$Bit $tmp351 = *$tmp350;
*(&local0) = $tmp351;
goto block3;
block2:;
*(&local0) = $tmp348;
goto block3;
block3:;
panda$core$Bit $tmp352 = *(&local0);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block4; else goto block5;
block4:;
// line 183
panda$threads$MessageQueue** $tmp354 = &param0->errors;
panda$threads$MessageQueue* $tmp355 = *$tmp354;
org$pandalanguage$pandac$Compiler$Error* $tmp356 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp357 = &param0->path;
panda$io$File* $tmp358 = *$tmp357;
org$pandalanguage$pandac$Position $tmp359 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp356, $tmp358, $tmp359, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp355, ((panda$core$Immutable*) $tmp356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
goto block5;
block5:;
return;

}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 188
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp360 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp361 = *$tmp360;
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit($tmp361 != NULL);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block1; else goto block2;
block1:;
// line 189
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp364 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp365 = *$tmp364;
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[3];
$tmp366($tmp365, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 194
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp368 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp369 = *$tmp368;
panda$core$Bit $tmp370 = panda$core$Bit$init$builtin_bit($tmp369 != NULL);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 195
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp372 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[4];
$tmp374($tmp373, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp376 = &param0->inSpeculative;
panda$core$Bit $tmp377 = *$tmp376;
panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp380 = (panda$core$Int64) {201};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block1:;
// line 202
panda$core$Bit* $tmp383 = &param0->inSpeculative;
panda$core$Bit $tmp384 = *$tmp383;
panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp387 = (panda$core$Int64) {202};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s388, $tmp387);
abort(); // unreachable
block3:;
// line 203
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp390 = &param0->inSpeculative;
*$tmp390 = $tmp389;
// line 204
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp391 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp392 = *$tmp391;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp392);
// line 205
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp393 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp394 = *$tmp393;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp395 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp396 = *$tmp395;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT($tmp394, ((panda$collections$CollectionView*) $tmp396));
return;

}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp397 = &param0->inSpeculative;
panda$core$Bit $tmp398 = *$tmp397;
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp400 = (panda$core$Int64) {210};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s401, $tmp400, &$s402);
abort(); // unreachable
block1:;
// line 211
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp404 = &param0->inSpeculative;
*$tmp404 = $tmp403;
return;

}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
panda$core$Bit* $tmp405 = &param0->inSpeculative;
panda$core$Bit $tmp406 = *$tmp405;
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp408 = (panda$core$Int64) {216};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block1:;
// line 217
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp412 = &param0->inSpeculative;
*$tmp412 = $tmp411;
// line 218
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp413 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp414 = *$tmp413;
ITable* $tmp415 = ((panda$collections$CollectionView*) $tmp414)->$class->itable;
while ($tmp415->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
panda$core$Int64 $tmp418 = $tmp416(((panda$collections$CollectionView*) $tmp414));
panda$core$Int64 $tmp419 = (panda$core$Int64) {1};
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 - $tmp421;
panda$core$Int64 $tmp423 = (panda$core$Int64) {$tmp422};
panda$core$Int64 $tmp424 = (panda$core$Int64) {0};
panda$core$Int64 $tmp425 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp426 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp427 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp423, $tmp424, $tmp425, $tmp426);
panda$core$Int64 $tmp428 = $tmp427.start;
*(&local0) = $tmp428;
panda$core$Int64 $tmp429 = $tmp427.end;
panda$core$Int64 $tmp430 = $tmp427.step;
panda$core$UInt64 $tmp431 = panda$core$Int64$convert$R$panda$core$UInt64($tmp430);
panda$core$Int64 $tmp432 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp430);
panda$core$UInt64 $tmp433 = panda$core$Int64$convert$R$panda$core$UInt64($tmp432);
panda$core$Bit $tmp434 = $tmp427.inclusive;
bool $tmp435 = $tmp434.value;
panda$core$Int64 $tmp436 = (panda$core$Int64) {0};
int64_t $tmp437 = $tmp430.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 >= $tmp438;
panda$core$Bit $tmp440 = (panda$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block6; else goto block7;
block6:;
if ($tmp435) goto block8; else goto block9;
block8:;
int64_t $tmp442 = $tmp428.value;
int64_t $tmp443 = $tmp429.value;
bool $tmp444 = $tmp442 <= $tmp443;
panda$core$Bit $tmp445 = (panda$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block3; else goto block4;
block9:;
int64_t $tmp447 = $tmp428.value;
int64_t $tmp448 = $tmp429.value;
bool $tmp449 = $tmp447 < $tmp448;
panda$core$Bit $tmp450 = (panda$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block3; else goto block4;
block7:;
if ($tmp435) goto block10; else goto block11;
block10:;
int64_t $tmp452 = $tmp428.value;
int64_t $tmp453 = $tmp429.value;
bool $tmp454 = $tmp452 >= $tmp453;
panda$core$Bit $tmp455 = (panda$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block3; else goto block4;
block11:;
int64_t $tmp457 = $tmp428.value;
int64_t $tmp458 = $tmp429.value;
bool $tmp459 = $tmp457 > $tmp458;
panda$core$Bit $tmp460 = (panda$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block3; else goto block4;
block3:;
// line 219
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp462 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp463 = *$tmp462;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp464 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp465 = *$tmp464;
panda$core$Int64 $tmp466 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp467 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp465, $tmp466);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp463, $tmp467);
goto block5;
block5:;
panda$core$Int64 $tmp468 = *(&local0);
if ($tmp441) goto block13; else goto block14;
block13:;
int64_t $tmp469 = $tmp429.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 - $tmp470;
panda$core$Int64 $tmp472 = (panda$core$Int64) {$tmp471};
panda$core$UInt64 $tmp473 = panda$core$Int64$convert$R$panda$core$UInt64($tmp472);
if ($tmp435) goto block15; else goto block16;
block15:;
uint64_t $tmp474 = $tmp473.value;
uint64_t $tmp475 = $tmp431.value;
bool $tmp476 = $tmp474 >= $tmp475;
panda$core$Bit $tmp477 = (panda$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block12; else goto block4;
block16:;
uint64_t $tmp479 = $tmp473.value;
uint64_t $tmp480 = $tmp431.value;
bool $tmp481 = $tmp479 > $tmp480;
panda$core$Bit $tmp482 = (panda$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block12; else goto block4;
block14:;
int64_t $tmp484 = $tmp468.value;
int64_t $tmp485 = $tmp429.value;
int64_t $tmp486 = $tmp484 - $tmp485;
panda$core$Int64 $tmp487 = (panda$core$Int64) {$tmp486};
panda$core$UInt64 $tmp488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp487);
if ($tmp435) goto block17; else goto block18;
block17:;
uint64_t $tmp489 = $tmp488.value;
uint64_t $tmp490 = $tmp433.value;
bool $tmp491 = $tmp489 >= $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block12; else goto block4;
block18:;
uint64_t $tmp494 = $tmp488.value;
uint64_t $tmp495 = $tmp433.value;
bool $tmp496 = $tmp494 > $tmp495;
panda$core$Bit $tmp497 = (panda$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block12; else goto block4;
block12:;
int64_t $tmp499 = $tmp468.value;
int64_t $tmp500 = $tmp430.value;
int64_t $tmp501 = $tmp499 + $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {$tmp501};
*(&local0) = $tmp502;
goto block3;
block4:;
return;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 224
panda$core$String** $tmp503 = &param0->source;
panda$core$String* $tmp504 = *$tmp503;
panda$core$String$Index $tmp505 = param1.start;
panda$core$String$Index $tmp506 = param1.end;
panda$core$Bit $tmp507 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp508 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp505, $tmp506, $tmp507);
panda$core$String* $tmp509 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp504, $tmp508);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
return $tmp509;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$ASTNode* param2) {

// line 228
panda$core$Bit $tmp510 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 229
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block2:;
// line 231
org$pandalanguage$pandac$ASTNode* $tmp512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp513 = (panda$core$Int64) {4};
$fn515 $tmp514 = ($fn515) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp516 = $tmp514(param1);
panda$core$Int64 $tmp517 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp518 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp517);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp512, $tmp513, $tmp516, param1, $tmp518, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
return $tmp512;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 235
panda$core$MutableString* $tmp519 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp519);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
*(&local0) = $tmp519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// line 236
goto block1;
block1:;
// line 237
org$pandalanguage$pandac$parser$Token $tmp521 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp521;
// line 238
org$pandalanguage$pandac$parser$Token $tmp522 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp523 = $tmp522.kind;
panda$core$Int64 $tmp524 = $tmp523.$rawValue;
panda$core$Int64 $tmp525 = (panda$core$Int64) {13};
panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block4; else goto block5;
block4:;
// line 240
org$pandalanguage$pandac$parser$Token $tmp528 = *(&local1);
panda$core$String* $tmp529 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp528);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp530 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
*(&local2) = $tmp529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// line 241
panda$core$String* $tmp531 = *(&local2);
panda$core$Bit $tmp532 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp531, &$s533);
bool $tmp534 = $tmp532.value;
if ($tmp534) goto block6; else goto block7;
block6:;
// line 242
org$pandalanguage$pandac$parser$Token $tmp535 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp535, &$s536);
// line 243
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp537 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp538 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 245
panda$core$MutableString* $tmp539 = *(&local0);
panda$core$String* $tmp540 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp539, $tmp540);
panda$core$String* $tmp541 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp542 = (panda$core$Int64) {0};
panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block9;
block8:;
// line 247
org$pandalanguage$pandac$parser$Token $tmp545 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp545, &$s546);
// line 248
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp548 = (panda$core$Int64) {107};
panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block10; else goto block11;
block10:;
// line 250
org$pandalanguage$pandac$parser$Token $tmp551 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp551;
// line 251
org$pandalanguage$pandac$parser$Token $tmp552 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp553 = $tmp552.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp554;
$tmp554 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp554->value = $tmp553;
panda$core$Int64 $tmp555 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp556 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp555);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp557;
$tmp557 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp557->value = $tmp556;
ITable* $tmp558 = ((panda$core$Equatable*) $tmp554)->$class->itable;
while ($tmp558->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp558 = $tmp558->next;
}
$fn560 $tmp559 = $tmp558->methods[0];
panda$core$Bit $tmp561 = $tmp559(((panda$core$Equatable*) $tmp554), ((panda$core$Equatable*) $tmp557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp554)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp557)));
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block12; else goto block13;
block12:;
// line 252
org$pandalanguage$pandac$parser$Token $tmp563 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp563, &$s564);
// line 253
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp565 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 255
org$pandalanguage$pandac$parser$Token $tmp566 = *(&local3);
panda$core$String* $tmp567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp566);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp568 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local4) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// line 256
panda$core$String* $tmp569 = *(&local4);
panda$collections$ListView* $tmp570 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp569);
panda$core$Int64 $tmp571 = (panda$core$Int64) {0};
ITable* $tmp572 = $tmp570->$class->itable;
while ($tmp572->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[0];
panda$core$Object* $tmp575 = $tmp573($tmp570, $tmp571);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp575)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
panda$core$Panda$unref$panda$core$Object$Q($tmp575);
// line 257
panda$core$Char8 $tmp576 = *(&local5);
panda$core$UInt8 $tmp577 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp578 = panda$core$Char8$init$panda$core$UInt8($tmp577);
panda$core$Bit $tmp579 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block15; else goto block16;
block15:;
// line 258
panda$core$MutableString* $tmp581 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp581, &$s582);
goto block14;
block16:;
panda$core$UInt8 $tmp583 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp584 = panda$core$Char8$init$panda$core$UInt8($tmp583);
panda$core$Bit $tmp585 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block17; else goto block18;
block17:;
// line 259
panda$core$MutableString* $tmp587 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp587, &$s588);
goto block14;
block18:;
panda$core$UInt8 $tmp589 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp590 = panda$core$Char8$init$panda$core$UInt8($tmp589);
panda$core$Bit $tmp591 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block19; else goto block20;
block19:;
// line 260
panda$core$MutableString* $tmp593 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp593, &$s594);
goto block14;
block20:;
panda$core$UInt8 $tmp595 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp596 = panda$core$Char8$init$panda$core$UInt8($tmp595);
panda$core$Bit $tmp597 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block21; else goto block22;
block21:;
// line 261
panda$core$MutableString* $tmp599 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp599, &$s600);
goto block14;
block22:;
panda$core$UInt8 $tmp601 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp602 = panda$core$Char8$init$panda$core$UInt8($tmp601);
panda$core$Bit $tmp603 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block23; else goto block24;
block23:;
// line 262
panda$core$MutableString* $tmp605 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp605, &$s606);
goto block14;
block24:;
panda$core$UInt8 $tmp607 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp608 = panda$core$Char8$init$panda$core$UInt8($tmp607);
panda$core$Bit $tmp609 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block25; else goto block26;
block25:;
// line 263
panda$core$MutableString* $tmp611 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp611, &$s612);
goto block14;
block26:;
panda$core$UInt8 $tmp613 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp614 = panda$core$Char8$init$panda$core$UInt8($tmp613);
panda$core$Bit $tmp615 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block27; else goto block28;
block27:;
// line 264
panda$core$MutableString* $tmp617 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp617, &$s618);
goto block14;
block28:;
// line 266
org$pandalanguage$pandac$parser$Token $tmp619 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp619, &$s620);
// line 267
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp621 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 269
panda$core$MutableString* $tmp623 = *(&local0);
panda$core$String* $tmp624 = *(&local4);
panda$core$String* $tmp625 = *(&local4);
panda$core$String* $tmp626 = *(&local4);
panda$core$String$Index $tmp627 = panda$core$String$get_start$R$panda$core$String$Index($tmp626);
panda$core$String$Index $tmp628 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp625, $tmp627);
panda$core$Bit $tmp629 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp630 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp628, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp629);
panda$core$String* $tmp631 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp624, $tmp630);
panda$core$MutableString$append$panda$core$String($tmp623, $tmp631);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
panda$core$String* $tmp632 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp633 = (panda$core$Int64) {101};
panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block29; else goto block30;
block29:;
// line 271
org$pandalanguage$pandac$parser$Token $tmp636 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp636);
// line 272
panda$core$MutableString* $tmp637 = *(&local0);
panda$core$String* $tmp638 = panda$core$MutableString$finish$R$panda$core$String($tmp637);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
panda$core$MutableString* $tmp639 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp638;
block30:;
// line 274
panda$core$MutableString* $tmp640 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp641 = *(&local1);
panda$core$String* $tmp642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp641);
panda$core$MutableString$append$panda$core$String($tmp640, $tmp642);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp643 = panda$core$Bit$init$builtin_bit(false);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp645 = (panda$core$Int64) {234};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s646, $tmp645, &$s647);
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
// line 280
panda$core$MutableString* $tmp648 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp648);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp649 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
*(&local0) = $tmp648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// line 281
goto block1;
block1:;
// line 282
org$pandalanguage$pandac$parser$Token $tmp650 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp650;
// line 283
org$pandalanguage$pandac$parser$Token $tmp651 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp652 = $tmp651.kind;
panda$core$Int64 $tmp653 = $tmp652.$rawValue;
panda$core$Int64 $tmp654 = (panda$core$Int64) {13};
panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block4; else goto block5;
block4:;
// line 285
org$pandalanguage$pandac$parser$Token $tmp657 = *(&local1);
panda$core$String* $tmp658 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp657);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp659 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local2) = $tmp658;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// line 286
panda$core$String* $tmp660 = *(&local2);
panda$core$Bit $tmp661 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp660, &$s662);
bool $tmp663 = $tmp661.value;
if ($tmp663) goto block6; else goto block7;
block6:;
// line 287
org$pandalanguage$pandac$parser$Token $tmp664 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp664, &$s665);
// line 288
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp666 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp667 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 290
panda$core$MutableString* $tmp668 = *(&local0);
panda$core$String* $tmp669 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp668, $tmp669);
panda$core$String* $tmp670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp671 = (panda$core$Int64) {0};
panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block8; else goto block9;
block8:;
// line 292
org$pandalanguage$pandac$parser$Token $tmp674 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp674, &$s675);
// line 293
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp677 = (panda$core$Int64) {107};
panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block10; else goto block11;
block10:;
// line 295
org$pandalanguage$pandac$parser$Token $tmp680 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp680;
// line 296
org$pandalanguage$pandac$parser$Token $tmp681 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp682 = $tmp681.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp683;
$tmp683 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp683->value = $tmp682;
panda$core$Int64 $tmp684 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp685 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp684);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp686;
$tmp686 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp686->value = $tmp685;
ITable* $tmp687 = ((panda$core$Equatable*) $tmp683)->$class->itable;
while ($tmp687->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp687 = $tmp687->next;
}
$fn689 $tmp688 = $tmp687->methods[0];
panda$core$Bit $tmp690 = $tmp688(((panda$core$Equatable*) $tmp683), ((panda$core$Equatable*) $tmp686));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp683)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp686)));
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block12; else goto block13;
block12:;
// line 297
org$pandalanguage$pandac$parser$Token $tmp692 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp692, &$s693);
// line 298
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp694 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 300
org$pandalanguage$pandac$parser$Token $tmp695 = *(&local3);
panda$core$String* $tmp696 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp695);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp697 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
*(&local4) = $tmp696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// line 301
panda$core$String* $tmp698 = *(&local4);
panda$collections$ListView* $tmp699 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp698);
panda$core$Int64 $tmp700 = (panda$core$Int64) {0};
ITable* $tmp701 = $tmp699->$class->itable;
while ($tmp701->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
panda$core$Object* $tmp704 = $tmp702($tmp699, $tmp700);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp704)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$unref$panda$core$Object$Q($tmp704);
// line 302
panda$core$Char8 $tmp705 = *(&local5);
panda$core$UInt8 $tmp706 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp707 = panda$core$Char8$init$panda$core$UInt8($tmp706);
panda$core$Bit $tmp708 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block15; else goto block16;
block15:;
// line 303
panda$core$MutableString* $tmp710 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp710, &$s711);
goto block14;
block16:;
panda$core$UInt8 $tmp712 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp713 = panda$core$Char8$init$panda$core$UInt8($tmp712);
panda$core$Bit $tmp714 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block17; else goto block18;
block17:;
// line 304
panda$core$MutableString* $tmp716 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp716, &$s717);
goto block14;
block18:;
panda$core$UInt8 $tmp718 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp719 = panda$core$Char8$init$panda$core$UInt8($tmp718);
panda$core$Bit $tmp720 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block19; else goto block20;
block19:;
// line 305
panda$core$MutableString* $tmp722 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp722, &$s723);
goto block14;
block20:;
panda$core$UInt8 $tmp724 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp725 = panda$core$Char8$init$panda$core$UInt8($tmp724);
panda$core$Bit $tmp726 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp725);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block21; else goto block22;
block21:;
// line 306
panda$core$MutableString* $tmp728 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp728, &$s729);
goto block14;
block22:;
panda$core$UInt8 $tmp730 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp731 = panda$core$Char8$init$panda$core$UInt8($tmp730);
panda$core$Bit $tmp732 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp731);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block23; else goto block24;
block23:;
// line 307
panda$core$MutableString* $tmp734 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp734, &$s735);
goto block14;
block24:;
panda$core$UInt8 $tmp736 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp737 = panda$core$Char8$init$panda$core$UInt8($tmp736);
panda$core$Bit $tmp738 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp737);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block25; else goto block26;
block25:;
// line 308
panda$core$MutableString* $tmp740 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp740, &$s741);
goto block14;
block26:;
panda$core$UInt8 $tmp742 = (panda$core$UInt8) {58};
panda$core$Char8 $tmp743 = panda$core$Char8$init$panda$core$UInt8($tmp742);
panda$core$Bit $tmp744 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block27; else goto block28;
block27:;
// line 309
panda$core$MutableString* $tmp746 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp746, &$s747);
goto block14;
block28:;
panda$core$UInt8 $tmp748 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp749 = panda$core$Char8$init$panda$core$UInt8($tmp748);
panda$core$Bit $tmp750 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block29; else goto block30;
block29:;
// line 310
panda$core$MutableString* $tmp752 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp752, &$s753);
goto block14;
block30:;
// line 312
org$pandalanguage$pandac$parser$Token $tmp754 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp754, &$s755);
// line 313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp756 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp757 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 315
panda$core$MutableString* $tmp758 = *(&local0);
panda$core$String* $tmp759 = *(&local4);
panda$core$String* $tmp760 = *(&local4);
panda$core$String* $tmp761 = *(&local4);
panda$core$String$Index $tmp762 = panda$core$String$get_start$R$panda$core$String$Index($tmp761);
panda$core$String$Index $tmp763 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp760, $tmp762);
panda$core$Bit $tmp764 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp765 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp763, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp764);
panda$core$String* $tmp766 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp759, $tmp765);
panda$core$MutableString$append$panda$core$String($tmp758, $tmp766);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
panda$core$String* $tmp767 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp768 = (panda$core$Int64) {96};
panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block31; else goto block32;
block31:;
// line 317
org$pandalanguage$pandac$parser$Token $tmp771 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp771);
// line 318
panda$core$MutableString* $tmp772 = *(&local0);
panda$core$String* $tmp773 = panda$core$MutableString$finish$R$panda$core$String($tmp772);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
panda$core$MutableString* $tmp774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp773;
block32:;
panda$core$Int64 $tmp775 = (panda$core$Int64) {101};
panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block33; else goto block34;
block33:;
// line 320
org$pandalanguage$pandac$parser$Token $tmp778 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp778);
// line 321
panda$core$MutableString* $tmp779 = *(&local0);
panda$core$String* $tmp780 = panda$core$MutableString$finish$R$panda$core$String($tmp779);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$MutableString* $tmp781 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp780;
block34:;
// line 323
panda$core$MutableString* $tmp782 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp783 = *(&local1);
panda$core$String* $tmp784 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp783);
panda$core$MutableString$append$panda$core$String($tmp782, $tmp784);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp785 = panda$core$Bit$init$builtin_bit(false);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {279};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s788, $tmp787, &$s789);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 330
org$pandalanguage$pandac$ASTNode* $tmp790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp791 = (panda$core$Int64) {15};
$fn793 $tmp792 = ($fn793) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp794 = $tmp792(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp790, $tmp791, $tmp794, param1, &$s795);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp796 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
*(&local0) = $tmp790;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
// line 331
org$pandalanguage$pandac$ASTNode* $tmp797 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp798 = (panda$core$Int64) {8};
$fn800 $tmp799 = ($fn800) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp801 = $tmp799(param1);
org$pandalanguage$pandac$ASTNode* $tmp802 = *(&local0);
panda$collections$ImmutableArray* $tmp803 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp803);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp797, $tmp798, $tmp801, $tmp802, $tmp803);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp804 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
*(&local1) = $tmp797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// line 332
org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp806 = (panda$core$Int64) {42};
$fn808 $tmp807 = ($fn808) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp809 = $tmp807(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp805, $tmp806, $tmp809, &$s810);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp811 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
*(&local2) = $tmp805;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
// line 333
org$pandalanguage$pandac$ASTNode* $tmp812 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp813 = (panda$core$Int64) {4};
$fn815 $tmp814 = ($fn815) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp816 = $tmp814(param1);
org$pandalanguage$pandac$ASTNode* $tmp817 = *(&local1);
panda$core$Int64 $tmp818 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp819 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp818);
org$pandalanguage$pandac$ASTNode* $tmp820 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp812, $tmp813, $tmp816, $tmp817, $tmp819, $tmp820);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
org$pandalanguage$pandac$ASTNode* $tmp821 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing stringType
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp822 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// unreffing call
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp823 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing dot
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp812;

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
// line 338
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp824 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp825 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp826 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp825);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp824, param0, $tmp826);
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp827 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
*(&local0) = $tmp824;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// line 339
org$pandalanguage$pandac$parser$Token $tmp828 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp828;
// line 340
org$pandalanguage$pandac$parser$Token $tmp829 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp830 = $tmp829.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp831;
$tmp831 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp831->value = $tmp830;
panda$core$Int64 $tmp832 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$Kind $tmp833 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp832);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp834;
$tmp834 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp834->value = $tmp833;
ITable* $tmp835 = ((panda$core$Equatable*) $tmp831)->$class->itable;
while ($tmp835->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp835 = $tmp835->next;
}
$fn837 $tmp836 = $tmp835->methods[1];
panda$core$Bit $tmp838 = $tmp836(((panda$core$Equatable*) $tmp831), ((panda$core$Equatable*) $tmp834));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp831)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp834)));
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$parser$Token $tmp840 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp841 = $tmp840.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp842;
$tmp842 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp842->value = $tmp841;
panda$core$Int64 $tmp843 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$Kind $tmp844 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp843);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp845;
$tmp845 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp845->value = $tmp844;
ITable* $tmp846 = ((panda$core$Equatable*) $tmp842)->$class->itable;
while ($tmp846->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp846 = $tmp846->next;
}
$fn848 $tmp847 = $tmp846->methods[1];
panda$core$Bit $tmp849 = $tmp847(((panda$core$Equatable*) $tmp842), ((panda$core$Equatable*) $tmp845));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp842)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp845)));
*(&local2) = $tmp849;
goto block3;
block2:;
*(&local2) = $tmp838;
goto block3;
block3:;
panda$core$Bit $tmp850 = *(&local2);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block4; else goto block5;
block4:;
// line 341
org$pandalanguage$pandac$parser$Token $tmp852 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp853 = *(&local1);
panda$core$String* $tmp854 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp853);
panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, $tmp854);
panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, &$s858);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp852, $tmp857);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// line 342
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 344
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp860 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 345
panda$core$MutableString* $tmp861 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp861);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp862 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local4) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// line 346
goto block6;
block6:;
// line 347
org$pandalanguage$pandac$parser$Token $tmp863 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp863;
// line 348
org$pandalanguage$pandac$parser$Token $tmp864 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp865 = $tmp864.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp866;
$tmp866 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp866->value = $tmp865;
org$pandalanguage$pandac$parser$Token $tmp867 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp868 = $tmp867.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp869;
$tmp869 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp869->value = $tmp868;
ITable* $tmp870 = ((panda$core$Equatable*) $tmp866)->$class->itable;
while ($tmp870->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[0];
panda$core$Bit $tmp873 = $tmp871(((panda$core$Equatable*) $tmp866), ((panda$core$Equatable*) $tmp869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp866)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp869)));
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block8; else goto block9;
block8:;
// line 349
goto block7;
block9:;
// line 351
org$pandalanguage$pandac$parser$Token $tmp875 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp876 = $tmp875.kind;
panda$core$Int64 $tmp877 = $tmp876.$rawValue;
panda$core$Int64 $tmp878 = (panda$core$Int64) {13};
panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp878);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block11; else goto block12;
block11:;
// line 353
org$pandalanguage$pandac$parser$Token $tmp881 = *(&local5);
panda$core$String* $tmp882 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp881);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp883 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
*(&local6) = $tmp882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// line 354
panda$core$String* $tmp884 = *(&local6);
panda$core$Bit $tmp885 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp884, &$s886);
bool $tmp887 = $tmp885.value;
if ($tmp887) goto block13; else goto block14;
block13:;
// line 355
org$pandalanguage$pandac$parser$Token $tmp888 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp888, &$s889);
// line 356
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp890 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp891 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp892 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 358
panda$core$MutableString* $tmp894 = *(&local4);
panda$core$String* $tmp895 = *(&local6);
panda$core$MutableString$append$panda$core$String($tmp894, $tmp895);
panda$core$String* $tmp896 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
goto block10;
block12:;
panda$core$Int64 $tmp897 = (panda$core$Int64) {0};
panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block15; else goto block16;
block15:;
// line 360
org$pandalanguage$pandac$parser$Token $tmp900 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp900, &$s901);
// line 361
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp902 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp903 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp904 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
panda$core$Int64 $tmp905 = (panda$core$Int64) {107};
panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block17; else goto block18;
block17:;
// line 363
org$pandalanguage$pandac$parser$Token $tmp908 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local7) = $tmp908;
// line 364
org$pandalanguage$pandac$parser$Token $tmp909 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind $tmp910 = $tmp909.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp911;
$tmp911 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp911->value = $tmp910;
panda$core$Int64 $tmp912 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp913 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp912);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp914;
$tmp914 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp914->value = $tmp913;
ITable* $tmp915 = ((panda$core$Equatable*) $tmp911)->$class->itable;
while ($tmp915->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[0];
panda$core$Bit $tmp918 = $tmp916(((panda$core$Equatable*) $tmp911), ((panda$core$Equatable*) $tmp914));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp911)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp914)));
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block19; else goto block20;
block19:;
// line 365
org$pandalanguage$pandac$parser$Token $tmp920 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp920, &$s921);
// line 366
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp922 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp924 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 368
org$pandalanguage$pandac$parser$Token $tmp925 = *(&local7);
panda$core$String* $tmp926 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp925);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp927 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
*(&local8) = $tmp926;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// line 369
panda$core$String* $tmp928 = *(&local8);
panda$collections$ListView* $tmp929 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp928);
panda$core$Int64 $tmp930 = (panda$core$Int64) {0};
ITable* $tmp931 = $tmp929->$class->itable;
while ($tmp931->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp931 = $tmp931->next;
}
$fn933 $tmp932 = $tmp931->methods[0];
panda$core$Object* $tmp934 = $tmp932($tmp929, $tmp930);
*(&local9) = ((panda$core$Char8$wrapper*) $tmp934)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
panda$core$Panda$unref$panda$core$Object$Q($tmp934);
// line 370
panda$core$Char8 $tmp935 = *(&local9);
panda$core$UInt8 $tmp936 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp937 = panda$core$Char8$init$panda$core$UInt8($tmp936);
panda$core$Bit $tmp938 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block22; else goto block23;
block22:;
// line 371
panda$core$MutableString* $tmp940 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp940, &$s941);
goto block21;
block23:;
panda$core$UInt8 $tmp942 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp943 = panda$core$Char8$init$panda$core$UInt8($tmp942);
panda$core$Bit $tmp944 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block24; else goto block25;
block24:;
// line 372
panda$core$MutableString* $tmp946 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp946, &$s947);
goto block21;
block25:;
panda$core$UInt8 $tmp948 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp949 = panda$core$Char8$init$panda$core$UInt8($tmp948);
panda$core$Bit $tmp950 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp949);
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block26; else goto block27;
block26:;
// line 373
panda$core$MutableString* $tmp952 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp952, &$s953);
goto block21;
block27:;
panda$core$UInt8 $tmp954 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp955 = panda$core$Char8$init$panda$core$UInt8($tmp954);
panda$core$Bit $tmp956 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp955);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block28; else goto block29;
block28:;
// line 374
panda$core$MutableString* $tmp958 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp958, &$s959);
goto block21;
block29:;
panda$core$UInt8 $tmp960 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp961 = panda$core$Char8$init$panda$core$UInt8($tmp960);
panda$core$Bit $tmp962 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp961);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block30; else goto block31;
block30:;
// line 375
panda$core$MutableString* $tmp964 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp964, &$s965);
goto block21;
block31:;
panda$core$UInt8 $tmp966 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp967 = panda$core$Char8$init$panda$core$UInt8($tmp966);
panda$core$Bit $tmp968 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp967);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block32; else goto block33;
block32:;
// line 376
panda$core$MutableString* $tmp970 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp970, &$s971);
goto block21;
block33:;
panda$core$UInt8 $tmp972 = (panda$core$UInt8) {123};
panda$core$Char8 $tmp973 = panda$core$Char8$init$panda$core$UInt8($tmp972);
panda$core$Bit $tmp974 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp973);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block34; else goto block35;
block34:;
// line 1
// line 379
panda$core$Bit* $tmp976 = &param0->allowLambdas;
panda$core$Bit $tmp977 = *$tmp976;
*(&local10) = $tmp977;
// line 380
panda$core$Bit $tmp978 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp979 = &param0->allowLambdas;
*$tmp979 = $tmp978;
// line 381
org$pandalanguage$pandac$ASTNode* $tmp980 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
*(&local11) = $tmp980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// line 382
panda$core$Bit $tmp982 = *(&local10);
panda$core$Bit* $tmp983 = &param0->allowLambdas;
*$tmp983 = $tmp982;
// line 383
org$pandalanguage$pandac$ASTNode* $tmp984 = *(&local11);
panda$core$Bit $tmp985 = panda$core$Bit$init$builtin_bit($tmp984 == NULL);
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block36; else goto block37;
block36:;
// line 384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp988 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp989 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp990 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp991 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
// line 386
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp992 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local12) = ((panda$core$String*) NULL);
// line 387
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp993 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local13) = ((panda$core$String*) NULL);
// line 388
panda$core$Int64 $tmp994 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp995 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp994);
org$pandalanguage$pandac$parser$Token$nullable $tmp996 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp995);
panda$core$Bit $tmp997 = panda$core$Bit$init$builtin_bit($tmp996.nonnull);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block38; else goto block39;
block38:;
// line 389
org$pandalanguage$pandac$parser$Token $tmp999 = *(&local1);
panda$core$String* $tmp1000 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp999);
panda$core$String* $tmp1001 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
*(&local12) = $tmp1000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
goto block39;
block39:;
// line 391
panda$core$Int64 $tmp1002 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1002);
org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1003);
panda$core$Bit $tmp1005 = panda$core$Bit$init$builtin_bit($tmp1004.nonnull);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block40; else goto block41;
block40:;
// line 392
org$pandalanguage$pandac$parser$Token $tmp1007 = *(&local1);
panda$core$String* $tmp1008 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1007);
panda$core$String* $tmp1009 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
*(&local13) = $tmp1008;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// line 393
panda$core$String* $tmp1010 = *(&local13);
panda$core$Bit $tmp1011 = panda$core$Bit$init$builtin_bit($tmp1010 == NULL);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block42; else goto block43;
block42:;
// line 394
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1013 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1014 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1015 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1016 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1017 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1018 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1019 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 396
org$pandalanguage$pandac$ASTNode* $tmp1020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1021 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1022 = *(&local11);
$fn1024 $tmp1023 = ($fn1024) $tmp1022->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1025 = $tmp1023($tmp1022);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1020, $tmp1021, $tmp1025, &$s1026);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1027 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local14) = $tmp1020;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
// line 398
org$pandalanguage$pandac$ASTNode* $tmp1028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1029 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp1030 = *(&local11);
$fn1032 $tmp1031 = ($fn1032) $tmp1030->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1033 = $tmp1031($tmp1030);
org$pandalanguage$pandac$ASTNode* $tmp1034 = *(&local11);
panda$core$Int64 $tmp1035 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp1036 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1035);
org$pandalanguage$pandac$ASTNode* $tmp1037 = *(&local14);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1028, $tmp1029, $tmp1033, $tmp1034, $tmp1036, $tmp1037);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1038 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
*(&local15) = $tmp1028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// line 400
org$pandalanguage$pandac$ASTNode* $tmp1039 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1040 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1041 = *(&local11);
$fn1043 $tmp1042 = ($fn1043) $tmp1041->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1044 = $tmp1042($tmp1041);
org$pandalanguage$pandac$ASTNode* $tmp1045 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1039, $tmp1040, $tmp1044, $tmp1045, &$s1046);
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1047 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
*(&local16) = $tmp1039;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// line 401
panda$collections$Array* $tmp1048 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1048);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1049 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
*(&local17) = $tmp1048;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// line 402
panda$collections$Array* $tmp1050 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1053 = *(&local1);
org$pandalanguage$pandac$Position $tmp1054 = $tmp1053.position;
panda$core$String* $tmp1055 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1051, $tmp1052, $tmp1054, $tmp1055);
panda$collections$Array$add$panda$collections$Array$T($tmp1050, ((panda$core$Object*) $tmp1051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// line 403
org$pandalanguage$pandac$ASTNode* $tmp1056 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1057 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1058 = *(&local11);
$fn1060 $tmp1059 = ($fn1060) $tmp1058->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1061 = $tmp1059($tmp1058);
org$pandalanguage$pandac$ASTNode* $tmp1062 = *(&local16);
panda$collections$Array* $tmp1063 = *(&local17);
panda$collections$ImmutableArray* $tmp1064 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1063);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1056, $tmp1057, $tmp1061, $tmp1062, $tmp1064);
org$pandalanguage$pandac$ASTNode* $tmp1065 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
*(&local11) = $tmp1056;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
panda$collections$Array* $tmp1066 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1066));
// unreffing callArgs
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1067 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
// unreffing dot
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1068 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing cast
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1069 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
// unreffing formattable
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
// line 405
panda$core$Int64 $tmp1070 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp1071 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1070);
org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1071, &$s1073);
panda$core$Bit $tmp1074 = panda$core$Bit$init$builtin_bit(!$tmp1072.nonnull);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block44; else goto block45;
block44:;
// line 406
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1076 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1077 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1079 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1080 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1081 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1082 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 408
panda$core$String* $tmp1083 = *(&local12);
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit($tmp1083 != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block46; else goto block47;
block46:;
// line 409
panda$core$String* $tmp1086 = *(&local13);
panda$core$Bit $tmp1087 = panda$core$Bit$init$builtin_bit($tmp1086 == NULL);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block48; else goto block49;
block48:;
// line 410
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1090 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1089);
org$pandalanguage$pandac$ASTNode* $tmp1091 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
*(&local11) = $tmp1090;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
goto block49;
block49:;
// line 412
org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1093 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local11);
$fn1096 $tmp1095 = ($fn1096) $tmp1094->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1097 = $tmp1095($tmp1094);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1092, $tmp1093, $tmp1097, &$s1098);
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1099 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
*(&local18) = $tmp1092;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// line 413
org$pandalanguage$pandac$ASTNode* $tmp1100 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1101 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1102 = *(&local11);
$fn1104 $tmp1103 = ($fn1104) $tmp1102->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1105 = $tmp1103($tmp1102);
org$pandalanguage$pandac$ASTNode* $tmp1106 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1100, $tmp1101, $tmp1105, $tmp1106, &$s1107);
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1108 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
*(&local19) = $tmp1100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// line 414
panda$collections$Array* $tmp1109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1109);
*(&local20) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1110 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
*(&local20) = $tmp1109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// line 415
panda$collections$Array* $tmp1111 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1112 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1111, ((panda$core$Object*) $tmp1112));
// line 416
panda$collections$Array* $tmp1113 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1116 = *(&local1);
org$pandalanguage$pandac$Position $tmp1117 = $tmp1116.position;
panda$core$String* $tmp1118 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1114, $tmp1115, $tmp1117, $tmp1118);
panda$collections$Array$add$panda$collections$Array$T($tmp1113, ((panda$core$Object*) $tmp1114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// line 417
org$pandalanguage$pandac$ASTNode* $tmp1119 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1120 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1121 = *(&local11);
$fn1123 $tmp1122 = ($fn1123) $tmp1121->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1124 = $tmp1122($tmp1121);
org$pandalanguage$pandac$ASTNode* $tmp1125 = *(&local19);
panda$collections$Array* $tmp1126 = *(&local20);
panda$collections$ImmutableArray* $tmp1127 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1126);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1119, $tmp1120, $tmp1124, $tmp1125, $tmp1127);
org$pandalanguage$pandac$ASTNode* $tmp1128 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
*(&local11) = $tmp1119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
panda$collections$Array* $tmp1129 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing callArgs
*(&local20) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1130 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing callTarget
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1131 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing pandaType
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block47;
block47:;
// line 419
panda$core$MutableString* $tmp1132 = *(&local4);
panda$core$String* $tmp1133 = panda$core$MutableString$finish$R$panda$core$String($tmp1132);
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1134 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
*(&local21) = $tmp1133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// line 420
panda$core$MutableString* $tmp1135 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1135);
panda$core$MutableString* $tmp1136 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
*(&local4) = $tmp1135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// line 421
panda$core$String* $tmp1137 = *(&local21);
ITable* $tmp1139 = ((panda$core$Equatable*) $tmp1137)->$class->itable;
while ($tmp1139->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1139 = $tmp1139->next;
}
$fn1141 $tmp1140 = $tmp1139->methods[1];
panda$core$Bit $tmp1142 = $tmp1140(((panda$core$Equatable*) $tmp1137), ((panda$core$Equatable*) &$s1138));
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block50; else goto block51;
block50:;
*(&local22) = $tmp1142;
goto block52;
block51:;
org$pandalanguage$pandac$ASTNode* $tmp1144 = *(&local3);
panda$core$Bit $tmp1145 = panda$core$Bit$init$builtin_bit($tmp1144 != NULL);
*(&local22) = $tmp1145;
goto block52;
block52:;
panda$core$Bit $tmp1146 = *(&local22);
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block53; else goto block55;
block53:;
// line 422
org$pandalanguage$pandac$ASTNode* $tmp1148 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1149 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1150 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1151 = *(&local1);
org$pandalanguage$pandac$Position $tmp1152 = $tmp1151.position;
panda$core$String* $tmp1153 = *(&local21);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1149, $tmp1150, $tmp1152, $tmp1153);
org$pandalanguage$pandac$ASTNode* $tmp1154 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1148, $tmp1149);
org$pandalanguage$pandac$ASTNode* $tmp1155 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
*(&local3) = $tmp1154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// line 424
org$pandalanguage$pandac$ASTNode* $tmp1156 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1157 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1156, $tmp1157);
org$pandalanguage$pandac$ASTNode* $tmp1159 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
*(&local3) = $tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
goto block54;
block55:;
// line 1
// line 427
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1161 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1160);
org$pandalanguage$pandac$ASTNode* $tmp1162 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
*(&local3) = $tmp1161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
goto block54;
block54:;
panda$core$String* $tmp1163 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing text
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1164 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1165 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block35:;
// line 431
org$pandalanguage$pandac$parser$Token $tmp1167 = *(&local5);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1167, &$s1168);
// line 432
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1169 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1170 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1171 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1172 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 434
panda$core$MutableString* $tmp1173 = *(&local4);
panda$core$String* $tmp1174 = *(&local8);
panda$core$String* $tmp1175 = *(&local8);
panda$core$String* $tmp1176 = *(&local8);
panda$core$String$Index $tmp1177 = panda$core$String$get_start$R$panda$core$String$Index($tmp1176);
panda$core$String$Index $tmp1178 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp1175, $tmp1177);
panda$core$Bit $tmp1179 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1180 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1178, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1179);
panda$core$String* $tmp1181 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp1174, $tmp1180);
panda$core$MutableString$append$panda$core$String($tmp1173, $tmp1181);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
panda$core$String* $tmp1182 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
goto block10;
block18:;
// line 436
panda$core$MutableString* $tmp1183 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp1184 = *(&local5);
panda$core$String* $tmp1185 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1184);
panda$core$MutableString$append$panda$core$String($tmp1183, $tmp1185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
goto block10;
block10:;
goto block6;
block7:;
// line 439
org$pandalanguage$pandac$ASTNode* $tmp1186 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1187 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1188 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1189 = *(&local1);
org$pandalanguage$pandac$Position $tmp1190 = $tmp1189.position;
panda$core$MutableString* $tmp1191 = *(&local4);
panda$core$String* $tmp1192 = panda$core$MutableString$finish$R$panda$core$String($tmp1191);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1187, $tmp1188, $tmp1190, $tmp1192);
org$pandalanguage$pandac$ASTNode* $tmp1193 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1186, $tmp1187);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$MutableString* $tmp1194 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp1193;

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
// line 448
panda$core$Int64 $tmp1197 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1198 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1197);
org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1198, &$s1200);
*(&local0) = $tmp1199;
// line 449
org$pandalanguage$pandac$parser$Token$nullable $tmp1201 = *(&local0);
panda$core$Bit $tmp1202 = panda$core$Bit$init$builtin_bit(!$tmp1201.nonnull);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block1; else goto block2;
block1:;
// line 450
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 452
org$pandalanguage$pandac$ASTNode* $tmp1204 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
*(&local1) = $tmp1204;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// line 453
org$pandalanguage$pandac$ASTNode* $tmp1206 = *(&local1);
panda$core$Bit $tmp1207 = panda$core$Bit$init$builtin_bit($tmp1206 == NULL);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block3; else goto block4;
block3:;
// line 454
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 456
org$pandalanguage$pandac$ASTNode* $tmp1210 = *(&local1);
panda$core$Int64* $tmp1211 = &$tmp1210->$rawValue;
panda$core$Int64 $tmp1212 = *$tmp1211;
panda$core$Int64 $tmp1213 = (panda$core$Int64) {20};
panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1212, $tmp1213);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp1216 = (org$pandalanguage$pandac$Position*) ($tmp1210->$data + 0);
org$pandalanguage$pandac$Position $tmp1217 = *$tmp1216;
*(&local2) = $tmp1217;
panda$core$String** $tmp1218 = (panda$core$String**) ($tmp1210->$data + 16);
panda$core$String* $tmp1219 = *$tmp1218;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1220 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
*(&local3) = $tmp1219;
// line 459
panda$core$Int64 $tmp1221 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1222 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1221);
org$pandalanguage$pandac$parser$Token$nullable $tmp1223 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1222);
panda$core$Bit $tmp1224 = panda$core$Bit$init$builtin_bit($tmp1223.nonnull);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block8; else goto block9;
block8:;
// line 461
panda$collections$Array* $tmp1226 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1226);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1227 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
*(&local4) = $tmp1226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// line 462
org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
*(&local5) = $tmp1228;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// line 463
org$pandalanguage$pandac$ASTNode* $tmp1230 = *(&local5);
panda$core$Bit $tmp1231 = panda$core$Bit$init$builtin_bit($tmp1230 == NULL);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block10; else goto block11;
block10:;
// line 464
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1233 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1234 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1235 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1236 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 466
panda$collections$Array* $tmp1237 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1238 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1239 = (panda$core$Int64) {31};
org$pandalanguage$pandac$Position $tmp1240 = *(&local2);
panda$core$String* $tmp1241 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1242 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1238, $tmp1239, $tmp1240, $tmp1241, $tmp1242);
panda$collections$Array$add$panda$collections$Array$T($tmp1237, ((panda$core$Object*) $tmp1238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// line 467
goto block12;
block12:;
panda$core$Int64 $tmp1243 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1244 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1243);
org$pandalanguage$pandac$parser$Token$nullable $tmp1245 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1244);
panda$core$Bit $tmp1246 = panda$core$Bit$init$builtin_bit($tmp1245.nonnull);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block13; else goto block14;
block13:;
// line 468
panda$core$Int64 $tmp1248 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1249 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1248);
org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1249, &$s1251);
*(&local6) = $tmp1250;
// line 469
panda$core$Int64 $tmp1252 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1252);
org$pandalanguage$pandac$parser$Token$nullable $tmp1254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1253, &$s1255);
panda$core$Bit $tmp1256 = panda$core$Bit$init$builtin_bit(!$tmp1254.nonnull);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block15; else goto block16;
block15:;
// line 470
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1258 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1259 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1260 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 472
org$pandalanguage$pandac$ASTNode* $tmp1262 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1263 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local7) = $tmp1262;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// line 473
org$pandalanguage$pandac$ASTNode* $tmp1264 = *(&local7);
panda$core$Bit $tmp1265 = panda$core$Bit$init$builtin_bit($tmp1264 == NULL);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block17; else goto block18;
block17:;
// line 474
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1267 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1268 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1269 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 476
panda$collections$Array* $tmp1272 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1274 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1275 = *(&local6);
org$pandalanguage$pandac$Position $tmp1276 = ((org$pandalanguage$pandac$parser$Token) $tmp1275.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = *(&local6);
panda$core$String* $tmp1278 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1277.value));
org$pandalanguage$pandac$ASTNode* $tmp1279 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1273, $tmp1274, $tmp1276, $tmp1278, $tmp1279);
panda$collections$Array$add$panda$collections$Array$T($tmp1272, ((panda$core$Object*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 479
panda$core$Int64 $tmp1281 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1281);
org$pandalanguage$pandac$parser$Token$nullable $tmp1283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1282, &$s1284);
panda$core$Bit $tmp1285 = panda$core$Bit$init$builtin_bit(!$tmp1283.nonnull);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block19; else goto block20;
block19:;
// line 480
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1287 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1288 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1290 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 482
panda$core$Int64 $tmp1291 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1292 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1291);
org$pandalanguage$pandac$parser$Token$nullable $tmp1293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1292, &$s1294);
panda$core$Bit $tmp1295 = panda$core$Bit$init$builtin_bit(!$tmp1293.nonnull);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block21; else goto block22;
block21:;
// line 483
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1297 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1298 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1300 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 485
org$pandalanguage$pandac$ASTNode* $tmp1301 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1302 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
*(&local8) = $tmp1301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
// line 486
org$pandalanguage$pandac$ASTNode* $tmp1303 = *(&local8);
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit($tmp1303 == NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block23; else goto block24;
block23:;
// line 487
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1306 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1308 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1309 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 489
org$pandalanguage$pandac$ASTNode* $tmp1311 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1312 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1313 = *(&local0);
org$pandalanguage$pandac$Position $tmp1314 = ((org$pandalanguage$pandac$parser$Token) $tmp1313.value).position;
panda$collections$Array* $tmp1315 = *(&local4);
panda$collections$ImmutableArray* $tmp1316 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1315);
org$pandalanguage$pandac$ASTNode* $tmp1317 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1311, $tmp1312, $tmp1314, $tmp1316, $tmp1317);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
org$pandalanguage$pandac$ASTNode* $tmp1318 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1319 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1320 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1321 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1322 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1311;
block9:;
// line 491
panda$core$Int64 $tmp1323 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1324 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1323);
org$pandalanguage$pandac$parser$Token$nullable $tmp1325 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1324);
panda$core$Bit $tmp1326 = panda$core$Bit$init$builtin_bit($tmp1325.nonnull);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block25; else goto block26;
block25:;
// line 493
panda$collections$Array* $tmp1328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1328);
*(&local9) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1329 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
*(&local9) = $tmp1328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// line 494
panda$collections$Array* $tmp1330 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1331 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1330, ((panda$core$Object*) $tmp1331));
// line 495
panda$core$Bit $tmp1332 = panda$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1332;
// line 496
goto block27;
block27:;
// line 497
org$pandalanguage$pandac$ASTNode* $tmp1333 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1334 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
*(&local11) = $tmp1333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
// line 498
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local11);
panda$core$Bit $tmp1336 = panda$core$Bit$init$builtin_bit($tmp1335 == NULL);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block30; else goto block31;
block30:;
// line 499
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1339 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1341 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
// line 501
org$pandalanguage$pandac$ASTNode* $tmp1342 = *(&local11);
panda$core$Int64* $tmp1343 = &$tmp1342->$rawValue;
panda$core$Int64 $tmp1344 = *$tmp1343;
panda$core$Int64 $tmp1345 = (panda$core$Int64) {20};
panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1344, $tmp1345);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block33; else goto block34;
block33:;
goto block32;
block34:;
// line 504
panda$core$Bit $tmp1348 = panda$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1348;
goto block32;
block32:;
// line 506
panda$collections$Array* $tmp1349 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1350 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1349, ((panda$core$Object*) $tmp1350));
org$pandalanguage$pandac$ASTNode* $tmp1351 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block28:;
panda$core$Int64 $tmp1352 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1353 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1352);
org$pandalanguage$pandac$parser$Token$nullable $tmp1354 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1353);
panda$core$Bit $tmp1355 = panda$core$Bit$init$builtin_bit($tmp1354.nonnull);
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block27; else goto block29;
block29:;
// line 508
panda$core$Int64 $tmp1357 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1358 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1357);
org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1358, &$s1360);
panda$core$Bit $tmp1361 = panda$core$Bit$init$builtin_bit(!$tmp1359.nonnull);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block35; else goto block36;
block35:;
// line 509
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1363 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1364 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1364));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1365 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
// line 511
panda$core$Bit $tmp1366 = *(&local10);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block37; else goto block38;
block37:;
panda$core$Int64 $tmp1368 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1369 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1368);
org$pandalanguage$pandac$parser$Token$nullable $tmp1370 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1369);
panda$core$Bit $tmp1371 = panda$core$Bit$init$builtin_bit($tmp1370.nonnull);
*(&local12) = $tmp1371;
goto block39;
block38:;
*(&local12) = $tmp1366;
goto block39;
block39:;
panda$core$Bit $tmp1372 = *(&local12);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block40; else goto block41;
block40:;
// line 512
org$pandalanguage$pandac$ASTNode* $tmp1374 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1375 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
*(&local13) = $tmp1374;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// line 513
org$pandalanguage$pandac$ASTNode* $tmp1376 = *(&local13);
panda$core$Bit $tmp1377 = panda$core$Bit$init$builtin_bit($tmp1376 == NULL);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block42; else goto block43;
block42:;
// line 514
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1380 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1381 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 516
org$pandalanguage$pandac$ASTNode* $tmp1383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1384 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1385 = *(&local0);
org$pandalanguage$pandac$Position $tmp1386 = ((org$pandalanguage$pandac$parser$Token) $tmp1385.value).position;
panda$collections$Array* $tmp1387 = *(&local9);
panda$collections$ImmutableArray* $tmp1388 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1387);
org$pandalanguage$pandac$ASTNode* $tmp1389 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1383, $tmp1384, $tmp1386, $tmp1388, $tmp1389);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
org$pandalanguage$pandac$ASTNode* $tmp1390 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1391 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1392 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1383;
block41:;
// line 519
org$pandalanguage$pandac$parser$Token$nullable $tmp1394 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1394.value), &$s1395);
// line 520
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1396 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1397 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1398 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 523
panda$core$Int64 $tmp1399 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1400 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1399);
org$pandalanguage$pandac$parser$Token$nullable $tmp1401 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1400, &$s1402);
panda$core$Bit $tmp1403 = panda$core$Bit$init$builtin_bit(!$tmp1401.nonnull);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block44; else goto block45;
block44:;
// line 524
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1405 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1405));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 526
panda$core$Int64 $tmp1407 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1408 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1407);
org$pandalanguage$pandac$parser$Token$nullable $tmp1409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1408);
panda$core$Bit $tmp1410 = panda$core$Bit$init$builtin_bit($tmp1409.nonnull);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block46; else goto block47;
block46:;
// line 527
panda$collections$Array* $tmp1412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1412);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1413 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
*(&local14) = $tmp1412;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
// line 528
panda$collections$Array* $tmp1414 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1415 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1414, ((panda$core$Object*) $tmp1415));
// line 529
org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1417 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
*(&local15) = $tmp1416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// line 530
org$pandalanguage$pandac$ASTNode* $tmp1418 = *(&local15);
panda$core$Bit $tmp1419 = panda$core$Bit$init$builtin_bit($tmp1418 == NULL);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block48; else goto block49;
block48:;
// line 531
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1421 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1422 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1423 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1424 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block49:;
// line 533
org$pandalanguage$pandac$ASTNode* $tmp1425 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1426 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1427 = *(&local0);
org$pandalanguage$pandac$Position $tmp1428 = ((org$pandalanguage$pandac$parser$Token) $tmp1427.value).position;
panda$collections$Array* $tmp1429 = *(&local14);
panda$collections$ImmutableArray* $tmp1430 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1429);
org$pandalanguage$pandac$ASTNode* $tmp1431 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1425, $tmp1426, $tmp1428, $tmp1430, $tmp1431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
org$pandalanguage$pandac$ASTNode* $tmp1432 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1433 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1434 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1435 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1425;
block47:;
// line 535
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$String* $tmp1437 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1438 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1436;
block7:;
// line 538
panda$core$Int64 $tmp1439 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1440 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1439);
org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1440);
panda$core$Bit $tmp1442 = panda$core$Bit$init$builtin_bit(!$tmp1441.nonnull);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block50; else goto block51;
block50:;
// line 539
panda$core$Int64 $tmp1444 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1445 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1444);
org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1445, &$s1447);
// line 540
org$pandalanguage$pandac$ASTNode* $tmp1448 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
org$pandalanguage$pandac$ASTNode* $tmp1449 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1448;
block51:;
// line 542
panda$collections$Array* $tmp1450 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1450);
*(&local16) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1451 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
*(&local16) = $tmp1450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// line 543
panda$collections$Array* $tmp1452 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1452, ((panda$core$Object*) $tmp1453));
// line 544
goto block52;
block52:;
// line 545
org$pandalanguage$pandac$ASTNode* $tmp1454 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
*(&local17) = $tmp1454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// line 546
org$pandalanguage$pandac$ASTNode* $tmp1456 = *(&local17);
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit($tmp1456 == NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block55; else goto block56;
block55:;
// line 547
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1459 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1460 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1461 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block56:;
// line 549
panda$collections$Array* $tmp1462 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1463 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp1462, ((panda$core$Object*) $tmp1463));
org$pandalanguage$pandac$ASTNode* $tmp1464 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
panda$core$Int64 $tmp1465 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1466 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1465);
org$pandalanguage$pandac$parser$Token$nullable $tmp1467 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1466);
panda$core$Bit $tmp1468 = panda$core$Bit$init$builtin_bit($tmp1467.nonnull);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block52; else goto block54;
block54:;
// line 552
panda$core$Int64 $tmp1470 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1471 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1470);
org$pandalanguage$pandac$parser$Token$nullable $tmp1472 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1471, &$s1473);
// line 554
org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1474.value), &$s1475);
// line 555
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1476 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1477 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
panda$core$Bit $tmp1478 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {447};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1481, $tmp1480, &$s1482);
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
// line 563
panda$core$Int64 $tmp1483 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1484 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1483);
org$pandalanguage$pandac$parser$Token$nullable $tmp1485 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1484, &$s1486);
*(&local0) = $tmp1485;
// line 564
panda$core$Int64 $tmp1487 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1488 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1487);
org$pandalanguage$pandac$parser$Token$nullable $tmp1489 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1488);
panda$core$Bit $tmp1490 = panda$core$Bit$init$builtin_bit($tmp1489.nonnull);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block1; else goto block2;
block1:;
// line 565
org$pandalanguage$pandac$ASTNode* $tmp1492 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1493 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
*(&local1) = $tmp1492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// line 566
org$pandalanguage$pandac$ASTNode* $tmp1494 = *(&local1);
panda$core$Bit $tmp1495 = panda$core$Bit$init$builtin_bit($tmp1494 == NULL);
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block3; else goto block4;
block3:;
// line 567
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 569
panda$collections$Array* $tmp1498 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1498);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
*(&local2) = $tmp1498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// line 570
panda$collections$Array* $tmp1500 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1501 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1502 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1503 = *(&local0);
org$pandalanguage$pandac$Position $tmp1504 = ((org$pandalanguage$pandac$parser$Token) $tmp1503.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1505 = *(&local0);
panda$core$String* $tmp1506 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1505.value));
org$pandalanguage$pandac$ASTNode* $tmp1507 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1501, $tmp1502, $tmp1504, $tmp1506, $tmp1507);
panda$collections$Array$add$panda$collections$Array$T($tmp1500, ((panda$core$Object*) $tmp1501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// line 571
panda$core$Int64 $tmp1508 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1509 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1508);
org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1509, &$s1511);
panda$core$Bit $tmp1512 = panda$core$Bit$init$builtin_bit(!$tmp1510.nonnull);
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block5; else goto block6;
block5:;
// line 572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1514 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1515 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 574
org$pandalanguage$pandac$ASTNode* $tmp1516 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
*(&local3) = $tmp1516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
// line 575
org$pandalanguage$pandac$ASTNode* $tmp1518 = *(&local3);
panda$core$Bit $tmp1519 = panda$core$Bit$init$builtin_bit($tmp1518 == NULL);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block7; else goto block8;
block7:;
// line 576
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1521 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1522 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1522));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1523 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 578
org$pandalanguage$pandac$ASTNode* $tmp1524 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1525 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1526 = *(&local0);
org$pandalanguage$pandac$Position $tmp1527 = ((org$pandalanguage$pandac$parser$Token) $tmp1526.value).position;
panda$collections$Array* $tmp1528 = *(&local2);
panda$collections$ImmutableArray* $tmp1529 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1528);
org$pandalanguage$pandac$ASTNode* $tmp1530 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1524, $tmp1525, $tmp1527, $tmp1529, $tmp1530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
org$pandalanguage$pandac$ASTNode* $tmp1531 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1532 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1533 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1524;
block2:;
// line 580
panda$collections$Array* $tmp1534 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1534);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1535 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
*(&local4) = $tmp1534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// line 581
panda$collections$Array* $tmp1536 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1537 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1538 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp1539 = *(&local0);
org$pandalanguage$pandac$Position $tmp1540 = ((org$pandalanguage$pandac$parser$Token) $tmp1539.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1541 = *(&local0);
panda$core$String* $tmp1542 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1541.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1537, $tmp1538, $tmp1540, $tmp1542);
panda$collections$Array$add$panda$collections$Array$T($tmp1536, ((panda$core$Object*) $tmp1537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
// line 582
panda$core$Int64 $tmp1543 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1544 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1543);
org$pandalanguage$pandac$parser$Token$nullable $tmp1545 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1544, &$s1546);
panda$core$Bit $tmp1547 = panda$core$Bit$init$builtin_bit(!$tmp1545.nonnull);
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block9; else goto block10;
block9:;
// line 583
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1549 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 585
org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1551 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
*(&local5) = $tmp1550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
// line 586
org$pandalanguage$pandac$ASTNode* $tmp1552 = *(&local5);
panda$core$Bit $tmp1553 = panda$core$Bit$init$builtin_bit($tmp1552 == NULL);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block11; else goto block12;
block11:;
// line 587
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1555 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1556 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 589
org$pandalanguage$pandac$ASTNode* $tmp1557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1558 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1559 = *(&local0);
org$pandalanguage$pandac$Position $tmp1560 = ((org$pandalanguage$pandac$parser$Token) $tmp1559.value).position;
panda$collections$Array* $tmp1561 = *(&local4);
panda$collections$ImmutableArray* $tmp1562 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1561);
org$pandalanguage$pandac$ASTNode* $tmp1563 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1557, $tmp1558, $tmp1560, $tmp1562, $tmp1563);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
org$pandalanguage$pandac$ASTNode* $tmp1564 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1565 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1557;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 596
panda$core$Int64 $tmp1566 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1567 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1566);
org$pandalanguage$pandac$parser$Token$nullable $tmp1568 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1567, &$s1569);
panda$core$Bit $tmp1570 = panda$core$Bit$init$builtin_bit(!$tmp1568.nonnull);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block1; else goto block2;
block1:;
// line 597
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 600
org$pandalanguage$pandac$parser$Lexer** $tmp1572 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1573 = *$tmp1572;
org$pandalanguage$plex$runtime$DFA** $tmp1574 = &$tmp1573->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1575 = *$tmp1574;
panda$core$Int64* $tmp1576 = &$tmp1575->offset;
panda$core$Int64 $tmp1577 = *$tmp1576;
panda$core$Int64 $tmp1578 = (panda$core$Int64) {1};
int64_t $tmp1579 = $tmp1577.value;
int64_t $tmp1580 = $tmp1578.value;
int64_t $tmp1581 = $tmp1579 - $tmp1580;
panda$core$Int64 $tmp1582 = (panda$core$Int64) {$tmp1581};
*(&local0) = $tmp1582;
// line 601
org$pandalanguage$regex$RegexParser** $tmp1583 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1584 = *$tmp1583;
org$pandalanguage$regex$RegexLexer** $tmp1585 = &$tmp1584->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1586 = *$tmp1585;
org$pandalanguage$plex$runtime$DFA** $tmp1587 = &$tmp1586->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1588 = *$tmp1587;
org$pandalanguage$pandac$parser$Lexer** $tmp1589 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1590 = *$tmp1589;
org$pandalanguage$plex$runtime$DFA** $tmp1591 = &$tmp1590->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1592 = *$tmp1591;
panda$core$Int64* $tmp1593 = &$tmp1592->offset;
panda$core$Int64 $tmp1594 = *$tmp1593;
panda$core$Int64* $tmp1595 = &$tmp1588->offset;
*$tmp1595 = $tmp1594;
// line 602
org$pandalanguage$regex$RegexParser** $tmp1596 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1597 = *$tmp1596;
org$pandalanguage$regex$RegexLexer** $tmp1598 = &$tmp1597->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1599 = *$tmp1598;
org$pandalanguage$plex$runtime$DFA** $tmp1600 = &$tmp1599->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1601 = *$tmp1600;
org$pandalanguage$pandac$parser$Lexer** $tmp1602 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1603 = *$tmp1602;
org$pandalanguage$plex$runtime$DFA** $tmp1604 = &$tmp1603->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1605 = *$tmp1604;
panda$core$Int64* $tmp1606 = &$tmp1605->line;
panda$core$Int64 $tmp1607 = *$tmp1606;
panda$core$Int64* $tmp1608 = &$tmp1601->line;
*$tmp1608 = $tmp1607;
// line 603
org$pandalanguage$regex$RegexParser** $tmp1609 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1610 = *$tmp1609;
org$pandalanguage$regex$RegexLexer** $tmp1611 = &$tmp1610->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1612 = *$tmp1611;
org$pandalanguage$plex$runtime$DFA** $tmp1613 = &$tmp1612->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1614 = *$tmp1613;
org$pandalanguage$pandac$parser$Lexer** $tmp1615 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1616 = *$tmp1615;
org$pandalanguage$plex$runtime$DFA** $tmp1617 = &$tmp1616->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1618 = *$tmp1617;
panda$core$Int64* $tmp1619 = &$tmp1618->column;
panda$core$Int64 $tmp1620 = *$tmp1619;
panda$core$Int64* $tmp1621 = &$tmp1614->column;
*$tmp1621 = $tmp1620;
// line 604
org$pandalanguage$regex$RegexParser** $tmp1622 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1623 = *$tmp1622;
org$pandalanguage$pandac$ASTNode* $tmp1624 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q($tmp1623);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1625 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
*(&local1) = $tmp1624;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// line 605
org$pandalanguage$pandac$parser$Lexer** $tmp1626 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1627 = *$tmp1626;
org$pandalanguage$plex$runtime$DFA** $tmp1628 = &$tmp1627->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1629 = *$tmp1628;
org$pandalanguage$regex$RegexParser** $tmp1630 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1631 = *$tmp1630;
org$pandalanguage$regex$RegexLexer** $tmp1632 = &$tmp1631->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1633 = *$tmp1632;
org$pandalanguage$plex$runtime$DFA** $tmp1634 = &$tmp1633->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1635 = *$tmp1634;
panda$core$Int64* $tmp1636 = &$tmp1635->offset;
panda$core$Int64 $tmp1637 = *$tmp1636;
panda$core$Int64* $tmp1638 = &$tmp1629->offset;
*$tmp1638 = $tmp1637;
// line 606
org$pandalanguage$pandac$parser$Lexer** $tmp1639 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1640 = *$tmp1639;
org$pandalanguage$plex$runtime$DFA** $tmp1641 = &$tmp1640->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1642 = *$tmp1641;
org$pandalanguage$regex$RegexParser** $tmp1643 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1644 = *$tmp1643;
org$pandalanguage$regex$RegexLexer** $tmp1645 = &$tmp1644->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1646 = *$tmp1645;
org$pandalanguage$plex$runtime$DFA** $tmp1647 = &$tmp1646->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1648 = *$tmp1647;
panda$core$Int64* $tmp1649 = &$tmp1648->line;
panda$core$Int64 $tmp1650 = *$tmp1649;
panda$core$Int64* $tmp1651 = &$tmp1642->line;
*$tmp1651 = $tmp1650;
// line 607
org$pandalanguage$pandac$parser$Lexer** $tmp1652 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1653 = *$tmp1652;
org$pandalanguage$plex$runtime$DFA** $tmp1654 = &$tmp1653->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1655 = *$tmp1654;
org$pandalanguage$regex$RegexParser** $tmp1656 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1657 = *$tmp1656;
org$pandalanguage$regex$RegexLexer** $tmp1658 = &$tmp1657->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1659 = *$tmp1658;
org$pandalanguage$plex$runtime$DFA** $tmp1660 = &$tmp1659->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1661 = *$tmp1660;
panda$core$Int64* $tmp1662 = &$tmp1661->column;
panda$core$Int64 $tmp1663 = *$tmp1662;
panda$core$Int64* $tmp1664 = &$tmp1655->column;
*$tmp1664 = $tmp1663;
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1665 = *(&local1);
panda$core$Bit $tmp1666 = panda$core$Bit$init$builtin_bit($tmp1665 == NULL);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block3; else goto block4;
block3:;
// line 609
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1668 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 611
panda$core$Int64 $tmp1669 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1670 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1669);
org$pandalanguage$pandac$parser$Token$nullable $tmp1671 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1670, &$s1672);
panda$core$Bit $tmp1673 = panda$core$Bit$init$builtin_bit(!$tmp1671.nonnull);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block5; else goto block6;
block5:;
// line 612
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1675 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 614
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1676 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1677 = *$tmp1676;
panda$core$Bit $tmp1678 = panda$core$Bit$init$builtin_bit($tmp1677 != NULL);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block7; else goto block8;
block7:;
// line 616
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1680 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1681 = *$tmp1680;
$fn1683 $tmp1682 = ($fn1683) $tmp1681->$class->vtable[7];
$tmp1682($tmp1681);
// line 617
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1684 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1685 = *$tmp1684;
$fn1687 $tmp1686 = ($fn1687) $tmp1685->$class->vtable[7];
$tmp1686($tmp1685);
// line 619
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1688 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1689 = *$tmp1688;
panda$core$Int64 $tmp1690 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$Kind $tmp1691 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1690);
panda$core$Int64 $tmp1692 = *(&local0);
panda$core$String$Index $tmp1693 = panda$core$String$Index$init$panda$core$Int64($tmp1692);
org$pandalanguage$pandac$parser$Lexer** $tmp1694 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1695 = *$tmp1694;
org$pandalanguage$plex$runtime$DFA** $tmp1696 = &$tmp1695->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1697 = *$tmp1696;
panda$core$Int64* $tmp1698 = &$tmp1697->offset;
panda$core$Int64 $tmp1699 = *$tmp1698;
panda$core$String$Index $tmp1700 = panda$core$String$Index$init$panda$core$Int64($tmp1699);
org$pandalanguage$pandac$ASTNode* $tmp1701 = *(&local1);
$fn1703 $tmp1702 = ($fn1703) $tmp1701->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1704 = $tmp1702($tmp1701);
org$pandalanguage$pandac$parser$Token $tmp1705 = org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position($tmp1691, $tmp1693, $tmp1700, $tmp1704);
$fn1707 $tmp1706 = ($fn1707) $tmp1689->$class->vtable[6];
$tmp1706($tmp1689, $tmp1705);
goto block8;
block8:;
// line 622
org$pandalanguage$pandac$ASTNode* $tmp1708 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
org$pandalanguage$pandac$ASTNode* $tmp1709 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1708;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$Kind local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$String* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 631
org$pandalanguage$pandac$parser$Token $tmp1710 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1710;
// line 632
org$pandalanguage$pandac$parser$Token $tmp1711 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1712 = $tmp1711.kind;
panda$core$Int64 $tmp1713 = $tmp1712.$rawValue;
panda$core$Int64 $tmp1714 = (panda$core$Int64) {49};
panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1714);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block2; else goto block3;
block2:;
// line 634
org$pandalanguage$pandac$parser$Token $tmp1717 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1718 = $tmp1717.kind;
*(&local1) = $tmp1718;
// line 635
panda$core$Bit* $tmp1719 = &param0->allowLambdas;
panda$core$Bit $tmp1720 = *$tmp1719;
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1722 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1723;
$tmp1723 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1723->value = $tmp1722;
panda$core$Int64 $tmp1724 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1725 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1724);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1726;
$tmp1726 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1726->value = $tmp1725;
ITable* $tmp1727 = ((panda$core$Equatable*) $tmp1723)->$class->itable;
while ($tmp1727->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1727 = $tmp1727->next;
}
$fn1729 $tmp1728 = $tmp1727->methods[0];
panda$core$Bit $tmp1730 = $tmp1728(((panda$core$Equatable*) $tmp1723), ((panda$core$Equatable*) $tmp1726));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1723)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1726)));
*(&local3) = $tmp1730;
goto block6;
block5:;
*(&local3) = $tmp1720;
goto block6;
block6:;
panda$core$Bit $tmp1731 = *(&local3);
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1731;
goto block9;
block8:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1733 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1734;
$tmp1734 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1734->value = $tmp1733;
panda$core$Int64 $tmp1735 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1736 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1735);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1737;
$tmp1737 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1737->value = $tmp1736;
ITable* $tmp1738 = ((panda$core$Equatable*) $tmp1734)->$class->itable;
while ($tmp1738->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
panda$core$Bit $tmp1741 = $tmp1739(((panda$core$Equatable*) $tmp1734), ((panda$core$Equatable*) $tmp1737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1734)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1737)));
*(&local2) = $tmp1741;
goto block9;
block9:;
panda$core$Bit $tmp1742 = *(&local2);
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block10; else goto block11;
block10:;
// line 636
org$pandalanguage$pandac$parser$Token $tmp1744 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1744);
// line 637
org$pandalanguage$pandac$ASTNode* $tmp1745 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
return $tmp1745;
block11:;
// line 639
org$pandalanguage$pandac$ASTNode* $tmp1746 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1747 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token $tmp1748 = *(&local0);
org$pandalanguage$pandac$Position $tmp1749 = $tmp1748.position;
org$pandalanguage$pandac$parser$Token $tmp1750 = *(&local0);
panda$core$String* $tmp1751 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1750);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1746, $tmp1747, $tmp1749, $tmp1751);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
return $tmp1746;
block3:;
panda$core$Int64 $tmp1752 = (panda$core$Int64) {3};
panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1752);
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block12; else goto block13;
block12:;
// line 641
org$pandalanguage$pandac$ASTNode* $tmp1755 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1756 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1757 = *(&local0);
org$pandalanguage$pandac$Position $tmp1758 = $tmp1757.position;
org$pandalanguage$pandac$parser$Token $tmp1759 = *(&local0);
panda$core$String* $tmp1760 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1759);
panda$core$UInt64$nullable $tmp1761 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1760);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1755, $tmp1756, $tmp1758, ((panda$core$UInt64) $tmp1761.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
return $tmp1755;
block13:;
panda$core$Int64 $tmp1762 = (panda$core$Int64) {4};
panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1762);
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block14; else goto block15;
block14:;
// line 643
org$pandalanguage$pandac$ASTNode* $tmp1765 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1766 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1767 = *(&local0);
org$pandalanguage$pandac$Position $tmp1768 = $tmp1767.position;
org$pandalanguage$pandac$parser$Token $tmp1769 = *(&local0);
panda$core$String* $tmp1770 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1769);
panda$core$Int64 $tmp1771 = (panda$core$Int64) {2};
panda$core$Bit $tmp1772 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1773 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1771, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1772);
panda$core$String* $tmp1774 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1770, $tmp1773);
panda$core$Int64 $tmp1775 = (panda$core$Int64) {2};
panda$core$UInt64$nullable $tmp1776 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1774, $tmp1775);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1765, $tmp1766, $tmp1768, ((panda$core$UInt64) $tmp1776.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
return $tmp1765;
block15:;
panda$core$Int64 $tmp1777 = (panda$core$Int64) {5};
panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block16; else goto block17;
block16:;
// line 645
org$pandalanguage$pandac$ASTNode* $tmp1780 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1781 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1782 = *(&local0);
org$pandalanguage$pandac$Position $tmp1783 = $tmp1782.position;
org$pandalanguage$pandac$parser$Token $tmp1784 = *(&local0);
panda$core$String* $tmp1785 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1784);
panda$core$Int64 $tmp1786 = (panda$core$Int64) {2};
panda$core$Bit $tmp1787 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1788 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1786, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1787);
panda$core$String* $tmp1789 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1785, $tmp1788);
panda$core$Int64 $tmp1790 = (panda$core$Int64) {16};
panda$core$UInt64$nullable $tmp1791 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1789, $tmp1790);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1780, $tmp1781, $tmp1783, ((panda$core$UInt64) $tmp1791.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
return $tmp1780;
block17:;
panda$core$Int64 $tmp1792 = (panda$core$Int64) {6};
panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block18; else goto block19;
block18:;
// line 647
org$pandalanguage$pandac$ASTNode* $tmp1795 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1796 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token $tmp1797 = *(&local0);
org$pandalanguage$pandac$Position $tmp1798 = $tmp1797.position;
org$pandalanguage$pandac$parser$Token $tmp1799 = *(&local0);
panda$core$String* $tmp1800 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1799);
panda$core$Real64$nullable $tmp1801 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1800);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1795, $tmp1796, $tmp1798, ((panda$core$Real64) $tmp1801.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
return $tmp1795;
block19:;
panda$core$Int64 $tmp1802 = (panda$core$Int64) {47};
panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1802);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block20; else goto block21;
block20:;
// line 649
org$pandalanguage$pandac$ASTNode* $tmp1805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1806 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token $tmp1807 = *(&local0);
org$pandalanguage$pandac$Position $tmp1808 = $tmp1807.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1805, $tmp1806, $tmp1808);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
return $tmp1805;
block21:;
panda$core$Int64 $tmp1809 = (panda$core$Int64) {48};
panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1809);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block22; else goto block23;
block22:;
// line 651
org$pandalanguage$pandac$ASTNode* $tmp1812 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1813 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token $tmp1814 = *(&local0);
org$pandalanguage$pandac$Position $tmp1815 = $tmp1814.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1812, $tmp1813, $tmp1815);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
return $tmp1812;
block23:;
panda$core$Int64 $tmp1816 = (panda$core$Int64) {44};
panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1816);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block24; else goto block25;
block24:;
// line 653
org$pandalanguage$pandac$ASTNode* $tmp1819 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1820 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token $tmp1821 = *(&local0);
org$pandalanguage$pandac$Position $tmp1822 = $tmp1821.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1819, $tmp1820, $tmp1822);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
return $tmp1819;
block25:;
panda$core$Int64 $tmp1823 = (panda$core$Int64) {42};
panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1823);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block26; else goto block27;
block26:;
// line 655
org$pandalanguage$pandac$ASTNode* $tmp1826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1827 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1828 = *(&local0);
org$pandalanguage$pandac$Position $tmp1829 = $tmp1828.position;
panda$core$Bit $tmp1830 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1826, $tmp1827, $tmp1829, $tmp1830);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
return $tmp1826;
block27:;
panda$core$Int64 $tmp1831 = (panda$core$Int64) {43};
panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1831);
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block28; else goto block29;
block28:;
// line 657
org$pandalanguage$pandac$ASTNode* $tmp1834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1835 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1836 = *(&local0);
org$pandalanguage$pandac$Position $tmp1837 = $tmp1836.position;
panda$core$Bit $tmp1838 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1834, $tmp1835, $tmp1837, $tmp1838);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
return $tmp1834;
block29:;
panda$core$Int64 $tmp1839 = (panda$core$Int64) {8};
panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1839);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp1842 = (panda$core$Int64) {7};
panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1842);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block30; else goto block32;
block30:;
// line 659
org$pandalanguage$pandac$parser$Token $tmp1845 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1845);
// line 660
org$pandalanguage$pandac$ASTNode* $tmp1846 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1846));
return $tmp1846;
block32:;
panda$core$Int64 $tmp1847 = (panda$core$Int64) {104};
panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1847);
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block33; else goto block34;
block33:;
// line 662
org$pandalanguage$pandac$parser$Token $tmp1850 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1850);
// line 663
org$pandalanguage$pandac$ASTNode* $tmp1851 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
return $tmp1851;
block34:;
panda$core$Int64 $tmp1852 = (panda$core$Int64) {14};
panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block35; else goto block36;
block35:;
// line 665
org$pandalanguage$pandac$parser$Token $tmp1855 = *(&local0);
panda$core$String* $tmp1856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1855);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1857 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
*(&local4) = $tmp1856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
// line 666
panda$core$String* $tmp1858 = *(&local4);
panda$core$Bit $tmp1859 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1858, &$s1860);
bool $tmp1861 = $tmp1859.value;
if ($tmp1861) goto block37; else goto block39;
block37:;
// line 667
panda$core$Int64 $tmp1862 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1863 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1862);
org$pandalanguage$pandac$parser$Token$nullable $tmp1864 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1863, &$s1865);
// line 668
org$pandalanguage$pandac$ASTNode* $tmp1866 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1867 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
*(&local5) = $tmp1866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// line 669
org$pandalanguage$pandac$ASTNode* $tmp1868 = *(&local5);
panda$core$Bit $tmp1869 = panda$core$Bit$init$builtin_bit($tmp1868 == NULL);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block40; else goto block41;
block40:;
// line 670
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1871 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1872 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block41:;
// line 672
panda$core$Int64 $tmp1873 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1874 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1873);
org$pandalanguage$pandac$parser$Token$nullable $tmp1875 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1874, &$s1876);
// line 673
org$pandalanguage$pandac$ASTNode* $tmp1877 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1878 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token $tmp1879 = *(&local0);
org$pandalanguage$pandac$Position $tmp1880 = $tmp1879.position;
org$pandalanguage$pandac$ASTNode* $tmp1881 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1877, $tmp1878, $tmp1880, $tmp1881);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
org$pandalanguage$pandac$ASTNode* $tmp1882 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1883 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1877;
block39:;
// line 675
panda$core$String* $tmp1884 = *(&local4);
panda$core$Bit $tmp1885 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1884, &$s1886);
bool $tmp1887 = $tmp1885.value;
if ($tmp1887) goto block42; else goto block43;
block42:;
// line 676
org$pandalanguage$pandac$ASTNode* $tmp1888 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1889 = (panda$core$Int64) {3};
org$pandalanguage$pandac$parser$Token $tmp1890 = *(&local0);
org$pandalanguage$pandac$Position $tmp1891 = $tmp1890.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1888, $tmp1889, $tmp1891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$String* $tmp1892 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1888;
block43:;
goto block38;
block38:;
// line 678
org$pandalanguage$pandac$parser$Token $tmp1893 = *(&local0);
panda$core$String* $tmp1894 = *(&local4);
panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1896, $tmp1894);
panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1898);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1893, $tmp1897);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1895));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// line 679
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1899 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
panda$core$Int64 $tmp1900 = (panda$core$Int64) {21};
panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1900);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp1903 = (panda$core$Int64) {22};
panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block44; else goto block46;
block44:;
// line 681
org$pandalanguage$pandac$parser$Token $tmp1906 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1906);
// line 682
org$pandalanguage$pandac$ASTNode* $tmp1907 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
return $tmp1907;
block46:;
panda$core$Int64 $tmp1908 = (panda$core$Int64) {55};
panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1908);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block47; else goto block48;
block47:;
// line 684
org$pandalanguage$pandac$parser$Token $tmp1911 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1911);
// line 685
org$pandalanguage$pandac$ASTNode* $tmp1912 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
return $tmp1912;
block48:;
// line 687
org$pandalanguage$pandac$parser$Token $tmp1913 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp1914 = *(&local0);
panda$core$String* $tmp1915 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1914);
panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, $tmp1915);
panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1919);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1913, $tmp1918);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
// line 688
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp1920 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1922 = (panda$core$Int64) {630};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1923, $tmp1922, &$s1924);
abort(); // unreachable
block49:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 694
panda$core$Int64* $tmp1925 = &param0->$rawValue;
panda$core$Int64 $tmp1926 = *$tmp1925;
panda$core$Int64 $tmp1927 = (panda$core$Int64) {20};
panda$core$Bit $tmp1928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1926, $tmp1927);
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1930 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1931 = *$tmp1930;
panda$core$String** $tmp1932 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1933 = *$tmp1932;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1934 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
*(&local0) = $tmp1933;
// line 695
panda$core$String* $tmp1935 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
panda$core$String* $tmp1936 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp1935;
block3:;
panda$core$Int64 $tmp1937 = (panda$core$Int64) {15};
panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1926, $tmp1937);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1940 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1941 = *$tmp1940;
org$pandalanguage$pandac$ASTNode** $tmp1942 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1943 = *$tmp1942;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1944 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
*(&local1) = $tmp1943;
panda$core$String** $tmp1945 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1946 = *$tmp1945;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1947 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
*(&local2) = $tmp1946;
// line 697
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local1);
panda$core$String* $tmp1949 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp1948);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1950 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
*(&local3) = $tmp1949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
// line 698
panda$core$String* $tmp1951 = *(&local3);
panda$core$Bit $tmp1952 = panda$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block6; else goto block7;
block6:;
// line 699
panda$core$String* $tmp1954 = *(&local3);
panda$core$String* $tmp1955 = *(&local2);
panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1957, $tmp1955);
panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, $tmp1956);
panda$core$String* $tmp1959 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
*(&local3) = $tmp1958;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
goto block7;
block7:;
// line 701
panda$core$String* $tmp1960 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
panda$core$String* $tmp1961 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1962 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
// unreffing field
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1963 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1960;
block5:;
// line 703
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp1964 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1966 = (panda$core$Int64) {693};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token local1;
// line 713
org$pandalanguage$pandac$parser$Token $tmp1969 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1969;
// line 714
org$pandalanguage$pandac$parser$Token $tmp1970 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1971 = $tmp1970.kind;
panda$core$Int64 $tmp1972 = $tmp1971.$rawValue;
panda$core$Int64 $tmp1973 = (panda$core$Int64) {49};
panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1973);
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1976 = (panda$core$Int64) {52};
panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1976);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1979 = (panda$core$Int64) {53};
panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1979);
bool $tmp1981 = $tmp1980.value;
if ($tmp1981) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1982 = (panda$core$Int64) {54};
panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1982);
bool $tmp1984 = $tmp1983.value;
if ($tmp1984) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1985 = (panda$core$Int64) {55};
panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1988 = (panda$core$Int64) {56};
panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1988);
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1991 = (panda$core$Int64) {58};
panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1991);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1994 = (panda$core$Int64) {59};
panda$core$Bit $tmp1995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1994);
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp1997 = (panda$core$Int64) {60};
panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp1997);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block2; else goto block11;
block11:;
panda$core$Int64 $tmp2000 = (panda$core$Int64) {63};
panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2000);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block2; else goto block12;
block12:;
panda$core$Int64 $tmp2003 = (panda$core$Int64) {66};
panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2003);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block2; else goto block13;
block13:;
panda$core$Int64 $tmp2006 = (panda$core$Int64) {65};
panda$core$Bit $tmp2007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2006);
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block2; else goto block14;
block14:;
panda$core$Int64 $tmp2009 = (panda$core$Int64) {57};
panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2009);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block2; else goto block15;
block15:;
panda$core$Int64 $tmp2012 = (panda$core$Int64) {67};
panda$core$Bit $tmp2013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2012);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block2; else goto block16;
block16:;
panda$core$Int64 $tmp2015 = (panda$core$Int64) {68};
panda$core$Bit $tmp2016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2015);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block2; else goto block17;
block17:;
panda$core$Int64 $tmp2018 = (panda$core$Int64) {69};
panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2018);
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block2; else goto block18;
block18:;
panda$core$Int64 $tmp2021 = (panda$core$Int64) {70};
panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2021);
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block2; else goto block19;
block19:;
panda$core$Int64 $tmp2024 = (panda$core$Int64) {71};
panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2024);
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block2; else goto block20;
block20:;
panda$core$Int64 $tmp2027 = (panda$core$Int64) {72};
panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2027);
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block2; else goto block21;
block21:;
panda$core$Int64 $tmp2030 = (panda$core$Int64) {50};
panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2030);
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block2; else goto block22;
block22:;
panda$core$Int64 $tmp2033 = (panda$core$Int64) {51};
panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2033);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block2; else goto block23;
block23:;
panda$core$Int64 $tmp2036 = (panda$core$Int64) {73};
panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2036);
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block2; else goto block24;
block2:;
// line 721
org$pandalanguage$pandac$parser$Token $tmp2039 = *(&local0);
panda$core$String* $tmp2040 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2039);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2040));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2040));
return $tmp2040;
block24:;
panda$core$Int64 $tmp2041 = (panda$core$Int64) {64};
panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block25; else goto block26;
block25:;
// line 723
org$pandalanguage$pandac$parser$Token $tmp2044 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2044;
// line 724
org$pandalanguage$pandac$parser$Token $tmp2045 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2046 = $tmp2045.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2047;
$tmp2047 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2047->value = $tmp2046;
panda$core$Int64 $tmp2048 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2049 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2048);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2050;
$tmp2050 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2050->value = $tmp2049;
ITable* $tmp2051 = ((panda$core$Equatable*) $tmp2047)->$class->itable;
while ($tmp2051->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2051 = $tmp2051->next;
}
$fn2053 $tmp2052 = $tmp2051->methods[0];
panda$core$Bit $tmp2054 = $tmp2052(((panda$core$Equatable*) $tmp2047), ((panda$core$Equatable*) $tmp2050));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2047)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2050)));
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block27; else goto block29;
block27:;
// line 725
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2056));
return &$s2056;
block29:;
// line 1
// line 728
org$pandalanguage$pandac$parser$Token $tmp2057 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2057);
// line 729
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2058));
return &$s2058;
block28:;
goto block1;
block26:;
panda$core$Int64 $tmp2059 = (panda$core$Int64) {102};
panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, $tmp2059);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block30; else goto block31;
block30:;
// line 732
panda$core$Int64 $tmp2062 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2063 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2062);
org$pandalanguage$pandac$parser$Token$nullable $tmp2064 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2063, &$s2065);
panda$core$Bit $tmp2066 = panda$core$Bit$init$builtin_bit(!$tmp2064.nonnull);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block32; else goto block33;
block32:;
// line 733
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block33:;
// line 735
panda$core$Int64 $tmp2068 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp2069 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2068);
org$pandalanguage$pandac$parser$Token$nullable $tmp2070 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2069);
panda$core$Bit $tmp2071 = panda$core$Bit$init$builtin_bit($tmp2070.nonnull);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block34; else goto block35;
block34:;
// line 736
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2073));
return &$s2073;
block35:;
// line 738
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2074));
return &$s2074;
block31:;
// line 740
org$pandalanguage$pandac$parser$Token $tmp2075 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2076 = *(&local0);
panda$core$String* $tmp2077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2076);
panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2079, $tmp2077);
panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2081);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp2075, $tmp2080);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// line 742
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2082 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2084 = (panda$core$Int64) {712};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2085, $tmp2084, &$s2086);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 747
panda$core$Bit $tmp2087 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode* $tmp2088 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2087);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
return $tmp2088;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 755
panda$core$Int64 $tmp2089 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2090 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2089);
org$pandalanguage$pandac$parser$Token$nullable $tmp2091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2090, &$s2092);
*(&local0) = $tmp2091;
// line 756
org$pandalanguage$pandac$parser$Token$nullable $tmp2093 = *(&local0);
panda$core$Bit $tmp2094 = panda$core$Bit$init$builtin_bit(!$tmp2093.nonnull);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block1; else goto block2;
block1:;
// line 757
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 759
panda$collections$Array* $tmp2096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2096);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2097 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
*(&local1) = $tmp2096;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
// line 760
panda$core$Int64 $tmp2098 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2099 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2098);
org$pandalanguage$pandac$parser$Token$nullable $tmp2100 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2099);
panda$core$Bit $tmp2101 = panda$core$Bit$init$builtin_bit(!$tmp2100.nonnull);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block3; else goto block4;
block3:;
// line 761
org$pandalanguage$pandac$ASTNode* $tmp2103 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2104 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
*(&local2) = $tmp2103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// line 762
org$pandalanguage$pandac$ASTNode* $tmp2105 = *(&local2);
panda$core$Bit $tmp2106 = panda$core$Bit$init$builtin_bit($tmp2105 == NULL);
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block5; else goto block6;
block5:;
// line 763
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2109 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 765
panda$collections$Array* $tmp2110 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2111 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2110, ((panda$core$Object*) $tmp2111));
// line 766
goto block7;
block7:;
panda$core$Int64 $tmp2112 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2113 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2112);
org$pandalanguage$pandac$parser$Token$nullable $tmp2114 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2113);
panda$core$Bit $tmp2115 = panda$core$Bit$init$builtin_bit($tmp2114.nonnull);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block8; else goto block9;
block8:;
// line 767
org$pandalanguage$pandac$ASTNode* $tmp2117 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2118 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
*(&local2) = $tmp2117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// line 768
org$pandalanguage$pandac$ASTNode* $tmp2119 = *(&local2);
panda$core$Bit $tmp2120 = panda$core$Bit$init$builtin_bit($tmp2119 == NULL);
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block10; else goto block11;
block10:;
// line 769
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2123 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 771
panda$collections$Array* $tmp2124 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2125 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2124, ((panda$core$Object*) $tmp2125));
goto block7;
block9:;
// line 773
panda$core$Int64 $tmp2126 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2127 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2126);
org$pandalanguage$pandac$parser$Token$nullable $tmp2128 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2127, &$s2129);
panda$core$Bit $tmp2130 = panda$core$Bit$init$builtin_bit(!$tmp2128.nonnull);
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block12; else goto block13;
block12:;
// line 774
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2132 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2133 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp2134 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 777
org$pandalanguage$pandac$parser$Token $tmp2135 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2135;
// line 778
org$pandalanguage$pandac$parser$Token $tmp2136 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2137 = $tmp2136.kind;
panda$core$Int64 $tmp2138 = $tmp2137.$rawValue;
panda$core$Int64 $tmp2139 = (panda$core$Int64) {91};
panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2138, $tmp2139);
bool $tmp2141 = $tmp2140.value;
if ($tmp2141) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2142 = (panda$core$Int64) {92};
panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2138, $tmp2142);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp2145 = (panda$core$Int64) {93};
panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2138, $tmp2145);
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp2148 = (panda$core$Int64) {94};
panda$core$Bit $tmp2149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2138, $tmp2148);
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block15; else goto block19;
block15:;
// line 781
org$pandalanguage$pandac$parser$Token $tmp2151 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 782
panda$core$Int64 $tmp2152 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2153 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2152);
org$pandalanguage$pandac$parser$Token$nullable $tmp2154 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2153, &$s2155);
panda$core$Bit $tmp2156 = panda$core$Bit$init$builtin_bit(!$tmp2154.nonnull);
bool $tmp2157 = $tmp2156.value;
if ($tmp2157) goto block20; else goto block21;
block20:;
// line 783
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2158 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 785
panda$collections$Array* $tmp2159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2159);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2160 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
*(&local4) = $tmp2159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// line 786
panda$core$Int64 $tmp2161 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2162 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2161);
org$pandalanguage$pandac$parser$Token$nullable $tmp2163 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2162);
panda$core$Bit $tmp2164 = panda$core$Bit$init$builtin_bit(!$tmp2163.nonnull);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block22; else goto block23;
block22:;
// line 787
org$pandalanguage$pandac$ASTNode* $tmp2166 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2167 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
*(&local5) = $tmp2166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
// line 788
org$pandalanguage$pandac$ASTNode* $tmp2168 = *(&local5);
panda$core$Bit $tmp2169 = panda$core$Bit$init$builtin_bit($tmp2168 == NULL);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block24; else goto block25;
block24:;
// line 789
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2171 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2172 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2173 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 791
panda$collections$Array* $tmp2174 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2175 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2174, ((panda$core$Object*) $tmp2175));
// line 792
goto block26;
block26:;
panda$core$Int64 $tmp2176 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2177 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2176);
org$pandalanguage$pandac$parser$Token$nullable $tmp2178 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2177);
panda$core$Bit $tmp2179 = panda$core$Bit$init$builtin_bit($tmp2178.nonnull);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block27; else goto block28;
block27:;
// line 793
org$pandalanguage$pandac$ASTNode* $tmp2181 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2182 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
*(&local5) = $tmp2181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
// line 794
org$pandalanguage$pandac$ASTNode* $tmp2183 = *(&local5);
panda$core$Bit $tmp2184 = panda$core$Bit$init$builtin_bit($tmp2183 == NULL);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block29; else goto block30;
block29:;
// line 795
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2186 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2187 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2188 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 797
panda$collections$Array* $tmp2189 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2190 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2189, ((panda$core$Object*) $tmp2190));
goto block26;
block28:;
// line 799
panda$core$Int64 $tmp2191 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2192 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2191);
org$pandalanguage$pandac$parser$Token$nullable $tmp2193 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2192, &$s2194);
panda$core$Bit $tmp2195 = panda$core$Bit$init$builtin_bit(!$tmp2193.nonnull);
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block31; else goto block32;
block31:;
// line 800
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2197 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2198 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2199 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
org$pandalanguage$pandac$ASTNode* $tmp2200 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 803
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 804
panda$collections$Array* $tmp2201 = *(&local4);
ITable* $tmp2202 = ((panda$collections$CollectionView*) $tmp2201)->$class->itable;
while ($tmp2202->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2202 = $tmp2202->next;
}
$fn2204 $tmp2203 = $tmp2202->methods[0];
panda$core$Int64 $tmp2205 = $tmp2203(((panda$collections$CollectionView*) $tmp2201));
panda$core$Int64 $tmp2206 = (panda$core$Int64) {0};
panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2205, $tmp2206);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block33; else goto block35;
block33:;
// line 805
org$pandalanguage$pandac$ASTNode* $tmp2209 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block35:;
// line 807
panda$collections$Array* $tmp2210 = *(&local4);
ITable* $tmp2211 = ((panda$collections$CollectionView*) $tmp2210)->$class->itable;
while ($tmp2211->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[0];
panda$core$Int64 $tmp2214 = $tmp2212(((panda$collections$CollectionView*) $tmp2210));
panda$core$Int64 $tmp2215 = (panda$core$Int64) {1};
panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2214, $tmp2215);
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block36; else goto block38;
block36:;
// line 808
panda$collections$Array* $tmp2218 = *(&local4);
panda$core$Int64 $tmp2219 = (panda$core$Int64) {0};
panda$core$Object* $tmp2220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2218, $tmp2219);
org$pandalanguage$pandac$ASTNode* $tmp2221 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2220)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2220);
panda$core$Panda$unref$panda$core$Object$Q($tmp2220);
goto block37;
block38:;
// line 1
// line 812
org$pandalanguage$pandac$parser$Token$nullable $tmp2222 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2222.value), &$s2223);
// line 813
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2224 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2225 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2226 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 815
org$pandalanguage$pandac$ASTNode* $tmp2227 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2228 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp2229 = *(&local0);
org$pandalanguage$pandac$Position $tmp2230 = ((org$pandalanguage$pandac$parser$Token) $tmp2229.value).position;
org$pandalanguage$pandac$parser$Token $tmp2231 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2232 = $tmp2231.kind;
panda$collections$Array* $tmp2233 = *(&local1);
panda$collections$ImmutableArray* $tmp2234 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2233);
org$pandalanguage$pandac$ASTNode* $tmp2235 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2227, $tmp2228, $tmp2230, $tmp2232, $tmp2234, $tmp2235);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
org$pandalanguage$pandac$ASTNode* $tmp2236 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2237 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp2227;
block19:;
// line 819
org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2239.value), &$s2240);
// line 820
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2241 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2241));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
panda$core$Bit $tmp2242 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp2244 = (panda$core$Int64) {754};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2245, $tmp2244, &$s2246);
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
// line 829
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 830
org$pandalanguage$pandac$parser$Token $tmp2247 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2248 = $tmp2247.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2249;
$tmp2249 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2249->value = $tmp2248;
panda$core$Int64 $tmp2250 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2251 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2250);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2252;
$tmp2252 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2252->value = $tmp2251;
ITable* $tmp2253 = ((panda$core$Equatable*) $tmp2249)->$class->itable;
while ($tmp2253->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2253 = $tmp2253->next;
}
$fn2255 $tmp2254 = $tmp2253->methods[0];
panda$core$Bit $tmp2256 = $tmp2254(((panda$core$Equatable*) $tmp2249), ((panda$core$Equatable*) $tmp2252));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2249)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2252)));
bool $tmp2257 = $tmp2256.value;
if ($tmp2257) goto block1; else goto block3;
block1:;
// line 831
org$pandalanguage$pandac$ASTNode* $tmp2258 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2259 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2259));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
*(&local0) = $tmp2258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
// line 832
org$pandalanguage$pandac$ASTNode* $tmp2260 = *(&local0);
panda$core$Bit $tmp2261 = panda$core$Bit$init$builtin_bit($tmp2260 == NULL);
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block4; else goto block5;
block4:;
// line 833
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2263 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 837
panda$core$Int64 $tmp2264 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2265 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2264);
org$pandalanguage$pandac$parser$Token$nullable $tmp2266 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2265, &$s2267);
*(&local1) = $tmp2266;
// line 838
org$pandalanguage$pandac$parser$Token$nullable $tmp2268 = *(&local1);
panda$core$Bit $tmp2269 = panda$core$Bit$init$builtin_bit(!$tmp2268.nonnull);
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block6; else goto block7;
block6:;
// line 839
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2271 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 841
panda$core$MutableString* $tmp2272 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp2273 = *(&local1);
panda$core$String* $tmp2274 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2273.value));
panda$core$MutableString$init$panda$core$String($tmp2272, $tmp2274);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2275 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
*(&local2) = $tmp2272;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// line 842
goto block8;
block8:;
panda$core$Int64 $tmp2276 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp2277 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2276);
org$pandalanguage$pandac$parser$Token$nullable $tmp2278 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2277);
panda$core$Bit $tmp2279 = panda$core$Bit$init$builtin_bit($tmp2278.nonnull);
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block9; else goto block10;
block9:;
// line 843
panda$core$Int64 $tmp2281 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2281);
org$pandalanguage$pandac$parser$Token$nullable $tmp2283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2282, &$s2284);
*(&local3) = $tmp2283;
// line 844
org$pandalanguage$pandac$parser$Token$nullable $tmp2285 = *(&local3);
panda$core$Bit $tmp2286 = panda$core$Bit$init$builtin_bit(!$tmp2285.nonnull);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block11; else goto block12;
block11:;
// line 845
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp2288 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2288));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2289 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 847
panda$core$MutableString* $tmp2290 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp2290, &$s2291);
// line 848
panda$core$MutableString* $tmp2292 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp2293 = *(&local3);
panda$core$String* $tmp2294 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2293.value));
panda$core$MutableString$append$panda$core$String($tmp2292, $tmp2294);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
goto block8;
block10:;
// line 850
panda$core$MutableString* $tmp2295 = *(&local2);
panda$core$String* $tmp2296 = panda$core$MutableString$finish$R$panda$core$String($tmp2295);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp2297 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
*(&local4) = $tmp2296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
// line 851
org$pandalanguage$pandac$ASTNode* $tmp2298 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2299 = (panda$core$Int64) {42};
org$pandalanguage$pandac$parser$Token$nullable $tmp2300 = *(&local1);
org$pandalanguage$pandac$Position $tmp2301 = ((org$pandalanguage$pandac$parser$Token) $tmp2300.value).position;
panda$core$String* $tmp2302 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2298, $tmp2299, $tmp2301, $tmp2302);
org$pandalanguage$pandac$ASTNode* $tmp2303 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
*(&local0) = $tmp2298;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// line 852
org$pandalanguage$pandac$parser$Token $tmp2304 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2305 = $tmp2304.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2306;
$tmp2306 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2306->value = $tmp2305;
panda$core$Int64 $tmp2307 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2308 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2307);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2309;
$tmp2309 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2309->value = $tmp2308;
ITable* $tmp2310 = ((panda$core$Equatable*) $tmp2306)->$class->itable;
while ($tmp2310->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2310 = $tmp2310->next;
}
$fn2312 $tmp2311 = $tmp2310->methods[0];
panda$core$Bit $tmp2313 = $tmp2311(((panda$core$Equatable*) $tmp2306), ((panda$core$Equatable*) $tmp2309));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2306)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2309)));
bool $tmp2314 = $tmp2313.value;
if ($tmp2314) goto block13; else goto block14;
block13:;
// line 855
bool $tmp2315 = param1.value;
if ($tmp2315) goto block15; else goto block16;
block15:;
// line 856
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 858
org$pandalanguage$pandac$parser$Token $tmp2316 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 859
panda$collections$Array* $tmp2317 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2317);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2318 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
*(&local5) = $tmp2317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
// line 860
panda$core$Bit $tmp2319 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2320 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2319);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2321 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
*(&local6) = $tmp2320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
// line 861
org$pandalanguage$pandac$ASTNode* $tmp2322 = *(&local6);
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit($tmp2322 == NULL);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block17; else goto block18;
block17:;
// line 862
bool $tmp2325 = param1.value;
if ($tmp2325) goto block19; else goto block20;
block19:;
// line 863
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 864
org$pandalanguage$pandac$ASTNode* $tmp2326 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
org$pandalanguage$pandac$ASTNode* $tmp2327 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2328 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2329 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2330 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2331 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2326;
block20:;
// line 866
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2332 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2333 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2334 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2335 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2336 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2336));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 868
panda$collections$Array* $tmp2337 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2338 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2337, ((panda$core$Object*) $tmp2338));
// line 869
goto block21;
block21:;
panda$core$Int64 $tmp2339 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2340 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2339);
org$pandalanguage$pandac$parser$Token$nullable $tmp2341 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2340);
panda$core$Bit $tmp2342 = panda$core$Bit$init$builtin_bit($tmp2341.nonnull);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block22; else goto block23;
block22:;
// line 870
panda$core$Bit $tmp2344 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2345 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2344);
org$pandalanguage$pandac$ASTNode* $tmp2346 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
*(&local6) = $tmp2345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// line 871
org$pandalanguage$pandac$ASTNode* $tmp2347 = *(&local6);
panda$core$Bit $tmp2348 = panda$core$Bit$init$builtin_bit($tmp2347 == NULL);
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block24; else goto block25;
block24:;
// line 872
bool $tmp2350 = param1.value;
if ($tmp2350) goto block26; else goto block27;
block26:;
// line 873
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 874
org$pandalanguage$pandac$ASTNode* $tmp2351 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
org$pandalanguage$pandac$ASTNode* $tmp2352 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2353 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2354 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2356 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2351;
block27:;
// line 876
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2357 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2358 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2359 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2360 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2361 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 878
panda$collections$Array* $tmp2362 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2362, ((panda$core$Object*) $tmp2363));
goto block21;
block23:;
// line 880
panda$core$Int64 $tmp2364 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2365 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2364);
org$pandalanguage$pandac$parser$Token$nullable $tmp2366 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2365, &$s2367);
panda$core$Bit $tmp2368 = panda$core$Bit$init$builtin_bit(!$tmp2366.nonnull);
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block28; else goto block29;
block28:;
// line 881
bool $tmp2370 = param1.value;
if ($tmp2370) goto block30; else goto block31;
block30:;
// line 882
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 883
org$pandalanguage$pandac$ASTNode* $tmp2371 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
org$pandalanguage$pandac$ASTNode* $tmp2372 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2372));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2373 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2374 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2375 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2376 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2371;
block31:;
// line 885
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2377 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2378 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2379 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2380 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2381 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block29:;
// line 887
org$pandalanguage$pandac$ASTNode* $tmp2382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2383 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$nullable $tmp2384 = *(&local1);
org$pandalanguage$pandac$Position $tmp2385 = ((org$pandalanguage$pandac$parser$Token) $tmp2384.value).position;
panda$core$String* $tmp2386 = *(&local4);
panda$collections$Array* $tmp2387 = *(&local5);
panda$collections$ImmutableArray* $tmp2388 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2387);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2382, $tmp2383, $tmp2385, $tmp2386, $tmp2388);
org$pandalanguage$pandac$ASTNode* $tmp2389 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
*(&local0) = $tmp2382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2388));
// line 888
bool $tmp2390 = param1.value;
if ($tmp2390) goto block32; else goto block33;
block32:;
// line 889
org$pandalanguage$pandac$parser$Parser$accept(param0);
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp2391 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2392 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
goto block14;
block14:;
panda$core$String* $tmp2393 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
goto block2;
block2:;
// line 893
panda$core$Int64 $tmp2395 = (panda$core$Int64) {95};
org$pandalanguage$pandac$parser$Token$Kind $tmp2396 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2395);
org$pandalanguage$pandac$parser$Token$nullable $tmp2397 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2396);
panda$core$Bit $tmp2398 = panda$core$Bit$init$builtin_bit($tmp2397.nonnull);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block34; else goto block35;
block34:;
// line 894
org$pandalanguage$pandac$ASTNode* $tmp2400 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2401 = (panda$core$Int64) {29};
org$pandalanguage$pandac$ASTNode* $tmp2402 = *(&local0);
$fn2404 $tmp2403 = ($fn2404) $tmp2402->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2405 = $tmp2403($tmp2402);
org$pandalanguage$pandac$ASTNode* $tmp2406 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2400, $tmp2401, $tmp2405, $tmp2406);
org$pandalanguage$pandac$ASTNode* $tmp2407 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
*(&local0) = $tmp2400;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
goto block35;
block35:;
// line 896
org$pandalanguage$pandac$ASTNode* $tmp2408 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
org$pandalanguage$pandac$ASTNode* $tmp2409 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2408;

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
// line 910
org$pandalanguage$pandac$ASTNode* $tmp2410 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
*(&local0) = $tmp2410;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// line 911
org$pandalanguage$pandac$ASTNode* $tmp2412 = *(&local0);
panda$core$Bit $tmp2413 = panda$core$Bit$init$builtin_bit($tmp2412 == NULL);
bool $tmp2414 = $tmp2413.value;
if ($tmp2414) goto block1; else goto block2;
block1:;
// line 912
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 914
goto block3;
block3:;
// line 915
org$pandalanguage$pandac$parser$Token $tmp2416 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2416;
// line 916
org$pandalanguage$pandac$parser$Token $tmp2417 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2418 = $tmp2417.kind;
panda$core$Int64 $tmp2419 = $tmp2418.$rawValue;
panda$core$Int64 $tmp2420 = (panda$core$Int64) {104};
panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2420);
bool $tmp2422 = $tmp2421.value;
if ($tmp2422) goto block6; else goto block7;
block6:;
// line 918
panda$collections$Stack** $tmp2423 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2424 = *$tmp2423;
panda$core$Bit $tmp2425 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2426;
$tmp2426 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2426->value = $tmp2425;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2424, ((panda$core$Object*) $tmp2426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
// line 919
panda$collections$Array* $tmp2427 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2427);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2428 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
*(&local2) = $tmp2427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
// line 920
panda$core$Int64 $tmp2429 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2430 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2429);
org$pandalanguage$pandac$parser$Token$nullable $tmp2431 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2430);
panda$core$Bit $tmp2432 = panda$core$Bit$init$builtin_bit(!$tmp2431.nonnull);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block8; else goto block9;
block8:;
// line 921
org$pandalanguage$pandac$ASTNode* $tmp2434 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2435 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
*(&local3) = $tmp2434;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// line 922
org$pandalanguage$pandac$ASTNode* $tmp2436 = *(&local3);
panda$core$Bit $tmp2437 = panda$core$Bit$init$builtin_bit($tmp2436 == NULL);
bool $tmp2438 = $tmp2437.value;
if ($tmp2438) goto block10; else goto block11;
block10:;
// line 923
panda$collections$Stack** $tmp2439 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2440 = *$tmp2439;
panda$core$Object* $tmp2441 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2440);
panda$core$Panda$unref$panda$core$Object$Q($tmp2441);
// line 924
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2442 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2442));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2443 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2444 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 926
panda$collections$Array* $tmp2445 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2446 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2445, ((panda$core$Object*) $tmp2446));
// line 927
goto block12;
block12:;
panda$core$Int64 $tmp2447 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2448 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2447);
org$pandalanguage$pandac$parser$Token$nullable $tmp2449 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2448);
panda$core$Bit $tmp2450 = panda$core$Bit$init$builtin_bit($tmp2449.nonnull);
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block13; else goto block14;
block13:;
// line 928
org$pandalanguage$pandac$ASTNode* $tmp2452 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2453 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
*(&local3) = $tmp2452;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// line 929
org$pandalanguage$pandac$ASTNode* $tmp2454 = *(&local3);
panda$core$Bit $tmp2455 = panda$core$Bit$init$builtin_bit($tmp2454 == NULL);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block15; else goto block16;
block15:;
// line 930
panda$collections$Stack** $tmp2457 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2458 = *$tmp2457;
panda$core$Object* $tmp2459 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2458);
panda$core$Panda$unref$panda$core$Object$Q($tmp2459);
// line 931
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2460 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2461 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2462 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 933
panda$collections$Array* $tmp2463 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2464 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2463, ((panda$core$Object*) $tmp2464));
goto block12;
block14:;
// line 935
panda$core$Int64 $tmp2465 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2466 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2465);
org$pandalanguage$pandac$parser$Token$nullable $tmp2467 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2466, &$s2468);
panda$core$Bit $tmp2469 = panda$core$Bit$init$builtin_bit(!$tmp2467.nonnull);
bool $tmp2470 = $tmp2469.value;
if ($tmp2470) goto block17; else goto block18;
block17:;
// line 936
panda$collections$Stack** $tmp2471 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2472 = *$tmp2471;
panda$core$Object* $tmp2473 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2472);
panda$core$Panda$unref$panda$core$Object$Q($tmp2473);
// line 937
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2474 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2474));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2475 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2476 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
org$pandalanguage$pandac$ASTNode* $tmp2477 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 940
panda$collections$Stack** $tmp2478 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2479 = *$tmp2478;
panda$core$Object* $tmp2480 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2479);
panda$core$Panda$unref$panda$core$Object$Q($tmp2480);
// line 941
org$pandalanguage$pandac$ASTNode* $tmp2481 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2482 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token $tmp2483 = *(&local1);
org$pandalanguage$pandac$Position $tmp2484 = $tmp2483.position;
org$pandalanguage$pandac$ASTNode* $tmp2485 = *(&local0);
panda$collections$Array* $tmp2486 = *(&local2);
panda$collections$ImmutableArray* $tmp2487 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2486);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2481, $tmp2482, $tmp2484, $tmp2485, $tmp2487);
org$pandalanguage$pandac$ASTNode* $tmp2488 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
*(&local0) = $tmp2481;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
panda$collections$Array* $tmp2489 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
goto block5;
block7:;
panda$core$Int64 $tmp2490 = (panda$core$Int64) {102};
panda$core$Bit $tmp2491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2490);
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block19; else goto block20;
block19:;
// line 943
org$pandalanguage$pandac$ASTNode* $tmp2493 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2494 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
*(&local4) = $tmp2493;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
// line 944
org$pandalanguage$pandac$ASTNode* $tmp2495 = *(&local4);
panda$core$Bit $tmp2496 = panda$core$Bit$init$builtin_bit($tmp2495 == NULL);
bool $tmp2497 = $tmp2496.value;
if ($tmp2497) goto block21; else goto block22;
block21:;
// line 945
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2498 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 947
panda$core$Int64 $tmp2500 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2501 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2500);
org$pandalanguage$pandac$parser$Token$nullable $tmp2502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2501, &$s2503);
panda$core$Bit $tmp2504 = panda$core$Bit$init$builtin_bit(!$tmp2502.nonnull);
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block23; else goto block24;
block23:;
// line 948
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2506 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2507 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 950
org$pandalanguage$pandac$ASTNode* $tmp2508 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2509 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2510 = *(&local1);
org$pandalanguage$pandac$Position $tmp2511 = $tmp2510.position;
org$pandalanguage$pandac$ASTNode* $tmp2512 = *(&local0);
panda$core$Int64 $tmp2513 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp2514 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2513);
org$pandalanguage$pandac$ASTNode* $tmp2515 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2508, $tmp2509, $tmp2511, $tmp2512, $tmp2514, $tmp2515);
org$pandalanguage$pandac$ASTNode* $tmp2516 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
*(&local0) = $tmp2508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
org$pandalanguage$pandac$ASTNode* $tmp2517 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block20:;
panda$core$Int64 $tmp2518 = (panda$core$Int64) {99};
panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2518);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block25; else goto block26;
block25:;
// line 952
*(&local5) = ((panda$core$String*) NULL);
// line 953
panda$core$Int64 $tmp2521 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2522 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2521);
org$pandalanguage$pandac$parser$Token$nullable $tmp2523 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2522);
panda$core$Bit $tmp2524 = panda$core$Bit$init$builtin_bit($tmp2523.nonnull);
bool $tmp2525 = $tmp2524.value;
if ($tmp2525) goto block27; else goto block29;
block27:;
// line 954
panda$core$String* $tmp2527 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2526));
*(&local5) = &$s2526;
goto block28;
block29:;
// line 1
// line 957
panda$core$String* $tmp2528 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$String* $tmp2529 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
*(&local5) = $tmp2528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// line 958
panda$core$String* $tmp2530 = *(&local5);
panda$core$Bit $tmp2531 = panda$core$Bit$init$builtin_bit($tmp2530 == NULL);
bool $tmp2532 = $tmp2531.value;
if ($tmp2532) goto block30; else goto block31;
block30:;
// line 959
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp2533 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2534 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 962
org$pandalanguage$pandac$ASTNode* $tmp2535 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2536 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token $tmp2537 = *(&local1);
org$pandalanguage$pandac$Position $tmp2538 = $tmp2537.position;
org$pandalanguage$pandac$ASTNode* $tmp2539 = *(&local0);
panda$core$String* $tmp2540 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2535, $tmp2536, $tmp2538, $tmp2539, $tmp2540);
org$pandalanguage$pandac$ASTNode* $tmp2541 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
*(&local0) = $tmp2535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
panda$core$String* $tmp2542 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block5;
block26:;
panda$core$Int64 $tmp2543 = (panda$core$Int64) {90};
panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2543);
bool $tmp2545 = $tmp2544.value;
if ($tmp2545) goto block32; else goto block33;
block32:;
// line 964
org$pandalanguage$pandac$ASTNode* $tmp2546 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2547 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
*(&local6) = $tmp2546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// line 965
org$pandalanguage$pandac$ASTNode* $tmp2548 = *(&local6);
panda$core$Bit $tmp2549 = panda$core$Bit$init$builtin_bit($tmp2548 == NULL);
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block34; else goto block35;
block34:;
// line 966
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2551 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2552 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block35:;
// line 968
org$pandalanguage$pandac$ASTNode* $tmp2553 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2554 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2555 = *(&local1);
org$pandalanguage$pandac$Position $tmp2556 = $tmp2555.position;
org$pandalanguage$pandac$ASTNode* $tmp2557 = *(&local0);
panda$core$Int64 $tmp2558 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp2559 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2558);
org$pandalanguage$pandac$ASTNode* $tmp2560 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2553, $tmp2554, $tmp2556, $tmp2557, $tmp2559, $tmp2560);
org$pandalanguage$pandac$ASTNode* $tmp2561 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
*(&local0) = $tmp2553;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
org$pandalanguage$pandac$ASTNode* $tmp2562 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block33:;
panda$core$Int64 $tmp2563 = (panda$core$Int64) {63};
panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2563);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block36; else goto block37;
block36:;
// line 972
org$pandalanguage$pandac$parser$Token $tmp2566 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2566);
// line 973
org$pandalanguage$pandac$ASTNode* $tmp2567 = *(&local0);
panda$core$String* $tmp2568 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2567);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2569 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
*(&local7) = $tmp2568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// line 974
panda$core$String* $tmp2570 = *(&local7);
panda$core$Bit $tmp2571 = panda$core$Bit$init$builtin_bit($tmp2570 != NULL);
bool $tmp2572 = $tmp2571.value;
if ($tmp2572) goto block38; else goto block39;
block38:;
// line 975
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 976
org$pandalanguage$pandac$parser$Token $tmp2573 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 979
panda$collections$Array* $tmp2574 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2574);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2575 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
*(&local8) = $tmp2574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// line 980
panda$core$Bit $tmp2576 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2577 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2576);
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2578 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
*(&local9) = $tmp2577;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
// line 981
org$pandalanguage$pandac$ASTNode* $tmp2579 = *(&local9);
panda$core$Bit $tmp2580 = panda$core$Bit$init$builtin_bit($tmp2579 == NULL);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block40; else goto block41;
block40:;
// line 982
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 983
org$pandalanguage$pandac$ASTNode* $tmp2582 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
org$pandalanguage$pandac$ASTNode* $tmp2583 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2584 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2585 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2586 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2582;
block41:;
// line 985
panda$collections$Array* $tmp2587 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2588 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2587, ((panda$core$Object*) $tmp2588));
// line 986
goto block42;
block42:;
panda$core$Int64 $tmp2589 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2590 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2589);
org$pandalanguage$pandac$parser$Token$nullable $tmp2591 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2590);
panda$core$Bit $tmp2592 = panda$core$Bit$init$builtin_bit($tmp2591.nonnull);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block43; else goto block44;
block43:;
// line 987
panda$core$Bit $tmp2594 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2595 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2594);
org$pandalanguage$pandac$ASTNode* $tmp2596 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
*(&local9) = $tmp2595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// line 988
org$pandalanguage$pandac$ASTNode* $tmp2597 = *(&local9);
panda$core$Bit $tmp2598 = panda$core$Bit$init$builtin_bit($tmp2597 == NULL);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block45; else goto block46;
block45:;
// line 989
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 990
org$pandalanguage$pandac$ASTNode* $tmp2600 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
org$pandalanguage$pandac$ASTNode* $tmp2601 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2601));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2602 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2602));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2603 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2604 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2600;
block46:;
// line 992
panda$collections$Array* $tmp2605 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2606 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2605, ((panda$core$Object*) $tmp2606));
goto block42;
block44:;
// line 994
panda$core$Int64 $tmp2607 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2608 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2607);
org$pandalanguage$pandac$parser$Token$nullable $tmp2609 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2608, &$s2610);
*(&local10) = $tmp2609;
// line 995
org$pandalanguage$pandac$parser$Token$nullable $tmp2611 = *(&local10);
panda$core$Bit $tmp2612 = panda$core$Bit$init$builtin_bit(!$tmp2611.nonnull);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block47; else goto block48;
block47:;
// line 996
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 997
org$pandalanguage$pandac$ASTNode* $tmp2614 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
org$pandalanguage$pandac$ASTNode* $tmp2615 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2616 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2617 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2618 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2614;
block48:;
// line 1026
// line 1027
panda$collections$Stack** $tmp2619 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2620 = *$tmp2619;
panda$core$Int64 $tmp2621 = (panda$core$Int64) {0};
panda$core$Object* $tmp2622 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2620, $tmp2621);
panda$core$Panda$unref$panda$core$Object$Q($tmp2622);
bool $tmp2623 = ((panda$core$Bit$wrapper*) $tmp2622)->value.value;
if ($tmp2623) goto block49; else goto block51;
block49:;
// line 1028
org$pandalanguage$pandac$parser$Token $tmp2624 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local12) = $tmp2624;
// line 1029
org$pandalanguage$pandac$parser$Token $tmp2625 = *(&local12);
org$pandalanguage$pandac$parser$Token$Kind $tmp2626 = $tmp2625.kind;
panda$core$Int64 $tmp2627 = $tmp2626.$rawValue;
panda$core$Int64 $tmp2628 = (panda$core$Int64) {99};
panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, $tmp2628);
bool $tmp2630 = $tmp2629.value;
if ($tmp2630) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp2631 = (panda$core$Int64) {106};
panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, $tmp2631);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block53; else goto block55;
block55:;
panda$core$Int64 $tmp2634 = (panda$core$Int64) {90};
panda$core$Bit $tmp2635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, $tmp2634);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block53; else goto block56;
block53:;
// line 1031
panda$core$Bit $tmp2637 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2637;
goto block52;
block56:;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {104};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block57; else goto block58;
block57:;
// line 1033
org$pandalanguage$pandac$parser$Token $tmp2641 = *(&local12);
org$pandalanguage$pandac$Position $tmp2642 = $tmp2641.position;
panda$core$Int64 $tmp2643 = $tmp2642.line;
org$pandalanguage$pandac$parser$Token$nullable $tmp2644 = *(&local10);
org$pandalanguage$pandac$Position $tmp2645 = ((org$pandalanguage$pandac$parser$Token) $tmp2644.value).position;
panda$core$Int64 $tmp2646 = $tmp2645.line;
panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2643, $tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$parser$Token $tmp2649 = *(&local12);
org$pandalanguage$pandac$Position $tmp2650 = $tmp2649.position;
panda$core$Int64 $tmp2651 = $tmp2650.column;
org$pandalanguage$pandac$parser$Token$nullable $tmp2652 = *(&local10);
org$pandalanguage$pandac$Position $tmp2653 = ((org$pandalanguage$pandac$parser$Token) $tmp2652.value).position;
panda$core$Int64 $tmp2654 = $tmp2653.column;
panda$core$Int64 $tmp2655 = (panda$core$Int64) {1};
int64_t $tmp2656 = $tmp2654.value;
int64_t $tmp2657 = $tmp2655.value;
int64_t $tmp2658 = $tmp2656 + $tmp2657;
panda$core$Int64 $tmp2659 = (panda$core$Int64) {$tmp2658};
panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2651, $tmp2659);
*(&local13) = $tmp2660;
goto block61;
block60:;
*(&local13) = $tmp2647;
goto block61;
block61:;
panda$core$Bit $tmp2661 = *(&local13);
*(&local11) = $tmp2661;
goto block52;
block58:;
// line 1036
panda$core$Bit $tmp2662 = panda$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp2662;
goto block52;
block52:;
// line 1038
panda$core$Bit $tmp2663 = *(&local11);
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block62; else goto block63;
block62:;
// line 1039
org$pandalanguage$pandac$parser$Token $tmp2665 = *(&local12);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2665);
goto block63;
block63:;
goto block50;
block51:;
// line 1
// line 1043
panda$core$Bit $tmp2666 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2666;
goto block50;
block50:;
// line 1045
panda$core$Bit $tmp2667 = *(&local11);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block64; else goto block66;
block64:;
// line 1046
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1047
org$pandalanguage$pandac$ASTNode* $tmp2669 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2670 = (panda$core$Int64) {19};
org$pandalanguage$pandac$ASTNode* $tmp2671 = *(&local0);
$fn2673 $tmp2672 = ($fn2673) $tmp2671->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2674 = $tmp2672($tmp2671);
panda$core$String* $tmp2675 = *(&local7);
panda$collections$Array* $tmp2676 = *(&local8);
panda$collections$ImmutableArray* $tmp2677 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2676);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2669, $tmp2670, $tmp2674, $tmp2675, $tmp2677);
org$pandalanguage$pandac$ASTNode* $tmp2678 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2678));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
*(&local0) = $tmp2669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// line 1048
org$pandalanguage$pandac$ASTNode* $tmp2679 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2680 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2681 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
goto block3;
block66:;
// line 1
// line 1051
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1052
org$pandalanguage$pandac$ASTNode* $tmp2682 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
org$pandalanguage$pandac$ASTNode* $tmp2683 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2684 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2685 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2686 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2682;
block65:;
org$pandalanguage$pandac$ASTNode* $tmp2687 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2688 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
goto block39;
block39:;
// line 1055
org$pandalanguage$pandac$ASTNode* $tmp2689 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
panda$core$String* $tmp2690 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2689;
block37:;
// line 1057
org$pandalanguage$pandac$parser$Token $tmp2692 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2692);
// line 1058
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2693;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2695 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2696 = $tmp2695.value;
if ($tmp2696) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp2697 = (panda$core$Int64) {909};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2698, $tmp2697, &$s2699);
abort(); // unreachable
block67:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1067
org$pandalanguage$pandac$ASTNode* $tmp2700 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
*(&local0) = $tmp2700;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
// line 1068
org$pandalanguage$pandac$ASTNode* $tmp2702 = *(&local0);
panda$core$Bit $tmp2703 = panda$core$Bit$init$builtin_bit($tmp2702 == NULL);
bool $tmp2704 = $tmp2703.value;
if ($tmp2704) goto block1; else goto block2;
block1:;
// line 1069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2705 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1071
goto block3;
block3:;
// line 1072
panda$core$Int64 $tmp2706 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2707 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2706);
org$pandalanguage$pandac$parser$Token$nullable $tmp2708 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2707);
*(&local1) = $tmp2708;
// line 1073
org$pandalanguage$pandac$parser$Token$nullable $tmp2709 = *(&local1);
panda$core$Bit $tmp2710 = panda$core$Bit$init$builtin_bit(!$tmp2709.nonnull);
bool $tmp2711 = $tmp2710.value;
if ($tmp2711) goto block5; else goto block6;
block5:;
// line 1074
goto block4;
block6:;
// line 1076
org$pandalanguage$pandac$ASTNode* $tmp2712 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2713 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
*(&local2) = $tmp2712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
// line 1077
org$pandalanguage$pandac$ASTNode* $tmp2714 = *(&local2);
panda$core$Bit $tmp2715 = panda$core$Bit$init$builtin_bit($tmp2714 == NULL);
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block7; else goto block8;
block7:;
// line 1078
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2717 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2718 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1080
org$pandalanguage$pandac$ASTNode* $tmp2719 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2720 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp2721 = *(&local1);
org$pandalanguage$pandac$Position $tmp2722 = ((org$pandalanguage$pandac$parser$Token) $tmp2721.value).position;
org$pandalanguage$pandac$ASTNode* $tmp2723 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp2724 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2725 = ((org$pandalanguage$pandac$parser$Token) $tmp2724.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp2726 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2719, $tmp2720, $tmp2722, $tmp2723, $tmp2725, $tmp2726);
org$pandalanguage$pandac$ASTNode* $tmp2727 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
*(&local0) = $tmp2719;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
org$pandalanguage$pandac$ASTNode* $tmp2728 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1082
org$pandalanguage$pandac$ASTNode* $tmp2729 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
org$pandalanguage$pandac$ASTNode* $tmp2730 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2729;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1089
org$pandalanguage$pandac$parser$Token $tmp2731 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2731;
// line 1090
org$pandalanguage$pandac$parser$Token $tmp2732 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2733 = $tmp2732.kind;
panda$core$Int64 $tmp2734 = $tmp2733.$rawValue;
panda$core$Int64 $tmp2735 = (panda$core$Int64) {53};
panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2734, $tmp2735);
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2738 = (panda$core$Int64) {50};
panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2734, $tmp2738);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2741 = (panda$core$Int64) {51};
panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2734, $tmp2741);
bool $tmp2743 = $tmp2742.value;
if ($tmp2743) goto block2; else goto block5;
block2:;
// line 1092
org$pandalanguage$pandac$ASTNode* $tmp2744 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2745 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
*(&local1) = $tmp2744;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
// line 1093
org$pandalanguage$pandac$ASTNode* $tmp2746 = *(&local1);
panda$core$Bit $tmp2747 = panda$core$Bit$init$builtin_bit($tmp2746 == NULL);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block6; else goto block7;
block6:;
// line 1094
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2749 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1096
org$pandalanguage$pandac$ASTNode* $tmp2750 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2751 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token $tmp2752 = *(&local0);
org$pandalanguage$pandac$Position $tmp2753 = $tmp2752.position;
org$pandalanguage$pandac$parser$Token $tmp2754 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2755 = $tmp2754.kind;
org$pandalanguage$pandac$ASTNode* $tmp2756 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2750, $tmp2751, $tmp2753, $tmp2755, $tmp2756);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
org$pandalanguage$pandac$ASTNode* $tmp2757 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2750;
block5:;
// line 1098
org$pandalanguage$pandac$parser$Token $tmp2758 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2758);
// line 1099
org$pandalanguage$pandac$ASTNode* $tmp2759 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
return $tmp2759;
block1:;
panda$core$Bit $tmp2760 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2761 = $tmp2760.value;
if ($tmp2761) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2762 = (panda$core$Int64) {1088};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2763, $tmp2762, &$s2764);
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
// line 1110
org$pandalanguage$pandac$ASTNode* $tmp2765 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2766 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
*(&local0) = $tmp2765;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// line 1111
org$pandalanguage$pandac$ASTNode* $tmp2767 = *(&local0);
panda$core$Bit $tmp2768 = panda$core$Bit$init$builtin_bit($tmp2767 == NULL);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block1; else goto block2;
block1:;
// line 1112
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1114
goto block3;
block3:;
// line 1115
org$pandalanguage$pandac$parser$Token $tmp2771 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2771;
// line 1116
org$pandalanguage$pandac$parser$Token $tmp2772 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2773 = $tmp2772.kind;
panda$core$Int64 $tmp2774 = $tmp2773.$rawValue;
panda$core$Int64 $tmp2775 = (panda$core$Int64) {54};
panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2775);
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2778 = (panda$core$Int64) {55};
panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2778);
bool $tmp2780 = $tmp2779.value;
if ($tmp2780) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2781 = (panda$core$Int64) {56};
panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2781);
bool $tmp2783 = $tmp2782.value;
if ($tmp2783) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp2784 = (panda$core$Int64) {57};
panda$core$Bit $tmp2785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2784);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp2787 = (panda$core$Int64) {73};
panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2787);
bool $tmp2789 = $tmp2788.value;
if ($tmp2789) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp2790 = (panda$core$Int64) {68};
panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2790);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp2793 = (panda$core$Int64) {70};
panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2793);
bool $tmp2795 = $tmp2794.value;
if ($tmp2795) goto block6; else goto block13;
block6:;
// line 1119
org$pandalanguage$pandac$ASTNode* $tmp2796 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2797 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local2) = $tmp2796;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
// line 1120
org$pandalanguage$pandac$ASTNode* $tmp2798 = *(&local2);
panda$core$Bit $tmp2799 = panda$core$Bit$init$builtin_bit($tmp2798 == NULL);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block14; else goto block15;
block14:;
// line 1121
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2801 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2802 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1123
org$pandalanguage$pandac$ASTNode* $tmp2803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2804 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2805 = *(&local1);
org$pandalanguage$pandac$Position $tmp2806 = $tmp2805.position;
org$pandalanguage$pandac$ASTNode* $tmp2807 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2808 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2809 = $tmp2808.kind;
org$pandalanguage$pandac$ASTNode* $tmp2810 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2803, $tmp2804, $tmp2806, $tmp2807, $tmp2809, $tmp2810);
org$pandalanguage$pandac$ASTNode* $tmp2811 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
*(&local0) = $tmp2803;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
org$pandalanguage$pandac$ASTNode* $tmp2812 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block13:;
panda$core$Int64 $tmp2813 = (panda$core$Int64) {64};
panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2813);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block16; else goto block17;
block16:;
// line 1125
org$pandalanguage$pandac$parser$Token $tmp2816 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2816;
// line 1126
org$pandalanguage$pandac$parser$Token $tmp2817 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2818 = $tmp2817.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2819;
$tmp2819 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2819->value = $tmp2818;
panda$core$Int64 $tmp2820 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2821 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2820);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2822;
$tmp2822 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2822->value = $tmp2821;
ITable* $tmp2823 = ((panda$core$Equatable*) $tmp2819)->$class->itable;
while ($tmp2823->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2823 = $tmp2823->next;
}
$fn2825 $tmp2824 = $tmp2823->methods[0];
panda$core$Bit $tmp2826 = $tmp2824(((panda$core$Equatable*) $tmp2819), ((panda$core$Equatable*) $tmp2822));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2819)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2822)));
bool $tmp2827 = $tmp2826.value;
if ($tmp2827) goto block18; else goto block20;
block18:;
// line 1128
org$pandalanguage$pandac$ASTNode* $tmp2828 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2829 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
*(&local4) = $tmp2828;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// line 1129
org$pandalanguage$pandac$ASTNode* $tmp2830 = *(&local4);
panda$core$Bit $tmp2831 = panda$core$Bit$init$builtin_bit($tmp2830 == NULL);
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block21; else goto block22;
block21:;
// line 1130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2833 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2834 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1132
org$pandalanguage$pandac$ASTNode* $tmp2835 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2836 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2837 = *(&local1);
org$pandalanguage$pandac$Position $tmp2838 = $tmp2837.position;
org$pandalanguage$pandac$ASTNode* $tmp2839 = *(&local0);
panda$core$Int64 $tmp2840 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$Kind $tmp2841 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2840);
org$pandalanguage$pandac$ASTNode* $tmp2842 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2835, $tmp2836, $tmp2838, $tmp2839, $tmp2841, $tmp2842);
org$pandalanguage$pandac$ASTNode* $tmp2843 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
*(&local0) = $tmp2835;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
org$pandalanguage$pandac$ASTNode* $tmp2844 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1135
org$pandalanguage$pandac$parser$Token $tmp2845 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2845);
// line 1136
org$pandalanguage$pandac$parser$Token $tmp2846 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2846);
// line 1137
org$pandalanguage$pandac$ASTNode* $tmp2847 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
org$pandalanguage$pandac$ASTNode* $tmp2848 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2847;
block19:;
goto block5;
block17:;
// line 1140
org$pandalanguage$pandac$parser$Token $tmp2849 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2849);
// line 1141
org$pandalanguage$pandac$ASTNode* $tmp2850 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
org$pandalanguage$pandac$ASTNode* $tmp2851 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2850;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2852 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp2854 = (panda$core$Int64) {1109};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2855, $tmp2854, &$s2856);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1151
org$pandalanguage$pandac$ASTNode* $tmp2857 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2858 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
*(&local0) = $tmp2857;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// line 1152
org$pandalanguage$pandac$ASTNode* $tmp2859 = *(&local0);
panda$core$Bit $tmp2860 = panda$core$Bit$init$builtin_bit($tmp2859 == NULL);
bool $tmp2861 = $tmp2860.value;
if ($tmp2861) goto block1; else goto block2;
block1:;
// line 1153
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1155
goto block3;
block3:;
// line 1156
org$pandalanguage$pandac$parser$Token $tmp2863 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2863;
// line 1157
org$pandalanguage$pandac$parser$Token $tmp2864 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2865 = $tmp2864.kind;
panda$core$Int64 $tmp2866 = $tmp2865.$rawValue;
panda$core$Int64 $tmp2867 = (panda$core$Int64) {52};
panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2866, $tmp2867);
bool $tmp2869 = $tmp2868.value;
if ($tmp2869) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2870 = (panda$core$Int64) {53};
panda$core$Bit $tmp2871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2866, $tmp2870);
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2873 = (panda$core$Int64) {72};
panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2866, $tmp2873);
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block6; else goto block9;
block6:;
// line 1159
org$pandalanguage$pandac$ASTNode* $tmp2876 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2877 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
*(&local2) = $tmp2876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
// line 1160
org$pandalanguage$pandac$ASTNode* $tmp2878 = *(&local2);
panda$core$Bit $tmp2879 = panda$core$Bit$init$builtin_bit($tmp2878 == NULL);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block10; else goto block11;
block10:;
// line 1161
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2881 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2882 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1163
org$pandalanguage$pandac$ASTNode* $tmp2883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2884 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2885 = *(&local1);
org$pandalanguage$pandac$Position $tmp2886 = $tmp2885.position;
org$pandalanguage$pandac$ASTNode* $tmp2887 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2888 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2889 = $tmp2888.kind;
org$pandalanguage$pandac$ASTNode* $tmp2890 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2883, $tmp2884, $tmp2886, $tmp2887, $tmp2889, $tmp2890);
org$pandalanguage$pandac$ASTNode* $tmp2891 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
*(&local0) = $tmp2883;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
org$pandalanguage$pandac$ASTNode* $tmp2892 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block9:;
// line 1165
org$pandalanguage$pandac$parser$Token $tmp2893 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2893);
// line 1166
org$pandalanguage$pandac$ASTNode* $tmp2894 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
org$pandalanguage$pandac$ASTNode* $tmp2895 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2894;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2896 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2897 = $tmp2896.value;
if ($tmp2897) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2898 = (panda$core$Int64) {1150};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2899, $tmp2898, &$s2900);
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
// line 1176
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1177
org$pandalanguage$pandac$parser$Token $tmp2901 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2902 = $tmp2901.kind;
panda$core$Int64 $tmp2903 = $tmp2902.$rawValue;
panda$core$Int64 $tmp2904 = (panda$core$Int64) {98};
panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2903, $tmp2904);
bool $tmp2906 = $tmp2905.value;
if ($tmp2906) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2907 = (panda$core$Int64) {97};
panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2903, $tmp2907);
bool $tmp2909 = $tmp2908.value;
if ($tmp2909) goto block2; else goto block4;
block2:;
// line 1179
org$pandalanguage$pandac$ASTNode* $tmp2910 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2910));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1181
org$pandalanguage$pandac$ASTNode* $tmp2911 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2912 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
*(&local0) = $tmp2911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
// line 1182
org$pandalanguage$pandac$ASTNode* $tmp2913 = *(&local0);
panda$core$Bit $tmp2914 = panda$core$Bit$init$builtin_bit($tmp2913 == NULL);
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block5; else goto block6;
block5:;
// line 1183
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2916 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1186
org$pandalanguage$pandac$parser$Token $tmp2917 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2917;
// line 1187
org$pandalanguage$pandac$parser$Token $tmp2918 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2919 = $tmp2918.kind;
panda$core$Int64 $tmp2920 = $tmp2919.$rawValue;
panda$core$Int64 $tmp2921 = (panda$core$Int64) {98};
panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2920, $tmp2921);
bool $tmp2923 = $tmp2922.value;
if ($tmp2923) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2924 = (panda$core$Int64) {97};
panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2920, $tmp2924);
bool $tmp2926 = $tmp2925.value;
if ($tmp2926) goto block8; else goto block10;
block8:;
// line 1189
org$pandalanguage$pandac$parser$Token $tmp2927 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp2927;
// line 1190
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1191
org$pandalanguage$pandac$parser$Token $tmp2928 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2929 = $tmp2928.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2930;
$tmp2930 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2930->value = $tmp2929;
panda$core$Int64 $tmp2931 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2932 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2931);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2933;
$tmp2933 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2933->value = $tmp2932;
ITable* $tmp2934 = ((panda$core$Equatable*) $tmp2930)->$class->itable;
while ($tmp2934->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2934 = $tmp2934->next;
}
$fn2936 $tmp2935 = $tmp2934->methods[1];
panda$core$Bit $tmp2937 = $tmp2935(((panda$core$Equatable*) $tmp2930), ((panda$core$Equatable*) $tmp2933));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2930)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2933)));
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$parser$Token $tmp2939 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2940 = $tmp2939.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2941;
$tmp2941 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2941->value = $tmp2940;
panda$core$Int64 $tmp2942 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2943 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2942);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2944;
$tmp2944 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2944->value = $tmp2943;
ITable* $tmp2945 = ((panda$core$Equatable*) $tmp2941)->$class->itable;
while ($tmp2945->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2945 = $tmp2945->next;
}
$fn2947 $tmp2946 = $tmp2945->methods[1];
panda$core$Bit $tmp2948 = $tmp2946(((panda$core$Equatable*) $tmp2941), ((panda$core$Equatable*) $tmp2944));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2941)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2944)));
*(&local5) = $tmp2948;
goto block13;
block12:;
*(&local5) = $tmp2937;
goto block13;
block13:;
panda$core$Bit $tmp2949 = *(&local5);
bool $tmp2950 = $tmp2949.value;
if ($tmp2950) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$parser$Token $tmp2951 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2952 = $tmp2951.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2953;
$tmp2953 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2953->value = $tmp2952;
panda$core$Int64 $tmp2954 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2955 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2954);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2956;
$tmp2956 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2956->value = $tmp2955;
ITable* $tmp2957 = ((panda$core$Equatable*) $tmp2953)->$class->itable;
while ($tmp2957->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2957 = $tmp2957->next;
}
$fn2959 $tmp2958 = $tmp2957->methods[1];
panda$core$Bit $tmp2960 = $tmp2958(((panda$core$Equatable*) $tmp2953), ((panda$core$Equatable*) $tmp2956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2953)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2956)));
*(&local4) = $tmp2960;
goto block16;
block15:;
*(&local4) = $tmp2949;
goto block16;
block16:;
panda$core$Bit $tmp2961 = *(&local4);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block17; else goto block19;
block17:;
// line 1193
org$pandalanguage$pandac$ASTNode* $tmp2963 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2964));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
*(&local3) = $tmp2963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
// line 1194
org$pandalanguage$pandac$ASTNode* $tmp2965 = *(&local3);
panda$core$Bit $tmp2966 = panda$core$Bit$init$builtin_bit($tmp2965 == NULL);
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block20; else goto block21;
block20:;
// line 1195
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2968 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2969 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
goto block18;
block19:;
// line 1
// line 1199
org$pandalanguage$pandac$ASTNode* $tmp2970 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block18;
block18:;
// line 1201
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1202
panda$core$Int64 $tmp2971 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2972 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2971);
org$pandalanguage$pandac$parser$Token$nullable $tmp2973 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2972);
panda$core$Bit $tmp2974 = panda$core$Bit$init$builtin_bit($tmp2973.nonnull);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block22; else goto block24;
block22:;
// line 1203
org$pandalanguage$pandac$ASTNode* $tmp2976 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2977 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2977));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
*(&local6) = $tmp2976;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
// line 1204
org$pandalanguage$pandac$ASTNode* $tmp2978 = *(&local6);
panda$core$Bit $tmp2979 = panda$core$Bit$init$builtin_bit($tmp2978 == NULL);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block25; else goto block26;
block25:;
// line 1205
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2981 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2981));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2982 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2982));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2983 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2983));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1209
org$pandalanguage$pandac$ASTNode* $tmp2984 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1211
org$pandalanguage$pandac$ASTNode* $tmp2985 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2986 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token $tmp2987 = *(&local1);
org$pandalanguage$pandac$Position $tmp2988 = $tmp2987.position;
org$pandalanguage$pandac$ASTNode* $tmp2989 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2990 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2991 = $tmp2990.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2992;
$tmp2992 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2992->value = $tmp2991;
panda$core$Int64 $tmp2993 = (panda$core$Int64) {97};
org$pandalanguage$pandac$parser$Token$Kind $tmp2994 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2993);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2995;
$tmp2995 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2995->value = $tmp2994;
ITable* $tmp2996 = ((panda$core$Equatable*) $tmp2992)->$class->itable;
while ($tmp2996->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2996 = $tmp2996->next;
}
$fn2998 $tmp2997 = $tmp2996->methods[0];
panda$core$Bit $tmp2999 = $tmp2997(((panda$core$Equatable*) $tmp2992), ((panda$core$Equatable*) $tmp2995));
org$pandalanguage$pandac$ASTNode* $tmp3000 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3001 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q($tmp2985, $tmp2986, $tmp2988, $tmp2989, $tmp2999, $tmp3000, $tmp3001);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2992)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2995)));
org$pandalanguage$pandac$ASTNode* $tmp3002 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3003 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3003));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3004 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2985;
block10:;
// line 1214
org$pandalanguage$pandac$parser$Token $tmp3005 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3005);
// line 1215
org$pandalanguage$pandac$ASTNode* $tmp3006 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
org$pandalanguage$pandac$ASTNode* $tmp3007 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3006;
block7:;
panda$core$Bit $tmp3008 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3010 = (panda$core$Int64) {1175};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3011, $tmp3010, &$s3012);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1224
org$pandalanguage$pandac$ASTNode* $tmp3013 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
*(&local0) = $tmp3013;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
// line 1225
org$pandalanguage$pandac$ASTNode* $tmp3015 = *(&local0);
panda$core$Bit $tmp3016 = panda$core$Bit$init$builtin_bit($tmp3015 == NULL);
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block1; else goto block2;
block1:;
// line 1226
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3018 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1228
goto block3;
block3:;
// line 1229
org$pandalanguage$pandac$parser$Token $tmp3019 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3019;
// line 1230
org$pandalanguage$pandac$parser$Token $tmp3020 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3021 = $tmp3020.kind;
panda$core$Int64 $tmp3022 = $tmp3021.$rawValue;
panda$core$Int64 $tmp3023 = (panda$core$Int64) {59};
panda$core$Bit $tmp3024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3023);
bool $tmp3025 = $tmp3024.value;
if ($tmp3025) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3026 = (panda$core$Int64) {60};
panda$core$Bit $tmp3027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3026);
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3029 = (panda$core$Int64) {61};
panda$core$Bit $tmp3030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3029);
bool $tmp3031 = $tmp3030.value;
if ($tmp3031) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp3032 = (panda$core$Int64) {62};
panda$core$Bit $tmp3033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3032);
bool $tmp3034 = $tmp3033.value;
if ($tmp3034) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp3035 = (panda$core$Int64) {63};
panda$core$Bit $tmp3036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3035);
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp3038 = (panda$core$Int64) {64};
panda$core$Bit $tmp3039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3038);
bool $tmp3040 = $tmp3039.value;
if ($tmp3040) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp3041 = (panda$core$Int64) {65};
panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3041);
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp3044 = (panda$core$Int64) {66};
panda$core$Bit $tmp3045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3022, $tmp3044);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block6; else goto block14;
block6:;
// line 1239
org$pandalanguage$pandac$ASTNode* $tmp3047 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3048 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3048));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
*(&local2) = $tmp3047;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
// line 1240
org$pandalanguage$pandac$ASTNode* $tmp3049 = *(&local2);
panda$core$Bit $tmp3050 = panda$core$Bit$init$builtin_bit($tmp3049 == NULL);
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block15; else goto block16;
block15:;
// line 1241
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3052 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3053 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3053));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1243
org$pandalanguage$pandac$ASTNode* $tmp3054 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3055 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3056 = *(&local1);
org$pandalanguage$pandac$Position $tmp3057 = $tmp3056.position;
org$pandalanguage$pandac$ASTNode* $tmp3058 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3059 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3060 = $tmp3059.kind;
org$pandalanguage$pandac$ASTNode* $tmp3061 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3054, $tmp3055, $tmp3057, $tmp3058, $tmp3060, $tmp3061);
org$pandalanguage$pandac$ASTNode* $tmp3062 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3062));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3054));
*(&local0) = $tmp3054;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3054));
org$pandalanguage$pandac$ASTNode* $tmp3063 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block14:;
// line 1245
org$pandalanguage$pandac$parser$Token $tmp3064 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3064);
// line 1246
org$pandalanguage$pandac$ASTNode* $tmp3065 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
org$pandalanguage$pandac$ASTNode* $tmp3066 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3066));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3065;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3067 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3069 = (panda$core$Int64) {1223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3070, $tmp3069, &$s3071);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1255
org$pandalanguage$pandac$ASTNode* $tmp3072 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3073 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
*(&local0) = $tmp3072;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
// line 1256
org$pandalanguage$pandac$ASTNode* $tmp3074 = *(&local0);
panda$core$Bit $tmp3075 = panda$core$Bit$init$builtin_bit($tmp3074 == NULL);
bool $tmp3076 = $tmp3075.value;
if ($tmp3076) goto block1; else goto block2;
block1:;
// line 1257
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3077 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1259
goto block3;
block3:;
// line 1260
org$pandalanguage$pandac$parser$Token $tmp3078 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3078;
// line 1261
org$pandalanguage$pandac$parser$Token $tmp3079 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3080 = $tmp3079.kind;
panda$core$Int64 $tmp3081 = $tmp3080.$rawValue;
panda$core$Int64 $tmp3082 = (panda$core$Int64) {67};
panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3081, $tmp3082);
bool $tmp3084 = $tmp3083.value;
if ($tmp3084) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3085 = (panda$core$Int64) {71};
panda$core$Bit $tmp3086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3081, $tmp3085);
bool $tmp3087 = $tmp3086.value;
if ($tmp3087) goto block6; else goto block8;
block6:;
// line 1263
org$pandalanguage$pandac$ASTNode* $tmp3088 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3089 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
*(&local2) = $tmp3088;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
// line 1264
org$pandalanguage$pandac$ASTNode* $tmp3090 = *(&local2);
panda$core$Bit $tmp3091 = panda$core$Bit$init$builtin_bit($tmp3090 == NULL);
bool $tmp3092 = $tmp3091.value;
if ($tmp3092) goto block9; else goto block10;
block9:;
// line 1265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3093 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3094 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1267
org$pandalanguage$pandac$ASTNode* $tmp3095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3096 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3097 = *(&local1);
org$pandalanguage$pandac$Position $tmp3098 = $tmp3097.position;
org$pandalanguage$pandac$ASTNode* $tmp3099 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3100 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3101 = $tmp3100.kind;
org$pandalanguage$pandac$ASTNode* $tmp3102 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3095, $tmp3096, $tmp3098, $tmp3099, $tmp3101, $tmp3102);
org$pandalanguage$pandac$ASTNode* $tmp3103 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3095));
*(&local0) = $tmp3095;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3095));
org$pandalanguage$pandac$ASTNode* $tmp3104 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block8:;
// line 1269
org$pandalanguage$pandac$parser$Token $tmp3105 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3105);
// line 1270
org$pandalanguage$pandac$ASTNode* $tmp3106 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
org$pandalanguage$pandac$ASTNode* $tmp3107 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3107));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3106;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3108 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3110 = (panda$core$Int64) {1254};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3111, $tmp3110, &$s3112);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1279
org$pandalanguage$pandac$ASTNode* $tmp3113 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
*(&local0) = $tmp3113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
// line 1280
org$pandalanguage$pandac$ASTNode* $tmp3115 = *(&local0);
panda$core$Bit $tmp3116 = panda$core$Bit$init$builtin_bit($tmp3115 == NULL);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block1; else goto block2;
block1:;
// line 1281
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3118));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1283
goto block3;
block3:;
// line 1284
panda$core$Int64 $tmp3119 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3120 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3119);
org$pandalanguage$pandac$parser$Token$nullable $tmp3121 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3120);
*(&local1) = $tmp3121;
// line 1285
org$pandalanguage$pandac$parser$Token$nullable $tmp3122 = *(&local1);
panda$core$Bit $tmp3123 = panda$core$Bit$init$builtin_bit(!$tmp3122.nonnull);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block5; else goto block6;
block5:;
// line 1286
goto block4;
block6:;
// line 1288
org$pandalanguage$pandac$ASTNode* $tmp3125 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
*(&local2) = $tmp3125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
// line 1289
org$pandalanguage$pandac$ASTNode* $tmp3127 = *(&local2);
panda$core$Bit $tmp3128 = panda$core$Bit$init$builtin_bit($tmp3127 == NULL);
bool $tmp3129 = $tmp3128.value;
if ($tmp3129) goto block7; else goto block8;
block7:;
// line 1290
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
block8:;
// line 1292
org$pandalanguage$pandac$ASTNode* $tmp3132 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3133 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp3134 = *(&local1);
org$pandalanguage$pandac$Position $tmp3135 = ((org$pandalanguage$pandac$parser$Token) $tmp3134.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3136 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp3137 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3138 = ((org$pandalanguage$pandac$parser$Token) $tmp3137.value).kind;
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
goto block3;
block4:;
// line 1294
org$pandalanguage$pandac$ASTNode* $tmp3142 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
org$pandalanguage$pandac$ASTNode* $tmp3143 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3143));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3142;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1301
panda$core$Int64 $tmp3144 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3145 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3144);
org$pandalanguage$pandac$parser$Token$nullable $tmp3146 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3145, &$s3147);
*(&local0) = $tmp3146;
// line 1302
org$pandalanguage$pandac$parser$Token$nullable $tmp3148 = *(&local0);
panda$core$Bit $tmp3149 = panda$core$Bit$init$builtin_bit(!$tmp3148.nonnull);
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block1; else goto block2;
block1:;
// line 1303
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1305
org$pandalanguage$pandac$ASTNode* $tmp3151 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3152 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
*(&local1) = $tmp3151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
// line 1306
org$pandalanguage$pandac$ASTNode* $tmp3153 = *(&local1);
panda$core$Bit $tmp3154 = panda$core$Bit$init$builtin_bit($tmp3153 == NULL);
bool $tmp3155 = $tmp3154.value;
if ($tmp3155) goto block3; else goto block4;
block3:;
// line 1307
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3156 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1309
panda$collections$ImmutableArray* $tmp3157 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3158 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
*(&local2) = $tmp3157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
// line 1310
panda$collections$ImmutableArray* $tmp3159 = *(&local2);
panda$core$Bit $tmp3160 = panda$core$Bit$init$builtin_bit($tmp3159 == NULL);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block5; else goto block6;
block5:;
// line 1311
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3162 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3163 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3163));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1313
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1314
panda$core$Int64 $tmp3164 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3165 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3164);
org$pandalanguage$pandac$parser$Token$nullable $tmp3166 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3165);
panda$core$Bit $tmp3167 = panda$core$Bit$init$builtin_bit($tmp3166.nonnull);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block7; else goto block9;
block7:;
// line 1315
org$pandalanguage$pandac$parser$Token $tmp3169 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3170 = $tmp3169.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3171;
$tmp3171 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3171->value = $tmp3170;
panda$core$Int64 $tmp3172 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3173 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3172);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3174;
$tmp3174 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3174->value = $tmp3173;
ITable* $tmp3175 = ((panda$core$Equatable*) $tmp3171)->$class->itable;
while ($tmp3175->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3175 = $tmp3175->next;
}
$fn3177 $tmp3176 = $tmp3175->methods[0];
panda$core$Bit $tmp3178 = $tmp3176(((panda$core$Equatable*) $tmp3171), ((panda$core$Equatable*) $tmp3174));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3171)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3174)));
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block10; else goto block12;
block10:;
// line 1316
org$pandalanguage$pandac$ASTNode* $tmp3180 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3181 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
*(&local3) = $tmp3180;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
// line 1317
org$pandalanguage$pandac$ASTNode* $tmp3182 = *(&local3);
panda$core$Bit $tmp3183 = panda$core$Bit$init$builtin_bit($tmp3182 == NULL);
bool $tmp3184 = $tmp3183.value;
if ($tmp3184) goto block13; else goto block14;
block13:;
// line 1318
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3185 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3185));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3186 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3186));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3187 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3187));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1322
org$pandalanguage$pandac$ASTNode* $tmp3188 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3189 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
*(&local3) = $tmp3188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
// line 1323
org$pandalanguage$pandac$ASTNode* $tmp3190 = *(&local3);
panda$core$Bit $tmp3191 = panda$core$Bit$init$builtin_bit($tmp3190 == NULL);
bool $tmp3192 = $tmp3191.value;
if ($tmp3192) goto block15; else goto block16;
block15:;
// line 1324
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3193 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3193));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3194 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3195));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1329
org$pandalanguage$pandac$ASTNode* $tmp3196 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1331
org$pandalanguage$pandac$ASTNode* $tmp3197 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3198 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp3199 = *(&local0);
org$pandalanguage$pandac$Position $tmp3200 = ((org$pandalanguage$pandac$parser$Token) $tmp3199.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3201 = *(&local1);
panda$collections$ImmutableArray* $tmp3202 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3203 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp3197, $tmp3198, $tmp3200, $tmp3201, $tmp3202, $tmp3203);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3197));
org$pandalanguage$pandac$ASTNode* $tmp3204 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3204));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3205 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3205));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3206 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3197;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1338
panda$core$Int64 $tmp3207 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3208 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3207);
org$pandalanguage$pandac$parser$Token$nullable $tmp3209 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3208, &$s3210);
panda$core$Bit $tmp3211 = panda$core$Bit$init$builtin_bit(!$tmp3209.nonnull);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block1; else goto block2;
block1:;
// line 1339
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1341
panda$core$Bit $tmp3213 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3214 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
return $tmp3214;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1348
panda$core$Int64 $tmp3215 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3216 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3215);
org$pandalanguage$pandac$parser$Token$nullable $tmp3217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3216, &$s3218);
*(&local0) = $tmp3217;
// line 1349
org$pandalanguage$pandac$parser$Token$nullable $tmp3219 = *(&local0);
panda$core$Bit $tmp3220 = panda$core$Bit$init$builtin_bit(!$tmp3219.nonnull);
bool $tmp3221 = $tmp3220.value;
if ($tmp3221) goto block1; else goto block2;
block1:;
// line 1350
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1352
org$pandalanguage$pandac$parser$Token $tmp3222 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3223 = $tmp3222.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3224;
$tmp3224 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3224->value = $tmp3223;
panda$core$Int64 $tmp3225 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3226 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3225);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3227;
$tmp3227 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3227->value = $tmp3226;
ITable* $tmp3228 = ((panda$core$Equatable*) $tmp3224)->$class->itable;
while ($tmp3228->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3228 = $tmp3228->next;
}
$fn3230 $tmp3229 = $tmp3228->methods[0];
panda$core$Bit $tmp3231 = $tmp3229(((panda$core$Equatable*) $tmp3224), ((panda$core$Equatable*) $tmp3227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3224)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3227)));
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block3; else goto block4;
block3:;
// line 1353
org$pandalanguage$pandac$ASTNode* $tmp3233 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3234 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
*(&local1) = $tmp3233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
// line 1354
org$pandalanguage$pandac$ASTNode* $tmp3235 = *(&local1);
panda$core$Bit $tmp3236 = panda$core$Bit$init$builtin_bit($tmp3235 == NULL);
bool $tmp3237 = $tmp3236.value;
if ($tmp3237) goto block5; else goto block6;
block5:;
// line 1355
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1357
org$pandalanguage$pandac$ASTNode* $tmp3239 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3240 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp3241 = *(&local0);
org$pandalanguage$pandac$Position $tmp3242 = ((org$pandalanguage$pandac$parser$Token) $tmp3241.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3243 = *(&local0);
panda$core$String* $tmp3244 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3243.value));
org$pandalanguage$pandac$ASTNode* $tmp3245 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3239, $tmp3240, $tmp3242, $tmp3244, $tmp3245);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3244));
org$pandalanguage$pandac$ASTNode* $tmp3246 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3246));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3239;
block4:;
// line 1359
org$pandalanguage$pandac$ASTNode* $tmp3247 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3248 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3249 = *(&local0);
org$pandalanguage$pandac$Position $tmp3250 = ((org$pandalanguage$pandac$parser$Token) $tmp3249.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3251 = *(&local0);
panda$core$String* $tmp3252 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3251.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3247, $tmp3248, $tmp3250, $tmp3252);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3252));
return $tmp3247;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
// line 1366
panda$core$Int64 $tmp3253 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3254 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3253);
org$pandalanguage$pandac$parser$Token$nullable $tmp3255 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3254, &$s3256);
*(&local0) = $tmp3255;
// line 1367
org$pandalanguage$pandac$parser$Token$nullable $tmp3257 = *(&local0);
panda$core$Bit $tmp3258 = panda$core$Bit$init$builtin_bit(!$tmp3257.nonnull);
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block1; else goto block2;
block1:;
// line 1368
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1370
org$pandalanguage$pandac$ASTNode* $tmp3260 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3260));
*(&local1) = $tmp3260;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3260));
// line 1371
org$pandalanguage$pandac$ASTNode* $tmp3262 = *(&local1);
panda$core$Bit $tmp3263 = panda$core$Bit$init$builtin_bit($tmp3262 == NULL);
bool $tmp3264 = $tmp3263.value;
if ($tmp3264) goto block3; else goto block4;
block3:;
// line 1372
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3265 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1374
panda$core$Int64 $tmp3266 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3267 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3266);
org$pandalanguage$pandac$parser$Token$nullable $tmp3268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3267, &$s3269);
panda$core$Bit $tmp3270 = panda$core$Bit$init$builtin_bit(!$tmp3268.nonnull);
bool $tmp3271 = $tmp3270.value;
if ($tmp3271) goto block5; else goto block6;
block5:;
// line 1375
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3272 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3272));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1377
org$pandalanguage$pandac$ASTNode* $tmp3273 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3274 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
*(&local2) = $tmp3273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
// line 1378
org$pandalanguage$pandac$ASTNode* $tmp3275 = *(&local2);
panda$core$Bit $tmp3276 = panda$core$Bit$init$builtin_bit($tmp3275 == NULL);
bool $tmp3277 = $tmp3276.value;
if ($tmp3277) goto block7; else goto block8;
block7:;
// line 1379
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3278 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3278));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3279 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3279));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1381
panda$collections$ImmutableArray* $tmp3280 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3281 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
*(&local3) = $tmp3280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// line 1382
panda$collections$ImmutableArray* $tmp3282 = *(&local3);
panda$core$Bit $tmp3283 = panda$core$Bit$init$builtin_bit($tmp3282 == NULL);
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block9; else goto block10;
block9:;
// line 1383
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3285 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3286 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3287 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1385
org$pandalanguage$pandac$ASTNode* $tmp3288 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3289 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$nullable $tmp3290 = *(&local0);
org$pandalanguage$pandac$Position $tmp3291 = ((org$pandalanguage$pandac$parser$Token) $tmp3290.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3292 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3293 = *(&local2);
panda$collections$ImmutableArray* $tmp3294 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3288, $tmp3289, $tmp3291, param1, $tmp3292, $tmp3293, $tmp3294);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3288));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3288));
panda$collections$ImmutableArray* $tmp3295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3295));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3296 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3296));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3297 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3288;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 1392
panda$core$Int64 $tmp3298 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3299 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3298);
org$pandalanguage$pandac$parser$Token$nullable $tmp3300 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3299, &$s3301);
*(&local0) = $tmp3300;
// line 1393
org$pandalanguage$pandac$parser$Token$nullable $tmp3302 = *(&local0);
panda$core$Bit $tmp3303 = panda$core$Bit$init$builtin_bit(!$tmp3302.nonnull);
bool $tmp3304 = $tmp3303.value;
if ($tmp3304) goto block1; else goto block2;
block1:;
// line 1394
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1396
org$pandalanguage$pandac$ASTNode* $tmp3305 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3306 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
*(&local1) = $tmp3305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
// line 1397
org$pandalanguage$pandac$ASTNode* $tmp3307 = *(&local1);
panda$core$Bit $tmp3308 = panda$core$Bit$init$builtin_bit($tmp3307 == NULL);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block3; else goto block4;
block3:;
// line 1398
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1400
panda$collections$ImmutableArray* $tmp3311 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3312 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
*(&local2) = $tmp3311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
// line 1401
panda$collections$ImmutableArray* $tmp3313 = *(&local2);
panda$core$Bit $tmp3314 = panda$core$Bit$init$builtin_bit($tmp3313 == NULL);
bool $tmp3315 = $tmp3314.value;
if ($tmp3315) goto block5; else goto block6;
block5:;
// line 1402
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3316 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3317 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3317));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1404
org$pandalanguage$pandac$ASTNode* $tmp3318 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3319 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$nullable $tmp3320 = *(&local0);
org$pandalanguage$pandac$Position $tmp3321 = ((org$pandalanguage$pandac$parser$Token) $tmp3320.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3322 = *(&local1);
panda$collections$ImmutableArray* $tmp3323 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3318, $tmp3319, $tmp3321, param1, $tmp3322, $tmp3323);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$collections$ImmutableArray* $tmp3324 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3324));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3325 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3325));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3318;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1411
panda$core$Int64 $tmp3326 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3327 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3326);
org$pandalanguage$pandac$parser$Token$nullable $tmp3328 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3327, &$s3329);
*(&local0) = $tmp3328;
// line 1412
org$pandalanguage$pandac$parser$Token$nullable $tmp3330 = *(&local0);
panda$core$Bit $tmp3331 = panda$core$Bit$init$builtin_bit(!$tmp3330.nonnull);
bool $tmp3332 = $tmp3331.value;
if ($tmp3332) goto block1; else goto block2;
block1:;
// line 1413
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1415
panda$collections$ImmutableArray* $tmp3333 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
*(&local1) = $tmp3333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
// line 1416
panda$collections$ImmutableArray* $tmp3335 = *(&local1);
panda$core$Bit $tmp3336 = panda$core$Bit$init$builtin_bit($tmp3335 == NULL);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block3; else goto block4;
block3:;
// line 1417
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3338 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3338));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1419
panda$core$Int64 $tmp3339 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3340 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3339);
org$pandalanguage$pandac$parser$Token$nullable $tmp3341 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3340, &$s3342);
panda$core$Bit $tmp3343 = panda$core$Bit$init$builtin_bit(!$tmp3341.nonnull);
bool $tmp3344 = $tmp3343.value;
if ($tmp3344) goto block5; else goto block6;
block5:;
// line 1420
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3345 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1422
org$pandalanguage$pandac$ASTNode* $tmp3346 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3347 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
*(&local2) = $tmp3346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
// line 1423
org$pandalanguage$pandac$ASTNode* $tmp3348 = *(&local2);
panda$core$Bit $tmp3349 = panda$core$Bit$init$builtin_bit($tmp3348 == NULL);
bool $tmp3350 = $tmp3349.value;
if ($tmp3350) goto block7; else goto block8;
block7:;
// line 1424
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3351 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3351));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3352 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3352));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1426
org$pandalanguage$pandac$ASTNode* $tmp3353 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3354 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$nullable $tmp3355 = *(&local0);
org$pandalanguage$pandac$Position $tmp3356 = ((org$pandalanguage$pandac$parser$Token) $tmp3355.value).position;
panda$collections$ImmutableArray* $tmp3357 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3358 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3353, $tmp3354, $tmp3356, param1, $tmp3357, $tmp3358);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
org$pandalanguage$pandac$ASTNode* $tmp3359 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3359));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3360 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3360));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3353;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
// line 1433
panda$core$Int64 $tmp3361 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3362 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3361);
org$pandalanguage$pandac$parser$Token$nullable $tmp3363 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3362, &$s3364);
*(&local0) = $tmp3363;
// line 1434
org$pandalanguage$pandac$parser$Token$nullable $tmp3365 = *(&local0);
panda$core$Bit $tmp3366 = panda$core$Bit$init$builtin_bit(!$tmp3365.nonnull);
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block1; else goto block2;
block1:;
// line 1435
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1437
panda$collections$ImmutableArray* $tmp3368 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3369 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3369));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
*(&local1) = $tmp3368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
// line 1438
panda$collections$ImmutableArray* $tmp3370 = *(&local1);
panda$core$Bit $tmp3371 = panda$core$Bit$init$builtin_bit($tmp3370 == NULL);
bool $tmp3372 = $tmp3371.value;
if ($tmp3372) goto block3; else goto block4;
block3:;
// line 1439
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1441
org$pandalanguage$pandac$ASTNode* $tmp3374 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3375 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token$nullable $tmp3376 = *(&local0);
org$pandalanguage$pandac$Position $tmp3377 = ((org$pandalanguage$pandac$parser$Token) $tmp3376.value).position;
panda$collections$ImmutableArray* $tmp3378 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3374, $tmp3375, $tmp3377, param1, $tmp3378);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3374));
panda$collections$ImmutableArray* $tmp3379 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3379));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3374;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1448
panda$core$Int64 $tmp3380 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3381 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3380);
org$pandalanguage$pandac$parser$Token$nullable $tmp3382 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3381, &$s3383);
*(&local0) = $tmp3382;
// line 1449
org$pandalanguage$pandac$parser$Token$nullable $tmp3384 = *(&local0);
panda$core$Bit $tmp3385 = panda$core$Bit$init$builtin_bit(!$tmp3384.nonnull);
bool $tmp3386 = $tmp3385.value;
if ($tmp3386) goto block1; else goto block2;
block1:;
// line 1450
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1452
org$pandalanguage$pandac$ASTNode* $tmp3387 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3388 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
*(&local1) = $tmp3387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
// line 1453
org$pandalanguage$pandac$ASTNode* $tmp3389 = *(&local1);
panda$core$Bit $tmp3390 = panda$core$Bit$init$builtin_bit($tmp3389 == NULL);
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block3; else goto block4;
block3:;
// line 1454
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1456
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1457
panda$core$Int64 $tmp3393 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3394 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3393);
org$pandalanguage$pandac$parser$Token$nullable $tmp3395 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3394);
panda$core$Bit $tmp3396 = panda$core$Bit$init$builtin_bit($tmp3395.nonnull);
bool $tmp3397 = $tmp3396.value;
if ($tmp3397) goto block5; else goto block7;
block5:;
// line 1458
org$pandalanguage$pandac$ASTNode* $tmp3398 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3399 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3399));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
*(&local2) = $tmp3398;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
// line 1459
org$pandalanguage$pandac$ASTNode* $tmp3400 = *(&local2);
panda$core$Bit $tmp3401 = panda$core$Bit$init$builtin_bit($tmp3400 == NULL);
bool $tmp3402 = $tmp3401.value;
if ($tmp3402) goto block8; else goto block9;
block8:;
// line 1460
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3403 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3403));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3404 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1464
org$pandalanguage$pandac$ASTNode* $tmp3405 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1466
org$pandalanguage$pandac$ASTNode* $tmp3406 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3407 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$nullable $tmp3408 = *(&local0);
org$pandalanguage$pandac$Position $tmp3409 = ((org$pandalanguage$pandac$parser$Token) $tmp3408.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3410 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3411 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3406, $tmp3407, $tmp3409, $tmp3410, $tmp3411);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3406));
org$pandalanguage$pandac$ASTNode* $tmp3412 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3412));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3413 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3413));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3406;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$core$Bit* $tmp3414 = &param0->allowLambdas;
panda$core$Bit $tmp3415 = *$tmp3414;
bool $tmp3416 = $tmp3415.value;
if ($tmp3416) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3417 = (panda$core$Int64) {1474};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3418, $tmp3417, &$s3419);
abort(); // unreachable
block1:;
// line 1475
panda$core$Int64 $tmp3420 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3421 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3420);
org$pandalanguage$pandac$parser$Token$nullable $tmp3422 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3421, &$s3423);
*(&local0) = $tmp3422;
// line 1476
org$pandalanguage$pandac$parser$Token$nullable $tmp3424 = *(&local0);
panda$core$Bit $tmp3425 = panda$core$Bit$init$builtin_bit(!$tmp3424.nonnull);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block3; else goto block4;
block3:;
// line 1477
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1479
panda$core$Bit $tmp3427 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3428 = &param0->allowLambdas;
*$tmp3428 = $tmp3427;
// line 1480
panda$collections$Array* $tmp3429 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3429);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3430 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3430));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
*(&local1) = $tmp3429;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// line 1481
org$pandalanguage$pandac$ASTNode* $tmp3431 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3432 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3432));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
*(&local2) = $tmp3431;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
// line 1482
org$pandalanguage$pandac$ASTNode* $tmp3433 = *(&local2);
panda$core$Bit $tmp3434 = panda$core$Bit$init$builtin_bit($tmp3433 == NULL);
bool $tmp3435 = $tmp3434.value;
if ($tmp3435) goto block5; else goto block6;
block5:;
// line 1483
panda$core$Bit $tmp3436 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3437 = &param0->allowLambdas;
*$tmp3437 = $tmp3436;
// line 1484
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3438 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3438));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3439));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1486
panda$collections$Array* $tmp3440 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3441 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3440, ((panda$core$Object*) $tmp3441));
// line 1487
goto block7;
block7:;
panda$core$Int64 $tmp3442 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3443 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3442);
org$pandalanguage$pandac$parser$Token$nullable $tmp3444 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3443);
panda$core$Bit $tmp3445 = panda$core$Bit$init$builtin_bit($tmp3444.nonnull);
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block8; else goto block9;
block8:;
// line 1488
org$pandalanguage$pandac$ASTNode* $tmp3447 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
*(&local2) = $tmp3447;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
// line 1489
org$pandalanguage$pandac$ASTNode* $tmp3449 = *(&local2);
panda$core$Bit $tmp3450 = panda$core$Bit$init$builtin_bit($tmp3449 == NULL);
bool $tmp3451 = $tmp3450.value;
if ($tmp3451) goto block10; else goto block11;
block10:;
// line 1490
panda$core$Bit $tmp3452 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3453 = &param0->allowLambdas;
*$tmp3453 = $tmp3452;
// line 1491
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3454 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3454));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3455 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3455));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1493
panda$collections$Array* $tmp3456 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3457 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3456, ((panda$core$Object*) $tmp3457));
goto block7;
block9:;
// line 1495
panda$core$Bit $tmp3458 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3459 = &param0->allowLambdas;
*$tmp3459 = $tmp3458;
// line 1496
panda$core$Int64 $tmp3460 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3461 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3460);
org$pandalanguage$pandac$parser$Token$nullable $tmp3462 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3461, &$s3463);
panda$core$Bit $tmp3464 = panda$core$Bit$init$builtin_bit(!$tmp3462.nonnull);
bool $tmp3465 = $tmp3464.value;
if ($tmp3465) goto block12; else goto block13;
block12:;
// line 1497
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3466 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3466));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3467 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3467));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1499
panda$collections$Array* $tmp3468 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3468);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3469 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3469));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
*(&local3) = $tmp3468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
// line 1500
goto block14;
block14:;
// line 1501
org$pandalanguage$pandac$parser$Token $tmp3470 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3471 = $tmp3470.kind;
panda$core$Int64 $tmp3472 = $tmp3471.$rawValue;
panda$core$Int64 $tmp3473 = (panda$core$Int64) {40};
panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3473);
bool $tmp3475 = $tmp3474.value;
if ($tmp3475) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3476 = (panda$core$Int64) {41};
panda$core$Bit $tmp3477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3476);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block17; else goto block19;
block19:;
panda$core$Int64 $tmp3479 = (panda$core$Int64) {101};
panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3479);
bool $tmp3481 = $tmp3480.value;
if ($tmp3481) goto block17; else goto block20;
block17:;
// line 1503
goto block15;
block20:;
panda$core$Int64 $tmp3482 = (panda$core$Int64) {29};
panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3482);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp3485 = (panda$core$Int64) {30};
panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3485);
bool $tmp3487 = $tmp3486.value;
if ($tmp3487) goto block21; else goto block23;
block23:;
panda$core$Int64 $tmp3488 = (panda$core$Int64) {28};
panda$core$Bit $tmp3489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3472, $tmp3488);
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block21; else goto block24;
block21:;
// line 1505
org$pandalanguage$pandac$ASTNode* $tmp3491 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3492 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3491));
*(&local4) = $tmp3491;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3491));
// line 1506
org$pandalanguage$pandac$ASTNode* $tmp3493 = *(&local4);
panda$core$Bit $tmp3494 = panda$core$Bit$init$builtin_bit($tmp3493 == NULL);
bool $tmp3495 = $tmp3494.value;
if ($tmp3495) goto block25; else goto block26;
block25:;
// line 1507
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3496 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3496));
// unreffing stmt
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3497 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3497));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3498 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3499 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3499));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1509
panda$collections$Array* $tmp3500 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3501 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3500, ((panda$core$Object*) $tmp3501));
// line 1510
org$pandalanguage$pandac$ASTNode* $tmp3502 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing stmt
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block15;
block24:;
// line 1
// line 1512
org$pandalanguage$pandac$ASTNode* $tmp3503 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3504 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3504));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
*(&local5) = $tmp3503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
// line 1513
org$pandalanguage$pandac$ASTNode* $tmp3505 = *(&local5);
panda$core$Bit $tmp3506 = panda$core$Bit$init$builtin_bit($tmp3505 == NULL);
bool $tmp3507 = $tmp3506.value;
if ($tmp3507) goto block27; else goto block28;
block27:;
// line 1514
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3508 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3508));
// unreffing stmt
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3509 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3509));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3510 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3510));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3511 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block28:;
// line 1516
panda$collections$Array* $tmp3512 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3513 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3512, ((panda$core$Object*) $tmp3513));
org$pandalanguage$pandac$ASTNode* $tmp3514 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3514));
// unreffing stmt
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block16:;
goto block14;
block15:;
// line 1520
org$pandalanguage$pandac$ASTNode* $tmp3515 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3516 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token$nullable $tmp3517 = *(&local0);
org$pandalanguage$pandac$Position $tmp3518 = ((org$pandalanguage$pandac$parser$Token) $tmp3517.value).position;
panda$collections$Array* $tmp3519 = *(&local1);
panda$collections$ImmutableArray* $tmp3520 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3519);
panda$collections$Array* $tmp3521 = *(&local3);
panda$collections$ImmutableArray* $tmp3522 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3521);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3515, $tmp3516, $tmp3518, $tmp3520, $tmp3522);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3522));
panda$collections$Array* $tmp3523 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3523));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3524 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3525 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3525));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3515;

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
// line 1527
panda$core$Int64 $tmp3526 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3527 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3526);
org$pandalanguage$pandac$parser$Token$nullable $tmp3528 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3527, &$s3529);
*(&local0) = $tmp3528;
// line 1528
org$pandalanguage$pandac$parser$Token$nullable $tmp3530 = *(&local0);
panda$core$Bit $tmp3531 = panda$core$Bit$init$builtin_bit(!$tmp3530.nonnull);
bool $tmp3532 = $tmp3531.value;
if ($tmp3532) goto block1; else goto block2;
block1:;
// line 1529
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1531
org$pandalanguage$pandac$ASTNode* $tmp3533 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3534 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
*(&local1) = $tmp3533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
// line 1532
org$pandalanguage$pandac$ASTNode* $tmp3535 = *(&local1);
panda$core$Bit $tmp3536 = panda$core$Bit$init$builtin_bit($tmp3535 == NULL);
bool $tmp3537 = $tmp3536.value;
if ($tmp3537) goto block3; else goto block4;
block3:;
// line 1533
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3538 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3538));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1535
panda$core$Int64 $tmp3539 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3540 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3539);
org$pandalanguage$pandac$parser$Token$nullable $tmp3541 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3540, &$s3542);
panda$core$Bit $tmp3543 = panda$core$Bit$init$builtin_bit(!$tmp3541.nonnull);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block5; else goto block6;
block5:;
// line 1536
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3545 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3545));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1538
panda$collections$Array* $tmp3546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3546);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
*(&local2) = $tmp3546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
// line 1539
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3548 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3548));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local3) = ((panda$collections$Array*) NULL);
// line 1540
goto block7;
block7:;
// line 1541
org$pandalanguage$pandac$parser$Token $tmp3549 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3549;
// line 1542
org$pandalanguage$pandac$parser$Token $tmp3550 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3551 = $tmp3550.kind;
panda$core$Int64 $tmp3552 = $tmp3551.$rawValue;
panda$core$Int64 $tmp3553 = (panda$core$Int64) {101};
panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3552, $tmp3553);
bool $tmp3555 = $tmp3554.value;
if ($tmp3555) goto block10; else goto block11;
block10:;
// line 1544
goto block8;
block11:;
panda$core$Int64 $tmp3556 = (panda$core$Int64) {40};
panda$core$Bit $tmp3557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3552, $tmp3556);
bool $tmp3558 = $tmp3557.value;
if ($tmp3558) goto block12; else goto block13;
block12:;
// line 1546
org$pandalanguage$pandac$ASTNode* $tmp3559 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3560 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
*(&local5) = $tmp3559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
// line 1547
org$pandalanguage$pandac$ASTNode* $tmp3561 = *(&local5);
panda$core$Bit $tmp3562 = panda$core$Bit$init$builtin_bit($tmp3561 == NULL);
bool $tmp3563 = $tmp3562.value;
if ($tmp3563) goto block14; else goto block15;
block14:;
// line 1548
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3564 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3565 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3566 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3566));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3567 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3567));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1550
panda$collections$Array* $tmp3568 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3569 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3568, ((panda$core$Object*) $tmp3569));
org$pandalanguage$pandac$ASTNode* $tmp3570 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block13:;
panda$core$Int64 $tmp3571 = (panda$core$Int64) {41};
panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3552, $tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block16; else goto block17;
block16:;
// line 1552
org$pandalanguage$pandac$parser$Token $tmp3574 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3574;
// line 1553
panda$core$Int64 $tmp3575 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3576 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3575);
org$pandalanguage$pandac$parser$Token$nullable $tmp3577 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3576, &$s3578);
panda$core$Bit $tmp3579 = panda$core$Bit$init$builtin_bit(!$tmp3577.nonnull);
bool $tmp3580 = $tmp3579.value;
if ($tmp3580) goto block18; else goto block19;
block18:;
// line 1554
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp3581 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3581));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3582 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3582));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3583 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1556
panda$collections$Array* $tmp3584 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3584);
panda$collections$Array* $tmp3585 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3585));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
*(&local3) = $tmp3584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
// line 1557
goto block20;
block20:;
// line 1558
org$pandalanguage$pandac$parser$Token $tmp3586 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3587 = $tmp3586.kind;
panda$core$Int64 $tmp3588 = $tmp3587.$rawValue;
panda$core$Int64 $tmp3589 = (panda$core$Int64) {101};
panda$core$Bit $tmp3590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3588, $tmp3589);
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block23; else goto block24;
block23:;
// line 1560
goto block21;
block24:;
panda$core$Int64 $tmp3592 = (panda$core$Int64) {29};
panda$core$Bit $tmp3593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3588, $tmp3592);
bool $tmp3594 = $tmp3593.value;
if ($tmp3594) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp3595 = (panda$core$Int64) {30};
panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3588, $tmp3595);
bool $tmp3597 = $tmp3596.value;
if ($tmp3597) goto block25; else goto block27;
block27:;
panda$core$Int64 $tmp3598 = (panda$core$Int64) {28};
panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3588, $tmp3598);
bool $tmp3600 = $tmp3599.value;
if ($tmp3600) goto block25; else goto block28;
block25:;
// line 1562
org$pandalanguage$pandac$ASTNode* $tmp3601 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3602 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3601));
*(&local7) = $tmp3601;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3601));
// line 1563
org$pandalanguage$pandac$ASTNode* $tmp3603 = *(&local7);
panda$core$Bit $tmp3604 = panda$core$Bit$init$builtin_bit($tmp3603 == NULL);
bool $tmp3605 = $tmp3604.value;
if ($tmp3605) goto block29; else goto block30;
block29:;
// line 1564
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3606 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3606));
// unreffing stmt
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3607 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3608 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 1566
panda$collections$Array* $tmp3610 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3611 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp3610, ((panda$core$Object*) $tmp3611));
// line 1567
org$pandalanguage$pandac$ASTNode* $tmp3612 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3612));
// unreffing stmt
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block28:;
// line 1569
org$pandalanguage$pandac$ASTNode* $tmp3613 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3614 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3614));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
*(&local8) = $tmp3613;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
// line 1570
org$pandalanguage$pandac$ASTNode* $tmp3615 = *(&local8);
panda$core$Bit $tmp3616 = panda$core$Bit$init$builtin_bit($tmp3615 == NULL);
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block31; else goto block32;
block31:;
// line 1571
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3618 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
// unreffing stmt
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3619 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3621 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
// line 1573
panda$collections$Array* $tmp3622 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3623 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp3622, ((panda$core$Object*) $tmp3623));
goto block22;
block22:;
org$pandalanguage$pandac$ASTNode* $tmp3624 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3624));
// unreffing stmt
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block21:;
// line 1576
goto block8;
block17:;
// line 1578
org$pandalanguage$pandac$parser$Token $tmp3625 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1579
org$pandalanguage$pandac$parser$Token $tmp3626 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3627 = *(&local4);
panda$core$String* $tmp3628 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3627);
panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3630, $tmp3628);
panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3632);
panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3634, $tmp3631);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3626, $tmp3633);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3629));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3631));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
// line 1581
goto block8;
block9:;
goto block7;
block8:;
// line 1584
panda$core$Int64 $tmp3635 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3636 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3635);
org$pandalanguage$pandac$parser$Token$nullable $tmp3637 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3636, &$s3638);
panda$core$Bit $tmp3639 = panda$core$Bit$init$builtin_bit(!$tmp3637.nonnull);
bool $tmp3640 = $tmp3639.value;
if ($tmp3640) goto block33; else goto block34;
block33:;
// line 1585
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp3641 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3641));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3642 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3642));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3643 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3643));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block34:;
// line 1587
panda$collections$Array* $tmp3644 = *(&local3);
panda$core$Bit $tmp3645 = panda$core$Bit$init$builtin_bit($tmp3644 != NULL);
bool $tmp3646 = $tmp3645.value;
if ($tmp3646) goto block35; else goto block36;
block35:;
// line 1588
org$pandalanguage$pandac$ASTNode* $tmp3647 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3648 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3649 = *(&local0);
org$pandalanguage$pandac$Position $tmp3650 = ((org$pandalanguage$pandac$parser$Token) $tmp3649.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3651 = *(&local1);
panda$collections$Array* $tmp3652 = *(&local2);
panda$collections$ImmutableArray* $tmp3653 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3652);
panda$collections$Array* $tmp3654 = *(&local3);
panda$collections$ImmutableArray* $tmp3655 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3654);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3647, $tmp3648, $tmp3650, $tmp3651, $tmp3653, $tmp3655);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3655));
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
return $tmp3647;
block36:;
// line 1590
org$pandalanguage$pandac$ASTNode* $tmp3659 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3660 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3661 = *(&local0);
org$pandalanguage$pandac$Position $tmp3662 = ((org$pandalanguage$pandac$parser$Token) $tmp3661.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3663 = *(&local1);
panda$collections$Array* $tmp3664 = *(&local2);
panda$collections$ImmutableArray* $tmp3665 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3664);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3659, $tmp3660, $tmp3662, $tmp3663, $tmp3665, ((panda$collections$ImmutableArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3665));
panda$collections$Array* $tmp3666 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3666));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3667 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3667));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3668 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3668));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3659;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1597
panda$core$Int64 $tmp3669 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3670 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3669);
org$pandalanguage$pandac$parser$Token$nullable $tmp3671 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3670, &$s3672);
*(&local0) = $tmp3671;
// line 1598
org$pandalanguage$pandac$parser$Token$nullable $tmp3673 = *(&local0);
panda$core$Bit $tmp3674 = panda$core$Bit$init$builtin_bit(!$tmp3673.nonnull);
bool $tmp3675 = $tmp3674.value;
if ($tmp3675) goto block1; else goto block2;
block1:;
// line 1599
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 1601
panda$collections$Array* $tmp3676 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3676);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3677 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3677));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3676));
*(&local1) = $tmp3676;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3676));
// line 1602
goto block3;
block3:;
// line 1603
org$pandalanguage$pandac$parser$Token $tmp3678 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3679 = $tmp3678.kind;
panda$core$Int64 $tmp3680 = $tmp3679.$rawValue;
panda$core$Int64 $tmp3681 = (panda$core$Int64) {101};
panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3680, $tmp3681);
bool $tmp3683 = $tmp3682.value;
if ($tmp3683) goto block6; else goto block7;
block6:;
// line 1605
org$pandalanguage$pandac$parser$Token $tmp3684 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1606
goto block4;
block7:;
panda$core$Int64 $tmp3685 = (panda$core$Int64) {29};
panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3680, $tmp3685);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3688 = (panda$core$Int64) {30};
panda$core$Bit $tmp3689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3680, $tmp3688);
bool $tmp3690 = $tmp3689.value;
if ($tmp3690) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3691 = (panda$core$Int64) {28};
panda$core$Bit $tmp3692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3680, $tmp3691);
bool $tmp3693 = $tmp3692.value;
if ($tmp3693) goto block8; else goto block11;
block8:;
// line 1608
org$pandalanguage$pandac$ASTNode* $tmp3694 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3695 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3694));
*(&local2) = $tmp3694;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3694));
// line 1609
org$pandalanguage$pandac$ASTNode* $tmp3696 = *(&local2);
panda$core$Bit $tmp3697 = panda$core$Bit$init$builtin_bit($tmp3696 == NULL);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block12; else goto block13;
block12:;
// line 1610
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3699 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3699));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3700 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3700));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
// line 1612
panda$core$Int64 $tmp3701 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3702 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3701);
org$pandalanguage$pandac$parser$Token$nullable $tmp3703 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3702, &$s3704);
panda$core$Bit $tmp3705 = panda$core$Bit$init$builtin_bit(!$tmp3703.nonnull);
bool $tmp3706 = $tmp3705.value;
if ($tmp3706) goto block14; else goto block15;
block14:;
// line 1613
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3707 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3707));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3708 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block15:;
// line 1615
panda$collections$Array* $tmp3709 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3710 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3709, ((panda$core$Object*) $tmp3710));
// line 1616
org$pandalanguage$pandac$ASTNode* $tmp3711 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3711));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block11:;
// line 1618
org$pandalanguage$pandac$ASTNode* $tmp3712 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3713 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3713));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3712));
*(&local3) = $tmp3712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3712));
// line 1619
org$pandalanguage$pandac$ASTNode* $tmp3714 = *(&local3);
panda$core$Bit $tmp3715 = panda$core$Bit$init$builtin_bit($tmp3714 == NULL);
bool $tmp3716 = $tmp3715.value;
if ($tmp3716) goto block16; else goto block17;
block16:;
// line 1620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3717 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3717));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3718 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3718));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block17:;
// line 1622
panda$collections$Array* $tmp3719 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3720 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3719, ((panda$core$Object*) $tmp3720));
goto block5;
block5:;
org$pandalanguage$pandac$ASTNode* $tmp3721 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3721));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1625
panda$collections$Array* $tmp3722 = *(&local1);
panda$collections$ImmutableArray* $tmp3723 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3722);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
panda$collections$Array* $tmp3724 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3724));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3723;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$ImmutableArray* local0 = NULL;
// line 1632
panda$collections$ImmutableArray* $tmp3725 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3726 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3726));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3725));
*(&local0) = $tmp3725;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3725));
// line 1633
panda$collections$ImmutableArray* $tmp3727 = *(&local0);
panda$core$Bit $tmp3728 = panda$core$Bit$init$builtin_bit($tmp3727 == NULL);
bool $tmp3729 = $tmp3728.value;
if ($tmp3729) goto block1; else goto block2;
block1:;
// line 1634
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3730 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3730));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1636
org$pandalanguage$pandac$ASTNode* $tmp3731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3732 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Position $tmp3733 = org$pandalanguage$pandac$Position$init();
panda$collections$ImmutableArray* $tmp3734 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3731, $tmp3732, $tmp3733, $tmp3734);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3731));
panda$collections$ImmutableArray* $tmp3735 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3731;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1643
org$pandalanguage$pandac$ASTNode* $tmp3736 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3737 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
*(&local0) = $tmp3736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
// line 1644
org$pandalanguage$pandac$ASTNode* $tmp3738 = *(&local0);
panda$core$Bit $tmp3739 = panda$core$Bit$init$builtin_bit($tmp3738 == NULL);
bool $tmp3740 = $tmp3739.value;
if ($tmp3740) goto block1; else goto block2;
block1:;
// line 1645
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3741 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3741));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1647
org$pandalanguage$pandac$parser$Token $tmp3742 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3743 = $tmp3742.kind;
panda$core$Int64 $tmp3744 = $tmp3743.$rawValue;
panda$core$Int64 $tmp3745 = (panda$core$Int64) {74};
panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3745);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3748 = (panda$core$Int64) {75};
panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3748);
bool $tmp3750 = $tmp3749.value;
if ($tmp3750) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3751 = (panda$core$Int64) {76};
panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3751);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3754 = (panda$core$Int64) {77};
panda$core$Bit $tmp3755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3754);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3757 = (panda$core$Int64) {78};
panda$core$Bit $tmp3758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3757);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3760 = (panda$core$Int64) {79};
panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3760);
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3763 = (panda$core$Int64) {80};
panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3763);
bool $tmp3765 = $tmp3764.value;
if ($tmp3765) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3766 = (panda$core$Int64) {81};
panda$core$Bit $tmp3767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3766);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3769 = (panda$core$Int64) {82};
panda$core$Bit $tmp3770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3769);
bool $tmp3771 = $tmp3770.value;
if ($tmp3771) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3772 = (panda$core$Int64) {83};
panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3772);
bool $tmp3774 = $tmp3773.value;
if ($tmp3774) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3775 = (panda$core$Int64) {84};
panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3775);
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3778 = (panda$core$Int64) {85};
panda$core$Bit $tmp3779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3778);
bool $tmp3780 = $tmp3779.value;
if ($tmp3780) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3781 = (panda$core$Int64) {86};
panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3781);
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3784 = (panda$core$Int64) {87};
panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3784);
bool $tmp3786 = $tmp3785.value;
if ($tmp3786) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3787 = (panda$core$Int64) {88};
panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3787);
bool $tmp3789 = $tmp3788.value;
if ($tmp3789) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3790 = (panda$core$Int64) {89};
panda$core$Bit $tmp3791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3790);
bool $tmp3792 = $tmp3791.value;
if ($tmp3792) goto block4; else goto block20;
block4:;
// line 1653
org$pandalanguage$pandac$parser$Token $tmp3793 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3793;
// line 1654
org$pandalanguage$pandac$ASTNode* $tmp3794 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3795 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3795));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3794));
*(&local2) = $tmp3794;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3794));
// line 1655
org$pandalanguage$pandac$ASTNode* $tmp3796 = *(&local2);
panda$core$Bit $tmp3797 = panda$core$Bit$init$builtin_bit($tmp3796 == NULL);
bool $tmp3798 = $tmp3797.value;
if ($tmp3798) goto block21; else goto block22;
block21:;
// line 1656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3799 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3799));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3800 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3800));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1658
org$pandalanguage$pandac$ASTNode* $tmp3801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3802 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3803 = *(&local0);
$fn3805 $tmp3804 = ($fn3805) $tmp3803->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3806 = $tmp3804($tmp3803);
org$pandalanguage$pandac$ASTNode* $tmp3807 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3808 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3809 = $tmp3808.kind;
org$pandalanguage$pandac$ASTNode* $tmp3810 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3801, $tmp3802, $tmp3806, $tmp3807, $tmp3809, $tmp3810);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3801));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3801));
org$pandalanguage$pandac$ASTNode* $tmp3811 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3811));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3812 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3812));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3801;
block20:;
panda$core$Int64 $tmp3813 = (panda$core$Int64) {59};
panda$core$Bit $tmp3814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, $tmp3813);
bool $tmp3815 = $tmp3814.value;
if ($tmp3815) goto block23; else goto block24;
block23:;
// line 1660
org$pandalanguage$pandac$parser$Token $tmp3816 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3816, &$s3817);
// line 1661
org$pandalanguage$pandac$parser$Token $tmp3818 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3818;
// line 1662
org$pandalanguage$pandac$ASTNode* $tmp3819 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3820 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3820));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3819));
*(&local4) = $tmp3819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3819));
// line 1663
org$pandalanguage$pandac$ASTNode* $tmp3821 = *(&local4);
panda$core$Bit $tmp3822 = panda$core$Bit$init$builtin_bit($tmp3821 == NULL);
bool $tmp3823 = $tmp3822.value;
if ($tmp3823) goto block25; else goto block26;
block25:;
// line 1664
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3824 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3825 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3825));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1666
org$pandalanguage$pandac$ASTNode* $tmp3826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3827 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3828 = *(&local0);
$fn3830 $tmp3829 = ($fn3830) $tmp3828->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3831 = $tmp3829($tmp3828);
org$pandalanguage$pandac$ASTNode* $tmp3832 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3833 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3834 = $tmp3833.kind;
org$pandalanguage$pandac$ASTNode* $tmp3835 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3826, $tmp3827, $tmp3831, $tmp3832, $tmp3834, $tmp3835);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
org$pandalanguage$pandac$ASTNode* $tmp3836 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3826;
block24:;
// line 1668
org$pandalanguage$pandac$ASTNode* $tmp3838 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
org$pandalanguage$pandac$ASTNode* $tmp3839 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3839));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3838;
block3:;
panda$core$Bit $tmp3840 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3842 = (panda$core$Int64) {1642};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3843, $tmp3842, &$s3844);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1676
org$pandalanguage$pandac$ASTNode* $tmp3845 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3846 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
*(&local0) = $tmp3845;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
// line 1677
org$pandalanguage$pandac$ASTNode* $tmp3847 = *(&local0);
panda$core$Bit $tmp3848 = panda$core$Bit$init$builtin_bit($tmp3847 == NULL);
bool $tmp3849 = $tmp3848.value;
if ($tmp3849) goto block1; else goto block2;
block1:;
// line 1678
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3850 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3850));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1680
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1681
panda$core$Int64 $tmp3851 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3852 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3851);
org$pandalanguage$pandac$parser$Token$nullable $tmp3853 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3852);
panda$core$Bit $tmp3854 = panda$core$Bit$init$builtin_bit($tmp3853.nonnull);
bool $tmp3855 = $tmp3854.value;
if ($tmp3855) goto block3; else goto block5;
block3:;
// line 1682
org$pandalanguage$pandac$ASTNode* $tmp3856 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3857 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
*(&local1) = $tmp3856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
// line 1683
org$pandalanguage$pandac$ASTNode* $tmp3858 = *(&local1);
panda$core$Bit $tmp3859 = panda$core$Bit$init$builtin_bit($tmp3858 == NULL);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block6; else goto block7;
block6:;
// line 1684
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3861 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1687
org$pandalanguage$pandac$parser$Token $tmp3863 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3864 = $tmp3863.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3865;
$tmp3865 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3865->value = $tmp3864;
panda$core$Int64 $tmp3866 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3867 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3866);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3868;
$tmp3868 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3868->value = $tmp3867;
ITable* $tmp3869 = ((panda$core$Equatable*) $tmp3865)->$class->itable;
while ($tmp3869->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3869 = $tmp3869->next;
}
$fn3871 $tmp3870 = $tmp3869->methods[0];
panda$core$Bit $tmp3872 = $tmp3870(((panda$core$Equatable*) $tmp3865), ((panda$core$Equatable*) $tmp3868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3865)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3868)));
bool $tmp3873 = $tmp3872.value;
if ($tmp3873) goto block8; else goto block10;
block8:;
// line 1688
org$pandalanguage$pandac$parser$Token $tmp3874 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3874, &$s3875);
// line 1689
org$pandalanguage$pandac$ASTNode* $tmp3876 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3877 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3877));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3876));
*(&local1) = $tmp3876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3876));
// line 1690
org$pandalanguage$pandac$ASTNode* $tmp3878 = *(&local1);
panda$core$Bit $tmp3879 = panda$core$Bit$init$builtin_bit($tmp3878 == NULL);
bool $tmp3880 = $tmp3879.value;
if ($tmp3880) goto block11; else goto block12;
block11:;
// line 1691
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3881 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3882 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1695
org$pandalanguage$pandac$ASTNode* $tmp3883 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1697
org$pandalanguage$pandac$ASTNode* $tmp3884 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3885 = (panda$core$Int64) {13};
org$pandalanguage$pandac$ASTNode* $tmp3886 = *(&local0);
$fn3888 $tmp3887 = ($fn3888) $tmp3886->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3889 = $tmp3887($tmp3886);
org$pandalanguage$pandac$ASTNode* $tmp3890 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3891 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3884, $tmp3885, $tmp3889, $tmp3890, $tmp3891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3884));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3884));
org$pandalanguage$pandac$ASTNode* $tmp3892 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3892));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3884;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1704
org$pandalanguage$pandac$parser$Token $tmp3894 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3894;
// line 1705
// line 1706
org$pandalanguage$pandac$parser$Token $tmp3895 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3896 = $tmp3895.kind;
panda$core$Int64 $tmp3897 = $tmp3896.$rawValue;
panda$core$Int64 $tmp3898 = (panda$core$Int64) {24};
panda$core$Bit $tmp3899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3897, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block2; else goto block3;
block2:;
// line 1708
panda$core$Int64 $tmp3901 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3902 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3901);
*(&local1) = $tmp3902;
goto block1;
block3:;
panda$core$Int64 $tmp3903 = (panda$core$Int64) {25};
panda$core$Bit $tmp3904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3897, $tmp3903);
bool $tmp3905 = $tmp3904.value;
if ($tmp3905) goto block4; else goto block5;
block4:;
// line 1710
panda$core$Int64 $tmp3906 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3907 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3906);
*(&local1) = $tmp3907;
goto block1;
block5:;
panda$core$Int64 $tmp3908 = (panda$core$Int64) {26};
panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3897, $tmp3908);
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block6; else goto block7;
block6:;
// line 1712
panda$core$Int64 $tmp3911 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3912 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3911);
*(&local1) = $tmp3912;
goto block1;
block7:;
panda$core$Int64 $tmp3913 = (panda$core$Int64) {27};
panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3897, $tmp3913);
bool $tmp3915 = $tmp3914.value;
if ($tmp3915) goto block8; else goto block9;
block8:;
// line 1714
panda$core$Int64 $tmp3916 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3917 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3916);
*(&local1) = $tmp3917;
goto block1;
block9:;
// line 1716
org$pandalanguage$pandac$parser$Token $tmp3918 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3918, &$s3919);
goto block1;
block1:;
// line 1718
panda$collections$Array* $tmp3920 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3920);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3921 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3921));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3920));
*(&local2) = $tmp3920;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3920));
// line 1719
org$pandalanguage$pandac$ASTNode* $tmp3922 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3923));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
*(&local3) = $tmp3922;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
// line 1720
org$pandalanguage$pandac$ASTNode* $tmp3924 = *(&local3);
panda$core$Bit $tmp3925 = panda$core$Bit$init$builtin_bit($tmp3924 == NULL);
bool $tmp3926 = $tmp3925.value;
if ($tmp3926) goto block10; else goto block11;
block10:;
// line 1721
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3927 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3927));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3928 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3928));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1723
panda$collections$Array* $tmp3929 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3930 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3929, ((panda$core$Object*) $tmp3930));
// line 1724
goto block12;
block12:;
panda$core$Int64 $tmp3931 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3932 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3931);
org$pandalanguage$pandac$parser$Token$nullable $tmp3933 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3932);
panda$core$Bit $tmp3934 = panda$core$Bit$init$builtin_bit($tmp3933.nonnull);
bool $tmp3935 = $tmp3934.value;
if ($tmp3935) goto block13; else goto block14;
block13:;
// line 1725
org$pandalanguage$pandac$ASTNode* $tmp3936 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3937 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3937));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3936));
*(&local4) = $tmp3936;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3936));
// line 1726
org$pandalanguage$pandac$ASTNode* $tmp3938 = *(&local4);
panda$core$Bit $tmp3939 = panda$core$Bit$init$builtin_bit($tmp3938 == NULL);
bool $tmp3940 = $tmp3939.value;
if ($tmp3940) goto block15; else goto block16;
block15:;
// line 1727
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3941 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3941));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3942 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3942));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3943 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1729
panda$collections$Array* $tmp3944 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3945 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3944, ((panda$core$Object*) $tmp3945));
org$pandalanguage$pandac$ASTNode* $tmp3946 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3946));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 1731
org$pandalanguage$pandac$ASTNode* $tmp3947 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3948 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token $tmp3949 = *(&local0);
org$pandalanguage$pandac$Position $tmp3950 = $tmp3949.position;
org$pandalanguage$pandac$Variable$Kind $tmp3951 = *(&local1);
panda$collections$Array* $tmp3952 = *(&local2);
panda$collections$ImmutableArray* $tmp3953 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3952);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3947, $tmp3948, $tmp3950, $tmp3951, $tmp3953);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3953));
org$pandalanguage$pandac$ASTNode* $tmp3954 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3954));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3955 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3955));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp3947;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1738
panda$core$Int64 $tmp3956 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp3957 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3956);
org$pandalanguage$pandac$parser$Token$nullable $tmp3958 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3957, &$s3959);
*(&local0) = $tmp3958;
// line 1739
org$pandalanguage$pandac$parser$Token$nullable $tmp3960 = *(&local0);
panda$core$Bit $tmp3961 = panda$core$Bit$init$builtin_bit(!$tmp3960.nonnull);
bool $tmp3962 = $tmp3961.value;
if ($tmp3962) goto block1; else goto block2;
block1:;
// line 1740
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1742
panda$core$Int64 $tmp3963 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp3964 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3963);
org$pandalanguage$pandac$parser$Token$nullable $tmp3965 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3964, &$s3966);
panda$core$Bit $tmp3967 = panda$core$Bit$init$builtin_bit(!$tmp3965.nonnull);
bool $tmp3968 = $tmp3967.value;
if ($tmp3968) goto block3; else goto block4;
block3:;
// line 1743
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1745
panda$collections$Stack** $tmp3969 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3970 = *$tmp3969;
panda$core$Bit $tmp3971 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp3972;
$tmp3972 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp3972->value = $tmp3971;
panda$collections$Stack$push$panda$collections$Stack$T($tmp3970, ((panda$core$Object*) $tmp3972));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
// line 1746
org$pandalanguage$pandac$ASTNode* $tmp3973 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3974 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3975 = *(&local0);
org$pandalanguage$pandac$Position $tmp3976 = ((org$pandalanguage$pandac$parser$Token) $tmp3975.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3977 = *(&local0);
panda$core$String* $tmp3978 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3977.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3973, $tmp3974, $tmp3976, $tmp3978);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3979 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3979));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
*(&local1) = $tmp3973;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3978));
// line 1747
panda$collections$Array* $tmp3980 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3980);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3981 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
*(&local2) = $tmp3980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
// line 1748
panda$core$Int64 $tmp3982 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3983 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3982);
org$pandalanguage$pandac$parser$Token$nullable $tmp3984 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3983);
panda$core$Bit $tmp3985 = panda$core$Bit$init$builtin_bit(!$tmp3984.nonnull);
bool $tmp3986 = $tmp3985.value;
if ($tmp3986) goto block5; else goto block6;
block5:;
// line 1749
org$pandalanguage$pandac$ASTNode* $tmp3987 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3988 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3988));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3987));
*(&local3) = $tmp3987;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3987));
// line 1750
org$pandalanguage$pandac$ASTNode* $tmp3989 = *(&local3);
panda$core$Bit $tmp3990 = panda$core$Bit$init$builtin_bit($tmp3989 == NULL);
bool $tmp3991 = $tmp3990.value;
if ($tmp3991) goto block7; else goto block8;
block7:;
// line 1751
panda$collections$Stack** $tmp3992 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3993 = *$tmp3992;
panda$core$Object* $tmp3994 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3993);
panda$core$Panda$unref$panda$core$Object$Q($tmp3994);
// line 1752
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3995 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3995));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3996 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3996));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3997 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1754
panda$collections$Array* $tmp3998 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3999 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3998, ((panda$core$Object*) $tmp3999));
// line 1755
goto block9;
block9:;
panda$core$Int64 $tmp4000 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4001 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4000);
org$pandalanguage$pandac$parser$Token$nullable $tmp4002 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4001);
panda$core$Bit $tmp4003 = panda$core$Bit$init$builtin_bit($tmp4002.nonnull);
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block10; else goto block11;
block10:;
// line 1756
org$pandalanguage$pandac$ASTNode* $tmp4005 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4006 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4006));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4005));
*(&local3) = $tmp4005;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4005));
// line 1757
org$pandalanguage$pandac$ASTNode* $tmp4007 = *(&local3);
panda$core$Bit $tmp4008 = panda$core$Bit$init$builtin_bit($tmp4007 == NULL);
bool $tmp4009 = $tmp4008.value;
if ($tmp4009) goto block12; else goto block13;
block12:;
// line 1758
panda$collections$Stack** $tmp4010 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4011 = *$tmp4010;
panda$core$Object* $tmp4012 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4011);
panda$core$Panda$unref$panda$core$Object$Q($tmp4012);
// line 1759
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4013 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4013));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4014 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4014));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4015 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1761
panda$collections$Array* $tmp4016 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4017 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4016, ((panda$core$Object*) $tmp4017));
goto block9;
block11:;
// line 1763
panda$core$Int64 $tmp4018 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4019 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4018);
org$pandalanguage$pandac$parser$Token$nullable $tmp4020 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4019, &$s4021);
panda$core$Bit $tmp4022 = panda$core$Bit$init$builtin_bit(!$tmp4020.nonnull);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block14; else goto block15;
block14:;
// line 1764
panda$collections$Stack** $tmp4024 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4025 = *$tmp4024;
panda$core$Object* $tmp4026 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4025);
panda$core$Panda$unref$panda$core$Object$Q($tmp4026);
// line 1765
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4027 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4028 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4028));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4029 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4029));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp4030 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4030));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1768
panda$collections$Stack** $tmp4031 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4032 = *$tmp4031;
panda$core$Object* $tmp4033 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4032);
panda$core$Panda$unref$panda$core$Object$Q($tmp4033);
// line 1769
org$pandalanguage$pandac$ASTNode* $tmp4034 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4035 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4036 = *(&local0);
org$pandalanguage$pandac$Position $tmp4037 = ((org$pandalanguage$pandac$parser$Token) $tmp4036.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4038 = *(&local1);
panda$collections$Array* $tmp4039 = *(&local2);
panda$collections$ImmutableArray* $tmp4040 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4039);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4034, $tmp4035, $tmp4037, $tmp4038, $tmp4040);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4040));
panda$collections$Array* $tmp4041 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4042 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4034;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1776
panda$core$Int64 $tmp4043 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp4044 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4043);
org$pandalanguage$pandac$parser$Token$nullable $tmp4045 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4044, &$s4046);
*(&local0) = $tmp4045;
// line 1777
org$pandalanguage$pandac$parser$Token$nullable $tmp4047 = *(&local0);
panda$core$Bit $tmp4048 = panda$core$Bit$init$builtin_bit(!$tmp4047.nonnull);
bool $tmp4049 = $tmp4048.value;
if ($tmp4049) goto block1; else goto block2;
block1:;
// line 1778
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1780
panda$core$Int64 $tmp4050 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4051 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4050);
org$pandalanguage$pandac$parser$Token$nullable $tmp4052 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4051);
*(&local1) = $tmp4052;
// line 1781
org$pandalanguage$pandac$parser$Token$nullable $tmp4053 = *(&local1);
panda$core$Bit $tmp4054 = panda$core$Bit$init$builtin_bit($tmp4053.nonnull);
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block3; else goto block4;
block3:;
// line 1782
org$pandalanguage$pandac$ASTNode* $tmp4056 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4057 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp4058 = *(&local0);
org$pandalanguage$pandac$Position $tmp4059 = ((org$pandalanguage$pandac$parser$Token) $tmp4058.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4060 = *(&local1);
panda$core$String* $tmp4061 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4060.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4056, $tmp4057, $tmp4059, $tmp4061);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4061));
return $tmp4056;
block4:;
// line 1784
org$pandalanguage$pandac$ASTNode* $tmp4062 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4063 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp4064 = *(&local0);
org$pandalanguage$pandac$Position $tmp4065 = ((org$pandalanguage$pandac$parser$Token) $tmp4064.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4062, $tmp4063, $tmp4065, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
return $tmp4062;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1791
panda$core$Int64 $tmp4066 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp4067 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4066);
org$pandalanguage$pandac$parser$Token$nullable $tmp4068 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4067, &$s4069);
*(&local0) = $tmp4068;
// line 1792
org$pandalanguage$pandac$parser$Token$nullable $tmp4070 = *(&local0);
panda$core$Bit $tmp4071 = panda$core$Bit$init$builtin_bit(!$tmp4070.nonnull);
bool $tmp4072 = $tmp4071.value;
if ($tmp4072) goto block1; else goto block2;
block1:;
// line 1793
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1795
panda$core$Int64 $tmp4073 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4074 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4073);
org$pandalanguage$pandac$parser$Token$nullable $tmp4075 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4074);
*(&local1) = $tmp4075;
// line 1796
org$pandalanguage$pandac$parser$Token$nullable $tmp4076 = *(&local1);
panda$core$Bit $tmp4077 = panda$core$Bit$init$builtin_bit($tmp4076.nonnull);
bool $tmp4078 = $tmp4077.value;
if ($tmp4078) goto block3; else goto block4;
block3:;
// line 1797
org$pandalanguage$pandac$ASTNode* $tmp4079 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4080 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp4081 = *(&local0);
org$pandalanguage$pandac$Position $tmp4082 = ((org$pandalanguage$pandac$parser$Token) $tmp4081.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4083 = *(&local1);
panda$core$String* $tmp4084 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4083.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4079, $tmp4080, $tmp4082, $tmp4084);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4084));
return $tmp4079;
block4:;
// line 1799
org$pandalanguage$pandac$ASTNode* $tmp4085 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4086 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp4087 = *(&local0);
org$pandalanguage$pandac$Position $tmp4088 = ((org$pandalanguage$pandac$parser$Token) $tmp4087.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4085, $tmp4086, $tmp4088, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4085));
return $tmp4085;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1806
panda$core$Int64 $tmp4089 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp4090 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4089);
org$pandalanguage$pandac$parser$Token$nullable $tmp4091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4090, &$s4092);
*(&local0) = $tmp4091;
// line 1807
org$pandalanguage$pandac$parser$Token$nullable $tmp4093 = *(&local0);
panda$core$Bit $tmp4094 = panda$core$Bit$init$builtin_bit(!$tmp4093.nonnull);
bool $tmp4095 = $tmp4094.value;
if ($tmp4095) goto block1; else goto block2;
block1:;
// line 1808
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1810
org$pandalanguage$pandac$parser$Token $tmp4096 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4097 = $tmp4096.kind;
panda$core$Int64 $tmp4098 = $tmp4097.$rawValue;
panda$core$Int64 $tmp4099 = (panda$core$Int64) {101};
panda$core$Bit $tmp4100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4098, $tmp4099);
bool $tmp4101 = $tmp4100.value;
if ($tmp4101) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4102 = (panda$core$Int64) {40};
panda$core$Bit $tmp4103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4098, $tmp4102);
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4105 = (panda$core$Int64) {41};
panda$core$Bit $tmp4106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4098, $tmp4105);
bool $tmp4107 = $tmp4106.value;
if ($tmp4107) goto block4; else goto block7;
block4:;
// line 1812
org$pandalanguage$pandac$ASTNode* $tmp4108 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4109 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4110 = *(&local0);
org$pandalanguage$pandac$Position $tmp4111 = ((org$pandalanguage$pandac$parser$Token) $tmp4110.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4108, $tmp4109, $tmp4111, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
return $tmp4108;
block7:;
// line 1814
panda$collections$Array* $tmp4112 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4112);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4113 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4112));
*(&local1) = $tmp4112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4112));
// line 1815
org$pandalanguage$pandac$ASTNode* $tmp4114 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4115 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
*(&local2) = $tmp4114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
// line 1816
org$pandalanguage$pandac$ASTNode* $tmp4116 = *(&local2);
panda$core$Bit $tmp4117 = panda$core$Bit$init$builtin_bit($tmp4116 == NULL);
bool $tmp4118 = $tmp4117.value;
if ($tmp4118) goto block8; else goto block9;
block8:;
// line 1817
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4119 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4119));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4120 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4120));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1819
panda$collections$Array* $tmp4121 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4122 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4121, ((panda$core$Object*) $tmp4122));
// line 1820
org$pandalanguage$pandac$ASTNode* $tmp4123 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4124 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4125 = *(&local0);
org$pandalanguage$pandac$Position $tmp4126 = ((org$pandalanguage$pandac$parser$Token) $tmp4125.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4127 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4123, $tmp4124, $tmp4126, $tmp4127);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
org$pandalanguage$pandac$ASTNode* $tmp4128 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4128));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4129 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4129));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4123;
block3:;
panda$core$Bit $tmp4130 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4131 = $tmp4130.value;
if ($tmp4131) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4132 = (panda$core$Int64) {1805};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4133, $tmp4132, &$s4134);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1828
org$pandalanguage$pandac$parser$Token $tmp4135 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4136 = $tmp4135.kind;
panda$core$Int64 $tmp4137 = $tmp4136.$rawValue;
panda$core$Int64 $tmp4138 = (panda$core$Int64) {29};
panda$core$Bit $tmp4139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4137, $tmp4138);
bool $tmp4140 = $tmp4139.value;
if ($tmp4140) goto block2; else goto block3;
block2:;
// line 1829
org$pandalanguage$pandac$ASTNode* $tmp4141 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4141));
return $tmp4141;
block3:;
panda$core$Int64 $tmp4142 = (panda$core$Int64) {30};
panda$core$Bit $tmp4143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4137, $tmp4142);
bool $tmp4144 = $tmp4143.value;
if ($tmp4144) goto block4; else goto block5;
block4:;
// line 1830
org$pandalanguage$pandac$ASTNode* $tmp4145 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
return $tmp4145;
block5:;
panda$core$Int64 $tmp4146 = (panda$core$Int64) {28};
panda$core$Bit $tmp4147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4137, $tmp4146);
bool $tmp4148 = $tmp4147.value;
if ($tmp4148) goto block6; else goto block7;
block6:;
// line 1831
org$pandalanguage$pandac$ASTNode* $tmp4149 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
return $tmp4149;
block7:;
// line 1832
panda$core$Bit $tmp4150 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4151 = $tmp4150.value;
if ($tmp4151) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4152 = (panda$core$Int64) {1832};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4153, $tmp4152);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4154 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4155 = $tmp4154.value;
if ($tmp4155) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4156 = (panda$core$Int64) {1827};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4157, $tmp4156, &$s4158);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1840
org$pandalanguage$pandac$parser$Token $tmp4159 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4160 = $tmp4159.kind;
panda$core$Int64 $tmp4161 = $tmp4160.$rawValue;
panda$core$Int64 $tmp4162 = (panda$core$Int64) {31};
panda$core$Bit $tmp4163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4161, $tmp4162);
bool $tmp4164 = $tmp4163.value;
if ($tmp4164) goto block2; else goto block3;
block2:;
// line 1841
org$pandalanguage$pandac$ASTNode* $tmp4165 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4165));
return $tmp4165;
block3:;
panda$core$Int64 $tmp4166 = (panda$core$Int64) {33};
panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4161, $tmp4166);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block4; else goto block5;
block4:;
// line 1842
org$pandalanguage$pandac$ASTNode* $tmp4169 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
return $tmp4169;
block5:;
panda$core$Int64 $tmp4170 = (panda$core$Int64) {36};
panda$core$Bit $tmp4171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4161, $tmp4170);
bool $tmp4172 = $tmp4171.value;
if ($tmp4172) goto block6; else goto block7;
block6:;
// line 1843
org$pandalanguage$pandac$ASTNode* $tmp4173 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
return $tmp4173;
block7:;
panda$core$Int64 $tmp4174 = (panda$core$Int64) {32};
panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4161, $tmp4174);
bool $tmp4176 = $tmp4175.value;
if ($tmp4176) goto block8; else goto block9;
block8:;
// line 1844
org$pandalanguage$pandac$ASTNode* $tmp4177 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
return $tmp4177;
block9:;
// line 1847
panda$core$Int64 $tmp4178 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4179 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4178);
org$pandalanguage$pandac$parser$Token$nullable $tmp4180 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4179, &$s4181);
// line 1848
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4182 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4183 = $tmp4182.value;
if ($tmp4183) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4184 = (panda$core$Int64) {1839};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4185, $tmp4184, &$s4186);
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
// line 1856
// line 1857
panda$core$Int64 $tmp4187 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4188 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4187);
org$pandalanguage$pandac$parser$Token$nullable $tmp4189 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4188);
*(&local1) = $tmp4189;
// line 1858
org$pandalanguage$pandac$parser$Token$nullable $tmp4190 = *(&local1);
panda$core$Bit $tmp4191 = panda$core$Bit$init$builtin_bit(!$tmp4190.nonnull);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block1; else goto block3;
block1:;
// line 1859
panda$core$Int64 $tmp4193 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4194 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4193);
org$pandalanguage$pandac$parser$Token$nullable $tmp4195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4194, &$s4196);
*(&local1) = $tmp4195;
// line 1860
org$pandalanguage$pandac$parser$Token$nullable $tmp4197 = *(&local1);
panda$core$Bit $tmp4198 = panda$core$Bit$init$builtin_bit(!$tmp4197.nonnull);
bool $tmp4199 = $tmp4198.value;
if ($tmp4199) goto block4; else goto block5;
block4:;
// line 1861
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 1863
panda$core$Int64 $tmp4200 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4201 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4200);
*(&local0) = $tmp4201;
goto block2;
block3:;
// line 1
// line 1866
panda$core$Int64 $tmp4202 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4203 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4202);
*(&local0) = $tmp4203;
goto block2;
block2:;
// line 1868
panda$core$Int64 $tmp4204 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4205 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4204);
org$pandalanguage$pandac$parser$Token$nullable $tmp4206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4205, &$s4207);
*(&local2) = $tmp4206;
// line 1869
org$pandalanguage$pandac$parser$Token$nullable $tmp4208 = *(&local2);
panda$core$Bit $tmp4209 = panda$core$Bit$init$builtin_bit(!$tmp4208.nonnull);
bool $tmp4210 = $tmp4209.value;
if ($tmp4210) goto block6; else goto block7;
block6:;
// line 1870
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1872
panda$collections$ImmutableArray* $tmp4211 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4212 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
*(&local3) = $tmp4211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
// line 1873
panda$collections$ImmutableArray* $tmp4213 = *(&local3);
panda$core$Bit $tmp4214 = panda$core$Bit$init$builtin_bit($tmp4213 == NULL);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block8; else goto block9;
block8:;
// line 1874
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4216 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4216));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1876
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1877
org$pandalanguage$pandac$parser$Token $tmp4217 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4218 = $tmp4217.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4219;
$tmp4219 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4219->value = $tmp4218;
panda$core$Int64 $tmp4220 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4221 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4220);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4222;
$tmp4222 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4222->value = $tmp4221;
ITable* $tmp4223 = ((panda$core$Equatable*) $tmp4219)->$class->itable;
while ($tmp4223->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4223 = $tmp4223->next;
}
$fn4225 $tmp4224 = $tmp4223->methods[0];
panda$core$Bit $tmp4226 = $tmp4224(((panda$core$Equatable*) $tmp4219), ((panda$core$Equatable*) $tmp4222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4219)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4222)));
bool $tmp4227 = $tmp4226.value;
if ($tmp4227) goto block10; else goto block12;
block10:;
// line 1878
org$pandalanguage$pandac$ASTNode* $tmp4228 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4229 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4228));
*(&local4) = $tmp4228;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4228));
// line 1879
org$pandalanguage$pandac$ASTNode* $tmp4230 = *(&local4);
panda$core$Bit $tmp4231 = panda$core$Bit$init$builtin_bit($tmp4230 == NULL);
bool $tmp4232 = $tmp4231.value;
if ($tmp4232) goto block13; else goto block14;
block13:;
// line 1880
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4233 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4233));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4234 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1884
org$pandalanguage$pandac$ASTNode* $tmp4235 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4235));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 1886
panda$collections$ImmutableArray* $tmp4236 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4237 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4237));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
*(&local5) = $tmp4236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
// line 1887
panda$collections$ImmutableArray* $tmp4238 = *(&local5);
panda$core$Bit $tmp4239 = panda$core$Bit$init$builtin_bit($tmp4238 == NULL);
bool $tmp4240 = $tmp4239.value;
if ($tmp4240) goto block15; else goto block16;
block15:;
// line 1888
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4241 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4241));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4242 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4242));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4243 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4243));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1890
org$pandalanguage$pandac$ASTNode* $tmp4244 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4245 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4246 = *(&local1);
org$pandalanguage$pandac$Position $tmp4247 = ((org$pandalanguage$pandac$parser$Token) $tmp4246.value).position;
panda$collections$ImmutableArray* $tmp4248 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4248);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4249 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4250 = *(&local2);
panda$core$String* $tmp4251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4250.value));
panda$collections$ImmutableArray* $tmp4252 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4253 = *(&local4);
panda$collections$ImmutableArray* $tmp4254 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4244, $tmp4245, $tmp4247, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4248, $tmp4249, $tmp4251, ((panda$collections$ImmutableArray*) NULL), $tmp4252, $tmp4253, $tmp4254);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4244));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4244));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4248));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4251));
panda$collections$ImmutableArray* $tmp4255 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4255));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4256 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4256));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4257 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4257));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4244;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1899
org$pandalanguage$pandac$parser$Token $tmp4258 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4259 = $tmp4258.kind;
panda$core$Int64 $tmp4260 = $tmp4259.$rawValue;
panda$core$Int64 $tmp4261 = (panda$core$Int64) {37};
panda$core$Bit $tmp4262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4261);
bool $tmp4263 = $tmp4262.value;
if ($tmp4263) goto block2; else goto block3;
block2:;
// line 1900
org$pandalanguage$pandac$ASTNode* $tmp4264 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
return $tmp4264;
block3:;
panda$core$Int64 $tmp4265 = (panda$core$Int64) {33};
panda$core$Bit $tmp4266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4265);
bool $tmp4267 = $tmp4266.value;
if ($tmp4267) goto block4; else goto block5;
block4:;
// line 1901
org$pandalanguage$pandac$ASTNode* $tmp4268 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4268));
return $tmp4268;
block5:;
panda$core$Int64 $tmp4269 = (panda$core$Int64) {32};
panda$core$Bit $tmp4270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4269);
bool $tmp4271 = $tmp4270.value;
if ($tmp4271) goto block6; else goto block7;
block6:;
// line 1902
org$pandalanguage$pandac$ASTNode* $tmp4272 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
return $tmp4272;
block7:;
panda$core$Int64 $tmp4273 = (panda$core$Int64) {31};
panda$core$Bit $tmp4274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4273);
bool $tmp4275 = $tmp4274.value;
if ($tmp4275) goto block8; else goto block9;
block8:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4276 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4276));
return $tmp4276;
block9:;
panda$core$Int64 $tmp4277 = (panda$core$Int64) {36};
panda$core$Bit $tmp4278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4277);
bool $tmp4279 = $tmp4278.value;
if ($tmp4279) goto block10; else goto block11;
block10:;
// line 1904
org$pandalanguage$pandac$ASTNode* $tmp4280 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4280));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4280));
return $tmp4280;
block11:;
panda$core$Int64 $tmp4281 = (panda$core$Int64) {45};
panda$core$Bit $tmp4282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4281);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block12; else goto block13;
block12:;
// line 1905
org$pandalanguage$pandac$ASTNode* $tmp4284 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4284));
return $tmp4284;
block13:;
panda$core$Int64 $tmp4285 = (panda$core$Int64) {39};
panda$core$Bit $tmp4286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4285);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block14; else goto block15;
block14:;
// line 1906
org$pandalanguage$pandac$ASTNode* $tmp4288 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4288));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4288));
return $tmp4288;
block15:;
panda$core$Int64 $tmp4289 = (panda$core$Int64) {100};
panda$core$Bit $tmp4290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4289);
bool $tmp4291 = $tmp4290.value;
if ($tmp4291) goto block16; else goto block17;
block16:;
// line 1907
org$pandalanguage$pandac$ASTNode* $tmp4292 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4292));
return $tmp4292;
block17:;
panda$core$Int64 $tmp4293 = (panda$core$Int64) {49};
panda$core$Bit $tmp4294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4293);
bool $tmp4295 = $tmp4294.value;
if ($tmp4295) goto block18; else goto block19;
block18:;
// line 1909
org$pandalanguage$pandac$parser$Token $tmp4296 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4296;
// line 1910
panda$core$Int64 $tmp4297 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4298 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4297);
org$pandalanguage$pandac$parser$Token$nullable $tmp4299 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4298);
*(&local1) = $tmp4299;
// line 1911
org$pandalanguage$pandac$parser$Token$nullable $tmp4300 = *(&local1);
panda$core$Bit $tmp4301 = panda$core$Bit$init$builtin_bit($tmp4300.nonnull);
bool $tmp4302 = $tmp4301.value;
if ($tmp4302) goto block20; else goto block21;
block20:;
// line 1912
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4303 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4304 = *$tmp4303;
panda$core$Bit $tmp4305 = panda$core$Bit$init$builtin_bit($tmp4304 != NULL);
bool $tmp4306 = $tmp4305.value;
if ($tmp4306) goto block22; else goto block23;
block22:;
// line 1913
org$pandalanguage$pandac$parser$Token$nullable $tmp4307 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4307.value));
// line 1914
org$pandalanguage$pandac$parser$Token $tmp4308 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4308);
// line 1915
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4309 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4310 = *$tmp4309;
panda$core$Int64 $tmp4311 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4312 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4311);
$fn4314 $tmp4313 = ($fn4314) $tmp4310->$class->vtable[3];
$tmp4313($tmp4310, $tmp4312);
// line 1916
org$pandalanguage$pandac$parser$Token $tmp4315 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1917
org$pandalanguage$pandac$parser$Token $tmp4316 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1918
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4317 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4318 = *$tmp4317;
panda$core$Int64 $tmp4319 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4320 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4319);
$fn4322 $tmp4321 = ($fn4322) $tmp4318->$class->vtable[4];
$tmp4321($tmp4318, $tmp4320);
goto block23;
block23:;
// line 1920
org$pandalanguage$pandac$parser$Token $tmp4323 = *(&local0);
panda$core$String* $tmp4324 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4323);
org$pandalanguage$pandac$ASTNode* $tmp4325 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4324);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
return $tmp4325;
block21:;
// line 1922
org$pandalanguage$pandac$parser$Token $tmp4326 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4326);
// line 1923
org$pandalanguage$pandac$ASTNode* $tmp4327 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4327));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4327));
return $tmp4327;
block19:;
panda$core$Int64 $tmp4328 = (panda$core$Int64) {47};
panda$core$Bit $tmp4329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4328);
bool $tmp4330 = $tmp4329.value;
if ($tmp4330) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4331 = (panda$core$Int64) {48};
panda$core$Bit $tmp4332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4331);
bool $tmp4333 = $tmp4332.value;
if ($tmp4333) goto block24; else goto block26;
block24:;
// line 1925
org$pandalanguage$pandac$ASTNode* $tmp4334 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4334));
return $tmp4334;
block26:;
panda$core$Int64 $tmp4335 = (panda$core$Int64) {24};
panda$core$Bit $tmp4336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4335);
bool $tmp4337 = $tmp4336.value;
if ($tmp4337) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4338 = (panda$core$Int64) {25};
panda$core$Bit $tmp4339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4338);
bool $tmp4340 = $tmp4339.value;
if ($tmp4340) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4341 = (panda$core$Int64) {26};
panda$core$Bit $tmp4342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4341);
bool $tmp4343 = $tmp4342.value;
if ($tmp4343) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4344 = (panda$core$Int64) {27};
panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4344);
bool $tmp4346 = $tmp4345.value;
if ($tmp4346) goto block27; else goto block31;
block27:;
// line 1927
org$pandalanguage$pandac$ASTNode* $tmp4347 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4347));
return $tmp4347;
block31:;
panda$core$Int64 $tmp4348 = (panda$core$Int64) {23};
panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4348);
bool $tmp4350 = $tmp4349.value;
if ($tmp4350) goto block32; else goto block33;
block32:;
// line 1929
org$pandalanguage$pandac$ASTNode* $tmp4351 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4351));
return $tmp4351;
block33:;
panda$core$Int64 $tmp4352 = (panda$core$Int64) {22};
panda$core$Bit $tmp4353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4352);
bool $tmp4354 = $tmp4353.value;
if ($tmp4354) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4355 = (panda$core$Int64) {21};
panda$core$Bit $tmp4356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4260, $tmp4355);
bool $tmp4357 = $tmp4356.value;
if ($tmp4357) goto block34; else goto block36;
block34:;
// line 1931
org$pandalanguage$pandac$ASTNode* $tmp4358 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
return $tmp4358;
block36:;
// line 1934
panda$core$Int64 $tmp4359 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4360 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4359);
org$pandalanguage$pandac$parser$Token$nullable $tmp4361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4360, &$s4362);
// line 1935
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4363 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4364 = $tmp4363.value;
if ($tmp4364) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4365 = (panda$core$Int64) {1898};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4366, $tmp4365, &$s4367);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 1943
panda$core$Int64 $tmp4368 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4369 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4368);
org$pandalanguage$pandac$parser$Token$nullable $tmp4370 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4369, &$s4371);
*(&local0) = $tmp4370;
// line 1944
org$pandalanguage$pandac$parser$Token$nullable $tmp4372 = *(&local0);
panda$core$Bit $tmp4373 = panda$core$Bit$init$builtin_bit(!$tmp4372.nonnull);
bool $tmp4374 = $tmp4373.value;
if ($tmp4374) goto block1; else goto block2;
block1:;
// line 1945
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1947
panda$core$Int64 $tmp4375 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4376 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4375);
org$pandalanguage$pandac$parser$Token$nullable $tmp4377 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4376, &$s4378);
*(&local1) = $tmp4377;
// line 1948
org$pandalanguage$pandac$parser$Token$nullable $tmp4379 = *(&local1);
panda$core$Bit $tmp4380 = panda$core$Bit$init$builtin_bit(!$tmp4379.nonnull);
bool $tmp4381 = $tmp4380.value;
if ($tmp4381) goto block3; else goto block4;
block3:;
// line 1949
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1951
panda$core$MutableString* $tmp4382 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4383 = *(&local1);
panda$core$String* $tmp4384 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4383.value));
panda$core$MutableString$init$panda$core$String($tmp4382, $tmp4384);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4385 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4385));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4382));
*(&local2) = $tmp4382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4382));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
// line 1952
goto block5;
block5:;
// line 1953
panda$core$Int64 $tmp4386 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4387 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4386);
org$pandalanguage$pandac$parser$Token$nullable $tmp4388 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4387);
*(&local1) = $tmp4388;
// line 1954
org$pandalanguage$pandac$parser$Token$nullable $tmp4389 = *(&local1);
panda$core$Bit $tmp4390 = panda$core$Bit$init$builtin_bit(!$tmp4389.nonnull);
bool $tmp4391 = $tmp4390.value;
if ($tmp4391) goto block7; else goto block8;
block7:;
// line 1955
goto block6;
block8:;
// line 1957
panda$core$MutableString* $tmp4392 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4392, &$s4393);
// line 1958
panda$core$Int64 $tmp4394 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4395 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4394);
org$pandalanguage$pandac$parser$Token$nullable $tmp4396 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4395, &$s4397);
*(&local1) = $tmp4396;
// line 1959
org$pandalanguage$pandac$parser$Token$nullable $tmp4398 = *(&local1);
panda$core$Bit $tmp4399 = panda$core$Bit$init$builtin_bit(!$tmp4398.nonnull);
bool $tmp4400 = $tmp4399.value;
if ($tmp4400) goto block9; else goto block10;
block9:;
// line 1960
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4401 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4401));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1962
panda$core$MutableString* $tmp4402 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4403 = *(&local1);
panda$core$String* $tmp4404 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4403.value));
panda$core$MutableString$append$panda$core$String($tmp4402, $tmp4404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4404));
goto block5;
block6:;
// line 1964
org$pandalanguage$pandac$ASTNode* $tmp4405 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4406 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$nullable $tmp4407 = *(&local0);
org$pandalanguage$pandac$Position $tmp4408 = ((org$pandalanguage$pandac$parser$Token) $tmp4407.value).position;
panda$core$MutableString* $tmp4409 = *(&local2);
panda$core$String* $tmp4410 = panda$core$MutableString$finish$R$panda$core$String($tmp4409);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4405, $tmp4406, $tmp4408, $tmp4410);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4405));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4405));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4410));
panda$core$MutableString* $tmp4411 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4405;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 1971
panda$core$Int64 $tmp4412 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4413 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4412);
org$pandalanguage$pandac$parser$Token$nullable $tmp4414 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4413, &$s4415);
*(&local0) = $tmp4414;
// line 1972
org$pandalanguage$pandac$parser$Token$nullable $tmp4416 = *(&local0);
panda$core$Bit $tmp4417 = panda$core$Bit$init$builtin_bit(!$tmp4416.nonnull);
bool $tmp4418 = $tmp4417.value;
if ($tmp4418) goto block1; else goto block2;
block1:;
// line 1973
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1975
panda$core$Int64 $tmp4419 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4420 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4419);
org$pandalanguage$pandac$parser$Token$nullable $tmp4421 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4420, &$s4422);
*(&local1) = $tmp4421;
// line 1976
org$pandalanguage$pandac$parser$Token$nullable $tmp4423 = *(&local1);
panda$core$Bit $tmp4424 = panda$core$Bit$init$builtin_bit(!$tmp4423.nonnull);
bool $tmp4425 = $tmp4424.value;
if ($tmp4425) goto block3; else goto block4;
block3:;
// line 1977
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1979
panda$core$MutableString* $tmp4426 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4427 = *(&local1);
panda$core$String* $tmp4428 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4427.value));
panda$core$MutableString$init$panda$core$String($tmp4426, $tmp4428);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4429 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4429));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4426));
*(&local2) = $tmp4426;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4428));
// line 1980
goto block5;
block5:;
// line 1981
panda$core$Int64 $tmp4430 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4431 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4430);
org$pandalanguage$pandac$parser$Token$nullable $tmp4432 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4431);
*(&local1) = $tmp4432;
// line 1982
org$pandalanguage$pandac$parser$Token$nullable $tmp4433 = *(&local1);
panda$core$Bit $tmp4434 = panda$core$Bit$init$builtin_bit(!$tmp4433.nonnull);
bool $tmp4435 = $tmp4434.value;
if ($tmp4435) goto block7; else goto block8;
block7:;
// line 1983
goto block6;
block8:;
// line 1985
panda$core$MutableString* $tmp4436 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4436, &$s4437);
// line 1986
panda$core$Int64 $tmp4438 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4439 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4438);
org$pandalanguage$pandac$parser$Token$nullable $tmp4440 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4439, &$s4441);
*(&local1) = $tmp4440;
// line 1987
org$pandalanguage$pandac$parser$Token$nullable $tmp4442 = *(&local1);
panda$core$Bit $tmp4443 = panda$core$Bit$init$builtin_bit(!$tmp4442.nonnull);
bool $tmp4444 = $tmp4443.value;
if ($tmp4444) goto block9; else goto block10;
block9:;
// line 1988
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4445 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4445));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1990
panda$core$MutableString* $tmp4446 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4447 = *(&local1);
panda$core$String* $tmp4448 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4447.value));
panda$core$MutableString$append$panda$core$String($tmp4446, $tmp4448);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
goto block5;
block6:;
// line 1992
org$pandalanguage$pandac$ASTNode* $tmp4449 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4450 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4451 = *(&local0);
org$pandalanguage$pandac$Position $tmp4452 = ((org$pandalanguage$pandac$parser$Token) $tmp4451.value).position;
panda$core$MutableString* $tmp4453 = *(&local2);
panda$core$String* $tmp4454 = panda$core$MutableString$finish$R$panda$core$String($tmp4453);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4449, $tmp4450, $tmp4452, $tmp4454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4454));
panda$core$MutableString* $tmp4455 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4455));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4449;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1999
panda$core$Int64 $tmp4456 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4457 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4456);
org$pandalanguage$pandac$parser$Token$nullable $tmp4458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4457, &$s4459);
*(&local0) = $tmp4458;
// line 2000
org$pandalanguage$pandac$parser$Token$nullable $tmp4460 = *(&local0);
panda$core$Bit $tmp4461 = panda$core$Bit$init$builtin_bit(!$tmp4460.nonnull);
bool $tmp4462 = $tmp4461.value;
if ($tmp4462) goto block1; else goto block2;
block1:;
// line 2001
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2003
panda$core$Int64 $tmp4463 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4464 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4463);
org$pandalanguage$pandac$parser$Token$nullable $tmp4465 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4464, &$s4466);
*(&local1) = $tmp4465;
// line 2004
org$pandalanguage$pandac$parser$Token$nullable $tmp4467 = *(&local1);
panda$core$Bit $tmp4468 = panda$core$Bit$init$builtin_bit(!$tmp4467.nonnull);
bool $tmp4469 = $tmp4468.value;
if ($tmp4469) goto block3; else goto block4;
block3:;
// line 2005
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2007
panda$collections$Array* $tmp4470 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4470);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
*(&local2) = $tmp4470;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
// line 2008
panda$core$Int64 $tmp4472 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4473 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4472);
org$pandalanguage$pandac$parser$Token$nullable $tmp4474 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4473);
panda$core$Bit $tmp4475 = panda$core$Bit$init$builtin_bit($tmp4474.nonnull);
bool $tmp4476 = $tmp4475.value;
if ($tmp4476) goto block5; else goto block7;
block5:;
// line 2009
org$pandalanguage$pandac$ASTNode* $tmp4477 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4478 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4478));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4477));
*(&local3) = $tmp4477;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4477));
// line 2010
org$pandalanguage$pandac$ASTNode* $tmp4479 = *(&local3);
panda$core$Bit $tmp4480 = panda$core$Bit$init$builtin_bit($tmp4479 == NULL);
bool $tmp4481 = $tmp4480.value;
if ($tmp4481) goto block8; else goto block9;
block8:;
// line 2011
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4482 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4482));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4483 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4483));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2013
panda$collections$Array* $tmp4484 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4485 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4486 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4487 = *(&local1);
org$pandalanguage$pandac$Position $tmp4488 = ((org$pandalanguage$pandac$parser$Token) $tmp4487.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4489 = *(&local1);
panda$core$String* $tmp4490 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4489.value));
org$pandalanguage$pandac$ASTNode* $tmp4491 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4485, $tmp4486, $tmp4488, $tmp4490, $tmp4491);
panda$collections$Array$add$panda$collections$Array$T($tmp4484, ((panda$core$Object*) $tmp4485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4490));
org$pandalanguage$pandac$ASTNode* $tmp4492 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4492));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2016
panda$collections$Array* $tmp4493 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4494 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4495 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4496 = *(&local1);
org$pandalanguage$pandac$Position $tmp4497 = ((org$pandalanguage$pandac$parser$Token) $tmp4496.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4498 = *(&local1);
panda$core$String* $tmp4499 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4498.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4494, $tmp4495, $tmp4497, $tmp4499);
panda$collections$Array$add$panda$collections$Array$T($tmp4493, ((panda$core$Object*) $tmp4494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4499));
goto block6;
block6:;
// line 2018
goto block10;
block10:;
panda$core$Int64 $tmp4500 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4501 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4500);
org$pandalanguage$pandac$parser$Token$nullable $tmp4502 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4501);
panda$core$Bit $tmp4503 = panda$core$Bit$init$builtin_bit($tmp4502.nonnull);
bool $tmp4504 = $tmp4503.value;
if ($tmp4504) goto block11; else goto block12;
block11:;
// line 2019
panda$core$Int64 $tmp4505 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4506 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4505);
org$pandalanguage$pandac$parser$Token$nullable $tmp4507 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4506, &$s4508);
*(&local1) = $tmp4507;
// line 2020
org$pandalanguage$pandac$parser$Token$nullable $tmp4509 = *(&local1);
panda$core$Bit $tmp4510 = panda$core$Bit$init$builtin_bit(!$tmp4509.nonnull);
bool $tmp4511 = $tmp4510.value;
if ($tmp4511) goto block13; else goto block14;
block13:;
// line 2021
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4512));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block14:;
// line 2023
panda$core$Int64 $tmp4513 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4514 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4513);
org$pandalanguage$pandac$parser$Token$nullable $tmp4515 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4514);
panda$core$Bit $tmp4516 = panda$core$Bit$init$builtin_bit($tmp4515.nonnull);
bool $tmp4517 = $tmp4516.value;
if ($tmp4517) goto block15; else goto block17;
block15:;
// line 2024
org$pandalanguage$pandac$ASTNode* $tmp4518 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4519 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4519));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
*(&local4) = $tmp4518;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
// line 2025
org$pandalanguage$pandac$ASTNode* $tmp4520 = *(&local4);
panda$core$Bit $tmp4521 = panda$core$Bit$init$builtin_bit($tmp4520 == NULL);
bool $tmp4522 = $tmp4521.value;
if ($tmp4522) goto block18; else goto block19;
block18:;
// line 2026
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4523 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4523));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4524 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4524));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block19:;
// line 2028
panda$collections$Array* $tmp4525 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4526 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4527 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4528 = *(&local1);
org$pandalanguage$pandac$Position $tmp4529 = ((org$pandalanguage$pandac$parser$Token) $tmp4528.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4530 = *(&local1);
panda$core$String* $tmp4531 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4530.value));
org$pandalanguage$pandac$ASTNode* $tmp4532 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4526, $tmp4527, $tmp4529, $tmp4531, $tmp4532);
panda$collections$Array$add$panda$collections$Array$T($tmp4525, ((panda$core$Object*) $tmp4526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
org$pandalanguage$pandac$ASTNode* $tmp4533 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4533));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2031
panda$collections$Array* $tmp4534 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4535 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4536 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4537 = *(&local1);
org$pandalanguage$pandac$Position $tmp4538 = ((org$pandalanguage$pandac$parser$Token) $tmp4537.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4539 = *(&local1);
panda$core$String* $tmp4540 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4539.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4535, $tmp4536, $tmp4538, $tmp4540);
panda$collections$Array$add$panda$collections$Array$T($tmp4534, ((panda$core$Object*) $tmp4535));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4540));
goto block16;
block16:;
goto block10;
block12:;
// line 2034
panda$core$Int64 $tmp4541 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4542 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4541);
org$pandalanguage$pandac$parser$Token$nullable $tmp4543 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4542, &$s4544);
panda$core$Bit $tmp4545 = panda$core$Bit$init$builtin_bit(!$tmp4543.nonnull);
bool $tmp4546 = $tmp4545.value;
if ($tmp4546) goto block20; else goto block21;
block20:;
// line 2035
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4547));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block21:;
// line 2037
panda$collections$Array* $tmp4548 = *(&local2);
panda$collections$ImmutableArray* $tmp4549 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4548);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
panda$collections$Array* $tmp4550 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4549;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2044
panda$core$Int64 $tmp4551 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4552 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4551);
org$pandalanguage$pandac$parser$Token$nullable $tmp4553 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4552, &$s4554);
*(&local0) = $tmp4553;
// line 2045
org$pandalanguage$pandac$parser$Token$nullable $tmp4555 = *(&local0);
panda$core$Bit $tmp4556 = panda$core$Bit$init$builtin_bit(!$tmp4555.nonnull);
bool $tmp4557 = $tmp4556.value;
if ($tmp4557) goto block1; else goto block2;
block1:;
// line 2046
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2048
panda$collections$Array* $tmp4558 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4558);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4559 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4558));
*(&local1) = $tmp4558;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4558));
// line 2049
org$pandalanguage$pandac$ASTNode* $tmp4560 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4561 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4561));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
*(&local2) = $tmp4560;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
// line 2050
org$pandalanguage$pandac$ASTNode* $tmp4562 = *(&local2);
panda$core$Bit $tmp4563 = panda$core$Bit$init$builtin_bit($tmp4562 == NULL);
bool $tmp4564 = $tmp4563.value;
if ($tmp4564) goto block3; else goto block4;
block3:;
// line 2051
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4565 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4565));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4566 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4566));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2053
panda$collections$Array* $tmp4567 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4568 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4567, ((panda$core$Object*) $tmp4568));
// line 2054
goto block5;
block5:;
panda$core$Int64 $tmp4569 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4570 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4569);
org$pandalanguage$pandac$parser$Token$nullable $tmp4571 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4570);
panda$core$Bit $tmp4572 = panda$core$Bit$init$builtin_bit($tmp4571.nonnull);
bool $tmp4573 = $tmp4572.value;
if ($tmp4573) goto block6; else goto block7;
block6:;
// line 2055
org$pandalanguage$pandac$ASTNode* $tmp4574 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4575 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4575));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4574));
*(&local2) = $tmp4574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4574));
// line 2056
org$pandalanguage$pandac$ASTNode* $tmp4576 = *(&local2);
panda$core$Bit $tmp4577 = panda$core$Bit$init$builtin_bit($tmp4576 == NULL);
bool $tmp4578 = $tmp4577.value;
if ($tmp4578) goto block8; else goto block9;
block8:;
// line 2057
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4579 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4580 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4580));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2059
panda$collections$Array* $tmp4581 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4582 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4581, ((panda$core$Object*) $tmp4582));
goto block5;
block7:;
// line 2061
panda$collections$Array* $tmp4583 = *(&local1);
panda$collections$ImmutableArray* $tmp4584 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4583);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
org$pandalanguage$pandac$ASTNode* $tmp4585 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4585));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4586 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4586));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4584;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2068
panda$core$Int64 $tmp4587 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4588 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4587);
org$pandalanguage$pandac$parser$Token$nullable $tmp4589 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4588, &$s4590);
*(&local0) = $tmp4589;
// line 2069
*(&local1) = ((panda$core$String*) NULL);
// line 2070
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4591 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4591));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2071
panda$core$Int64 $tmp4592 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4593 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4592);
org$pandalanguage$pandac$parser$Token$nullable $tmp4594 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4593);
*(&local3) = $tmp4594;
// line 2072
org$pandalanguage$pandac$parser$Token$nullable $tmp4595 = *(&local3);
panda$core$Bit $tmp4596 = panda$core$Bit$init$builtin_bit($tmp4595.nonnull);
bool $tmp4597 = $tmp4596.value;
if ($tmp4597) goto block1; else goto block2;
block1:;
// line 2073
org$pandalanguage$pandac$ASTNode* $tmp4598 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4599 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4599));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4598));
*(&local2) = $tmp4598;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4598));
// line 2074
org$pandalanguage$pandac$ASTNode* $tmp4600 = *(&local2);
panda$core$Bit $tmp4601 = panda$core$Bit$init$builtin_bit($tmp4600 == NULL);
bool $tmp4602 = $tmp4601.value;
if ($tmp4602) goto block3; else goto block4;
block3:;
// line 2075
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4603 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4603));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4604 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4604));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2077
panda$core$Int64 $tmp4605 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4606 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4605);
org$pandalanguage$pandac$parser$Token$nullable $tmp4607 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4606, &$s4608);
*(&local4) = $tmp4607;
// line 2078
org$pandalanguage$pandac$parser$Token$nullable $tmp4609 = *(&local4);
panda$core$Bit $tmp4610 = panda$core$Bit$init$builtin_bit(!$tmp4609.nonnull);
bool $tmp4611 = $tmp4610.value;
if ($tmp4611) goto block5; else goto block6;
block5:;
// line 2079
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4612 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4613 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4613));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2081
panda$core$String** $tmp4614 = &param0->source;
panda$core$String* $tmp4615 = *$tmp4614;
panda$core$String** $tmp4616 = &param0->source;
panda$core$String* $tmp4617 = *$tmp4616;
org$pandalanguage$pandac$parser$Token$nullable $tmp4618 = *(&local3);
panda$core$String$Index $tmp4619 = ((org$pandalanguage$pandac$parser$Token) $tmp4618.value).start;
panda$core$String$Index $tmp4620 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4617, $tmp4619);
org$pandalanguage$pandac$parser$Token$nullable $tmp4621 = *(&local4);
panda$core$String$Index $tmp4622 = ((org$pandalanguage$pandac$parser$Token) $tmp4621.value).start;
panda$core$Bit $tmp4623 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4624 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4620, $tmp4622, $tmp4623);
panda$core$String* $tmp4625 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4615, $tmp4624);
panda$core$String* $tmp4626 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
*(&local1) = $tmp4625;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
goto block2;
block2:;
// line 2083
org$pandalanguage$pandac$ASTNode* $tmp4627 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4628 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4629 = *(&local0);
org$pandalanguage$pandac$Position $tmp4630 = ((org$pandalanguage$pandac$parser$Token) $tmp4629.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4631 = *(&local0);
panda$core$String* $tmp4632 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4631.value));
panda$core$String* $tmp4633 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4634 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4627, $tmp4628, $tmp4630, $tmp4632, $tmp4633, $tmp4634);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4632));
org$pandalanguage$pandac$ASTNode* $tmp4635 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4636 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4627;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2090
panda$collections$Array* $tmp4637 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4637);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4638 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
*(&local0) = $tmp4637;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
// line 2091
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4639 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4640 = $tmp4639.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4641;
$tmp4641 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4641->value = $tmp4640;
panda$core$Int64 $tmp4642 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4643 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4642);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4644;
$tmp4644 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4644->value = $tmp4643;
ITable* $tmp4645 = ((panda$core$Equatable*) $tmp4641)->$class->itable;
while ($tmp4645->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4645 = $tmp4645->next;
}
$fn4647 $tmp4646 = $tmp4645->methods[0];
panda$core$Bit $tmp4648 = $tmp4646(((panda$core$Equatable*) $tmp4641), ((panda$core$Equatable*) $tmp4644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4641)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4644)));
bool $tmp4649 = $tmp4648.value;
if ($tmp4649) goto block2; else goto block3;
block2:;
// line 2092
org$pandalanguage$pandac$ASTNode* $tmp4650 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4651 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4651));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4650));
*(&local1) = $tmp4650;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4650));
// line 2093
org$pandalanguage$pandac$ASTNode* $tmp4652 = *(&local1);
panda$core$Bit $tmp4653 = panda$core$Bit$init$builtin_bit($tmp4652 == NULL);
bool $tmp4654 = $tmp4653.value;
if ($tmp4654) goto block4; else goto block5;
block4:;
// line 2094
org$pandalanguage$pandac$ASTNode* $tmp4655 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4655));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
// line 2096
panda$collections$Array* $tmp4656 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4657 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4656, ((panda$core$Object*) $tmp4657));
org$pandalanguage$pandac$ASTNode* $tmp4658 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4658));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 2098
panda$collections$Array* $tmp4659 = *(&local0);
panda$collections$ImmutableArray* $tmp4660 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4659);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
panda$collections$Array* $tmp4661 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp4660;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2102
panda$core$Int64 $tmp4662 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4663 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4662);
org$pandalanguage$pandac$parser$Token$nullable $tmp4664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4663, &$s4665);
*(&local0) = $tmp4664;
// line 2103
org$pandalanguage$pandac$parser$Token$nullable $tmp4666 = *(&local0);
panda$core$Bit $tmp4667 = panda$core$Bit$init$builtin_bit(!$tmp4666.nonnull);
bool $tmp4668 = $tmp4667.value;
if ($tmp4668) goto block1; else goto block2;
block1:;
// line 2104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2106
panda$core$MutableString* $tmp4669 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4669);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4670 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4669));
*(&local1) = $tmp4669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4669));
// line 2107
goto block3;
block3:;
// line 2108
org$pandalanguage$pandac$parser$Token $tmp4671 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4671;
// line 2109
org$pandalanguage$pandac$parser$Token $tmp4672 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4673 = $tmp4672.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4674;
$tmp4674 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4674->value = $tmp4673;
panda$core$Int64 $tmp4675 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4676 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4675);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4677;
$tmp4677 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4677->value = $tmp4676;
ITable* $tmp4678 = ((panda$core$Equatable*) $tmp4674)->$class->itable;
while ($tmp4678->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4678 = $tmp4678->next;
}
$fn4680 $tmp4679 = $tmp4678->methods[0];
panda$core$Bit $tmp4681 = $tmp4679(((panda$core$Equatable*) $tmp4674), ((panda$core$Equatable*) $tmp4677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4674)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4677)));
bool $tmp4682 = $tmp4681.value;
if ($tmp4682) goto block5; else goto block6;
block5:;
// line 2110
goto block4;
block6:;
// line 2112
org$pandalanguage$pandac$parser$Token $tmp4683 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4684 = $tmp4683.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4685;
$tmp4685 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4685->value = $tmp4684;
panda$core$Int64 $tmp4686 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4687 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4686);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4688;
$tmp4688 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4688->value = $tmp4687;
ITable* $tmp4689 = ((panda$core$Equatable*) $tmp4685)->$class->itable;
while ($tmp4689->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4689 = $tmp4689->next;
}
$fn4691 $tmp4690 = $tmp4689->methods[0];
panda$core$Bit $tmp4692 = $tmp4690(((panda$core$Equatable*) $tmp4685), ((panda$core$Equatable*) $tmp4688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4685)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4688)));
bool $tmp4693 = $tmp4692.value;
if ($tmp4693) goto block7; else goto block8;
block7:;
// line 2113
org$pandalanguage$pandac$parser$Token$nullable $tmp4694 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4694.value), &$s4695);
// line 2114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4696 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4696));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2116
panda$core$MutableString* $tmp4697 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4698 = *(&local2);
panda$core$String* $tmp4699 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4698);
panda$core$MutableString$append$panda$core$String($tmp4697, $tmp4699);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4699));
goto block3;
block4:;
// line 2118
org$pandalanguage$pandac$ASTNode* $tmp4700 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4701 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4702 = *(&local0);
org$pandalanguage$pandac$Position $tmp4703 = ((org$pandalanguage$pandac$parser$Token) $tmp4702.value).position;
panda$core$MutableString* $tmp4704 = *(&local1);
panda$core$String* $tmp4705 = panda$core$MutableString$finish$R$panda$core$String($tmp4704);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4700, $tmp4701, $tmp4703, $tmp4705);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4705));
panda$core$MutableString* $tmp4706 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4706));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp4700;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2125
panda$core$Int64 $tmp4707 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4708 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4707);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4708);
// line 2126
panda$core$Int64 $tmp4709 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4710 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4709);
org$pandalanguage$pandac$parser$Token$nullable $tmp4711 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4710, &$s4712);
*(&local0) = $tmp4711;
// line 2127
panda$core$Int64 $tmp4713 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4714 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4713);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4714);
// line 2128
org$pandalanguage$pandac$parser$Token$nullable $tmp4715 = *(&local0);
panda$core$Bit $tmp4716 = panda$core$Bit$init$builtin_bit(!$tmp4715.nonnull);
bool $tmp4717 = $tmp4716.value;
if ($tmp4717) goto block1; else goto block2;
block1:;
// line 2129
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2131
org$pandalanguage$pandac$ASTNode* $tmp4718 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4719 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4719));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4718));
*(&local1) = $tmp4718;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4718));
// line 2132
org$pandalanguage$pandac$ASTNode* $tmp4720 = *(&local1);
panda$core$Bit $tmp4721 = panda$core$Bit$init$builtin_bit($tmp4720 == NULL);
bool $tmp4722 = $tmp4721.value;
if ($tmp4722) goto block3; else goto block4;
block3:;
// line 2133
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4723 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2135
org$pandalanguage$pandac$ASTNode* $tmp4724 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4725 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp4726 = *(&local0);
org$pandalanguage$pandac$Position $tmp4727 = ((org$pandalanguage$pandac$parser$Token) $tmp4726.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4728 = *(&local0);
panda$core$String* $tmp4729 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4728.value));
org$pandalanguage$pandac$ASTNode* $tmp4730 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4724, $tmp4725, $tmp4727, $tmp4729, $tmp4730);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
org$pandalanguage$pandac$ASTNode* $tmp4731 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4724;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2142
panda$core$Int64 $tmp4732 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4733 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4732);
org$pandalanguage$pandac$parser$Token$nullable $tmp4734 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4733, &$s4735);
*(&local0) = $tmp4734;
// line 2143
org$pandalanguage$pandac$parser$Token$nullable $tmp4736 = *(&local0);
panda$core$Bit $tmp4737 = panda$core$Bit$init$builtin_bit(!$tmp4736.nonnull);
bool $tmp4738 = $tmp4737.value;
if ($tmp4738) goto block1; else goto block2;
block1:;
// line 2144
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2146
panda$collections$Array* $tmp4739 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4739);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4740 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4740));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4739));
*(&local1) = $tmp4739;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4739));
// line 2147
panda$core$Int64 $tmp4741 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4742 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4741);
org$pandalanguage$pandac$parser$Token$nullable $tmp4743 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4742);
panda$core$Bit $tmp4744 = panda$core$Bit$init$builtin_bit(!$tmp4743.nonnull);
bool $tmp4745 = $tmp4744.value;
if ($tmp4745) goto block3; else goto block4;
block3:;
// line 2148
org$pandalanguage$pandac$ASTNode* $tmp4746 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4747 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4747));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
*(&local2) = $tmp4746;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
// line 2149
org$pandalanguage$pandac$ASTNode* $tmp4748 = *(&local2);
panda$core$Bit $tmp4749 = panda$core$Bit$init$builtin_bit($tmp4748 == NULL);
bool $tmp4750 = $tmp4749.value;
if ($tmp4750) goto block5; else goto block6;
block5:;
// line 2150
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4751 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4752 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4752));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block6:;
// line 2152
panda$collections$Array* $tmp4753 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4754 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4753, ((panda$core$Object*) $tmp4754));
// line 2153
goto block7;
block7:;
panda$core$Int64 $tmp4755 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4756 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4755);
org$pandalanguage$pandac$parser$Token$nullable $tmp4757 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4756);
panda$core$Bit $tmp4758 = panda$core$Bit$init$builtin_bit($tmp4757.nonnull);
bool $tmp4759 = $tmp4758.value;
if ($tmp4759) goto block8; else goto block9;
block8:;
// line 2154
org$pandalanguage$pandac$ASTNode* $tmp4760 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4761 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
*(&local2) = $tmp4760;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
// line 2155
org$pandalanguage$pandac$ASTNode* $tmp4762 = *(&local2);
panda$core$Bit $tmp4763 = panda$core$Bit$init$builtin_bit($tmp4762 == NULL);
bool $tmp4764 = $tmp4763.value;
if ($tmp4764) goto block10; else goto block11;
block10:;
// line 2156
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4765 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4765));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4766 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4766));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block11:;
// line 2158
panda$collections$Array* $tmp4767 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4768 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4767, ((panda$core$Object*) $tmp4768));
goto block7;
block9:;
// line 2160
panda$core$Int64 $tmp4769 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4770 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4769);
org$pandalanguage$pandac$parser$Token$nullable $tmp4771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4770, &$s4772);
panda$core$Bit $tmp4773 = panda$core$Bit$init$builtin_bit(!$tmp4771.nonnull);
bool $tmp4774 = $tmp4773.value;
if ($tmp4774) goto block12; else goto block13;
block12:;
// line 2161
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4775 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4776 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4777 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4777));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 2164
panda$collections$Array* $tmp4778 = *(&local1);
panda$collections$ImmutableArray* $tmp4779 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4778);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
panda$collections$Array* $tmp4780 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4780));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4779;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
// line 2172
// line 2173
panda$core$Int64 $tmp4781 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4782 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4781);
org$pandalanguage$pandac$parser$Token$nullable $tmp4783 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4782);
*(&local1) = $tmp4783;
// line 2174
org$pandalanguage$pandac$parser$Token$nullable $tmp4784 = *(&local1);
panda$core$Bit $tmp4785 = panda$core$Bit$init$builtin_bit(!$tmp4784.nonnull);
bool $tmp4786 = $tmp4785.value;
if ($tmp4786) goto block1; else goto block3;
block1:;
// line 2175
panda$core$Int64 $tmp4787 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4788 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4787);
org$pandalanguage$pandac$parser$Token$nullable $tmp4789 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4788, &$s4790);
*(&local1) = $tmp4789;
// line 2176
org$pandalanguage$pandac$parser$Token$nullable $tmp4791 = *(&local1);
panda$core$Bit $tmp4792 = panda$core$Bit$init$builtin_bit(!$tmp4791.nonnull);
bool $tmp4793 = $tmp4792.value;
if ($tmp4793) goto block4; else goto block5;
block4:;
// line 2177
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2179
panda$core$Int64 $tmp4794 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4795 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4794);
*(&local0) = $tmp4795;
goto block2;
block3:;
// line 1
// line 2182
panda$core$Int64 $tmp4796 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4797 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4796);
*(&local0) = $tmp4797;
goto block2;
block2:;
// line 2184
panda$core$Int64 $tmp4798 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4799 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4798);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4799);
// line 2185
panda$core$String* $tmp4800 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4801 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4801));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
*(&local2) = $tmp4800;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
// line 2186
panda$core$Int64 $tmp4802 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4803 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4802);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4803);
// line 2187
panda$core$String* $tmp4804 = *(&local2);
panda$core$Bit $tmp4805 = panda$core$Bit$init$builtin_bit($tmp4804 == NULL);
bool $tmp4806 = $tmp4805.value;
if ($tmp4806) goto block6; else goto block7;
block6:;
// line 2188
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4807 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2190
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2191
org$pandalanguage$pandac$parser$Token $tmp4808 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4809 = $tmp4808.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4810;
$tmp4810 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4810->value = $tmp4809;
panda$core$Int64 $tmp4811 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4812 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4811);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4813;
$tmp4813 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4813->value = $tmp4812;
ITable* $tmp4814 = ((panda$core$Equatable*) $tmp4810)->$class->itable;
while ($tmp4814->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4814 = $tmp4814->next;
}
$fn4816 $tmp4815 = $tmp4814->methods[0];
panda$core$Bit $tmp4817 = $tmp4815(((panda$core$Equatable*) $tmp4810), ((panda$core$Equatable*) $tmp4813));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4810)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4813)));
bool $tmp4818 = $tmp4817.value;
if ($tmp4818) goto block8; else goto block10;
block8:;
// line 2192
panda$collections$ImmutableArray* $tmp4819 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4820 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4820));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
*(&local3) = $tmp4819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
goto block9;
block10:;
// line 1
// line 2195
panda$collections$ImmutableArray* $tmp4821 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block9:;
// line 2197
panda$collections$ImmutableArray* $tmp4822 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4823 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4822));
*(&local4) = $tmp4822;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4822));
// line 2198
panda$collections$ImmutableArray* $tmp4824 = *(&local4);
panda$core$Bit $tmp4825 = panda$core$Bit$init$builtin_bit($tmp4824 == NULL);
bool $tmp4826 = $tmp4825.value;
if ($tmp4826) goto block11; else goto block12;
block11:;
// line 2199
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4827 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4828 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4828));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4829 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4829));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2201
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2202
org$pandalanguage$pandac$parser$Token $tmp4830 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4831 = $tmp4830.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4832;
$tmp4832 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4832->value = $tmp4831;
panda$core$Int64 $tmp4833 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4834 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4833);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4835;
$tmp4835 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4835->value = $tmp4834;
ITable* $tmp4836 = ((panda$core$Equatable*) $tmp4832)->$class->itable;
while ($tmp4836->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4836 = $tmp4836->next;
}
$fn4838 $tmp4837 = $tmp4836->methods[0];
panda$core$Bit $tmp4839 = $tmp4837(((panda$core$Equatable*) $tmp4832), ((panda$core$Equatable*) $tmp4835));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4832)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4835)));
bool $tmp4840 = $tmp4839.value;
if ($tmp4840) goto block13; else goto block15;
block13:;
// line 2203
org$pandalanguage$pandac$ASTNode* $tmp4841 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4842 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4842));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
*(&local5) = $tmp4841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
// line 2204
org$pandalanguage$pandac$ASTNode* $tmp4843 = *(&local5);
panda$core$Bit $tmp4844 = panda$core$Bit$init$builtin_bit($tmp4843 == NULL);
bool $tmp4845 = $tmp4844.value;
if ($tmp4845) goto block16; else goto block17;
block16:;
// line 2205
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4846 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4847 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4848 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4848));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4849 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4849));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2209
org$pandalanguage$pandac$ASTNode* $tmp4850 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4850));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2211
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
// line 2212
org$pandalanguage$pandac$parser$Token $tmp4851 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4852 = $tmp4851.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4853;
$tmp4853 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4853->value = $tmp4852;
panda$core$Int64 $tmp4854 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4855 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4854);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4856;
$tmp4856 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4856->value = $tmp4855;
ITable* $tmp4857 = ((panda$core$Equatable*) $tmp4853)->$class->itable;
while ($tmp4857->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4857 = $tmp4857->next;
}
$fn4859 $tmp4858 = $tmp4857->methods[0];
panda$core$Bit $tmp4860 = $tmp4858(((panda$core$Equatable*) $tmp4853), ((panda$core$Equatable*) $tmp4856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4853)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4856)));
bool $tmp4861 = $tmp4860.value;
if ($tmp4861) goto block18; else goto block20;
block18:;
// line 2213
panda$collections$ImmutableArray* $tmp4862 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4863 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4863));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4862));
*(&local6) = $tmp4862;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4862));
// line 2214
panda$collections$ImmutableArray* $tmp4864 = *(&local6);
panda$core$Bit $tmp4865 = panda$core$Bit$init$builtin_bit($tmp4864 == NULL);
bool $tmp4866 = $tmp4865.value;
if ($tmp4866) goto block21; else goto block22;
block21:;
// line 2215
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4867 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4867));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4868 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4869 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4869));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4870 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4870));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4871 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2219
panda$collections$ImmutableArray* $tmp4872 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block19;
block19:;
// line 2221
org$pandalanguage$pandac$ASTNode* $tmp4873 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4874 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4875 = *(&local1);
org$pandalanguage$pandac$Position $tmp4876 = ((org$pandalanguage$pandac$parser$Token) $tmp4875.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4877 = *(&local0);
panda$core$String* $tmp4878 = *(&local2);
panda$collections$ImmutableArray* $tmp4879 = *(&local3);
panda$collections$ImmutableArray* $tmp4880 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4881 = *(&local5);
panda$collections$ImmutableArray* $tmp4882 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4873, $tmp4874, $tmp4876, param1, param2, $tmp4877, $tmp4878, $tmp4879, $tmp4880, $tmp4881, $tmp4882);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
panda$collections$ImmutableArray* $tmp4883 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4884 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4885 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4885));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4886 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4886));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4887 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4887));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return $tmp4873;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
// line 2229
// line 2230
panda$core$Int64 $tmp4888 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4889 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4888);
org$pandalanguage$pandac$parser$Token$nullable $tmp4890 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4889);
*(&local1) = $tmp4890;
// line 2231
org$pandalanguage$pandac$parser$Token$nullable $tmp4891 = *(&local1);
panda$core$Bit $tmp4892 = panda$core$Bit$init$builtin_bit(!$tmp4891.nonnull);
bool $tmp4893 = $tmp4892.value;
if ($tmp4893) goto block1; else goto block3;
block1:;
// line 2232
panda$core$Int64 $tmp4894 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4895 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4894);
org$pandalanguage$pandac$parser$Token$nullable $tmp4896 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4895, &$s4897);
*(&local1) = $tmp4896;
// line 2233
org$pandalanguage$pandac$parser$Token$nullable $tmp4898 = *(&local1);
panda$core$Bit $tmp4899 = panda$core$Bit$init$builtin_bit(!$tmp4898.nonnull);
bool $tmp4900 = $tmp4899.value;
if ($tmp4900) goto block4; else goto block5;
block4:;
// line 2234
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2236
panda$core$Int64 $tmp4901 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4902 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4901);
*(&local0) = $tmp4902;
goto block2;
block3:;
// line 1
// line 2239
panda$core$Int64 $tmp4903 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4904 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4903);
*(&local0) = $tmp4904;
goto block2;
block2:;
// line 2241
panda$collections$ImmutableArray* $tmp4905 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4906 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4906));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
*(&local2) = $tmp4905;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
// line 2242
panda$collections$ImmutableArray* $tmp4907 = *(&local2);
panda$core$Bit $tmp4908 = panda$core$Bit$init$builtin_bit($tmp4907 == NULL);
bool $tmp4909 = $tmp4908.value;
if ($tmp4909) goto block6; else goto block7;
block6:;
// line 2243
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4910 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4910));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2245
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2246
org$pandalanguage$pandac$parser$Token $tmp4911 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4912 = $tmp4911.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4913;
$tmp4913 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4913->value = $tmp4912;
panda$core$Int64 $tmp4914 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4915 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4914);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4916;
$tmp4916 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4916->value = $tmp4915;
ITable* $tmp4917 = ((panda$core$Equatable*) $tmp4913)->$class->itable;
while ($tmp4917->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4917 = $tmp4917->next;
}
$fn4919 $tmp4918 = $tmp4917->methods[0];
panda$core$Bit $tmp4920 = $tmp4918(((panda$core$Equatable*) $tmp4913), ((panda$core$Equatable*) $tmp4916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4913)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4916)));
bool $tmp4921 = $tmp4920.value;
if ($tmp4921) goto block8; else goto block10;
block8:;
// line 2247
org$pandalanguage$pandac$ASTNode* $tmp4922 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4922));
*(&local3) = $tmp4922;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4922));
// line 2248
org$pandalanguage$pandac$ASTNode* $tmp4924 = *(&local3);
panda$core$Bit $tmp4925 = panda$core$Bit$init$builtin_bit($tmp4924 == NULL);
bool $tmp4926 = $tmp4925.value;
if ($tmp4926) goto block11; else goto block12;
block11:;
// line 2249
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4927 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4927));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4928 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4928));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2253
org$pandalanguage$pandac$ASTNode* $tmp4929 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4929));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2255
panda$collections$ImmutableArray* $tmp4930 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4931 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4931));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4930));
*(&local4) = $tmp4930;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4930));
// line 2256
panda$collections$ImmutableArray* $tmp4932 = *(&local4);
panda$core$Bit $tmp4933 = panda$core$Bit$init$builtin_bit($tmp4932 == NULL);
bool $tmp4934 = $tmp4933.value;
if ($tmp4934) goto block13; else goto block14;
block13:;
// line 2257
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4935 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4936 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4936));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4937 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4937));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2259
org$pandalanguage$pandac$ASTNode* $tmp4938 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4939 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4940 = *(&local1);
org$pandalanguage$pandac$Position $tmp4941 = ((org$pandalanguage$pandac$parser$Token) $tmp4940.value).position;
panda$collections$ImmutableArray* $tmp4942 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4942);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4943 = *(&local0);
panda$collections$ImmutableArray* $tmp4944 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4945 = *(&local3);
panda$collections$ImmutableArray* $tmp4946 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4938, $tmp4939, $tmp4941, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4942, $tmp4943, &$s4947, ((panda$collections$ImmutableArray*) NULL), $tmp4944, $tmp4945, $tmp4946);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4942));
panda$collections$ImmutableArray* $tmp4948 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4948));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4949 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4949));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4938;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2267
panda$core$Int64 $tmp4951 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4952 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4951);
org$pandalanguage$pandac$parser$Token$nullable $tmp4953 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4952, &$s4954);
*(&local0) = $tmp4953;
// line 2268
org$pandalanguage$pandac$parser$Token$nullable $tmp4955 = *(&local0);
panda$core$Bit $tmp4956 = panda$core$Bit$init$builtin_bit(!$tmp4955.nonnull);
bool $tmp4957 = $tmp4956.value;
if ($tmp4957) goto block1; else goto block2;
block1:;
// line 2269
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2271
panda$collections$ImmutableArray* $tmp4958 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4959 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4959));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4958));
*(&local1) = $tmp4958;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4958));
// line 2272
panda$collections$ImmutableArray* $tmp4960 = *(&local1);
panda$core$Bit $tmp4961 = panda$core$Bit$init$builtin_bit($tmp4960 == NULL);
bool $tmp4962 = $tmp4961.value;
if ($tmp4962) goto block3; else goto block4;
block3:;
// line 2273
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4963 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4963));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2275
panda$collections$ImmutableArray* $tmp4964 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4965 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4965));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4964));
*(&local2) = $tmp4964;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4964));
// line 2276
panda$collections$ImmutableArray* $tmp4966 = *(&local2);
panda$core$Bit $tmp4967 = panda$core$Bit$init$builtin_bit($tmp4966 == NULL);
bool $tmp4968 = $tmp4967.value;
if ($tmp4968) goto block5; else goto block6;
block5:;
// line 2277
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4969 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4969));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4970 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4970));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2279
org$pandalanguage$pandac$ASTNode* $tmp4971 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4972 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4973 = *(&local0);
org$pandalanguage$pandac$Position $tmp4974 = ((org$pandalanguage$pandac$parser$Token) $tmp4973.value).position;
panda$core$Int64 $tmp4975 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4976 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4975);
panda$collections$ImmutableArray* $tmp4977 = *(&local1);
panda$collections$ImmutableArray* $tmp4978 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4971, $tmp4972, $tmp4974, param1, param2, $tmp4976, &$s4979, ((panda$collections$ImmutableArray*) NULL), $tmp4977, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4978);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4971));
panda$collections$ImmutableArray* $tmp4980 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4980));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4981 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4981));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4971;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2287
org$pandalanguage$pandac$ASTNode* $tmp4982 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4983 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4983));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4982));
*(&local0) = $tmp4982;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4982));
// line 2288
org$pandalanguage$pandac$ASTNode* $tmp4984 = *(&local0);
panda$core$Bit $tmp4985 = panda$core$Bit$init$builtin_bit($tmp4984 == NULL);
bool $tmp4986 = $tmp4985.value;
if ($tmp4986) goto block1; else goto block2;
block1:;
// line 2289
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4987 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2291
org$pandalanguage$pandac$ASTNode* $tmp4988 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4989 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp4990 = *(&local0);
$fn4992 $tmp4991 = ($fn4992) $tmp4990->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp4993 = $tmp4991($tmp4990);
org$pandalanguage$pandac$ASTNode* $tmp4994 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4988, $tmp4989, $tmp4993, param1, param2, $tmp4994);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
org$pandalanguage$pandac$ASTNode* $tmp4995 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4988;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2298
panda$core$Int64 $tmp4996 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4997 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4996);
org$pandalanguage$pandac$parser$Token$nullable $tmp4998 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4997, &$s4999);
*(&local0) = $tmp4998;
// line 2299
org$pandalanguage$pandac$parser$Token$nullable $tmp5000 = *(&local0);
panda$core$Bit $tmp5001 = panda$core$Bit$init$builtin_bit(!$tmp5000.nonnull);
bool $tmp5002 = $tmp5001.value;
if ($tmp5002) goto block1; else goto block2;
block1:;
// line 2300
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2302
panda$collections$Array* $tmp5003 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5003);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5004 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5004));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5003));
*(&local1) = $tmp5003;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5003));
// line 2303
panda$core$Int64 $tmp5005 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp5006 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5005);
org$pandalanguage$pandac$parser$Token$nullable $tmp5007 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5006);
panda$core$Bit $tmp5008 = panda$core$Bit$init$builtin_bit($tmp5007.nonnull);
bool $tmp5009 = $tmp5008.value;
if ($tmp5009) goto block3; else goto block4;
block3:;
// line 2304
org$pandalanguage$pandac$parser$Token $tmp5010 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5011 = $tmp5010.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5012;
$tmp5012 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5012->value = $tmp5011;
panda$core$Int64 $tmp5013 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5014 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5013);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5015;
$tmp5015 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5015->value = $tmp5014;
ITable* $tmp5016 = ((panda$core$Equatable*) $tmp5012)->$class->itable;
while ($tmp5016->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5016 = $tmp5016->next;
}
$fn5018 $tmp5017 = $tmp5016->methods[1];
panda$core$Bit $tmp5019 = $tmp5017(((panda$core$Equatable*) $tmp5012), ((panda$core$Equatable*) $tmp5015));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5012)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5015)));
bool $tmp5020 = $tmp5019.value;
if ($tmp5020) goto block5; else goto block6;
block5:;
// line 2305
org$pandalanguage$pandac$ASTNode* $tmp5021 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5022 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5022));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5021));
*(&local2) = $tmp5021;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5021));
// line 2306
org$pandalanguage$pandac$ASTNode* $tmp5023 = *(&local2);
panda$core$Bit $tmp5024 = panda$core$Bit$init$builtin_bit($tmp5023 == NULL);
bool $tmp5025 = $tmp5024.value;
if ($tmp5025) goto block7; else goto block8;
block7:;
// line 2307
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5026 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5027 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5027));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2309
panda$collections$Array* $tmp5028 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5029 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5028, ((panda$core$Object*) $tmp5029));
// line 2310
goto block9;
block9:;
panda$core$Int64 $tmp5030 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5031 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5030);
org$pandalanguage$pandac$parser$Token$nullable $tmp5032 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5031);
panda$core$Bit $tmp5033 = panda$core$Bit$init$builtin_bit($tmp5032.nonnull);
bool $tmp5034 = $tmp5033.value;
if ($tmp5034) goto block10; else goto block11;
block10:;
// line 2311
org$pandalanguage$pandac$ASTNode* $tmp5035 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5036 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5036));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5035));
*(&local2) = $tmp5035;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5035));
// line 2312
org$pandalanguage$pandac$ASTNode* $tmp5037 = *(&local2);
panda$core$Bit $tmp5038 = panda$core$Bit$init$builtin_bit($tmp5037 == NULL);
bool $tmp5039 = $tmp5038.value;
if ($tmp5039) goto block12; else goto block13;
block12:;
// line 2313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5040 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5040));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5041 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5041));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2315
panda$collections$Array* $tmp5042 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5043 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5042, ((panda$core$Object*) $tmp5043));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp5044 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5044));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 2318
panda$core$Int64 $tmp5045 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5046 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5045);
org$pandalanguage$pandac$parser$Token$nullable $tmp5047 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5046, &$s5048);
panda$core$Bit $tmp5049 = panda$core$Bit$init$builtin_bit(!$tmp5047.nonnull);
bool $tmp5050 = $tmp5049.value;
if ($tmp5050) goto block14; else goto block15;
block14:;
// line 2319
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5051 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5051));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2322
org$pandalanguage$pandac$ASTNode* $tmp5052 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5053 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp5054 = *(&local0);
org$pandalanguage$pandac$Position $tmp5055 = ((org$pandalanguage$pandac$parser$Token) $tmp5054.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp5056 = *(&local0);
panda$core$String* $tmp5057 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5056.value));
panda$collections$Array* $tmp5058 = *(&local1);
panda$collections$ImmutableArray* $tmp5059 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5058);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5052, $tmp5053, $tmp5055, param1, $tmp5057, $tmp5059);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5057));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
panda$collections$Array* $tmp5060 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5060));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp5052;

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
// line 2331
panda$core$Int64 $tmp5061 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp5062 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5061);
org$pandalanguage$pandac$parser$Token$nullable $tmp5063 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5062, &$s5064);
*(&local0) = $tmp5063;
// line 2332
org$pandalanguage$pandac$parser$Token$nullable $tmp5065 = *(&local0);
panda$core$Bit $tmp5066 = panda$core$Bit$init$builtin_bit(!$tmp5065.nonnull);
bool $tmp5067 = $tmp5066.value;
if ($tmp5067) goto block1; else goto block2;
block1:;
// line 2333
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2335
panda$core$Int64 $tmp5068 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5069 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5068);
org$pandalanguage$pandac$parser$Token$nullable $tmp5070 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5069, &$s5071);
*(&local1) = $tmp5070;
// line 2336
org$pandalanguage$pandac$parser$Token$nullable $tmp5072 = *(&local1);
panda$core$Bit $tmp5073 = panda$core$Bit$init$builtin_bit(!$tmp5072.nonnull);
bool $tmp5074 = $tmp5073.value;
if ($tmp5074) goto block3; else goto block4;
block3:;
// line 2337
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2339
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2340
org$pandalanguage$pandac$parser$Token $tmp5075 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5076 = $tmp5075.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5077;
$tmp5077 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5077->value = $tmp5076;
panda$core$Int64 $tmp5078 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5079 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5078);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5080;
$tmp5080 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5080->value = $tmp5079;
ITable* $tmp5081 = ((panda$core$Equatable*) $tmp5077)->$class->itable;
while ($tmp5081->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5081 = $tmp5081->next;
}
$fn5083 $tmp5082 = $tmp5081->methods[0];
panda$core$Bit $tmp5084 = $tmp5082(((panda$core$Equatable*) $tmp5077), ((panda$core$Equatable*) $tmp5080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5077)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5080)));
bool $tmp5085 = $tmp5084.value;
if ($tmp5085) goto block5; else goto block7;
block5:;
// line 2341
panda$collections$ImmutableArray* $tmp5086 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5087 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5087));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5086));
*(&local2) = $tmp5086;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5086));
// line 2342
panda$collections$ImmutableArray* $tmp5088 = *(&local2);
panda$core$Bit $tmp5089 = panda$core$Bit$init$builtin_bit($tmp5088 == NULL);
bool $tmp5090 = $tmp5089.value;
if ($tmp5090) goto block8; else goto block9;
block8:;
// line 2343
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5091 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5091));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2347
panda$collections$ImmutableArray* $tmp5092 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5092));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2349
panda$core$Int64 $tmp5093 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5094 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5093);
org$pandalanguage$pandac$parser$Token$nullable $tmp5095 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5094, &$s5096);
panda$core$Bit $tmp5097 = panda$core$Bit$init$builtin_bit(!$tmp5095.nonnull);
bool $tmp5098 = $tmp5097.value;
if ($tmp5098) goto block10; else goto block11;
block10:;
// line 2350
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5099 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5099));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2352
panda$collections$Array* $tmp5100 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5100);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5101 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
*(&local3) = $tmp5100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
// line 2353
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5102 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2354
goto block12;
block12:;
// line 2355
org$pandalanguage$pandac$parser$Token $tmp5103 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5103;
// line 2356
org$pandalanguage$pandac$parser$Token $tmp5104 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5105 = $tmp5104.kind;
panda$core$Int64 $tmp5106 = $tmp5105.$rawValue;
panda$core$Int64 $tmp5107 = (panda$core$Int64) {18};
panda$core$Bit $tmp5108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5107);
bool $tmp5109 = $tmp5108.value;
if ($tmp5109) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5110 = (panda$core$Int64) {19};
panda$core$Bit $tmp5111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5110);
bool $tmp5112 = $tmp5111.value;
if ($tmp5112) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5113 = (panda$core$Int64) {20};
panda$core$Bit $tmp5114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5113);
bool $tmp5115 = $tmp5114.value;
if ($tmp5115) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5116 = (panda$core$Int64) {22};
panda$core$Bit $tmp5117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5116);
bool $tmp5118 = $tmp5117.value;
if ($tmp5118) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5119 = (panda$core$Int64) {21};
panda$core$Bit $tmp5120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5119);
bool $tmp5121 = $tmp5120.value;
if ($tmp5121) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5122 = (panda$core$Int64) {14};
panda$core$Bit $tmp5123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5122);
bool $tmp5124 = $tmp5123.value;
if ($tmp5124) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5125 = (panda$core$Int64) {24};
panda$core$Bit $tmp5126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5125);
bool $tmp5127 = $tmp5126.value;
if ($tmp5127) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5128 = (panda$core$Int64) {25};
panda$core$Bit $tmp5129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5128);
bool $tmp5130 = $tmp5129.value;
if ($tmp5130) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5131 = (panda$core$Int64) {26};
panda$core$Bit $tmp5132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5131);
bool $tmp5133 = $tmp5132.value;
if ($tmp5133) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5134 = (panda$core$Int64) {27};
panda$core$Bit $tmp5135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5134);
bool $tmp5136 = $tmp5135.value;
if ($tmp5136) goto block15; else goto block25;
block15:;
// line 2360
goto block13;
block25:;
panda$core$Int64 $tmp5137 = (panda$core$Int64) {12};
panda$core$Bit $tmp5138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5137);
bool $tmp5139 = $tmp5138.value;
if ($tmp5139) goto block26; else goto block27;
block26:;
// line 2362
org$pandalanguage$pandac$ASTNode* $tmp5140 = *(&local4);
panda$core$Bit $tmp5141 = panda$core$Bit$init$builtin_bit($tmp5140 != NULL);
bool $tmp5142 = $tmp5141.value;
if ($tmp5142) goto block28; else goto block29;
block28:;
// line 2363
org$pandalanguage$pandac$parser$Token $tmp5143 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5144 = *(&local5);
panda$core$String* $tmp5145 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5144);
panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5147, $tmp5145);
panda$core$String* $tmp5148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, &$s5149);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5143, $tmp5148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
goto block29;
block29:;
// line 2365
org$pandalanguage$pandac$ASTNode* $tmp5150 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5151 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5150));
*(&local4) = $tmp5150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5150));
goto block14;
block27:;
panda$core$Int64 $tmp5152 = (panda$core$Int64) {49};
panda$core$Bit $tmp5153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5106, $tmp5152);
bool $tmp5154 = $tmp5153.value;
if ($tmp5154) goto block30; else goto block31;
block30:;
// line 2367
org$pandalanguage$pandac$ASTNode* $tmp5155 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5156 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5155);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5157 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5157));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
*(&local6) = $tmp5156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
// line 2368
org$pandalanguage$pandac$ASTNode* $tmp5158 = *(&local6);
panda$core$Bit $tmp5159 = panda$core$Bit$init$builtin_bit($tmp5158 == NULL);
bool $tmp5160 = $tmp5159.value;
if ($tmp5160) goto block32; else goto block33;
block32:;
// line 2369
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5161 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5161));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5162 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5162));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5163 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5164 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2371
panda$collections$Array* $tmp5165 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5166 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5165, ((panda$core$Object*) $tmp5166));
// line 2372
org$pandalanguage$pandac$ASTNode* $tmp5167 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5167));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5168 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5168));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block31:;
// line 2374
goto block13;
block14:;
goto block12;
block13:;
// line 2377
panda$collections$ImmutableArray* $tmp5169 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5169);
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5170 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5170));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5169));
*(&local7) = $tmp5169;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5169));
// line 2378
goto block34;
block34:;
// line 2379
org$pandalanguage$pandac$parser$Token $tmp5171 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5171;
// line 2380
org$pandalanguage$pandac$parser$Token $tmp5172 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5173 = $tmp5172.kind;
panda$core$Int64 $tmp5174 = $tmp5173.$rawValue;
panda$core$Int64 $tmp5175 = (panda$core$Int64) {14};
panda$core$Bit $tmp5176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5175);
bool $tmp5177 = $tmp5176.value;
if ($tmp5177) goto block37; else goto block38;
block37:;
// line 2382
panda$collections$ImmutableArray* $tmp5178 = *(&local7);
ITable* $tmp5179 = ((panda$collections$CollectionView*) $tmp5178)->$class->itable;
while ($tmp5179->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5179 = $tmp5179->next;
}
$fn5181 $tmp5180 = $tmp5179->methods[0];
panda$core$Int64 $tmp5182 = $tmp5180(((panda$collections$CollectionView*) $tmp5178));
panda$core$Int64 $tmp5183 = (panda$core$Int64) {0};
int64_t $tmp5184 = $tmp5182.value;
int64_t $tmp5185 = $tmp5183.value;
bool $tmp5186 = $tmp5184 > $tmp5185;
panda$core$Bit $tmp5187 = (panda$core$Bit) {$tmp5186};
bool $tmp5188 = $tmp5187.value;
if ($tmp5188) goto block39; else goto block40;
block39:;
// line 2383
org$pandalanguage$pandac$parser$Token $tmp5189 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5190 = *(&local8);
panda$core$String* $tmp5191 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5190);
panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5193, $tmp5191);
panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5195);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5189, $tmp5194);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5194));
// line 2384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5196 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5196));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5197 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5197));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5198 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5198));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5199 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2386
panda$collections$ImmutableArray* $tmp5200 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$collections$ImmutableArray* $tmp5201 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
*(&local7) = $tmp5200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
goto block36;
block38:;
panda$core$Int64 $tmp5202 = (panda$core$Int64) {12};
panda$core$Bit $tmp5203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5202);
bool $tmp5204 = $tmp5203.value;
if ($tmp5204) goto block41; else goto block42;
block41:;
// line 2388
org$pandalanguage$pandac$ASTNode* $tmp5205 = *(&local4);
panda$core$Bit $tmp5206 = panda$core$Bit$init$builtin_bit($tmp5205 != NULL);
bool $tmp5207 = $tmp5206.value;
if ($tmp5207) goto block43; else goto block44;
block43:;
*(&local9) = $tmp5206;
goto block45;
block44:;
panda$collections$ImmutableArray* $tmp5208 = *(&local7);
ITable* $tmp5209 = ((panda$collections$CollectionView*) $tmp5208)->$class->itable;
while ($tmp5209->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5209 = $tmp5209->next;
}
$fn5211 $tmp5210 = $tmp5209->methods[0];
panda$core$Int64 $tmp5212 = $tmp5210(((panda$collections$CollectionView*) $tmp5208));
panda$core$Int64 $tmp5213 = (panda$core$Int64) {0};
int64_t $tmp5214 = $tmp5212.value;
int64_t $tmp5215 = $tmp5213.value;
bool $tmp5216 = $tmp5214 > $tmp5215;
panda$core$Bit $tmp5217 = (panda$core$Bit) {$tmp5216};
*(&local9) = $tmp5217;
goto block45;
block45:;
panda$core$Bit $tmp5218 = *(&local9);
bool $tmp5219 = $tmp5218.value;
if ($tmp5219) goto block46; else goto block47;
block46:;
// line 2389
org$pandalanguage$pandac$parser$Token $tmp5220 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5221 = *(&local8);
panda$core$String* $tmp5222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5221);
panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5224, $tmp5222);
panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, &$s5226);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5220, $tmp5225);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
// line 2390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5227 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5227));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5228 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5229 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5230 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block47:;
// line 2392
org$pandalanguage$pandac$ASTNode* $tmp5231 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5232 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5232));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
*(&local4) = $tmp5231;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
goto block36;
block42:;
panda$core$Int64 $tmp5233 = (panda$core$Int64) {18};
panda$core$Bit $tmp5234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5233);
bool $tmp5235 = $tmp5234.value;
if ($tmp5235) goto block48; else goto block49;
block48:;
// line 2394
org$pandalanguage$pandac$ASTNode* $tmp5236 = *(&local4);
panda$collections$ImmutableArray* $tmp5237 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5238 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5236, $tmp5237);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5239 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5238));
*(&local10) = $tmp5238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5238));
// line 2395
org$pandalanguage$pandac$ASTNode* $tmp5240 = *(&local10);
panda$core$Bit $tmp5241 = panda$core$Bit$init$builtin_bit($tmp5240 == NULL);
bool $tmp5242 = $tmp5241.value;
if ($tmp5242) goto block50; else goto block51;
block50:;
// line 2396
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5243 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5243));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5244 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5245 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5245));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5246 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5246));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5247 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5247));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2398
panda$collections$Array* $tmp5248 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5249 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5248, ((panda$core$Object*) $tmp5249));
// line 2399
org$pandalanguage$pandac$ASTNode* $tmp5250 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5250));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2400
panda$collections$ImmutableArray* $tmp5251 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5251);
panda$collections$ImmutableArray* $tmp5252 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5251));
*(&local7) = $tmp5251;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5251));
org$pandalanguage$pandac$ASTNode* $tmp5253 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5253));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block49:;
panda$core$Int64 $tmp5254 = (panda$core$Int64) {19};
panda$core$Bit $tmp5255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5254);
bool $tmp5256 = $tmp5255.value;
if ($tmp5256) goto block52; else goto block53;
block52:;
// line 2402
org$pandalanguage$pandac$ASTNode* $tmp5257 = *(&local4);
panda$collections$ImmutableArray* $tmp5258 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5259 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5257, $tmp5258);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5260 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
*(&local11) = $tmp5259;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
// line 2403
org$pandalanguage$pandac$ASTNode* $tmp5261 = *(&local11);
panda$core$Bit $tmp5262 = panda$core$Bit$init$builtin_bit($tmp5261 == NULL);
bool $tmp5263 = $tmp5262.value;
if ($tmp5263) goto block54; else goto block55;
block54:;
// line 2404
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5264 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5264));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5265 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5266 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5266));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5267 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5267));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5268 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5268));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2406
panda$collections$Array* $tmp5269 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5270 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5269, ((panda$core$Object*) $tmp5270));
// line 2407
org$pandalanguage$pandac$ASTNode* $tmp5271 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2408
panda$collections$ImmutableArray* $tmp5272 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5272);
panda$collections$ImmutableArray* $tmp5273 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
*(&local7) = $tmp5272;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
org$pandalanguage$pandac$ASTNode* $tmp5274 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5274));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block53:;
panda$core$Int64 $tmp5275 = (panda$core$Int64) {20};
panda$core$Bit $tmp5276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5275);
bool $tmp5277 = $tmp5276.value;
if ($tmp5277) goto block56; else goto block57;
block56:;
// line 2410
org$pandalanguage$pandac$ASTNode* $tmp5278 = *(&local4);
panda$collections$ImmutableArray* $tmp5279 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5280 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5278, $tmp5279);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5281 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
*(&local12) = $tmp5280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
// line 2411
org$pandalanguage$pandac$ASTNode* $tmp5282 = *(&local12);
panda$core$Bit $tmp5283 = panda$core$Bit$init$builtin_bit($tmp5282 == NULL);
bool $tmp5284 = $tmp5283.value;
if ($tmp5284) goto block58; else goto block59;
block58:;
// line 2412
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5285 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5285));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5286 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5287 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5287));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5288 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5289 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2414
panda$collections$Array* $tmp5290 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5291 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5290, ((panda$core$Object*) $tmp5291));
// line 2415
org$pandalanguage$pandac$ASTNode* $tmp5292 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2416
panda$collections$ImmutableArray* $tmp5293 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5293);
panda$collections$ImmutableArray* $tmp5294 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5294));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5293));
*(&local7) = $tmp5293;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5293));
org$pandalanguage$pandac$ASTNode* $tmp5295 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5295));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block57:;
panda$core$Int64 $tmp5296 = (panda$core$Int64) {22};
panda$core$Bit $tmp5297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5296);
bool $tmp5298 = $tmp5297.value;
if ($tmp5298) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5299 = (panda$core$Int64) {21};
panda$core$Bit $tmp5300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5299);
bool $tmp5301 = $tmp5300.value;
if ($tmp5301) goto block60; else goto block62;
block60:;
// line 2418
org$pandalanguage$pandac$ASTNode* $tmp5302 = *(&local4);
panda$collections$ImmutableArray* $tmp5303 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5304 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5302, $tmp5303);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5305 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5305));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
*(&local13) = $tmp5304;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
// line 2419
org$pandalanguage$pandac$ASTNode* $tmp5306 = *(&local13);
panda$core$Bit $tmp5307 = panda$core$Bit$init$builtin_bit($tmp5306 == NULL);
bool $tmp5308 = $tmp5307.value;
if ($tmp5308) goto block63; else goto block64;
block63:;
// line 2420
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5309 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5310 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5311 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5312 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5313 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5313));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2422
panda$collections$Array* $tmp5314 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5315 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5314, ((panda$core$Object*) $tmp5315));
// line 2423
org$pandalanguage$pandac$ASTNode* $tmp5316 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2424
panda$collections$ImmutableArray* $tmp5317 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5317);
panda$collections$ImmutableArray* $tmp5318 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
*(&local7) = $tmp5317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
org$pandalanguage$pandac$ASTNode* $tmp5319 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5319));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block62:;
panda$core$Int64 $tmp5320 = (panda$core$Int64) {24};
panda$core$Bit $tmp5321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5320);
bool $tmp5322 = $tmp5321.value;
if ($tmp5322) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5323 = (panda$core$Int64) {25};
panda$core$Bit $tmp5324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5323);
bool $tmp5325 = $tmp5324.value;
if ($tmp5325) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5326 = (panda$core$Int64) {26};
panda$core$Bit $tmp5327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5326);
bool $tmp5328 = $tmp5327.value;
if ($tmp5328) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5329 = (panda$core$Int64) {27};
panda$core$Bit $tmp5330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5329);
bool $tmp5331 = $tmp5330.value;
if ($tmp5331) goto block65; else goto block69;
block65:;
// line 2426
org$pandalanguage$pandac$ASTNode* $tmp5332 = *(&local4);
panda$collections$ImmutableArray* $tmp5333 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5334 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5332, $tmp5333);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5335 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5334));
*(&local14) = $tmp5334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5334));
// line 2427
org$pandalanguage$pandac$ASTNode* $tmp5336 = *(&local14);
panda$core$Bit $tmp5337 = panda$core$Bit$init$builtin_bit($tmp5336 == NULL);
bool $tmp5338 = $tmp5337.value;
if ($tmp5338) goto block70; else goto block71;
block70:;
// line 2428
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5339 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5339));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5340 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5341 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5342 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5342));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5343 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2430
panda$collections$Array* $tmp5344 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5345 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5344, ((panda$core$Object*) $tmp5345));
// line 2431
org$pandalanguage$pandac$ASTNode* $tmp5346 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5346));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2432
panda$collections$ImmutableArray* $tmp5347 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5347);
panda$collections$ImmutableArray* $tmp5348 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
*(&local7) = $tmp5347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
org$pandalanguage$pandac$ASTNode* $tmp5349 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block69:;
panda$core$Int64 $tmp5350 = (panda$core$Int64) {101};
panda$core$Bit $tmp5351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5174, $tmp5350);
bool $tmp5352 = $tmp5351.value;
if ($tmp5352) goto block72; else goto block73;
block72:;
// line 2434
panda$core$Int64 $tmp5353 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5354 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5353);
org$pandalanguage$pandac$parser$Token$nullable $tmp5355 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5354, &$s5356);
// line 2435
goto block35;
block73:;
// line 2437
org$pandalanguage$pandac$parser$Token $tmp5357 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5358 = *(&local8);
panda$core$String* $tmp5359 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5358);
panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5361, $tmp5359);
panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, &$s5363);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5357, $tmp5362);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
// line 2438
org$pandalanguage$pandac$parser$Token $tmp5364 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2439
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5365 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5365));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5366 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5367 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5367));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5368 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5368));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2442
org$pandalanguage$pandac$ASTNode* $tmp5369 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5370 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5371 = *(&local0);
org$pandalanguage$pandac$Position $tmp5372 = ((org$pandalanguage$pandac$parser$Token) $tmp5371.value).position;
panda$core$Int64 $tmp5373 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5374 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5373);
org$pandalanguage$pandac$parser$Token$nullable $tmp5375 = *(&local1);
panda$core$String* $tmp5376 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5375.value));
panda$collections$ImmutableArray* $tmp5377 = *(&local2);
panda$collections$Array* $tmp5378 = *(&local3);
panda$collections$ImmutableArray* $tmp5379 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5378);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5369, $tmp5370, $tmp5372, param1, param2, $tmp5374, $tmp5376, $tmp5377, ((panda$collections$ImmutableArray*) NULL), $tmp5379);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5369));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5369));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
panda$collections$ImmutableArray* $tmp5380 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5381 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5382 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5382));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5383 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5383));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5369;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2451
org$pandalanguage$pandac$parser$Token $tmp5384 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5384;
// line 2452
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2453
org$pandalanguage$pandac$parser$Token $tmp5385 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5386 = $tmp5385.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5387;
$tmp5387 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5387->value = $tmp5386;
panda$core$Int64 $tmp5388 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5389 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5388);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5390;
$tmp5390 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5390->value = $tmp5389;
ITable* $tmp5391 = ((panda$core$Equatable*) $tmp5387)->$class->itable;
while ($tmp5391->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5391 = $tmp5391->next;
}
$fn5393 $tmp5392 = $tmp5391->methods[0];
panda$core$Bit $tmp5394 = $tmp5392(((panda$core$Equatable*) $tmp5387), ((panda$core$Equatable*) $tmp5390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5387)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5390)));
bool $tmp5395 = $tmp5394.value;
if ($tmp5395) goto block1; else goto block3;
block1:;
// line 2454
org$pandalanguage$pandac$ASTNode* $tmp5396 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5397 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5397));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5396));
*(&local1) = $tmp5396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5396));
// line 2455
org$pandalanguage$pandac$ASTNode* $tmp5398 = *(&local1);
panda$core$Bit $tmp5399 = panda$core$Bit$init$builtin_bit($tmp5398 == NULL);
bool $tmp5400 = $tmp5399.value;
if ($tmp5400) goto block4; else goto block5;
block4:;
// line 2456
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5401));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2460
org$pandalanguage$pandac$ASTNode* $tmp5402 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5402));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2462
panda$collections$ImmutableArray* $tmp5403 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
*(&local2) = $tmp5403;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
// line 2463
panda$collections$ImmutableArray* $tmp5405 = *(&local2);
panda$core$Bit $tmp5406 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5407 = $tmp5406.value;
if ($tmp5407) goto block6; else goto block7;
block6:;
// line 2464
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5408 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5408));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5409 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5409));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2466
org$pandalanguage$pandac$parser$Token $tmp5410 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5411 = $tmp5410.kind;
panda$core$Int64 $tmp5412 = $tmp5411.$rawValue;
panda$core$Int64 $tmp5413 = (panda$core$Int64) {18};
panda$core$Bit $tmp5414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5413);
bool $tmp5415 = $tmp5414.value;
if ($tmp5415) goto block9; else goto block10;
block9:;
// line 2468
org$pandalanguage$pandac$ASTNode* $tmp5416 = *(&local1);
panda$collections$ImmutableArray* $tmp5417 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5418 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5416, $tmp5417);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
panda$collections$ImmutableArray* $tmp5419 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5420 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5420));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5418;
block10:;
panda$core$Int64 $tmp5421 = (panda$core$Int64) {19};
panda$core$Bit $tmp5422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5421);
bool $tmp5423 = $tmp5422.value;
if ($tmp5423) goto block11; else goto block12;
block11:;
// line 2470
org$pandalanguage$pandac$ASTNode* $tmp5424 = *(&local1);
panda$collections$ImmutableArray* $tmp5425 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5426 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5424, $tmp5425);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5426));
panda$collections$ImmutableArray* $tmp5427 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5427));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5428 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5428));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5426;
block12:;
panda$core$Int64 $tmp5429 = (panda$core$Int64) {20};
panda$core$Bit $tmp5430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5429);
bool $tmp5431 = $tmp5430.value;
if ($tmp5431) goto block13; else goto block14;
block13:;
// line 2472
org$pandalanguage$pandac$ASTNode* $tmp5432 = *(&local1);
panda$collections$ImmutableArray* $tmp5433 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5434 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5432, $tmp5433);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
panda$collections$ImmutableArray* $tmp5435 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5435));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5436 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5436));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5434;
block14:;
panda$core$Int64 $tmp5437 = (panda$core$Int64) {22};
panda$core$Bit $tmp5438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5437);
bool $tmp5439 = $tmp5438.value;
if ($tmp5439) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5440 = (panda$core$Int64) {21};
panda$core$Bit $tmp5441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5440);
bool $tmp5442 = $tmp5441.value;
if ($tmp5442) goto block15; else goto block17;
block15:;
// line 2474
org$pandalanguage$pandac$ASTNode* $tmp5443 = *(&local1);
panda$collections$ImmutableArray* $tmp5444 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5445 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5443, $tmp5444);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5445));
panda$collections$ImmutableArray* $tmp5446 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5446));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5447 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5447));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5445;
block17:;
panda$core$Int64 $tmp5448 = (panda$core$Int64) {23};
panda$core$Bit $tmp5449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5448);
bool $tmp5450 = $tmp5449.value;
if ($tmp5450) goto block18; else goto block19;
block18:;
// line 2476
org$pandalanguage$pandac$ASTNode* $tmp5451 = *(&local1);
panda$collections$ImmutableArray* $tmp5452 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5453 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5451, $tmp5452);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5453));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5453));
panda$collections$ImmutableArray* $tmp5454 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5454));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5455 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5453;
block19:;
panda$core$Int64 $tmp5456 = (panda$core$Int64) {24};
panda$core$Bit $tmp5457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5456);
bool $tmp5458 = $tmp5457.value;
if ($tmp5458) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5459 = (panda$core$Int64) {25};
panda$core$Bit $tmp5460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5459);
bool $tmp5461 = $tmp5460.value;
if ($tmp5461) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5462 = (panda$core$Int64) {26};
panda$core$Bit $tmp5463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5462);
bool $tmp5464 = $tmp5463.value;
if ($tmp5464) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5465 = (panda$core$Int64) {27};
panda$core$Bit $tmp5466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5412, $tmp5465);
bool $tmp5467 = $tmp5466.value;
if ($tmp5467) goto block20; else goto block24;
block20:;
// line 2478
org$pandalanguage$pandac$ASTNode* $tmp5468 = *(&local1);
panda$collections$ImmutableArray* $tmp5469 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5470 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5468, $tmp5469);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
panda$collections$ImmutableArray* $tmp5471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5472 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5472));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5470;
block24:;
// line 2481
panda$core$Int64 $tmp5473 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5474 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5473);
org$pandalanguage$pandac$parser$Token$nullable $tmp5475 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5474, &$s5476);
// line 2482
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5477 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5477));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5478 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5478));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5479 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5480 = $tmp5479.value;
if ($tmp5480) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5481 = (panda$core$Int64) {2450};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5482, $tmp5481, &$s5483);
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
// line 2490
panda$core$Int64 $tmp5484 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5485 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5484);
org$pandalanguage$pandac$parser$Token$nullable $tmp5486 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5485, &$s5487);
*(&local0) = $tmp5486;
// line 2491
org$pandalanguage$pandac$parser$Token$nullable $tmp5488 = *(&local0);
panda$core$Bit $tmp5489 = panda$core$Bit$init$builtin_bit(!$tmp5488.nonnull);
bool $tmp5490 = $tmp5489.value;
if ($tmp5490) goto block1; else goto block2;
block1:;
// line 2492
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2494
panda$core$Int64 $tmp5491 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5492 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5491);
org$pandalanguage$pandac$parser$Token$nullable $tmp5493 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5492, &$s5494);
*(&local1) = $tmp5493;
// line 2495
org$pandalanguage$pandac$parser$Token$nullable $tmp5495 = *(&local1);
panda$core$Bit $tmp5496 = panda$core$Bit$init$builtin_bit(!$tmp5495.nonnull);
bool $tmp5497 = $tmp5496.value;
if ($tmp5497) goto block3; else goto block4;
block3:;
// line 2496
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2498
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2499
org$pandalanguage$pandac$parser$Token $tmp5498 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5499 = $tmp5498.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5500;
$tmp5500 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5500->value = $tmp5499;
panda$core$Int64 $tmp5501 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5502 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5501);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5503;
$tmp5503 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5503->value = $tmp5502;
ITable* $tmp5504 = ((panda$core$Equatable*) $tmp5500)->$class->itable;
while ($tmp5504->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5504 = $tmp5504->next;
}
$fn5506 $tmp5505 = $tmp5504->methods[0];
panda$core$Bit $tmp5507 = $tmp5505(((panda$core$Equatable*) $tmp5500), ((panda$core$Equatable*) $tmp5503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5500)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5503)));
bool $tmp5508 = $tmp5507.value;
if ($tmp5508) goto block5; else goto block7;
block5:;
// line 2500
panda$collections$ImmutableArray* $tmp5509 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5510 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5510));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5509));
*(&local2) = $tmp5509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5509));
// line 2501
panda$collections$ImmutableArray* $tmp5511 = *(&local2);
panda$core$Bit $tmp5512 = panda$core$Bit$init$builtin_bit($tmp5511 == NULL);
bool $tmp5513 = $tmp5512.value;
if ($tmp5513) goto block8; else goto block9;
block8:;
// line 2502
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5514 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5514));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2506
panda$collections$ImmutableArray* $tmp5515 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2508
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2509
org$pandalanguage$pandac$parser$Token $tmp5516 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5517 = $tmp5516.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5518;
$tmp5518 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5518->value = $tmp5517;
panda$core$Int64 $tmp5519 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5520 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5519);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5521;
$tmp5521 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5521->value = $tmp5520;
ITable* $tmp5522 = ((panda$core$Equatable*) $tmp5518)->$class->itable;
while ($tmp5522->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5522 = $tmp5522->next;
}
$fn5524 $tmp5523 = $tmp5522->methods[0];
panda$core$Bit $tmp5525 = $tmp5523(((panda$core$Equatable*) $tmp5518), ((panda$core$Equatable*) $tmp5521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5518)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5521)));
bool $tmp5526 = $tmp5525.value;
if ($tmp5526) goto block10; else goto block12;
block10:;
// line 2510
panda$collections$ImmutableArray* $tmp5527 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5528 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5528));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
*(&local3) = $tmp5527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
// line 2511
panda$collections$ImmutableArray* $tmp5529 = *(&local3);
panda$core$Bit $tmp5530 = panda$core$Bit$init$builtin_bit($tmp5529 == NULL);
bool $tmp5531 = $tmp5530.value;
if ($tmp5531) goto block13; else goto block14;
block13:;
// line 2512
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5532 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5532));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5533 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5533));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2516
panda$collections$ImmutableArray* $tmp5534 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block11;
block11:;
// line 2518
panda$core$Int64 $tmp5535 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5536 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5535);
org$pandalanguage$pandac$parser$Token$nullable $tmp5537 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5536, &$s5538);
panda$core$Bit $tmp5539 = panda$core$Bit$init$builtin_bit(!$tmp5537.nonnull);
bool $tmp5540 = $tmp5539.value;
if ($tmp5540) goto block15; else goto block16;
block15:;
// line 2519
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5541 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5541));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5542 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5542));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2521
panda$collections$Array* $tmp5543 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5543);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5544 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5544));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5543));
*(&local4) = $tmp5543;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5543));
// line 2522
goto block17;
block17:;
panda$core$Int64 $tmp5545 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5546 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5545);
org$pandalanguage$pandac$parser$Token$nullable $tmp5547 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5546);
panda$core$Bit $tmp5548 = panda$core$Bit$init$builtin_bit(!$tmp5547.nonnull);
bool $tmp5549 = $tmp5548.value;
if ($tmp5549) goto block18; else goto block19;
block18:;
// line 2523
org$pandalanguage$pandac$ASTNode* $tmp5550 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5551 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5550));
*(&local5) = $tmp5550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5550));
// line 2524
org$pandalanguage$pandac$ASTNode* $tmp5552 = *(&local5);
panda$core$Bit $tmp5553 = panda$core$Bit$init$builtin_bit($tmp5552 == NULL);
bool $tmp5554 = $tmp5553.value;
if ($tmp5554) goto block20; else goto block21;
block20:;
// line 2525
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5555 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5555));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5556 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5556));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5557 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5557));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5558 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5558));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2527
panda$collections$Array* $tmp5559 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5560 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5559, ((panda$core$Object*) $tmp5560));
org$pandalanguage$pandac$ASTNode* $tmp5561 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5561));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
// line 2529
org$pandalanguage$pandac$ASTNode* $tmp5562 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5563 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5564 = *(&local0);
org$pandalanguage$pandac$Position $tmp5565 = ((org$pandalanguage$pandac$parser$Token) $tmp5564.value).position;
panda$core$Int64 $tmp5566 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5567 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5566);
org$pandalanguage$pandac$parser$Token$nullable $tmp5568 = *(&local1);
panda$core$String* $tmp5569 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5568.value));
panda$collections$ImmutableArray* $tmp5570 = *(&local2);
panda$collections$ImmutableArray* $tmp5571 = *(&local3);
panda$collections$Array* $tmp5572 = *(&local4);
panda$collections$ImmutableArray* $tmp5573 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5572);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5562, $tmp5563, $tmp5565, param1, param2, $tmp5567, $tmp5569, $tmp5570, $tmp5571, $tmp5573);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5562));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5562));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5573));
panda$collections$Array* $tmp5574 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5574));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5575 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5575));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5576 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5576));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5562;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2538
panda$core$Int64 $tmp5577 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5578 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5577);
org$pandalanguage$pandac$parser$Token$nullable $tmp5579 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5578, &$s5580);
*(&local0) = $tmp5579;
// line 2539
org$pandalanguage$pandac$parser$Token$nullable $tmp5581 = *(&local0);
panda$core$Bit $tmp5582 = panda$core$Bit$init$builtin_bit(!$tmp5581.nonnull);
bool $tmp5583 = $tmp5582.value;
if ($tmp5583) goto block1; else goto block2;
block1:;
// line 2540
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2542
panda$core$Int64 $tmp5584 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5585 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5584);
org$pandalanguage$pandac$parser$Token$nullable $tmp5586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5585, &$s5587);
*(&local1) = $tmp5586;
// line 2543
org$pandalanguage$pandac$parser$Token$nullable $tmp5588 = *(&local1);
panda$core$Bit $tmp5589 = panda$core$Bit$init$builtin_bit(!$tmp5588.nonnull);
bool $tmp5590 = $tmp5589.value;
if ($tmp5590) goto block3; else goto block4;
block3:;
// line 2544
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2546
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2547
org$pandalanguage$pandac$parser$Token $tmp5591 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5592 = $tmp5591.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5593;
$tmp5593 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5593->value = $tmp5592;
panda$core$Int64 $tmp5594 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5595 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5594);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5596;
$tmp5596 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5596->value = $tmp5595;
ITable* $tmp5597 = ((panda$core$Equatable*) $tmp5593)->$class->itable;
while ($tmp5597->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5597 = $tmp5597->next;
}
$fn5599 $tmp5598 = $tmp5597->methods[0];
panda$core$Bit $tmp5600 = $tmp5598(((panda$core$Equatable*) $tmp5593), ((panda$core$Equatable*) $tmp5596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5593)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5596)));
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block5; else goto block7;
block5:;
// line 2548
panda$collections$ImmutableArray* $tmp5602 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5603 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5603));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
*(&local2) = $tmp5602;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
// line 2549
panda$collections$ImmutableArray* $tmp5604 = *(&local2);
panda$core$Bit $tmp5605 = panda$core$Bit$init$builtin_bit($tmp5604 == NULL);
bool $tmp5606 = $tmp5605.value;
if ($tmp5606) goto block8; else goto block9;
block8:;
// line 2550
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5607 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5607));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2554
panda$collections$ImmutableArray* $tmp5608 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5608);
panda$collections$ImmutableArray* $tmp5609 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5609));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5608));
*(&local2) = $tmp5608;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5608));
goto block6;
block6:;
// line 2556
panda$collections$Array* $tmp5610 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5610);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5611 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5610));
*(&local3) = $tmp5610;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5610));
// line 2557
panda$core$Int64 $tmp5612 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5613 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5612);
org$pandalanguage$pandac$parser$Token$nullable $tmp5614 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5613);
panda$core$Bit $tmp5615 = panda$core$Bit$init$builtin_bit($tmp5614.nonnull);
bool $tmp5616 = $tmp5615.value;
if ($tmp5616) goto block10; else goto block11;
block10:;
// line 2558
org$pandalanguage$pandac$ASTNode* $tmp5617 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5618 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5618));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
*(&local4) = $tmp5617;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
// line 2559
org$pandalanguage$pandac$ASTNode* $tmp5619 = *(&local4);
panda$core$Bit $tmp5620 = panda$core$Bit$init$builtin_bit($tmp5619 == NULL);
bool $tmp5621 = $tmp5620.value;
if ($tmp5621) goto block12; else goto block13;
block12:;
// line 2560
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5622 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5622));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5623 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5624 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5624));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2562
panda$collections$Array* $tmp5625 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5626 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5625, ((panda$core$Object*) $tmp5626));
// line 2563
goto block14;
block14:;
panda$core$Int64 $tmp5627 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5628 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5627);
org$pandalanguage$pandac$parser$Token$nullable $tmp5629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5628);
panda$core$Bit $tmp5630 = panda$core$Bit$init$builtin_bit($tmp5629.nonnull);
bool $tmp5631 = $tmp5630.value;
if ($tmp5631) goto block15; else goto block16;
block15:;
// line 2564
org$pandalanguage$pandac$ASTNode* $tmp5632 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5633 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5633));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5632));
*(&local4) = $tmp5632;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5632));
// line 2565
org$pandalanguage$pandac$ASTNode* $tmp5634 = *(&local4);
panda$core$Bit $tmp5635 = panda$core$Bit$init$builtin_bit($tmp5634 == NULL);
bool $tmp5636 = $tmp5635.value;
if ($tmp5636) goto block17; else goto block18;
block17:;
// line 2566
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5637 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5637));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5638 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5638));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5639 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5639));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2568
panda$collections$Array* $tmp5640 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5641 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5640, ((panda$core$Object*) $tmp5641));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5642 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5642));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2571
panda$core$Int64 $tmp5643 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5644 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5643);
org$pandalanguage$pandac$parser$Token$nullable $tmp5645 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5644, &$s5646);
panda$core$Bit $tmp5647 = panda$core$Bit$init$builtin_bit(!$tmp5645.nonnull);
bool $tmp5648 = $tmp5647.value;
if ($tmp5648) goto block19; else goto block20;
block19:;
// line 2572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5649 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5649));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5650 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5650));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2574
panda$collections$Array* $tmp5651 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5651);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5652 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5652));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5651));
*(&local5) = $tmp5651;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5651));
// line 2575
goto block21;
block21:;
panda$core$Int64 $tmp5653 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5654 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5653);
org$pandalanguage$pandac$parser$Token$nullable $tmp5655 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5654);
panda$core$Bit $tmp5656 = panda$core$Bit$init$builtin_bit(!$tmp5655.nonnull);
bool $tmp5657 = $tmp5656.value;
if ($tmp5657) goto block22; else goto block23;
block22:;
// line 2576
org$pandalanguage$pandac$ASTNode* $tmp5658 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5659 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5659));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5658));
*(&local6) = $tmp5658;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5658));
// line 2577
org$pandalanguage$pandac$ASTNode* $tmp5660 = *(&local6);
panda$core$Bit $tmp5661 = panda$core$Bit$init$builtin_bit($tmp5660 == NULL);
bool $tmp5662 = $tmp5661.value;
if ($tmp5662) goto block24; else goto block25;
block24:;
// line 2578
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5663 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5663));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5664 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5664));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5665 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5665));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5666 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5666));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2580
panda$collections$Array* $tmp5667 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5668 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5667, ((panda$core$Object*) $tmp5668));
org$pandalanguage$pandac$ASTNode* $tmp5669 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
// line 2582
org$pandalanguage$pandac$ASTNode* $tmp5670 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5671 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5672 = *(&local0);
org$pandalanguage$pandac$Position $tmp5673 = ((org$pandalanguage$pandac$parser$Token) $tmp5672.value).position;
panda$core$Int64 $tmp5674 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5675 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5674);
org$pandalanguage$pandac$parser$Token$nullable $tmp5676 = *(&local1);
panda$core$String* $tmp5677 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5676.value));
panda$collections$ImmutableArray* $tmp5678 = *(&local2);
panda$collections$Array* $tmp5679 = *(&local3);
panda$collections$ImmutableArray* $tmp5680 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5679);
panda$collections$Array* $tmp5681 = *(&local5);
panda$collections$ImmutableArray* $tmp5682 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5681);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5670, $tmp5671, $tmp5673, param1, param2, $tmp5675, $tmp5677, $tmp5678, $tmp5680, $tmp5682);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5682));
panda$collections$Array* $tmp5683 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5683));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5684 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5684));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5685 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5685));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5670;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2590
org$pandalanguage$pandac$parser$Token $tmp5686 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5687 = $tmp5686.kind;
panda$core$Int64 $tmp5688 = $tmp5687.$rawValue;
panda$core$Int64 $tmp5689 = (panda$core$Int64) {16};
panda$core$Bit $tmp5690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5688, $tmp5689);
bool $tmp5691 = $tmp5690.value;
if ($tmp5691) goto block2; else goto block3;
block2:;
// line 2592
org$pandalanguage$pandac$ASTNode* $tmp5692 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5692));
return $tmp5692;
block3:;
// line 2594
org$pandalanguage$pandac$ASTNode* $tmp5693 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5693));
return $tmp5693;
block1:;
panda$core$Bit $tmp5694 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5695 = $tmp5694.value;
if ($tmp5695) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5696 = (panda$core$Int64) {2589};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5697, $tmp5696, &$s5698);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2602
panda$collections$Array* $tmp5699 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5699);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5700 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5699));
*(&local0) = $tmp5699;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5699));
// line 2603
org$pandalanguage$pandac$parser$Token $tmp5701 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5702 = $tmp5701.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5703;
$tmp5703 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5703->value = $tmp5702;
panda$core$Int64 $tmp5704 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5705 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5704);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5706;
$tmp5706 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5706->value = $tmp5705;
ITable* $tmp5707 = ((panda$core$Equatable*) $tmp5703)->$class->itable;
while ($tmp5707->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5707 = $tmp5707->next;
}
$fn5709 $tmp5708 = $tmp5707->methods[0];
panda$core$Bit $tmp5710 = $tmp5708(((panda$core$Equatable*) $tmp5703), ((panda$core$Equatable*) $tmp5706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5703)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5706)));
bool $tmp5711 = $tmp5710.value;
if ($tmp5711) goto block1; else goto block2;
block1:;
// line 2604
org$pandalanguage$pandac$ASTNode* $tmp5712 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5713 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5713));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5712));
*(&local1) = $tmp5712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5712));
// line 2605
org$pandalanguage$pandac$ASTNode* $tmp5714 = *(&local1);
panda$core$Bit $tmp5715 = panda$core$Bit$init$builtin_bit($tmp5714 != NULL);
bool $tmp5716 = $tmp5715.value;
if ($tmp5716) goto block3; else goto block4;
block3:;
// line 2606
panda$collections$Array* $tmp5717 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5718 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5717, ((panda$core$Object*) $tmp5718));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5719 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5719));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2609
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5720 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5721 = $tmp5720.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5722;
$tmp5722 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5722->value = $tmp5721;
panda$core$Int64 $tmp5723 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5724 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5723);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5725;
$tmp5725 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5725->value = $tmp5724;
ITable* $tmp5726 = ((panda$core$Equatable*) $tmp5722)->$class->itable;
while ($tmp5726->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5726 = $tmp5726->next;
}
$fn5728 $tmp5727 = $tmp5726->methods[1];
panda$core$Bit $tmp5729 = $tmp5727(((panda$core$Equatable*) $tmp5722), ((panda$core$Equatable*) $tmp5725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5722)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5725)));
bool $tmp5730 = $tmp5729.value;
if ($tmp5730) goto block6; else goto block7;
block6:;
// line 2610
org$pandalanguage$pandac$ASTNode* $tmp5731 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5732 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
*(&local2) = $tmp5731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
// line 2611
org$pandalanguage$pandac$ASTNode* $tmp5733 = *(&local2);
panda$core$Bit $tmp5734 = panda$core$Bit$init$builtin_bit($tmp5733 == NULL);
bool $tmp5735 = $tmp5734.value;
if ($tmp5735) goto block8; else goto block9;
block8:;
// line 2612
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5736 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5736));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5737 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5737));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2614
panda$core$Bit* $tmp5738 = &param0->inSpeculative;
panda$core$Bit $tmp5739 = *$tmp5738;
panda$core$Bit $tmp5740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5739);
bool $tmp5741 = $tmp5740.value;
if ($tmp5741) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5742 = (panda$core$Int64) {2614};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5743, $tmp5742);
abort(); // unreachable
block10:;
// line 2615
panda$collections$Array* $tmp5744 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5745 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5744, ((panda$core$Object*) $tmp5745));
org$pandalanguage$pandac$ASTNode* $tmp5746 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5746));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 2617
org$pandalanguage$pandac$ASTNode* $tmp5747 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5748 = (panda$core$Int64) {17};
panda$collections$Array* $tmp5749 = *(&local0);
panda$collections$ImmutableArray* $tmp5750 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5749);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5747, $tmp5748, $tmp5750);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5747));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5747));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5750));
panda$collections$Array* $tmp5751 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5751));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp5747;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Lexer** $tmp5752 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5753 = *$tmp5752;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5753));
org$pandalanguage$regex$RegexParser** $tmp5754 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5755 = *$tmp5754;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5755));
panda$threads$MessageQueue** $tmp5756 = &param0->errors;
panda$threads$MessageQueue* $tmp5757 = *$tmp5756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5757));
panda$io$File** $tmp5758 = &param0->path;
panda$io$File* $tmp5759 = *$tmp5758;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5759));
panda$core$String** $tmp5760 = &param0->source;
panda$core$String* $tmp5761 = *$tmp5760;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5761));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5762 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5763 = *$tmp5762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5763));
panda$collections$Stack** $tmp5764 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5765 = *$tmp5764;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5765));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5766 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5767 = *$tmp5766;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5767));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5768 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5769 = *$tmp5768;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
return;

}

