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
typedef org$pandalanguage$pandac$Position (*$fn3714)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3739)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3780)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3797)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4134)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4223)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4231)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4556)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4589)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4600)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4725)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4747)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4768)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4828)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn4901)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4927)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4992)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5090)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5120)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5302)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5415)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5433)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5508)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5618)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5637)(panda$core$Equatable*, panda$core$Equatable*);

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
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
// line 113
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
// line 114
goto block8;
block8:;
// line 115
org$pandalanguage$pandac$parser$Token $tmp178 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp178;
// line 116
org$pandalanguage$pandac$parser$Token $tmp179 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp180 = $tmp179.kind;
panda$core$Int64 $tmp181 = $tmp180.$rawValue;
panda$core$Int64 $tmp182 = (panda$core$Int64) {13};
panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block11; else goto block12;
block11:;
// line 118
org$pandalanguage$pandac$parser$Token $tmp185 = *(&local2);
panda$core$String* $tmp186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp185);
panda$core$Bit $tmp187 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp186, &$s188);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
bool $tmp189 = $tmp187.value;
if ($tmp189) goto block13; else goto block14;
block13:;
// line 119
goto block9;
block14:;
goto block10;
block12:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {0};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block15; else goto block10;
block15:;
// line 123
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
// line 129
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
// line 130
goto block18;
block18:;
// line 131
org$pandalanguage$pandac$parser$Token $tmp203 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp203;
// line 132
org$pandalanguage$pandac$parser$Token $tmp204 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp205 = $tmp204.kind;
panda$core$Int64 $tmp206 = $tmp205.$rawValue;
panda$core$Int64 $tmp207 = (panda$core$Int64) {11};
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block21; else goto block22;
block21:;
// line 134
goto block19;
block22:;
panda$core$Int64 $tmp210 = (panda$core$Int64) {0};
panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block23; else goto block20;
block23:;
// line 137
org$pandalanguage$pandac$parser$Token $tmp213 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp213, &$s214);
// line 138
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp216 = &param0->reportErrors;
*$tmp216 = $tmp215;
// line 139
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
// line 145
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

// line 152
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp226 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp227 = *$tmp226;
panda$core$Bit $tmp228 = panda$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 153
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
// line 155
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
// line 157
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp279 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp280 = *$tmp279;
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[7];
$tmp281($tmp280);
goto block3;
block5:;
// line 159
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp283 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp284 = *$tmp283;
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[7];
$tmp285($tmp284);
goto block2;
block2:;
// line 161
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp287 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp288 = *$tmp287;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp288, param1);
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

// line 165
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
// line 166
org$pandalanguage$pandac$parser$Token $tmp298 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp298);
goto block2;
block2:;
// line 168
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
// line 172
org$pandalanguage$pandac$parser$Token $tmp313 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp313;
// line 173
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
// line 174
org$pandalanguage$pandac$parser$Token $tmp323 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp323, true });
block2:;
// line 176
org$pandalanguage$pandac$parser$Token $tmp324 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp324);
// line 177
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1, panda$core$String* param2) {

org$pandalanguage$pandac$parser$Token local0;
// line 181
org$pandalanguage$pandac$parser$Token $tmp325 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp325;
// line 182
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
// line 183
org$pandalanguage$pandac$parser$Token $tmp335 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp335, true });
block2:;
// line 185
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
// line 186
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1, panda$core$String* param2) {

panda$core$Bit local0;
// line 190
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
// line 191
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

// line 196
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp360 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp361 = *$tmp360;
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit($tmp361 != NULL);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block1; else goto block2;
block1:;
// line 197
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp364 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp365 = *$tmp364;
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[3];
$tmp366($tmp365, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 202
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp368 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp369 = *$tmp368;
panda$core$Bit $tmp370 = panda$core$Bit$init$builtin_bit($tmp369 != NULL);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 203
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
panda$core$Int64 $tmp380 = (panda$core$Int64) {209};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block1:;
// line 210
panda$core$Bit* $tmp383 = &param0->inSpeculative;
panda$core$Bit $tmp384 = *$tmp383;
panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp387 = (panda$core$Int64) {210};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s388, $tmp387);
abort(); // unreachable
block3:;
// line 211
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp390 = &param0->inSpeculative;
*$tmp390 = $tmp389;
// line 212
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp391 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp392 = *$tmp391;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp392);
// line 213
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
panda$core$Int64 $tmp400 = (panda$core$Int64) {218};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s401, $tmp400, &$s402);
abort(); // unreachable
block1:;
// line 219
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
panda$core$Int64 $tmp408 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block1:;
// line 225
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp412 = &param0->inSpeculative;
*$tmp412 = $tmp411;
// line 226
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
// line 227
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

// line 232
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

// line 236
panda$core$Bit $tmp510 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 237
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block2:;
// line 239
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
// line 243
panda$core$MutableString* $tmp519 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp519);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
*(&local0) = $tmp519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// line 244
goto block1;
block1:;
// line 245
org$pandalanguage$pandac$parser$Token $tmp521 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp521;
// line 246
org$pandalanguage$pandac$parser$Token $tmp522 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp523 = $tmp522.kind;
panda$core$Int64 $tmp524 = $tmp523.$rawValue;
panda$core$Int64 $tmp525 = (panda$core$Int64) {13};
panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block4; else goto block5;
block4:;
// line 248
org$pandalanguage$pandac$parser$Token $tmp528 = *(&local1);
panda$core$String* $tmp529 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp528);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp530 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
*(&local2) = $tmp529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// line 249
panda$core$String* $tmp531 = *(&local2);
panda$core$Bit $tmp532 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp531, &$s533);
bool $tmp534 = $tmp532.value;
if ($tmp534) goto block6; else goto block7;
block6:;
// line 250
org$pandalanguage$pandac$parser$Token $tmp535 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp535, &$s536);
// line 251
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
// line 253
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
// line 256
org$pandalanguage$pandac$parser$Token $tmp545 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp545, &$s546);
// line 257
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
// line 260
org$pandalanguage$pandac$parser$Token $tmp551 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp551;
// line 261
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
// line 262
org$pandalanguage$pandac$parser$Token $tmp563 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp563, &$s564);
// line 263
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp565 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 265
org$pandalanguage$pandac$parser$Token $tmp566 = *(&local3);
panda$core$String* $tmp567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp566);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp568 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local4) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// line 266
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
// line 267
panda$core$Char8 $tmp576 = *(&local5);
panda$core$UInt8 $tmp577 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp578 = panda$core$Char8$init$panda$core$UInt8($tmp577);
panda$core$Bit $tmp579 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block15; else goto block16;
block15:;
// line 268
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
// line 269
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
// line 270
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
// line 271
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
// line 272
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
// line 273
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
// line 274
panda$core$MutableString* $tmp617 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp617, &$s618);
goto block14;
block28:;
// line 276
org$pandalanguage$pandac$parser$Token $tmp619 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp619, &$s620);
// line 277
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
// line 280
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
// line 283
org$pandalanguage$pandac$parser$Token $tmp636 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp636);
// line 284
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
// line 287
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
panda$core$Int64 $tmp645 = (panda$core$Int64) {242};
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
// line 294
panda$core$MutableString* $tmp648 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp648);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp649 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
*(&local0) = $tmp648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// line 295
goto block1;
block1:;
// line 296
org$pandalanguage$pandac$parser$Token $tmp650 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp650;
// line 297
org$pandalanguage$pandac$parser$Token $tmp651 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp652 = $tmp651.kind;
panda$core$Int64 $tmp653 = $tmp652.$rawValue;
panda$core$Int64 $tmp654 = (panda$core$Int64) {13};
panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block4; else goto block5;
block4:;
// line 299
org$pandalanguage$pandac$parser$Token $tmp657 = *(&local1);
panda$core$String* $tmp658 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp657);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp659 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local2) = $tmp658;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// line 300
panda$core$String* $tmp660 = *(&local2);
panda$core$Bit $tmp661 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp660, &$s662);
bool $tmp663 = $tmp661.value;
if ($tmp663) goto block6; else goto block7;
block6:;
// line 301
org$pandalanguage$pandac$parser$Token $tmp664 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp664, &$s665);
// line 302
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
// line 304
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
// line 307
org$pandalanguage$pandac$parser$Token $tmp674 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp674, &$s675);
// line 308
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
// line 311
org$pandalanguage$pandac$parser$Token $tmp680 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp680;
// line 312
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
// line 313
org$pandalanguage$pandac$parser$Token $tmp692 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp692, &$s693);
// line 314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp694 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 316
org$pandalanguage$pandac$parser$Token $tmp695 = *(&local3);
panda$core$String* $tmp696 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp695);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp697 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
*(&local4) = $tmp696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// line 317
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
// line 318
panda$core$Char8 $tmp705 = *(&local5);
panda$core$UInt8 $tmp706 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp707 = panda$core$Char8$init$panda$core$UInt8($tmp706);
panda$core$Bit $tmp708 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block15; else goto block16;
block15:;
// line 319
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
// line 320
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
// line 321
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
// line 322
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
// line 323
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
// line 324
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
// line 325
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
// line 326
panda$core$MutableString* $tmp752 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp752, &$s753);
goto block14;
block30:;
// line 328
org$pandalanguage$pandac$parser$Token $tmp754 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp754, &$s755);
// line 329
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
// line 332
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
// line 335
org$pandalanguage$pandac$parser$Token $tmp771 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp771);
// line 336
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
// line 339
org$pandalanguage$pandac$parser$Token $tmp778 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp778);
// line 340
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
// line 343
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
panda$core$Int64 $tmp787 = (panda$core$Int64) {293};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s788, $tmp787, &$s789);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 351
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
// line 352
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
// line 353
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
// line 354
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
// line 359
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
// line 360
org$pandalanguage$pandac$parser$Token $tmp828 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp828;
// line 361
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
// line 362
org$pandalanguage$pandac$parser$Token $tmp852 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp853 = *(&local1);
panda$core$String* $tmp854 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp853);
panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, $tmp854);
panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, &$s858);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp852, $tmp857);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// line 363
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 365
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp860 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 366
panda$core$MutableString* $tmp861 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp861);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp862 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local4) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// line 367
goto block6;
block6:;
// line 368
org$pandalanguage$pandac$parser$Token $tmp863 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp863;
// line 369
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
// line 370
goto block7;
block9:;
// line 372
org$pandalanguage$pandac$parser$Token $tmp875 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp876 = $tmp875.kind;
panda$core$Int64 $tmp877 = $tmp876.$rawValue;
panda$core$Int64 $tmp878 = (panda$core$Int64) {13};
panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp878);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block11; else goto block12;
block11:;
// line 374
org$pandalanguage$pandac$parser$Token $tmp881 = *(&local5);
panda$core$String* $tmp882 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp881);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp883 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
*(&local6) = $tmp882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// line 375
panda$core$String* $tmp884 = *(&local6);
panda$core$Bit $tmp885 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp884, &$s886);
bool $tmp887 = $tmp885.value;
if ($tmp887) goto block13; else goto block14;
block13:;
// line 376
org$pandalanguage$pandac$parser$Token $tmp888 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp888, &$s889);
// line 377
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
// line 379
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
// line 382
org$pandalanguage$pandac$parser$Token $tmp900 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp900, &$s901);
// line 383
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
// line 386
org$pandalanguage$pandac$parser$Token $tmp908 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local7) = $tmp908;
// line 387
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
// line 388
org$pandalanguage$pandac$parser$Token $tmp920 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp920, &$s921);
// line 389
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
// line 391
org$pandalanguage$pandac$parser$Token $tmp925 = *(&local7);
panda$core$String* $tmp926 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp925);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp927 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
*(&local8) = $tmp926;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// line 392
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
// line 393
panda$core$Char8 $tmp935 = *(&local9);
panda$core$UInt8 $tmp936 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp937 = panda$core$Char8$init$panda$core$UInt8($tmp936);
panda$core$Bit $tmp938 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block22; else goto block23;
block22:;
// line 394
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
// line 395
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
// line 396
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
// line 397
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
// line 398
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
// line 399
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
// line 402
panda$core$Bit* $tmp976 = &param0->allowLambdas;
panda$core$Bit $tmp977 = *$tmp976;
*(&local10) = $tmp977;
// line 403
panda$core$Bit $tmp978 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp979 = &param0->allowLambdas;
*$tmp979 = $tmp978;
// line 404
org$pandalanguage$pandac$ASTNode* $tmp980 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
*(&local11) = $tmp980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// line 405
panda$core$Bit $tmp982 = *(&local10);
panda$core$Bit* $tmp983 = &param0->allowLambdas;
*$tmp983 = $tmp982;
// line 406
org$pandalanguage$pandac$ASTNode* $tmp984 = *(&local11);
panda$core$Bit $tmp985 = panda$core$Bit$init$builtin_bit($tmp984 == NULL);
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block36; else goto block37;
block36:;
// line 407
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
// line 409
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp992 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local12) = ((panda$core$String*) NULL);
// line 410
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp993 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local13) = ((panda$core$String*) NULL);
// line 411
panda$core$Int64 $tmp994 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp995 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp994);
org$pandalanguage$pandac$parser$Token$nullable $tmp996 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp995);
panda$core$Bit $tmp997 = panda$core$Bit$init$builtin_bit($tmp996.nonnull);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block38; else goto block39;
block38:;
// line 412
org$pandalanguage$pandac$parser$Token $tmp999 = *(&local1);
panda$core$String* $tmp1000 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp999);
panda$core$String* $tmp1001 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
*(&local12) = $tmp1000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
goto block39;
block39:;
// line 414
panda$core$Int64 $tmp1002 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1002);
org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1003);
panda$core$Bit $tmp1005 = panda$core$Bit$init$builtin_bit($tmp1004.nonnull);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block40; else goto block41;
block40:;
// line 415
org$pandalanguage$pandac$parser$Token $tmp1007 = *(&local1);
panda$core$String* $tmp1008 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1007);
panda$core$String* $tmp1009 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
*(&local13) = $tmp1008;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// line 416
panda$core$String* $tmp1010 = *(&local13);
panda$core$Bit $tmp1011 = panda$core$Bit$init$builtin_bit($tmp1010 == NULL);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block42; else goto block43;
block42:;
// line 417
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
// line 419
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
// line 421
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
// line 423
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
// line 424
panda$collections$Array* $tmp1048 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1048);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1049 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
*(&local17) = $tmp1048;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// line 425
panda$collections$Array* $tmp1050 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1053 = *(&local1);
org$pandalanguage$pandac$Position $tmp1054 = $tmp1053.position;
panda$core$String* $tmp1055 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1051, $tmp1052, $tmp1054, $tmp1055);
panda$collections$Array$add$panda$collections$Array$T($tmp1050, ((panda$core$Object*) $tmp1051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// line 426
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
// line 428
panda$core$Int64 $tmp1070 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp1071 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1070);
org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1071, &$s1073);
panda$core$Bit $tmp1074 = panda$core$Bit$init$builtin_bit(!$tmp1072.nonnull);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block44; else goto block45;
block44:;
// line 429
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
// line 431
panda$core$String* $tmp1083 = *(&local12);
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit($tmp1083 != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block46; else goto block47;
block46:;
// line 432
panda$core$String* $tmp1086 = *(&local13);
panda$core$Bit $tmp1087 = panda$core$Bit$init$builtin_bit($tmp1086 == NULL);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block48; else goto block49;
block48:;
// line 433
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1090 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1089);
org$pandalanguage$pandac$ASTNode* $tmp1091 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
*(&local11) = $tmp1090;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
goto block49;
block49:;
// line 435
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
// line 436
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
// line 437
panda$collections$Array* $tmp1109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1109);
*(&local20) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1110 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
*(&local20) = $tmp1109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// line 438
panda$collections$Array* $tmp1111 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1112 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1111, ((panda$core$Object*) $tmp1112));
// line 439
panda$collections$Array* $tmp1113 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1116 = *(&local1);
org$pandalanguage$pandac$Position $tmp1117 = $tmp1116.position;
panda$core$String* $tmp1118 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1114, $tmp1115, $tmp1117, $tmp1118);
panda$collections$Array$add$panda$collections$Array$T($tmp1113, ((panda$core$Object*) $tmp1114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// line 440
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
// line 442
panda$core$MutableString* $tmp1132 = *(&local4);
panda$core$String* $tmp1133 = panda$core$MutableString$finish$R$panda$core$String($tmp1132);
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1134 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
*(&local21) = $tmp1133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// line 443
panda$core$MutableString* $tmp1135 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1135);
panda$core$MutableString* $tmp1136 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
*(&local4) = $tmp1135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// line 444
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
// line 445
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
// line 447
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
// line 450
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
// line 454
org$pandalanguage$pandac$parser$Token $tmp1167 = *(&local5);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1167, &$s1168);
// line 455
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
// line 458
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
// line 461
panda$core$MutableString* $tmp1183 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp1184 = *(&local5);
panda$core$String* $tmp1185 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1184);
panda$core$MutableString$append$panda$core$String($tmp1183, $tmp1185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
goto block10;
block10:;
goto block6;
block7:;
// line 465
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
// line 474
panda$core$Int64 $tmp1197 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1198 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1197);
org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1198, &$s1200);
*(&local0) = $tmp1199;
// line 475
org$pandalanguage$pandac$parser$Token$nullable $tmp1201 = *(&local0);
panda$core$Bit $tmp1202 = panda$core$Bit$init$builtin_bit(!$tmp1201.nonnull);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block1; else goto block2;
block1:;
// line 476
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 478
org$pandalanguage$pandac$ASTNode* $tmp1204 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
*(&local1) = $tmp1204;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// line 479
org$pandalanguage$pandac$ASTNode* $tmp1206 = *(&local1);
panda$core$Bit $tmp1207 = panda$core$Bit$init$builtin_bit($tmp1206 == NULL);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block3; else goto block4;
block3:;
// line 480
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 482
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
// line 485
panda$core$Int64 $tmp1221 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1222 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1221);
org$pandalanguage$pandac$parser$Token$nullable $tmp1223 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1222);
panda$core$Bit $tmp1224 = panda$core$Bit$init$builtin_bit($tmp1223.nonnull);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block8; else goto block9;
block8:;
// line 487
panda$collections$Array* $tmp1226 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1226);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1227 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
*(&local4) = $tmp1226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// line 488
org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
*(&local5) = $tmp1228;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// line 489
org$pandalanguage$pandac$ASTNode* $tmp1230 = *(&local5);
panda$core$Bit $tmp1231 = panda$core$Bit$init$builtin_bit($tmp1230 == NULL);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block10; else goto block11;
block10:;
// line 490
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
// line 492
panda$collections$Array* $tmp1237 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1238 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1239 = (panda$core$Int64) {31};
org$pandalanguage$pandac$Position $tmp1240 = *(&local2);
panda$core$String* $tmp1241 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1242 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1238, $tmp1239, $tmp1240, $tmp1241, $tmp1242);
panda$collections$Array$add$panda$collections$Array$T($tmp1237, ((panda$core$Object*) $tmp1238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// line 493
goto block12;
block12:;
panda$core$Int64 $tmp1243 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1244 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1243);
org$pandalanguage$pandac$parser$Token$nullable $tmp1245 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1244);
panda$core$Bit $tmp1246 = panda$core$Bit$init$builtin_bit($tmp1245.nonnull);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block13; else goto block14;
block13:;
// line 494
panda$core$Int64 $tmp1248 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1249 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1248);
org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1249, &$s1251);
*(&local6) = $tmp1250;
// line 495
panda$core$Int64 $tmp1252 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1252);
org$pandalanguage$pandac$parser$Token$nullable $tmp1254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1253, &$s1255);
panda$core$Bit $tmp1256 = panda$core$Bit$init$builtin_bit(!$tmp1254.nonnull);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block15; else goto block16;
block15:;
// line 496
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
// line 498
org$pandalanguage$pandac$ASTNode* $tmp1262 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1263 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local7) = $tmp1262;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// line 499
org$pandalanguage$pandac$ASTNode* $tmp1264 = *(&local7);
panda$core$Bit $tmp1265 = panda$core$Bit$init$builtin_bit($tmp1264 == NULL);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block17; else goto block18;
block17:;
// line 500
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
// line 502
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
// line 505
panda$core$Int64 $tmp1281 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1281);
org$pandalanguage$pandac$parser$Token$nullable $tmp1283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1282, &$s1284);
panda$core$Bit $tmp1285 = panda$core$Bit$init$builtin_bit(!$tmp1283.nonnull);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block19; else goto block20;
block19:;
// line 506
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
// line 508
panda$core$Int64 $tmp1291 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1292 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1291);
org$pandalanguage$pandac$parser$Token$nullable $tmp1293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1292, &$s1294);
panda$core$Bit $tmp1295 = panda$core$Bit$init$builtin_bit(!$tmp1293.nonnull);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block21; else goto block22;
block21:;
// line 509
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
// line 511
org$pandalanguage$pandac$ASTNode* $tmp1301 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1302 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
*(&local8) = $tmp1301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
// line 512
org$pandalanguage$pandac$ASTNode* $tmp1303 = *(&local8);
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit($tmp1303 == NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block23; else goto block24;
block23:;
// line 513
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
// line 515
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
// line 517
panda$core$Int64 $tmp1323 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1324 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1323);
org$pandalanguage$pandac$parser$Token$nullable $tmp1325 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1324);
panda$core$Bit $tmp1326 = panda$core$Bit$init$builtin_bit($tmp1325.nonnull);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block25; else goto block26;
block25:;
// line 519
panda$collections$Array* $tmp1328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1328);
*(&local9) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1329 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
*(&local9) = $tmp1328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// line 520
panda$collections$Array* $tmp1330 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1331 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1330, ((panda$core$Object*) $tmp1331));
// line 521
panda$core$Bit $tmp1332 = panda$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1332;
// line 522
goto block27;
block27:;
// line 523
org$pandalanguage$pandac$ASTNode* $tmp1333 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1334 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
*(&local11) = $tmp1333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
// line 524
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local11);
panda$core$Bit $tmp1336 = panda$core$Bit$init$builtin_bit($tmp1335 == NULL);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block30; else goto block31;
block30:;
// line 525
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
// line 527
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
// line 532
panda$core$Bit $tmp1348 = panda$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1348;
goto block32;
block32:;
// line 535
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
// line 537
panda$core$Int64 $tmp1357 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1358 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1357);
org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1358, &$s1360);
panda$core$Bit $tmp1361 = panda$core$Bit$init$builtin_bit(!$tmp1359.nonnull);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block35; else goto block36;
block35:;
// line 538
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
// line 540
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
// line 541
org$pandalanguage$pandac$ASTNode* $tmp1374 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1375 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
*(&local13) = $tmp1374;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// line 542
org$pandalanguage$pandac$ASTNode* $tmp1376 = *(&local13);
panda$core$Bit $tmp1377 = panda$core$Bit$init$builtin_bit($tmp1376 == NULL);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block42; else goto block43;
block42:;
// line 543
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
// line 545
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
// line 548
org$pandalanguage$pandac$parser$Token$nullable $tmp1394 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1394.value), &$s1395);
// line 549
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
// line 552
panda$core$Int64 $tmp1399 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1400 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1399);
org$pandalanguage$pandac$parser$Token$nullable $tmp1401 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1400, &$s1402);
panda$core$Bit $tmp1403 = panda$core$Bit$init$builtin_bit(!$tmp1401.nonnull);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block44; else goto block45;
block44:;
// line 553
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
// line 555
panda$core$Int64 $tmp1407 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1408 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1407);
org$pandalanguage$pandac$parser$Token$nullable $tmp1409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1408);
panda$core$Bit $tmp1410 = panda$core$Bit$init$builtin_bit($tmp1409.nonnull);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block46; else goto block47;
block46:;
// line 556
panda$collections$Array* $tmp1412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1412);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1413 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
*(&local14) = $tmp1412;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
// line 557
panda$collections$Array* $tmp1414 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1415 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1414, ((panda$core$Object*) $tmp1415));
// line 558
org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1417 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
*(&local15) = $tmp1416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// line 559
org$pandalanguage$pandac$ASTNode* $tmp1418 = *(&local15);
panda$core$Bit $tmp1419 = panda$core$Bit$init$builtin_bit($tmp1418 == NULL);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block48; else goto block49;
block48:;
// line 560
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
// line 562
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
// line 564
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
// line 568
panda$core$Int64 $tmp1439 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1440 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1439);
org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1440);
panda$core$Bit $tmp1442 = panda$core$Bit$init$builtin_bit(!$tmp1441.nonnull);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block50; else goto block51;
block50:;
// line 569
panda$core$Int64 $tmp1444 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1445 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1444);
org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1445, &$s1447);
// line 570
org$pandalanguage$pandac$ASTNode* $tmp1448 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
org$pandalanguage$pandac$ASTNode* $tmp1449 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1448;
block51:;
// line 572
panda$collections$Array* $tmp1450 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1450);
*(&local16) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1451 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
*(&local16) = $tmp1450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// line 573
panda$collections$Array* $tmp1452 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1452, ((panda$core$Object*) $tmp1453));
// line 574
goto block52;
block52:;
// line 575
org$pandalanguage$pandac$ASTNode* $tmp1454 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
*(&local17) = $tmp1454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// line 576
org$pandalanguage$pandac$ASTNode* $tmp1456 = *(&local17);
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit($tmp1456 == NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block55; else goto block56;
block55:;
// line 577
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
// line 579
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
// line 582
panda$core$Int64 $tmp1470 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1471 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1470);
org$pandalanguage$pandac$parser$Token$nullable $tmp1472 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1471, &$s1473);
// line 584
org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1474.value), &$s1475);
// line 585
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
panda$core$Int64 $tmp1480 = (panda$core$Int64) {473};
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
// line 594
panda$core$Int64 $tmp1483 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1484 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1483);
org$pandalanguage$pandac$parser$Token$nullable $tmp1485 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1484, &$s1486);
*(&local0) = $tmp1485;
// line 595
panda$core$Int64 $tmp1487 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1488 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1487);
org$pandalanguage$pandac$parser$Token$nullable $tmp1489 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1488);
panda$core$Bit $tmp1490 = panda$core$Bit$init$builtin_bit($tmp1489.nonnull);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block1; else goto block2;
block1:;
// line 596
org$pandalanguage$pandac$ASTNode* $tmp1492 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1493 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
*(&local1) = $tmp1492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// line 597
org$pandalanguage$pandac$ASTNode* $tmp1494 = *(&local1);
panda$core$Bit $tmp1495 = panda$core$Bit$init$builtin_bit($tmp1494 == NULL);
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block3; else goto block4;
block3:;
// line 598
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 600
panda$collections$Array* $tmp1498 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1498);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
*(&local2) = $tmp1498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// line 601
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
// line 602
panda$core$Int64 $tmp1508 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1509 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1508);
org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1509, &$s1511);
panda$core$Bit $tmp1512 = panda$core$Bit$init$builtin_bit(!$tmp1510.nonnull);
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block5; else goto block6;
block5:;
// line 603
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
// line 605
org$pandalanguage$pandac$ASTNode* $tmp1516 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
*(&local3) = $tmp1516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
// line 606
org$pandalanguage$pandac$ASTNode* $tmp1518 = *(&local3);
panda$core$Bit $tmp1519 = panda$core$Bit$init$builtin_bit($tmp1518 == NULL);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block7; else goto block8;
block7:;
// line 607
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
// line 609
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
// line 611
panda$collections$Array* $tmp1534 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1534);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1535 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
*(&local4) = $tmp1534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// line 612
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
// line 613
panda$core$Int64 $tmp1543 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1544 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1543);
org$pandalanguage$pandac$parser$Token$nullable $tmp1545 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1544, &$s1546);
panda$core$Bit $tmp1547 = panda$core$Bit$init$builtin_bit(!$tmp1545.nonnull);
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block9; else goto block10;
block9:;
// line 614
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1549 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 616
org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1551 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
*(&local5) = $tmp1550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
// line 617
org$pandalanguage$pandac$ASTNode* $tmp1552 = *(&local5);
panda$core$Bit $tmp1553 = panda$core$Bit$init$builtin_bit($tmp1552 == NULL);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block11; else goto block12;
block11:;
// line 618
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
// line 620
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
// line 627
panda$core$Int64 $tmp1566 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1567 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1566);
org$pandalanguage$pandac$parser$Token$nullable $tmp1568 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1567, &$s1569);
panda$core$Bit $tmp1570 = panda$core$Bit$init$builtin_bit(!$tmp1568.nonnull);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block1; else goto block2;
block1:;
// line 628
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 631
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
// line 632
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
// line 633
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
// line 634
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
// line 635
org$pandalanguage$regex$RegexParser** $tmp1622 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1623 = *$tmp1622;
org$pandalanguage$pandac$ASTNode* $tmp1624 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q($tmp1623);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1625 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
*(&local1) = $tmp1624;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// line 636
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
// line 637
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
// line 638
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
// line 639
org$pandalanguage$pandac$ASTNode* $tmp1665 = *(&local1);
panda$core$Bit $tmp1666 = panda$core$Bit$init$builtin_bit($tmp1665 == NULL);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block3; else goto block4;
block3:;
// line 640
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1668 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 642
panda$core$Int64 $tmp1669 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1670 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1669);
org$pandalanguage$pandac$parser$Token$nullable $tmp1671 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1670, &$s1672);
panda$core$Bit $tmp1673 = panda$core$Bit$init$builtin_bit(!$tmp1671.nonnull);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block5; else goto block6;
block5:;
// line 643
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1675 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 645
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1676 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1677 = *$tmp1676;
panda$core$Bit $tmp1678 = panda$core$Bit$init$builtin_bit($tmp1677 != NULL);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block7; else goto block8;
block7:;
// line 647
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1680 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1681 = *$tmp1680;
$fn1683 $tmp1682 = ($fn1683) $tmp1681->$class->vtable[7];
$tmp1682($tmp1681);
// line 648
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1684 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1685 = *$tmp1684;
$fn1687 $tmp1686 = ($fn1687) $tmp1685->$class->vtable[7];
$tmp1686($tmp1685);
// line 650
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
// line 653
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
// line 662
org$pandalanguage$pandac$parser$Token $tmp1710 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1710;
// line 663
org$pandalanguage$pandac$parser$Token $tmp1711 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1712 = $tmp1711.kind;
panda$core$Int64 $tmp1713 = $tmp1712.$rawValue;
panda$core$Int64 $tmp1714 = (panda$core$Int64) {49};
panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1713, $tmp1714);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block2; else goto block3;
block2:;
// line 665
org$pandalanguage$pandac$parser$Token $tmp1717 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1718 = $tmp1717.kind;
*(&local1) = $tmp1718;
// line 666
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
// line 667
org$pandalanguage$pandac$parser$Token $tmp1744 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1744);
// line 668
org$pandalanguage$pandac$ASTNode* $tmp1745 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
return $tmp1745;
block11:;
// line 670
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
// line 673
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
// line 676
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
// line 679
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
// line 682
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
// line 685
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
// line 688
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
// line 691
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
// line 694
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
// line 697
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
// line 700
org$pandalanguage$pandac$parser$Token $tmp1845 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1845);
// line 701
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
// line 704
org$pandalanguage$pandac$parser$Token $tmp1850 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1850);
// line 705
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
// line 708
org$pandalanguage$pandac$parser$Token $tmp1855 = *(&local0);
panda$core$String* $tmp1856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1855);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1857 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
*(&local4) = $tmp1856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
// line 709
panda$core$String* $tmp1858 = *(&local4);
panda$core$Bit $tmp1859 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1858, &$s1860);
bool $tmp1861 = $tmp1859.value;
if ($tmp1861) goto block37; else goto block39;
block37:;
// line 710
panda$core$Int64 $tmp1862 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1863 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1862);
org$pandalanguage$pandac$parser$Token$nullable $tmp1864 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1863, &$s1865);
// line 711
org$pandalanguage$pandac$ASTNode* $tmp1866 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1867 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
*(&local5) = $tmp1866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// line 712
org$pandalanguage$pandac$ASTNode* $tmp1868 = *(&local5);
panda$core$Bit $tmp1869 = panda$core$Bit$init$builtin_bit($tmp1868 == NULL);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block40; else goto block41;
block40:;
// line 713
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
// line 715
panda$core$Int64 $tmp1873 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1874 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1873);
org$pandalanguage$pandac$parser$Token$nullable $tmp1875 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1874, &$s1876);
// line 716
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
// line 718
panda$core$String* $tmp1884 = *(&local4);
panda$core$Bit $tmp1885 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1884, &$s1886);
bool $tmp1887 = $tmp1885.value;
if ($tmp1887) goto block42; else goto block43;
block42:;
// line 719
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
// line 721
org$pandalanguage$pandac$parser$Token $tmp1893 = *(&local0);
panda$core$String* $tmp1894 = *(&local4);
panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1896, $tmp1894);
panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1898);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1893, $tmp1897);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1895));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// line 722
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
// line 725
org$pandalanguage$pandac$parser$Token $tmp1906 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1906);
// line 726
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
// line 729
org$pandalanguage$pandac$parser$Token $tmp1911 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1911);
// line 730
org$pandalanguage$pandac$ASTNode* $tmp1912 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
return $tmp1912;
block48:;
// line 733
org$pandalanguage$pandac$parser$Token $tmp1913 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp1914 = *(&local0);
panda$core$String* $tmp1915 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1914);
panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, $tmp1915);
panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1919);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1913, $tmp1918);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
// line 734
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp1920 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1922 = (panda$core$Int64) {661};
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
// line 741
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
// line 743
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
// line 746
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local1);
panda$core$String* $tmp1949 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp1948);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1950 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
*(&local3) = $tmp1949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
// line 747
panda$core$String* $tmp1951 = *(&local3);
panda$core$Bit $tmp1952 = panda$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block6; else goto block7;
block6:;
// line 748
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
// line 750
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
// line 753
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp1964 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1966 = (panda$core$Int64) {740};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token local1;
// line 764
org$pandalanguage$pandac$parser$Token $tmp1969 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1969;
// line 765
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
// line 772
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
// line 775
org$pandalanguage$pandac$parser$Token $tmp2044 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2044;
// line 776
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
// line 777
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2056));
return &$s2056;
block29:;
// line 1
// line 780
org$pandalanguage$pandac$parser$Token $tmp2057 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2057);
// line 781
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
// line 785
panda$core$Int64 $tmp2062 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2063 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2062);
org$pandalanguage$pandac$parser$Token$nullable $tmp2064 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2063, &$s2065);
panda$core$Bit $tmp2066 = panda$core$Bit$init$builtin_bit(!$tmp2064.nonnull);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block32; else goto block33;
block32:;
// line 786
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block33:;
// line 788
panda$core$Int64 $tmp2068 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp2069 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2068);
org$pandalanguage$pandac$parser$Token$nullable $tmp2070 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2069);
panda$core$Bit $tmp2071 = panda$core$Bit$init$builtin_bit($tmp2070.nonnull);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block34; else goto block35;
block34:;
// line 789
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2073));
return &$s2073;
block35:;
// line 791
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2074));
return &$s2074;
block31:;
// line 794
org$pandalanguage$pandac$parser$Token $tmp2075 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2076 = *(&local0);
panda$core$String* $tmp2077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2076);
panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2079, $tmp2077);
panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2081);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp2075, $tmp2080);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// line 796
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2082 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2084 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2085, $tmp2084, &$s2086);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 802
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
// line 810
panda$core$Int64 $tmp2089 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2090 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2089);
org$pandalanguage$pandac$parser$Token$nullable $tmp2091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2090, &$s2092);
*(&local0) = $tmp2091;
// line 811
org$pandalanguage$pandac$parser$Token$nullable $tmp2093 = *(&local0);
panda$core$Bit $tmp2094 = panda$core$Bit$init$builtin_bit(!$tmp2093.nonnull);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block1; else goto block2;
block1:;
// line 812
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 814
panda$collections$Array* $tmp2096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2096);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2097 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
*(&local1) = $tmp2096;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
// line 815
panda$core$Int64 $tmp2098 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2099 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2098);
org$pandalanguage$pandac$parser$Token$nullable $tmp2100 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2099);
panda$core$Bit $tmp2101 = panda$core$Bit$init$builtin_bit(!$tmp2100.nonnull);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block3; else goto block4;
block3:;
// line 816
org$pandalanguage$pandac$ASTNode* $tmp2103 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2104 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
*(&local2) = $tmp2103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// line 817
org$pandalanguage$pandac$ASTNode* $tmp2105 = *(&local2);
panda$core$Bit $tmp2106 = panda$core$Bit$init$builtin_bit($tmp2105 == NULL);
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block5; else goto block6;
block5:;
// line 818
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
// line 820
panda$collections$Array* $tmp2110 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2111 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2110, ((panda$core$Object*) $tmp2111));
// line 821
goto block7;
block7:;
panda$core$Int64 $tmp2112 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2113 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2112);
org$pandalanguage$pandac$parser$Token$nullable $tmp2114 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2113);
panda$core$Bit $tmp2115 = panda$core$Bit$init$builtin_bit($tmp2114.nonnull);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block8; else goto block9;
block8:;
// line 822
org$pandalanguage$pandac$ASTNode* $tmp2117 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2118 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
*(&local2) = $tmp2117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// line 823
org$pandalanguage$pandac$ASTNode* $tmp2119 = *(&local2);
panda$core$Bit $tmp2120 = panda$core$Bit$init$builtin_bit($tmp2119 == NULL);
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block10; else goto block11;
block10:;
// line 824
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
// line 826
panda$collections$Array* $tmp2124 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2125 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2124, ((panda$core$Object*) $tmp2125));
goto block7;
block9:;
// line 828
panda$core$Int64 $tmp2126 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2127 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2126);
org$pandalanguage$pandac$parser$Token$nullable $tmp2128 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2127, &$s2129);
panda$core$Bit $tmp2130 = panda$core$Bit$init$builtin_bit(!$tmp2128.nonnull);
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block12; else goto block13;
block12:;
// line 829
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
// line 832
org$pandalanguage$pandac$parser$Token $tmp2135 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2135;
// line 833
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
// line 836
org$pandalanguage$pandac$parser$Token $tmp2151 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 837
panda$core$Int64 $tmp2152 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2153 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2152);
org$pandalanguage$pandac$parser$Token$nullable $tmp2154 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2153, &$s2155);
panda$core$Bit $tmp2156 = panda$core$Bit$init$builtin_bit(!$tmp2154.nonnull);
bool $tmp2157 = $tmp2156.value;
if ($tmp2157) goto block20; else goto block21;
block20:;
// line 838
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2158 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 840
panda$collections$Array* $tmp2159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2159);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2160 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
*(&local4) = $tmp2159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// line 841
panda$core$Int64 $tmp2161 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2162 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2161);
org$pandalanguage$pandac$parser$Token$nullable $tmp2163 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2162);
panda$core$Bit $tmp2164 = panda$core$Bit$init$builtin_bit(!$tmp2163.nonnull);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block22; else goto block23;
block22:;
// line 842
org$pandalanguage$pandac$ASTNode* $tmp2166 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2167 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
*(&local5) = $tmp2166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
// line 843
org$pandalanguage$pandac$ASTNode* $tmp2168 = *(&local5);
panda$core$Bit $tmp2169 = panda$core$Bit$init$builtin_bit($tmp2168 == NULL);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block24; else goto block25;
block24:;
// line 844
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
// line 846
panda$collections$Array* $tmp2174 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2175 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2174, ((panda$core$Object*) $tmp2175));
// line 847
goto block26;
block26:;
panda$core$Int64 $tmp2176 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2177 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2176);
org$pandalanguage$pandac$parser$Token$nullable $tmp2178 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2177);
panda$core$Bit $tmp2179 = panda$core$Bit$init$builtin_bit($tmp2178.nonnull);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block27; else goto block28;
block27:;
// line 848
org$pandalanguage$pandac$ASTNode* $tmp2181 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2182 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
*(&local5) = $tmp2181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
// line 849
org$pandalanguage$pandac$ASTNode* $tmp2183 = *(&local5);
panda$core$Bit $tmp2184 = panda$core$Bit$init$builtin_bit($tmp2183 == NULL);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block29; else goto block30;
block29:;
// line 850
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
// line 852
panda$collections$Array* $tmp2189 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2190 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2189, ((panda$core$Object*) $tmp2190));
goto block26;
block28:;
// line 854
panda$core$Int64 $tmp2191 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2192 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2191);
org$pandalanguage$pandac$parser$Token$nullable $tmp2193 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2192, &$s2194);
panda$core$Bit $tmp2195 = panda$core$Bit$init$builtin_bit(!$tmp2193.nonnull);
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block31; else goto block32;
block31:;
// line 855
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
// line 858
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 859
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
// line 860
org$pandalanguage$pandac$ASTNode* $tmp2209 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block35:;
// line 862
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
// line 863
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
// line 867
org$pandalanguage$pandac$parser$Token$nullable $tmp2222 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2222.value), &$s2223);
// line 868
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
// line 870
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
// line 875
org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2239.value), &$s2240);
// line 876
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
panda$core$Int64 $tmp2244 = (panda$core$Int64) {809};
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
// line 886
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 887
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
// line 888
org$pandalanguage$pandac$ASTNode* $tmp2258 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2259 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2259));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
*(&local0) = $tmp2258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
// line 889
org$pandalanguage$pandac$ASTNode* $tmp2260 = *(&local0);
panda$core$Bit $tmp2261 = panda$core$Bit$init$builtin_bit($tmp2260 == NULL);
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block4; else goto block5;
block4:;
// line 890
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
// line 894
panda$core$Int64 $tmp2264 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2265 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2264);
org$pandalanguage$pandac$parser$Token$nullable $tmp2266 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2265, &$s2267);
*(&local1) = $tmp2266;
// line 895
org$pandalanguage$pandac$parser$Token$nullable $tmp2268 = *(&local1);
panda$core$Bit $tmp2269 = panda$core$Bit$init$builtin_bit(!$tmp2268.nonnull);
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block6; else goto block7;
block6:;
// line 896
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2271 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 898
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
// line 899
goto block8;
block8:;
panda$core$Int64 $tmp2276 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp2277 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2276);
org$pandalanguage$pandac$parser$Token$nullable $tmp2278 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2277);
panda$core$Bit $tmp2279 = panda$core$Bit$init$builtin_bit($tmp2278.nonnull);
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block9; else goto block10;
block9:;
// line 900
panda$core$Int64 $tmp2281 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2281);
org$pandalanguage$pandac$parser$Token$nullable $tmp2283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2282, &$s2284);
*(&local3) = $tmp2283;
// line 901
org$pandalanguage$pandac$parser$Token$nullable $tmp2285 = *(&local3);
panda$core$Bit $tmp2286 = panda$core$Bit$init$builtin_bit(!$tmp2285.nonnull);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block11; else goto block12;
block11:;
// line 902
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
// line 904
panda$core$MutableString* $tmp2290 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp2290, &$s2291);
// line 905
panda$core$MutableString* $tmp2292 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp2293 = *(&local3);
panda$core$String* $tmp2294 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2293.value));
panda$core$MutableString$append$panda$core$String($tmp2292, $tmp2294);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
goto block8;
block10:;
// line 907
panda$core$MutableString* $tmp2295 = *(&local2);
panda$core$String* $tmp2296 = panda$core$MutableString$finish$R$panda$core$String($tmp2295);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp2297 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
*(&local4) = $tmp2296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
// line 908
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
// line 909
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
// line 912
bool $tmp2315 = param1.value;
if ($tmp2315) goto block15; else goto block16;
block15:;
// line 913
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 915
org$pandalanguage$pandac$parser$Token $tmp2316 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 916
panda$collections$Array* $tmp2317 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2317);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2318 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
*(&local5) = $tmp2317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
// line 917
panda$core$Bit $tmp2319 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2320 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2319);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2321 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
*(&local6) = $tmp2320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
// line 918
org$pandalanguage$pandac$ASTNode* $tmp2322 = *(&local6);
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit($tmp2322 == NULL);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block17; else goto block18;
block17:;
// line 919
bool $tmp2325 = param1.value;
if ($tmp2325) goto block19; else goto block20;
block19:;
// line 920
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 921
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
// line 923
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
// line 925
panda$collections$Array* $tmp2337 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2338 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2337, ((panda$core$Object*) $tmp2338));
// line 926
goto block21;
block21:;
panda$core$Int64 $tmp2339 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2340 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2339);
org$pandalanguage$pandac$parser$Token$nullable $tmp2341 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2340);
panda$core$Bit $tmp2342 = panda$core$Bit$init$builtin_bit($tmp2341.nonnull);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block22; else goto block23;
block22:;
// line 927
panda$core$Bit $tmp2344 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2345 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2344);
org$pandalanguage$pandac$ASTNode* $tmp2346 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
*(&local6) = $tmp2345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// line 928
org$pandalanguage$pandac$ASTNode* $tmp2347 = *(&local6);
panda$core$Bit $tmp2348 = panda$core$Bit$init$builtin_bit($tmp2347 == NULL);
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block24; else goto block25;
block24:;
// line 929
bool $tmp2350 = param1.value;
if ($tmp2350) goto block26; else goto block27;
block26:;
// line 930
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 931
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
// line 933
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
// line 935
panda$collections$Array* $tmp2362 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2362, ((panda$core$Object*) $tmp2363));
goto block21;
block23:;
// line 937
panda$core$Int64 $tmp2364 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2365 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2364);
org$pandalanguage$pandac$parser$Token$nullable $tmp2366 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2365, &$s2367);
panda$core$Bit $tmp2368 = panda$core$Bit$init$builtin_bit(!$tmp2366.nonnull);
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block28; else goto block29;
block28:;
// line 938
bool $tmp2370 = param1.value;
if ($tmp2370) goto block30; else goto block31;
block30:;
// line 939
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 940
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
// line 942
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
// line 944
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
// line 945
bool $tmp2390 = param1.value;
if ($tmp2390) goto block32; else goto block33;
block32:;
// line 946
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
// line 950
panda$core$Int64 $tmp2395 = (panda$core$Int64) {95};
org$pandalanguage$pandac$parser$Token$Kind $tmp2396 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2395);
org$pandalanguage$pandac$parser$Token$nullable $tmp2397 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2396);
panda$core$Bit $tmp2398 = panda$core$Bit$init$builtin_bit($tmp2397.nonnull);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block34; else goto block35;
block34:;
// line 951
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
// line 953
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
// line 967
org$pandalanguage$pandac$ASTNode* $tmp2410 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
*(&local0) = $tmp2410;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// line 968
org$pandalanguage$pandac$ASTNode* $tmp2412 = *(&local0);
panda$core$Bit $tmp2413 = panda$core$Bit$init$builtin_bit($tmp2412 == NULL);
bool $tmp2414 = $tmp2413.value;
if ($tmp2414) goto block1; else goto block2;
block1:;
// line 969
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 971
goto block3;
block3:;
// line 972
org$pandalanguage$pandac$parser$Token $tmp2416 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2416;
// line 973
org$pandalanguage$pandac$parser$Token $tmp2417 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2418 = $tmp2417.kind;
panda$core$Int64 $tmp2419 = $tmp2418.$rawValue;
panda$core$Int64 $tmp2420 = (panda$core$Int64) {104};
panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, $tmp2420);
bool $tmp2422 = $tmp2421.value;
if ($tmp2422) goto block6; else goto block7;
block6:;
// line 975
panda$collections$Stack** $tmp2423 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2424 = *$tmp2423;
panda$core$Bit $tmp2425 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2426;
$tmp2426 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2426->value = $tmp2425;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2424, ((panda$core$Object*) $tmp2426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
// line 976
panda$collections$Array* $tmp2427 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2427);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2428 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
*(&local2) = $tmp2427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
// line 977
panda$core$Int64 $tmp2429 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2430 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2429);
org$pandalanguage$pandac$parser$Token$nullable $tmp2431 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2430);
panda$core$Bit $tmp2432 = panda$core$Bit$init$builtin_bit(!$tmp2431.nonnull);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block8; else goto block9;
block8:;
// line 978
org$pandalanguage$pandac$ASTNode* $tmp2434 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2435 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
*(&local3) = $tmp2434;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// line 979
org$pandalanguage$pandac$ASTNode* $tmp2436 = *(&local3);
panda$core$Bit $tmp2437 = panda$core$Bit$init$builtin_bit($tmp2436 == NULL);
bool $tmp2438 = $tmp2437.value;
if ($tmp2438) goto block10; else goto block11;
block10:;
// line 980
panda$collections$Stack** $tmp2439 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2440 = *$tmp2439;
panda$core$Object* $tmp2441 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2440);
panda$core$Panda$unref$panda$core$Object$Q($tmp2441);
// line 981
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
// line 983
panda$collections$Array* $tmp2445 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2446 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2445, ((panda$core$Object*) $tmp2446));
// line 984
goto block12;
block12:;
panda$core$Int64 $tmp2447 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2448 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2447);
org$pandalanguage$pandac$parser$Token$nullable $tmp2449 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2448);
panda$core$Bit $tmp2450 = panda$core$Bit$init$builtin_bit($tmp2449.nonnull);
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block13; else goto block14;
block13:;
// line 985
org$pandalanguage$pandac$ASTNode* $tmp2452 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2453 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
*(&local3) = $tmp2452;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// line 986
org$pandalanguage$pandac$ASTNode* $tmp2454 = *(&local3);
panda$core$Bit $tmp2455 = panda$core$Bit$init$builtin_bit($tmp2454 == NULL);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block15; else goto block16;
block15:;
// line 987
panda$collections$Stack** $tmp2457 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2458 = *$tmp2457;
panda$core$Object* $tmp2459 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2458);
panda$core$Panda$unref$panda$core$Object$Q($tmp2459);
// line 988
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
// line 990
panda$collections$Array* $tmp2463 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2464 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2463, ((panda$core$Object*) $tmp2464));
goto block12;
block14:;
// line 992
panda$core$Int64 $tmp2465 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2466 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2465);
org$pandalanguage$pandac$parser$Token$nullable $tmp2467 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2466, &$s2468);
panda$core$Bit $tmp2469 = panda$core$Bit$init$builtin_bit(!$tmp2467.nonnull);
bool $tmp2470 = $tmp2469.value;
if ($tmp2470) goto block17; else goto block18;
block17:;
// line 993
panda$collections$Stack** $tmp2471 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2472 = *$tmp2471;
panda$core$Object* $tmp2473 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2472);
panda$core$Panda$unref$panda$core$Object$Q($tmp2473);
// line 994
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
// line 997
panda$collections$Stack** $tmp2478 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2479 = *$tmp2478;
panda$core$Object* $tmp2480 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2479);
panda$core$Panda$unref$panda$core$Object$Q($tmp2480);
// line 998
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
// line 1001
org$pandalanguage$pandac$ASTNode* $tmp2493 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2494 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
*(&local4) = $tmp2493;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
// line 1002
org$pandalanguage$pandac$ASTNode* $tmp2495 = *(&local4);
panda$core$Bit $tmp2496 = panda$core$Bit$init$builtin_bit($tmp2495 == NULL);
bool $tmp2497 = $tmp2496.value;
if ($tmp2497) goto block21; else goto block22;
block21:;
// line 1003
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
// line 1005
panda$core$Int64 $tmp2500 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2501 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2500);
org$pandalanguage$pandac$parser$Token$nullable $tmp2502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2501, &$s2503);
panda$core$Bit $tmp2504 = panda$core$Bit$init$builtin_bit(!$tmp2502.nonnull);
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block23; else goto block24;
block23:;
// line 1006
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
// line 1008
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
// line 1011
*(&local5) = ((panda$core$String*) NULL);
// line 1012
panda$core$Int64 $tmp2521 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2522 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2521);
org$pandalanguage$pandac$parser$Token$nullable $tmp2523 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2522);
panda$core$Bit $tmp2524 = panda$core$Bit$init$builtin_bit($tmp2523.nonnull);
bool $tmp2525 = $tmp2524.value;
if ($tmp2525) goto block27; else goto block29;
block27:;
// line 1013
panda$core$String* $tmp2527 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2526));
*(&local5) = &$s2526;
goto block28;
block29:;
// line 1
// line 1016
panda$core$String* $tmp2528 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$String* $tmp2529 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
*(&local5) = $tmp2528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// line 1017
panda$core$String* $tmp2530 = *(&local5);
panda$core$Bit $tmp2531 = panda$core$Bit$init$builtin_bit($tmp2530 == NULL);
bool $tmp2532 = $tmp2531.value;
if ($tmp2532) goto block30; else goto block31;
block30:;
// line 1018
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
// line 1021
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
// line 1024
org$pandalanguage$pandac$ASTNode* $tmp2546 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2547 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
*(&local6) = $tmp2546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// line 1025
org$pandalanguage$pandac$ASTNode* $tmp2548 = *(&local6);
panda$core$Bit $tmp2549 = panda$core$Bit$init$builtin_bit($tmp2548 == NULL);
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block34; else goto block35;
block34:;
// line 1026
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
// line 1028
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
// line 1033
org$pandalanguage$pandac$parser$Token $tmp2566 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2566);
// line 1034
org$pandalanguage$pandac$ASTNode* $tmp2567 = *(&local0);
panda$core$String* $tmp2568 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2567);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2569 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
*(&local7) = $tmp2568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// line 1035
panda$core$String* $tmp2570 = *(&local7);
panda$core$Bit $tmp2571 = panda$core$Bit$init$builtin_bit($tmp2570 != NULL);
bool $tmp2572 = $tmp2571.value;
if ($tmp2572) goto block38; else goto block39;
block38:;
// line 1036
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 1037
org$pandalanguage$pandac$parser$Token $tmp2573 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1040
panda$collections$Array* $tmp2574 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2574);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2575 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
*(&local8) = $tmp2574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// line 1041
panda$core$Bit $tmp2576 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2577 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2576);
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2578 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
*(&local9) = $tmp2577;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
// line 1042
org$pandalanguage$pandac$ASTNode* $tmp2579 = *(&local9);
panda$core$Bit $tmp2580 = panda$core$Bit$init$builtin_bit($tmp2579 == NULL);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block40; else goto block41;
block40:;
// line 1043
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1044
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
// line 1046
panda$collections$Array* $tmp2587 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2588 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2587, ((panda$core$Object*) $tmp2588));
// line 1047
goto block42;
block42:;
panda$core$Int64 $tmp2589 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2590 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2589);
org$pandalanguage$pandac$parser$Token$nullable $tmp2591 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2590);
panda$core$Bit $tmp2592 = panda$core$Bit$init$builtin_bit($tmp2591.nonnull);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block43; else goto block44;
block43:;
// line 1048
panda$core$Bit $tmp2594 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2595 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2594);
org$pandalanguage$pandac$ASTNode* $tmp2596 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
*(&local9) = $tmp2595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// line 1049
org$pandalanguage$pandac$ASTNode* $tmp2597 = *(&local9);
panda$core$Bit $tmp2598 = panda$core$Bit$init$builtin_bit($tmp2597 == NULL);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block45; else goto block46;
block45:;
// line 1050
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1051
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
// line 1053
panda$collections$Array* $tmp2605 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2606 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2605, ((panda$core$Object*) $tmp2606));
goto block42;
block44:;
// line 1055
panda$core$Int64 $tmp2607 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2608 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2607);
org$pandalanguage$pandac$parser$Token$nullable $tmp2609 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2608, &$s2610);
*(&local10) = $tmp2609;
// line 1056
org$pandalanguage$pandac$parser$Token$nullable $tmp2611 = *(&local10);
panda$core$Bit $tmp2612 = panda$core$Bit$init$builtin_bit(!$tmp2611.nonnull);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block47; else goto block48;
block47:;
// line 1057
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1058
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
// line 1087
// line 1088
panda$collections$Stack** $tmp2619 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2620 = *$tmp2619;
panda$core$Int64 $tmp2621 = (panda$core$Int64) {0};
panda$core$Object* $tmp2622 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2620, $tmp2621);
panda$core$Panda$unref$panda$core$Object$Q($tmp2622);
bool $tmp2623 = ((panda$core$Bit$wrapper*) $tmp2622)->value.value;
if ($tmp2623) goto block49; else goto block51;
block49:;
// line 1089
org$pandalanguage$pandac$parser$Token $tmp2624 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local12) = $tmp2624;
// line 1090
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
// line 1092
panda$core$Bit $tmp2637 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2637;
goto block52;
block56:;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {104};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block57; else goto block58;
block57:;
// line 1095
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
// line 1099
panda$core$Bit $tmp2662 = panda$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp2662;
goto block52;
block52:;
// line 1102
panda$core$Bit $tmp2663 = *(&local11);
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block62; else goto block63;
block62:;
// line 1103
org$pandalanguage$pandac$parser$Token $tmp2665 = *(&local12);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2665);
goto block63;
block63:;
goto block50;
block51:;
// line 1
// line 1107
panda$core$Bit $tmp2666 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2666;
goto block50;
block50:;
// line 1109
panda$core$Bit $tmp2667 = *(&local11);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block64; else goto block66;
block64:;
// line 1110
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1111
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
// line 1112
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
// line 1115
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1116
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
// line 1119
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
// line 1122
org$pandalanguage$pandac$parser$Token $tmp2692 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2692);
// line 1123
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
panda$core$Int64 $tmp2697 = (panda$core$Int64) {966};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2698, $tmp2697, &$s2699);
abort(); // unreachable
block67:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1133
org$pandalanguage$pandac$ASTNode* $tmp2700 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
*(&local0) = $tmp2700;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
// line 1134
org$pandalanguage$pandac$ASTNode* $tmp2702 = *(&local0);
panda$core$Bit $tmp2703 = panda$core$Bit$init$builtin_bit($tmp2702 == NULL);
bool $tmp2704 = $tmp2703.value;
if ($tmp2704) goto block1; else goto block2;
block1:;
// line 1135
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2705 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1137
goto block3;
block3:;
// line 1138
panda$core$Int64 $tmp2706 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2707 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2706);
org$pandalanguage$pandac$parser$Token$nullable $tmp2708 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2707);
*(&local1) = $tmp2708;
// line 1139
org$pandalanguage$pandac$parser$Token$nullable $tmp2709 = *(&local1);
panda$core$Bit $tmp2710 = panda$core$Bit$init$builtin_bit(!$tmp2709.nonnull);
bool $tmp2711 = $tmp2710.value;
if ($tmp2711) goto block5; else goto block6;
block5:;
// line 1140
goto block4;
block6:;
// line 1142
org$pandalanguage$pandac$ASTNode* $tmp2712 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2713 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
*(&local2) = $tmp2712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
// line 1143
org$pandalanguage$pandac$ASTNode* $tmp2714 = *(&local2);
panda$core$Bit $tmp2715 = panda$core$Bit$init$builtin_bit($tmp2714 == NULL);
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block7; else goto block8;
block7:;
// line 1144
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
// line 1146
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
// line 1148
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
// line 1155
org$pandalanguage$pandac$parser$Token $tmp2731 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2731;
// line 1156
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
// line 1158
org$pandalanguage$pandac$ASTNode* $tmp2744 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2745 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
*(&local1) = $tmp2744;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
// line 1159
org$pandalanguage$pandac$ASTNode* $tmp2746 = *(&local1);
panda$core$Bit $tmp2747 = panda$core$Bit$init$builtin_bit($tmp2746 == NULL);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block6; else goto block7;
block6:;
// line 1160
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2749 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1162
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
// line 1165
org$pandalanguage$pandac$parser$Token $tmp2758 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2758);
// line 1166
org$pandalanguage$pandac$ASTNode* $tmp2759 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
return $tmp2759;
block1:;
panda$core$Bit $tmp2760 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2761 = $tmp2760.value;
if ($tmp2761) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2762 = (panda$core$Int64) {1154};
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
// line 1178
org$pandalanguage$pandac$ASTNode* $tmp2765 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2766 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
*(&local0) = $tmp2765;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// line 1179
org$pandalanguage$pandac$ASTNode* $tmp2767 = *(&local0);
panda$core$Bit $tmp2768 = panda$core$Bit$init$builtin_bit($tmp2767 == NULL);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block1; else goto block2;
block1:;
// line 1180
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1182
goto block3;
block3:;
// line 1183
org$pandalanguage$pandac$parser$Token $tmp2771 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2771;
// line 1184
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
// line 1187
org$pandalanguage$pandac$ASTNode* $tmp2796 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2797 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local2) = $tmp2796;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
// line 1188
org$pandalanguage$pandac$ASTNode* $tmp2798 = *(&local2);
panda$core$Bit $tmp2799 = panda$core$Bit$init$builtin_bit($tmp2798 == NULL);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block14; else goto block15;
block14:;
// line 1189
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
// line 1191
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
// line 1194
org$pandalanguage$pandac$parser$Token $tmp2816 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2816;
// line 1195
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
// line 1197
org$pandalanguage$pandac$ASTNode* $tmp2828 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2829 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
*(&local4) = $tmp2828;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// line 1198
org$pandalanguage$pandac$ASTNode* $tmp2830 = *(&local4);
panda$core$Bit $tmp2831 = panda$core$Bit$init$builtin_bit($tmp2830 == NULL);
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block21; else goto block22;
block21:;
// line 1199
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
// line 1201
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
// line 1204
org$pandalanguage$pandac$parser$Token $tmp2845 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2845);
// line 1205
org$pandalanguage$pandac$parser$Token $tmp2846 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2846);
// line 1206
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
// line 1210
org$pandalanguage$pandac$parser$Token $tmp2849 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2849);
// line 1211
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
panda$core$Int64 $tmp2854 = (panda$core$Int64) {1177};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2855, $tmp2854, &$s2856);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1222
org$pandalanguage$pandac$ASTNode* $tmp2857 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2858 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
*(&local0) = $tmp2857;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// line 1223
org$pandalanguage$pandac$ASTNode* $tmp2859 = *(&local0);
panda$core$Bit $tmp2860 = panda$core$Bit$init$builtin_bit($tmp2859 == NULL);
bool $tmp2861 = $tmp2860.value;
if ($tmp2861) goto block1; else goto block2;
block1:;
// line 1224
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1226
goto block3;
block3:;
// line 1227
org$pandalanguage$pandac$parser$Token $tmp2863 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2863;
// line 1228
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
// line 1230
org$pandalanguage$pandac$ASTNode* $tmp2876 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2877 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
*(&local2) = $tmp2876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
// line 1231
org$pandalanguage$pandac$ASTNode* $tmp2878 = *(&local2);
panda$core$Bit $tmp2879 = panda$core$Bit$init$builtin_bit($tmp2878 == NULL);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block10; else goto block11;
block10:;
// line 1232
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
// line 1234
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
// line 1237
org$pandalanguage$pandac$parser$Token $tmp2893 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2893);
// line 1238
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
panda$core$Int64 $tmp2898 = (panda$core$Int64) {1221};
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
// line 1249
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1250
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
// line 1252
org$pandalanguage$pandac$ASTNode* $tmp2910 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2910));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1255
org$pandalanguage$pandac$ASTNode* $tmp2911 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2912 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
*(&local0) = $tmp2911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
// line 1256
org$pandalanguage$pandac$ASTNode* $tmp2913 = *(&local0);
panda$core$Bit $tmp2914 = panda$core$Bit$init$builtin_bit($tmp2913 == NULL);
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block5; else goto block6;
block5:;
// line 1257
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2916 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1261
org$pandalanguage$pandac$parser$Token $tmp2917 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2917;
// line 1262
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
// line 1264
org$pandalanguage$pandac$parser$Token $tmp2927 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp2927;
// line 1265
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1266
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
// line 1268
org$pandalanguage$pandac$ASTNode* $tmp2963 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2964));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
*(&local3) = $tmp2963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
// line 1269
org$pandalanguage$pandac$ASTNode* $tmp2965 = *(&local3);
panda$core$Bit $tmp2966 = panda$core$Bit$init$builtin_bit($tmp2965 == NULL);
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block20; else goto block21;
block20:;
// line 1270
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
// line 1274
org$pandalanguage$pandac$ASTNode* $tmp2970 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block18;
block18:;
// line 1276
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1277
panda$core$Int64 $tmp2971 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2972 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2971);
org$pandalanguage$pandac$parser$Token$nullable $tmp2973 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2972);
panda$core$Bit $tmp2974 = panda$core$Bit$init$builtin_bit($tmp2973.nonnull);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block22; else goto block24;
block22:;
// line 1278
org$pandalanguage$pandac$ASTNode* $tmp2976 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2977 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2977));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
*(&local6) = $tmp2976;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
// line 1279
org$pandalanguage$pandac$ASTNode* $tmp2978 = *(&local6);
panda$core$Bit $tmp2979 = panda$core$Bit$init$builtin_bit($tmp2978 == NULL);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block25; else goto block26;
block25:;
// line 1280
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
// line 1284
org$pandalanguage$pandac$ASTNode* $tmp2984 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1286
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
// line 1290
org$pandalanguage$pandac$parser$Token $tmp3005 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3005);
// line 1291
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
panda$core$Int64 $tmp3010 = (panda$core$Int64) {1248};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3011, $tmp3010, &$s3012);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1301
org$pandalanguage$pandac$ASTNode* $tmp3013 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
*(&local0) = $tmp3013;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
// line 1302
org$pandalanguage$pandac$ASTNode* $tmp3015 = *(&local0);
panda$core$Bit $tmp3016 = panda$core$Bit$init$builtin_bit($tmp3015 == NULL);
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block1; else goto block2;
block1:;
// line 1303
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3018 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1305
goto block3;
block3:;
// line 1306
org$pandalanguage$pandac$parser$Token $tmp3019 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3019;
// line 1307
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
// line 1316
org$pandalanguage$pandac$ASTNode* $tmp3047 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3048 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3048));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
*(&local2) = $tmp3047;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
// line 1317
org$pandalanguage$pandac$ASTNode* $tmp3049 = *(&local2);
panda$core$Bit $tmp3050 = panda$core$Bit$init$builtin_bit($tmp3049 == NULL);
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block15; else goto block16;
block15:;
// line 1318
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
// line 1320
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
// line 1323
org$pandalanguage$pandac$parser$Token $tmp3064 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3064);
// line 1324
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
panda$core$Int64 $tmp3069 = (panda$core$Int64) {1300};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3070, $tmp3069, &$s3071);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1334
org$pandalanguage$pandac$ASTNode* $tmp3072 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3073 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
*(&local0) = $tmp3072;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
// line 1335
org$pandalanguage$pandac$ASTNode* $tmp3074 = *(&local0);
panda$core$Bit $tmp3075 = panda$core$Bit$init$builtin_bit($tmp3074 == NULL);
bool $tmp3076 = $tmp3075.value;
if ($tmp3076) goto block1; else goto block2;
block1:;
// line 1336
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3077 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1338
goto block3;
block3:;
// line 1339
org$pandalanguage$pandac$parser$Token $tmp3078 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3078;
// line 1340
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
// line 1342
org$pandalanguage$pandac$ASTNode* $tmp3088 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3089 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
*(&local2) = $tmp3088;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
// line 1343
org$pandalanguage$pandac$ASTNode* $tmp3090 = *(&local2);
panda$core$Bit $tmp3091 = panda$core$Bit$init$builtin_bit($tmp3090 == NULL);
bool $tmp3092 = $tmp3091.value;
if ($tmp3092) goto block9; else goto block10;
block9:;
// line 1344
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
// line 1346
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
// line 1349
org$pandalanguage$pandac$parser$Token $tmp3105 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3105);
// line 1350
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
panda$core$Int64 $tmp3110 = (panda$core$Int64) {1333};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3111, $tmp3110, &$s3112);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1360
org$pandalanguage$pandac$ASTNode* $tmp3113 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
*(&local0) = $tmp3113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
// line 1361
org$pandalanguage$pandac$ASTNode* $tmp3115 = *(&local0);
panda$core$Bit $tmp3116 = panda$core$Bit$init$builtin_bit($tmp3115 == NULL);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block1; else goto block2;
block1:;
// line 1362
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3118));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1364
goto block3;
block3:;
// line 1365
panda$core$Int64 $tmp3119 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3120 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3119);
org$pandalanguage$pandac$parser$Token$nullable $tmp3121 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3120);
*(&local1) = $tmp3121;
// line 1366
org$pandalanguage$pandac$parser$Token$nullable $tmp3122 = *(&local1);
panda$core$Bit $tmp3123 = panda$core$Bit$init$builtin_bit(!$tmp3122.nonnull);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block5; else goto block6;
block5:;
// line 1367
goto block4;
block6:;
// line 1369
org$pandalanguage$pandac$ASTNode* $tmp3125 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
*(&local2) = $tmp3125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
// line 1370
org$pandalanguage$pandac$ASTNode* $tmp3127 = *(&local2);
panda$core$Bit $tmp3128 = panda$core$Bit$init$builtin_bit($tmp3127 == NULL);
bool $tmp3129 = $tmp3128.value;
if ($tmp3129) goto block7; else goto block8;
block7:;
// line 1371
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
// line 1373
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
// line 1375
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
// line 1382
panda$core$Int64 $tmp3144 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3145 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3144);
org$pandalanguage$pandac$parser$Token$nullable $tmp3146 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3145, &$s3147);
*(&local0) = $tmp3146;
// line 1383
org$pandalanguage$pandac$parser$Token$nullable $tmp3148 = *(&local0);
panda$core$Bit $tmp3149 = panda$core$Bit$init$builtin_bit(!$tmp3148.nonnull);
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block1; else goto block2;
block1:;
// line 1384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1386
org$pandalanguage$pandac$ASTNode* $tmp3151 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3152 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
*(&local1) = $tmp3151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
// line 1387
org$pandalanguage$pandac$ASTNode* $tmp3153 = *(&local1);
panda$core$Bit $tmp3154 = panda$core$Bit$init$builtin_bit($tmp3153 == NULL);
bool $tmp3155 = $tmp3154.value;
if ($tmp3155) goto block3; else goto block4;
block3:;
// line 1388
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3156 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1390
panda$collections$ImmutableArray* $tmp3157 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3158 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
*(&local2) = $tmp3157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
// line 1391
panda$collections$ImmutableArray* $tmp3159 = *(&local2);
panda$core$Bit $tmp3160 = panda$core$Bit$init$builtin_bit($tmp3159 == NULL);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block5; else goto block6;
block5:;
// line 1392
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
// line 1394
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1395
panda$core$Int64 $tmp3164 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3165 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3164);
org$pandalanguage$pandac$parser$Token$nullable $tmp3166 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3165);
panda$core$Bit $tmp3167 = panda$core$Bit$init$builtin_bit($tmp3166.nonnull);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block7; else goto block9;
block7:;
// line 1396
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
// line 1397
org$pandalanguage$pandac$ASTNode* $tmp3180 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3181 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
*(&local3) = $tmp3180;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
// line 1398
org$pandalanguage$pandac$ASTNode* $tmp3182 = *(&local3);
panda$core$Bit $tmp3183 = panda$core$Bit$init$builtin_bit($tmp3182 == NULL);
bool $tmp3184 = $tmp3183.value;
if ($tmp3184) goto block13; else goto block14;
block13:;
// line 1399
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
// line 1403
org$pandalanguage$pandac$ASTNode* $tmp3188 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3189 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
*(&local3) = $tmp3188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
// line 1404
org$pandalanguage$pandac$ASTNode* $tmp3190 = *(&local3);
panda$core$Bit $tmp3191 = panda$core$Bit$init$builtin_bit($tmp3190 == NULL);
bool $tmp3192 = $tmp3191.value;
if ($tmp3192) goto block15; else goto block16;
block15:;
// line 1405
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
// line 1410
org$pandalanguage$pandac$ASTNode* $tmp3196 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1412
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

// line 1419
panda$core$Int64 $tmp3207 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3208 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3207);
org$pandalanguage$pandac$parser$Token$nullable $tmp3209 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3208, &$s3210);
panda$core$Bit $tmp3211 = panda$core$Bit$init$builtin_bit(!$tmp3209.nonnull);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block1; else goto block2;
block1:;
// line 1420
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1422
panda$core$Bit $tmp3213 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3214 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
return $tmp3214;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1429
panda$core$Int64 $tmp3215 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3216 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3215);
org$pandalanguage$pandac$parser$Token$nullable $tmp3217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3216, &$s3218);
*(&local0) = $tmp3217;
// line 1430
org$pandalanguage$pandac$parser$Token$nullable $tmp3219 = *(&local0);
panda$core$Bit $tmp3220 = panda$core$Bit$init$builtin_bit(!$tmp3219.nonnull);
bool $tmp3221 = $tmp3220.value;
if ($tmp3221) goto block1; else goto block2;
block1:;
// line 1431
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1433
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
// line 1434
org$pandalanguage$pandac$ASTNode* $tmp3233 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3234 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
*(&local1) = $tmp3233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
// line 1435
org$pandalanguage$pandac$ASTNode* $tmp3235 = *(&local1);
panda$core$Bit $tmp3236 = panda$core$Bit$init$builtin_bit($tmp3235 == NULL);
bool $tmp3237 = $tmp3236.value;
if ($tmp3237) goto block5; else goto block6;
block5:;
// line 1436
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1438
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
// line 1440
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
// line 1447
panda$core$Int64 $tmp3253 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3254 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3253);
org$pandalanguage$pandac$parser$Token$nullable $tmp3255 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3254, &$s3256);
*(&local0) = $tmp3255;
// line 1448
org$pandalanguage$pandac$parser$Token$nullable $tmp3257 = *(&local0);
panda$core$Bit $tmp3258 = panda$core$Bit$init$builtin_bit(!$tmp3257.nonnull);
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block1; else goto block2;
block1:;
// line 1449
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1451
org$pandalanguage$pandac$ASTNode* $tmp3260 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3260));
*(&local1) = $tmp3260;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3260));
// line 1452
org$pandalanguage$pandac$ASTNode* $tmp3262 = *(&local1);
panda$core$Bit $tmp3263 = panda$core$Bit$init$builtin_bit($tmp3262 == NULL);
bool $tmp3264 = $tmp3263.value;
if ($tmp3264) goto block3; else goto block4;
block3:;
// line 1453
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3265 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1455
panda$core$Int64 $tmp3266 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3267 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3266);
org$pandalanguage$pandac$parser$Token$nullable $tmp3268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3267, &$s3269);
panda$core$Bit $tmp3270 = panda$core$Bit$init$builtin_bit(!$tmp3268.nonnull);
bool $tmp3271 = $tmp3270.value;
if ($tmp3271) goto block5; else goto block6;
block5:;
// line 1456
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3272 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3272));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1458
org$pandalanguage$pandac$ASTNode* $tmp3273 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3274 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
*(&local2) = $tmp3273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
// line 1459
org$pandalanguage$pandac$ASTNode* $tmp3275 = *(&local2);
panda$core$Bit $tmp3276 = panda$core$Bit$init$builtin_bit($tmp3275 == NULL);
bool $tmp3277 = $tmp3276.value;
if ($tmp3277) goto block7; else goto block8;
block7:;
// line 1460
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
// line 1462
panda$collections$ImmutableArray* $tmp3280 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3281 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
*(&local3) = $tmp3280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// line 1463
panda$collections$ImmutableArray* $tmp3282 = *(&local3);
panda$core$Bit $tmp3283 = panda$core$Bit$init$builtin_bit($tmp3282 == NULL);
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block9; else goto block10;
block9:;
// line 1464
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
// line 1466
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
// line 1473
panda$core$Int64 $tmp3298 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3299 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3298);
org$pandalanguage$pandac$parser$Token$nullable $tmp3300 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3299, &$s3301);
*(&local0) = $tmp3300;
// line 1474
org$pandalanguage$pandac$parser$Token$nullable $tmp3302 = *(&local0);
panda$core$Bit $tmp3303 = panda$core$Bit$init$builtin_bit(!$tmp3302.nonnull);
bool $tmp3304 = $tmp3303.value;
if ($tmp3304) goto block1; else goto block2;
block1:;
// line 1475
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1477
org$pandalanguage$pandac$ASTNode* $tmp3305 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3306 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
*(&local1) = $tmp3305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
// line 1478
org$pandalanguage$pandac$ASTNode* $tmp3307 = *(&local1);
panda$core$Bit $tmp3308 = panda$core$Bit$init$builtin_bit($tmp3307 == NULL);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block3; else goto block4;
block3:;
// line 1479
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1481
panda$collections$ImmutableArray* $tmp3311 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3312 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
*(&local2) = $tmp3311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
// line 1482
panda$collections$ImmutableArray* $tmp3313 = *(&local2);
panda$core$Bit $tmp3314 = panda$core$Bit$init$builtin_bit($tmp3313 == NULL);
bool $tmp3315 = $tmp3314.value;
if ($tmp3315) goto block5; else goto block6;
block5:;
// line 1483
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
// line 1485
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
// line 1492
panda$core$Int64 $tmp3326 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3327 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3326);
org$pandalanguage$pandac$parser$Token$nullable $tmp3328 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3327, &$s3329);
*(&local0) = $tmp3328;
// line 1493
org$pandalanguage$pandac$parser$Token$nullable $tmp3330 = *(&local0);
panda$core$Bit $tmp3331 = panda$core$Bit$init$builtin_bit(!$tmp3330.nonnull);
bool $tmp3332 = $tmp3331.value;
if ($tmp3332) goto block1; else goto block2;
block1:;
// line 1494
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1496
panda$collections$ImmutableArray* $tmp3333 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
*(&local1) = $tmp3333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
// line 1497
panda$collections$ImmutableArray* $tmp3335 = *(&local1);
panda$core$Bit $tmp3336 = panda$core$Bit$init$builtin_bit($tmp3335 == NULL);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block3; else goto block4;
block3:;
// line 1498
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3338 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3338));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1500
panda$core$Int64 $tmp3339 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3340 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3339);
org$pandalanguage$pandac$parser$Token$nullable $tmp3341 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3340, &$s3342);
panda$core$Bit $tmp3343 = panda$core$Bit$init$builtin_bit(!$tmp3341.nonnull);
bool $tmp3344 = $tmp3343.value;
if ($tmp3344) goto block5; else goto block6;
block5:;
// line 1501
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3345 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1503
org$pandalanguage$pandac$ASTNode* $tmp3346 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3347 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
*(&local2) = $tmp3346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
// line 1504
org$pandalanguage$pandac$ASTNode* $tmp3348 = *(&local2);
panda$core$Bit $tmp3349 = panda$core$Bit$init$builtin_bit($tmp3348 == NULL);
bool $tmp3350 = $tmp3349.value;
if ($tmp3350) goto block7; else goto block8;
block7:;
// line 1505
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
// line 1507
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
// line 1514
panda$core$Int64 $tmp3361 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3362 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3361);
org$pandalanguage$pandac$parser$Token$nullable $tmp3363 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3362, &$s3364);
*(&local0) = $tmp3363;
// line 1515
org$pandalanguage$pandac$parser$Token$nullable $tmp3365 = *(&local0);
panda$core$Bit $tmp3366 = panda$core$Bit$init$builtin_bit(!$tmp3365.nonnull);
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block1; else goto block2;
block1:;
// line 1516
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1518
panda$collections$ImmutableArray* $tmp3368 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3369 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3369));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
*(&local1) = $tmp3368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
// line 1519
panda$collections$ImmutableArray* $tmp3370 = *(&local1);
panda$core$Bit $tmp3371 = panda$core$Bit$init$builtin_bit($tmp3370 == NULL);
bool $tmp3372 = $tmp3371.value;
if ($tmp3372) goto block3; else goto block4;
block3:;
// line 1520
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1522
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
// line 1529
panda$core$Int64 $tmp3380 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3381 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3380);
org$pandalanguage$pandac$parser$Token$nullable $tmp3382 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3381, &$s3383);
*(&local0) = $tmp3382;
// line 1530
org$pandalanguage$pandac$parser$Token$nullable $tmp3384 = *(&local0);
panda$core$Bit $tmp3385 = panda$core$Bit$init$builtin_bit(!$tmp3384.nonnull);
bool $tmp3386 = $tmp3385.value;
if ($tmp3386) goto block1; else goto block2;
block1:;
// line 1531
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1533
org$pandalanguage$pandac$ASTNode* $tmp3387 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3388 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
*(&local1) = $tmp3387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
// line 1534
org$pandalanguage$pandac$ASTNode* $tmp3389 = *(&local1);
panda$core$Bit $tmp3390 = panda$core$Bit$init$builtin_bit($tmp3389 == NULL);
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block3; else goto block4;
block3:;
// line 1535
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1537
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1538
panda$core$Int64 $tmp3393 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3394 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3393);
org$pandalanguage$pandac$parser$Token$nullable $tmp3395 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3394);
panda$core$Bit $tmp3396 = panda$core$Bit$init$builtin_bit($tmp3395.nonnull);
bool $tmp3397 = $tmp3396.value;
if ($tmp3397) goto block5; else goto block7;
block5:;
// line 1539
org$pandalanguage$pandac$ASTNode* $tmp3398 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3399 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3399));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
*(&local2) = $tmp3398;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
// line 1540
org$pandalanguage$pandac$ASTNode* $tmp3400 = *(&local2);
panda$core$Bit $tmp3401 = panda$core$Bit$init$builtin_bit($tmp3400 == NULL);
bool $tmp3402 = $tmp3401.value;
if ($tmp3402) goto block8; else goto block9;
block8:;
// line 1541
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
// line 1545
org$pandalanguage$pandac$ASTNode* $tmp3405 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1547
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
panda$collections$ImmutableArray* local3 = NULL;
panda$core$Bit* $tmp3414 = &param0->allowLambdas;
panda$core$Bit $tmp3415 = *$tmp3414;
bool $tmp3416 = $tmp3415.value;
if ($tmp3416) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3417 = (panda$core$Int64) {1555};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3418, $tmp3417, &$s3419);
abort(); // unreachable
block1:;
// line 1556
panda$core$Int64 $tmp3420 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3421 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3420);
org$pandalanguage$pandac$parser$Token$nullable $tmp3422 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3421, &$s3423);
*(&local0) = $tmp3422;
// line 1557
org$pandalanguage$pandac$parser$Token$nullable $tmp3424 = *(&local0);
panda$core$Bit $tmp3425 = panda$core$Bit$init$builtin_bit(!$tmp3424.nonnull);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block3; else goto block4;
block3:;
// line 1558
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1560
panda$core$Bit $tmp3427 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3428 = &param0->allowLambdas;
*$tmp3428 = $tmp3427;
// line 1561
panda$collections$Array* $tmp3429 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3429);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3430 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3430));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
*(&local1) = $tmp3429;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// line 1562
org$pandalanguage$pandac$ASTNode* $tmp3431 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3432 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3432));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
*(&local2) = $tmp3431;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
// line 1563
org$pandalanguage$pandac$ASTNode* $tmp3433 = *(&local2);
panda$core$Bit $tmp3434 = panda$core$Bit$init$builtin_bit($tmp3433 == NULL);
bool $tmp3435 = $tmp3434.value;
if ($tmp3435) goto block5; else goto block6;
block5:;
// line 1564
panda$core$Bit $tmp3436 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3437 = &param0->allowLambdas;
*$tmp3437 = $tmp3436;
// line 1565
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
// line 1567
panda$collections$Array* $tmp3440 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3441 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3440, ((panda$core$Object*) $tmp3441));
// line 1568
goto block7;
block7:;
panda$core$Int64 $tmp3442 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3443 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3442);
org$pandalanguage$pandac$parser$Token$nullable $tmp3444 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3443);
panda$core$Bit $tmp3445 = panda$core$Bit$init$builtin_bit($tmp3444.nonnull);
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block8; else goto block9;
block8:;
// line 1569
org$pandalanguage$pandac$ASTNode* $tmp3447 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
*(&local2) = $tmp3447;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
// line 1570
org$pandalanguage$pandac$ASTNode* $tmp3449 = *(&local2);
panda$core$Bit $tmp3450 = panda$core$Bit$init$builtin_bit($tmp3449 == NULL);
bool $tmp3451 = $tmp3450.value;
if ($tmp3451) goto block10; else goto block11;
block10:;
// line 1571
panda$core$Bit $tmp3452 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3453 = &param0->allowLambdas;
*$tmp3453 = $tmp3452;
// line 1572
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
// line 1574
panda$collections$Array* $tmp3456 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3457 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3456, ((panda$core$Object*) $tmp3457));
goto block7;
block9:;
// line 1576
panda$core$Bit $tmp3458 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3459 = &param0->allowLambdas;
*$tmp3459 = $tmp3458;
// line 1577
panda$collections$ImmutableArray* $tmp3460 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3461 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3461));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3460));
*(&local3) = $tmp3460;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3460));
// line 1578
panda$collections$ImmutableArray* $tmp3462 = *(&local3);
panda$core$Bit $tmp3463 = panda$core$Bit$init$builtin_bit($tmp3462 == NULL);
bool $tmp3464 = $tmp3463.value;
if ($tmp3464) goto block12; else goto block13;
block12:;
// line 1579
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3465 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3465));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
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
// line 1581
org$pandalanguage$pandac$ASTNode* $tmp3468 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3469 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token$nullable $tmp3470 = *(&local0);
org$pandalanguage$pandac$Position $tmp3471 = ((org$pandalanguage$pandac$parser$Token) $tmp3470.value).position;
panda$collections$Array* $tmp3472 = *(&local1);
panda$collections$ImmutableArray* $tmp3473 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3472);
panda$collections$ImmutableArray* $tmp3474 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3468, $tmp3469, $tmp3471, $tmp3473, $tmp3474);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3473));
panda$collections$ImmutableArray* $tmp3475 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3475));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3476 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3476));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3477 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3477));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3468;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token local6;
// line 1588
panda$core$Int64 $tmp3478 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3479 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3478);
org$pandalanguage$pandac$parser$Token$nullable $tmp3480 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3479, &$s3481);
*(&local0) = $tmp3480;
// line 1589
org$pandalanguage$pandac$parser$Token$nullable $tmp3482 = *(&local0);
panda$core$Bit $tmp3483 = panda$core$Bit$init$builtin_bit(!$tmp3482.nonnull);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block1; else goto block2;
block1:;
// line 1590
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1592
org$pandalanguage$pandac$ASTNode* $tmp3485 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3486 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3486));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
*(&local1) = $tmp3485;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
// line 1593
org$pandalanguage$pandac$ASTNode* $tmp3487 = *(&local1);
panda$core$Bit $tmp3488 = panda$core$Bit$init$builtin_bit($tmp3487 == NULL);
bool $tmp3489 = $tmp3488.value;
if ($tmp3489) goto block3; else goto block4;
block3:;
// line 1594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3490 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1596
panda$core$Int64 $tmp3491 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3492 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3491);
org$pandalanguage$pandac$parser$Token$nullable $tmp3493 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3492, &$s3494);
panda$core$Bit $tmp3495 = panda$core$Bit$init$builtin_bit(!$tmp3493.nonnull);
bool $tmp3496 = $tmp3495.value;
if ($tmp3496) goto block5; else goto block6;
block5:;
// line 1597
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3497));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1599
panda$collections$Array* $tmp3498 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3498);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3499));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
*(&local2) = $tmp3498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
// line 1600
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3500 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3500));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 1601
goto block7;
block7:;
// line 1602
org$pandalanguage$pandac$parser$Token $tmp3501 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3501;
// line 1603
org$pandalanguage$pandac$parser$Token $tmp3502 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3503 = $tmp3502.kind;
panda$core$Int64 $tmp3504 = $tmp3503.$rawValue;
panda$core$Int64 $tmp3505 = (panda$core$Int64) {101};
panda$core$Bit $tmp3506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3504, $tmp3505);
bool $tmp3507 = $tmp3506.value;
if ($tmp3507) goto block10; else goto block11;
block10:;
// line 1605
goto block8;
block11:;
panda$core$Int64 $tmp3508 = (panda$core$Int64) {40};
panda$core$Bit $tmp3509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3504, $tmp3508);
bool $tmp3510 = $tmp3509.value;
if ($tmp3510) goto block12; else goto block13;
block12:;
// line 1608
org$pandalanguage$pandac$ASTNode* $tmp3511 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3512 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
*(&local5) = $tmp3511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
// line 1609
org$pandalanguage$pandac$ASTNode* $tmp3513 = *(&local5);
panda$core$Bit $tmp3514 = panda$core$Bit$init$builtin_bit($tmp3513 == NULL);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block14; else goto block15;
block14:;
// line 1610
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3516 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3516));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3518));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3519 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3519));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1612
panda$collections$Array* $tmp3520 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3521 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3520, ((panda$core$Object*) $tmp3521));
org$pandalanguage$pandac$ASTNode* $tmp3522 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3522));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block13:;
panda$core$Int64 $tmp3523 = (panda$core$Int64) {41};
panda$core$Bit $tmp3524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3504, $tmp3523);
bool $tmp3525 = $tmp3524.value;
if ($tmp3525) goto block16; else goto block17;
block16:;
// line 1615
org$pandalanguage$pandac$parser$Token $tmp3526 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3526;
// line 1616
panda$collections$ImmutableArray* $tmp3527 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp3528 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3527));
*(&local3) = $tmp3527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3527));
// line 1617
panda$collections$ImmutableArray* $tmp3529 = *(&local3);
panda$core$Bit $tmp3530 = panda$core$Bit$init$builtin_bit($tmp3529 == NULL);
bool $tmp3531 = $tmp3530.value;
if ($tmp3531) goto block18; else goto block19;
block18:;
// line 1618
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3532 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3532));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3533 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3534 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3534));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1620
goto block8;
block17:;
// line 1623
org$pandalanguage$pandac$parser$Token $tmp3535 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1624
org$pandalanguage$pandac$parser$Token $tmp3536 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3537 = *(&local4);
panda$core$String* $tmp3538 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3537);
panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3540, $tmp3538);
panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3542);
panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3544, $tmp3541);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3536, $tmp3543);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3541));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3543));
// line 1626
goto block8;
block9:;
goto block7;
block8:;
// line 1630
panda$core$Int64 $tmp3545 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3546 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3545);
org$pandalanguage$pandac$parser$Token$nullable $tmp3547 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3546, &$s3548);
panda$core$Bit $tmp3549 = panda$core$Bit$init$builtin_bit(!$tmp3547.nonnull);
bool $tmp3550 = $tmp3549.value;
if ($tmp3550) goto block20; else goto block21;
block20:;
// line 1631
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3551 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3551));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3552 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3553 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3553));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 1633
panda$collections$ImmutableArray* $tmp3554 = *(&local3);
panda$core$Bit $tmp3555 = panda$core$Bit$init$builtin_bit($tmp3554 != NULL);
bool $tmp3556 = $tmp3555.value;
if ($tmp3556) goto block22; else goto block23;
block22:;
// line 1634
org$pandalanguage$pandac$ASTNode* $tmp3557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3558 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3559 = *(&local0);
org$pandalanguage$pandac$Position $tmp3560 = ((org$pandalanguage$pandac$parser$Token) $tmp3559.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3561 = *(&local1);
panda$collections$Array* $tmp3562 = *(&local2);
panda$collections$ImmutableArray* $tmp3563 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3562);
panda$collections$ImmutableArray* $tmp3564 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3557, $tmp3558, $tmp3560, $tmp3561, $tmp3563, $tmp3564);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3563));
panda$collections$ImmutableArray* $tmp3565 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3566 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3566));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3567 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3567));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3557;
block23:;
// line 1636
org$pandalanguage$pandac$ASTNode* $tmp3568 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3569 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3570 = *(&local0);
org$pandalanguage$pandac$Position $tmp3571 = ((org$pandalanguage$pandac$parser$Token) $tmp3570.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3572 = *(&local1);
panda$collections$Array* $tmp3573 = *(&local2);
panda$collections$ImmutableArray* $tmp3574 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3573);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3568, $tmp3569, $tmp3571, $tmp3572, $tmp3574, ((panda$collections$ImmutableArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3568));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3568));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3574));
panda$collections$ImmutableArray* $tmp3575 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3575));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3576 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3576));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3577 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3577));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3568;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1643
panda$core$Int64 $tmp3578 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3579 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3578);
org$pandalanguage$pandac$parser$Token$nullable $tmp3580 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3579, &$s3581);
*(&local0) = $tmp3580;
// line 1644
org$pandalanguage$pandac$parser$Token$nullable $tmp3582 = *(&local0);
panda$core$Bit $tmp3583 = panda$core$Bit$init$builtin_bit(!$tmp3582.nonnull);
bool $tmp3584 = $tmp3583.value;
if ($tmp3584) goto block1; else goto block2;
block1:;
// line 1645
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 1647
panda$collections$Array* $tmp3585 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3585);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3586 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3586));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3585));
*(&local1) = $tmp3585;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3585));
// line 1648
goto block3;
block3:;
// line 1649
org$pandalanguage$pandac$parser$Token $tmp3587 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3588 = $tmp3587.kind;
panda$core$Int64 $tmp3589 = $tmp3588.$rawValue;
panda$core$Int64 $tmp3590 = (panda$core$Int64) {101};
panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3590);
bool $tmp3592 = $tmp3591.value;
if ($tmp3592) goto block6; else goto block7;
block6:;
// line 1651
org$pandalanguage$pandac$parser$Token $tmp3593 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1652
goto block4;
block7:;
panda$core$Int64 $tmp3594 = (panda$core$Int64) {29};
panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3594);
bool $tmp3596 = $tmp3595.value;
if ($tmp3596) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3597 = (panda$core$Int64) {30};
panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3597);
bool $tmp3599 = $tmp3598.value;
if ($tmp3599) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3600 = (panda$core$Int64) {28};
panda$core$Bit $tmp3601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3600);
bool $tmp3602 = $tmp3601.value;
if ($tmp3602) goto block8; else goto block11;
block8:;
// line 1655
org$pandalanguage$pandac$ASTNode* $tmp3603 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3604 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
*(&local2) = $tmp3603;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
// line 1656
org$pandalanguage$pandac$ASTNode* $tmp3605 = *(&local2);
panda$core$Bit $tmp3606 = panda$core$Bit$init$builtin_bit($tmp3605 == NULL);
bool $tmp3607 = $tmp3606.value;
if ($tmp3607) goto block12; else goto block13;
block12:;
// line 1657
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3608 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
// line 1659
panda$core$Int64 $tmp3610 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3611 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3610);
org$pandalanguage$pandac$parser$Token$nullable $tmp3612 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3611, &$s3613);
panda$core$Bit $tmp3614 = panda$core$Bit$init$builtin_bit(!$tmp3612.nonnull);
bool $tmp3615 = $tmp3614.value;
if ($tmp3615) goto block14; else goto block15;
block14:;
// line 1660
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3616 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3616));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3617 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3617));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block15:;
// line 1662
panda$collections$Array* $tmp3618 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3619 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3618, ((panda$core$Object*) $tmp3619));
// line 1663
org$pandalanguage$pandac$ASTNode* $tmp3620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block11:;
// line 1666
org$pandalanguage$pandac$ASTNode* $tmp3621 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3622 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3622));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
*(&local3) = $tmp3621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
// line 1667
org$pandalanguage$pandac$ASTNode* $tmp3623 = *(&local3);
panda$core$Bit $tmp3624 = panda$core$Bit$init$builtin_bit($tmp3623 == NULL);
bool $tmp3625 = $tmp3624.value;
if ($tmp3625) goto block16; else goto block17;
block16:;
// line 1668
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3626 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3626));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3627 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3627));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block17:;
// line 1670
panda$collections$Array* $tmp3628 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3629 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3628, ((panda$core$Object*) $tmp3629));
goto block5;
block5:;
org$pandalanguage$pandac$ASTNode* $tmp3630 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3630));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1674
panda$collections$Array* $tmp3631 = *(&local1);
panda$collections$ImmutableArray* $tmp3632 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3631);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3632));
panda$collections$Array* $tmp3633 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3632;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$ImmutableArray* local0 = NULL;
// line 1681
panda$collections$ImmutableArray* $tmp3634 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3634));
*(&local0) = $tmp3634;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3634));
// line 1682
panda$collections$ImmutableArray* $tmp3636 = *(&local0);
panda$core$Bit $tmp3637 = panda$core$Bit$init$builtin_bit($tmp3636 == NULL);
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block1; else goto block2;
block1:;
// line 1683
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3639 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1685
org$pandalanguage$pandac$ASTNode* $tmp3640 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3641 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Position $tmp3642 = org$pandalanguage$pandac$Position$init();
panda$collections$ImmutableArray* $tmp3643 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3640, $tmp3641, $tmp3642, $tmp3643);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3640));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3640));
panda$collections$ImmutableArray* $tmp3644 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3640;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1692
org$pandalanguage$pandac$ASTNode* $tmp3645 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3646 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3646));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3645));
*(&local0) = $tmp3645;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3645));
// line 1693
org$pandalanguage$pandac$ASTNode* $tmp3647 = *(&local0);
panda$core$Bit $tmp3648 = panda$core$Bit$init$builtin_bit($tmp3647 == NULL);
bool $tmp3649 = $tmp3648.value;
if ($tmp3649) goto block1; else goto block2;
block1:;
// line 1694
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3650 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1696
org$pandalanguage$pandac$parser$Token $tmp3651 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3652 = $tmp3651.kind;
panda$core$Int64 $tmp3653 = $tmp3652.$rawValue;
panda$core$Int64 $tmp3654 = (panda$core$Int64) {74};
panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3654);
bool $tmp3656 = $tmp3655.value;
if ($tmp3656) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3657 = (panda$core$Int64) {75};
panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3657);
bool $tmp3659 = $tmp3658.value;
if ($tmp3659) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3660 = (panda$core$Int64) {76};
panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3660);
bool $tmp3662 = $tmp3661.value;
if ($tmp3662) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3663 = (panda$core$Int64) {77};
panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3663);
bool $tmp3665 = $tmp3664.value;
if ($tmp3665) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3666 = (panda$core$Int64) {78};
panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3666);
bool $tmp3668 = $tmp3667.value;
if ($tmp3668) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3669 = (panda$core$Int64) {79};
panda$core$Bit $tmp3670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3669);
bool $tmp3671 = $tmp3670.value;
if ($tmp3671) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3672 = (panda$core$Int64) {80};
panda$core$Bit $tmp3673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3672);
bool $tmp3674 = $tmp3673.value;
if ($tmp3674) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3675 = (panda$core$Int64) {81};
panda$core$Bit $tmp3676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3675);
bool $tmp3677 = $tmp3676.value;
if ($tmp3677) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3678 = (panda$core$Int64) {82};
panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3678);
bool $tmp3680 = $tmp3679.value;
if ($tmp3680) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3681 = (panda$core$Int64) {83};
panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3681);
bool $tmp3683 = $tmp3682.value;
if ($tmp3683) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3684 = (panda$core$Int64) {84};
panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3684);
bool $tmp3686 = $tmp3685.value;
if ($tmp3686) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3687 = (panda$core$Int64) {85};
panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3687);
bool $tmp3689 = $tmp3688.value;
if ($tmp3689) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3690 = (panda$core$Int64) {86};
panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3690);
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3693 = (panda$core$Int64) {87};
panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3693);
bool $tmp3695 = $tmp3694.value;
if ($tmp3695) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3696 = (panda$core$Int64) {88};
panda$core$Bit $tmp3697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3696);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3699 = (panda$core$Int64) {89};
panda$core$Bit $tmp3700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3699);
bool $tmp3701 = $tmp3700.value;
if ($tmp3701) goto block4; else goto block20;
block4:;
// line 1702
org$pandalanguage$pandac$parser$Token $tmp3702 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3702;
// line 1703
org$pandalanguage$pandac$ASTNode* $tmp3703 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3704 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3704));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
*(&local2) = $tmp3703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
// line 1704
org$pandalanguage$pandac$ASTNode* $tmp3705 = *(&local2);
panda$core$Bit $tmp3706 = panda$core$Bit$init$builtin_bit($tmp3705 == NULL);
bool $tmp3707 = $tmp3706.value;
if ($tmp3707) goto block21; else goto block22;
block21:;
// line 1705
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3708 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3709 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3709));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1707
org$pandalanguage$pandac$ASTNode* $tmp3710 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3711 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3712 = *(&local0);
$fn3714 $tmp3713 = ($fn3714) $tmp3712->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3715 = $tmp3713($tmp3712);
org$pandalanguage$pandac$ASTNode* $tmp3716 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3717 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3718 = $tmp3717.kind;
org$pandalanguage$pandac$ASTNode* $tmp3719 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3710, $tmp3711, $tmp3715, $tmp3716, $tmp3718, $tmp3719);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3710));
org$pandalanguage$pandac$ASTNode* $tmp3720 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3720));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3721 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3721));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3710;
block20:;
panda$core$Int64 $tmp3722 = (panda$core$Int64) {59};
panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3653, $tmp3722);
bool $tmp3724 = $tmp3723.value;
if ($tmp3724) goto block23; else goto block24;
block23:;
// line 1710
org$pandalanguage$pandac$parser$Token $tmp3725 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3725, &$s3726);
// line 1711
org$pandalanguage$pandac$parser$Token $tmp3727 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3727;
// line 1712
org$pandalanguage$pandac$ASTNode* $tmp3728 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3729 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3728));
*(&local4) = $tmp3728;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3728));
// line 1713
org$pandalanguage$pandac$ASTNode* $tmp3730 = *(&local4);
panda$core$Bit $tmp3731 = panda$core$Bit$init$builtin_bit($tmp3730 == NULL);
bool $tmp3732 = $tmp3731.value;
if ($tmp3732) goto block25; else goto block26;
block25:;
// line 1714
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3733 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3733));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3734 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3734));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1716
org$pandalanguage$pandac$ASTNode* $tmp3735 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3736 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3737 = *(&local0);
$fn3739 $tmp3738 = ($fn3739) $tmp3737->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3740 = $tmp3738($tmp3737);
org$pandalanguage$pandac$ASTNode* $tmp3741 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3742 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3743 = $tmp3742.kind;
org$pandalanguage$pandac$ASTNode* $tmp3744 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3735, $tmp3736, $tmp3740, $tmp3741, $tmp3743, $tmp3744);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
org$pandalanguage$pandac$ASTNode* $tmp3745 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3745));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3746 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3746));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3735;
block24:;
// line 1719
org$pandalanguage$pandac$ASTNode* $tmp3747 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3747));
org$pandalanguage$pandac$ASTNode* $tmp3748 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3748));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3747;
block3:;
panda$core$Bit $tmp3749 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3750 = $tmp3749.value;
if ($tmp3750) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3751 = (panda$core$Int64) {1691};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3752, $tmp3751, &$s3753);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1728
org$pandalanguage$pandac$ASTNode* $tmp3754 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3754));
*(&local0) = $tmp3754;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3754));
// line 1729
org$pandalanguage$pandac$ASTNode* $tmp3756 = *(&local0);
panda$core$Bit $tmp3757 = panda$core$Bit$init$builtin_bit($tmp3756 == NULL);
bool $tmp3758 = $tmp3757.value;
if ($tmp3758) goto block1; else goto block2;
block1:;
// line 1730
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3759 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3759));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1732
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1733
panda$core$Int64 $tmp3760 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3761 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3760);
org$pandalanguage$pandac$parser$Token$nullable $tmp3762 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3761);
panda$core$Bit $tmp3763 = panda$core$Bit$init$builtin_bit($tmp3762.nonnull);
bool $tmp3764 = $tmp3763.value;
if ($tmp3764) goto block3; else goto block5;
block3:;
// line 1734
org$pandalanguage$pandac$ASTNode* $tmp3765 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3766 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3765));
*(&local1) = $tmp3765;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3765));
// line 1735
org$pandalanguage$pandac$ASTNode* $tmp3767 = *(&local1);
panda$core$Bit $tmp3768 = panda$core$Bit$init$builtin_bit($tmp3767 == NULL);
bool $tmp3769 = $tmp3768.value;
if ($tmp3769) goto block6; else goto block7;
block6:;
// line 1736
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3770 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3770));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3771 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3771));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1739
org$pandalanguage$pandac$parser$Token $tmp3772 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3773 = $tmp3772.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3774;
$tmp3774 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3774->value = $tmp3773;
panda$core$Int64 $tmp3775 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3776 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3775);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3777;
$tmp3777 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3777->value = $tmp3776;
ITable* $tmp3778 = ((panda$core$Equatable*) $tmp3774)->$class->itable;
while ($tmp3778->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3778 = $tmp3778->next;
}
$fn3780 $tmp3779 = $tmp3778->methods[0];
panda$core$Bit $tmp3781 = $tmp3779(((panda$core$Equatable*) $tmp3774), ((panda$core$Equatable*) $tmp3777));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3774)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3777)));
bool $tmp3782 = $tmp3781.value;
if ($tmp3782) goto block8; else goto block10;
block8:;
// line 1740
org$pandalanguage$pandac$parser$Token $tmp3783 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3783, &$s3784);
// line 1741
org$pandalanguage$pandac$ASTNode* $tmp3785 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3786 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
*(&local1) = $tmp3785;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
// line 1742
org$pandalanguage$pandac$ASTNode* $tmp3787 = *(&local1);
panda$core$Bit $tmp3788 = panda$core$Bit$init$builtin_bit($tmp3787 == NULL);
bool $tmp3789 = $tmp3788.value;
if ($tmp3789) goto block11; else goto block12;
block11:;
// line 1743
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3790 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3790));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3791 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1747
org$pandalanguage$pandac$ASTNode* $tmp3792 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1749
org$pandalanguage$pandac$ASTNode* $tmp3793 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3794 = (panda$core$Int64) {13};
org$pandalanguage$pandac$ASTNode* $tmp3795 = *(&local0);
$fn3797 $tmp3796 = ($fn3797) $tmp3795->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3798 = $tmp3796($tmp3795);
org$pandalanguage$pandac$ASTNode* $tmp3799 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3800 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3793, $tmp3794, $tmp3798, $tmp3799, $tmp3800);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3793));
org$pandalanguage$pandac$ASTNode* $tmp3801 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3801));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3802 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3802));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3793;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1756
org$pandalanguage$pandac$parser$Token $tmp3803 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3803;
// line 1757
// line 1758
org$pandalanguage$pandac$parser$Token $tmp3804 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3805 = $tmp3804.kind;
panda$core$Int64 $tmp3806 = $tmp3805.$rawValue;
panda$core$Int64 $tmp3807 = (panda$core$Int64) {24};
panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3806, $tmp3807);
bool $tmp3809 = $tmp3808.value;
if ($tmp3809) goto block2; else goto block3;
block2:;
// line 1760
panda$core$Int64 $tmp3810 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3811 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3810);
*(&local1) = $tmp3811;
goto block1;
block3:;
panda$core$Int64 $tmp3812 = (panda$core$Int64) {25};
panda$core$Bit $tmp3813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3806, $tmp3812);
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block4; else goto block5;
block4:;
// line 1763
panda$core$Int64 $tmp3815 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3816 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3815);
*(&local1) = $tmp3816;
goto block1;
block5:;
panda$core$Int64 $tmp3817 = (panda$core$Int64) {26};
panda$core$Bit $tmp3818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3806, $tmp3817);
bool $tmp3819 = $tmp3818.value;
if ($tmp3819) goto block6; else goto block7;
block6:;
// line 1766
panda$core$Int64 $tmp3820 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3821 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3820);
*(&local1) = $tmp3821;
goto block1;
block7:;
panda$core$Int64 $tmp3822 = (panda$core$Int64) {27};
panda$core$Bit $tmp3823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3806, $tmp3822);
bool $tmp3824 = $tmp3823.value;
if ($tmp3824) goto block8; else goto block9;
block8:;
// line 1769
panda$core$Int64 $tmp3825 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3826 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3825);
*(&local1) = $tmp3826;
goto block1;
block9:;
// line 1772
org$pandalanguage$pandac$parser$Token $tmp3827 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3827, &$s3828);
goto block1;
block1:;
// line 1775
panda$collections$Array* $tmp3829 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3829);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3830 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3830));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3829));
*(&local2) = $tmp3829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3829));
// line 1776
org$pandalanguage$pandac$ASTNode* $tmp3831 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3832 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3832));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
*(&local3) = $tmp3831;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
// line 1777
org$pandalanguage$pandac$ASTNode* $tmp3833 = *(&local3);
panda$core$Bit $tmp3834 = panda$core$Bit$init$builtin_bit($tmp3833 == NULL);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block10; else goto block11;
block10:;
// line 1778
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3836 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3837 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1780
panda$collections$Array* $tmp3838 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3839 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3838, ((panda$core$Object*) $tmp3839));
// line 1781
goto block12;
block12:;
panda$core$Int64 $tmp3840 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3841 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3840);
org$pandalanguage$pandac$parser$Token$nullable $tmp3842 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3841);
panda$core$Bit $tmp3843 = panda$core$Bit$init$builtin_bit($tmp3842.nonnull);
bool $tmp3844 = $tmp3843.value;
if ($tmp3844) goto block13; else goto block14;
block13:;
// line 1782
org$pandalanguage$pandac$ASTNode* $tmp3845 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3846 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
*(&local4) = $tmp3845;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
// line 1783
org$pandalanguage$pandac$ASTNode* $tmp3847 = *(&local4);
panda$core$Bit $tmp3848 = panda$core$Bit$init$builtin_bit($tmp3847 == NULL);
bool $tmp3849 = $tmp3848.value;
if ($tmp3849) goto block15; else goto block16;
block15:;
// line 1784
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3850 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3850));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3851 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3851));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3852 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3852));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1786
panda$collections$Array* $tmp3853 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3854 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3853, ((panda$core$Object*) $tmp3854));
org$pandalanguage$pandac$ASTNode* $tmp3855 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3855));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 1788
org$pandalanguage$pandac$ASTNode* $tmp3856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3857 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token $tmp3858 = *(&local0);
org$pandalanguage$pandac$Position $tmp3859 = $tmp3858.position;
org$pandalanguage$pandac$Variable$Kind $tmp3860 = *(&local1);
panda$collections$Array* $tmp3861 = *(&local2);
panda$collections$ImmutableArray* $tmp3862 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3861);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3856, $tmp3857, $tmp3859, $tmp3860, $tmp3862);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
org$pandalanguage$pandac$ASTNode* $tmp3863 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3863));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3864 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3864));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp3856;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1795
panda$core$Int64 $tmp3865 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp3866 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3865);
org$pandalanguage$pandac$parser$Token$nullable $tmp3867 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3866, &$s3868);
*(&local0) = $tmp3867;
// line 1796
org$pandalanguage$pandac$parser$Token$nullable $tmp3869 = *(&local0);
panda$core$Bit $tmp3870 = panda$core$Bit$init$builtin_bit(!$tmp3869.nonnull);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block1; else goto block2;
block1:;
// line 1797
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1799
panda$core$Int64 $tmp3872 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp3873 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3872);
org$pandalanguage$pandac$parser$Token$nullable $tmp3874 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3873, &$s3875);
panda$core$Bit $tmp3876 = panda$core$Bit$init$builtin_bit(!$tmp3874.nonnull);
bool $tmp3877 = $tmp3876.value;
if ($tmp3877) goto block3; else goto block4;
block3:;
// line 1800
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1802
panda$collections$Stack** $tmp3878 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3879 = *$tmp3878;
panda$core$Bit $tmp3880 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp3881;
$tmp3881 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp3881->value = $tmp3880;
panda$collections$Stack$push$panda$collections$Stack$T($tmp3879, ((panda$core$Object*) $tmp3881));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
// line 1803
org$pandalanguage$pandac$ASTNode* $tmp3882 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3883 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3884 = *(&local0);
org$pandalanguage$pandac$Position $tmp3885 = ((org$pandalanguage$pandac$parser$Token) $tmp3884.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3886 = *(&local0);
panda$core$String* $tmp3887 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3886.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3882, $tmp3883, $tmp3885, $tmp3887);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3888 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3888));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
*(&local1) = $tmp3882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
// line 1804
panda$collections$Array* $tmp3889 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3889);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3890 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3890));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3889));
*(&local2) = $tmp3889;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3889));
// line 1805
panda$core$Int64 $tmp3891 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3892 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3891);
org$pandalanguage$pandac$parser$Token$nullable $tmp3893 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3892);
panda$core$Bit $tmp3894 = panda$core$Bit$init$builtin_bit(!$tmp3893.nonnull);
bool $tmp3895 = $tmp3894.value;
if ($tmp3895) goto block5; else goto block6;
block5:;
// line 1806
org$pandalanguage$pandac$ASTNode* $tmp3896 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3897 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3897));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3896));
*(&local3) = $tmp3896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3896));
// line 1807
org$pandalanguage$pandac$ASTNode* $tmp3898 = *(&local3);
panda$core$Bit $tmp3899 = panda$core$Bit$init$builtin_bit($tmp3898 == NULL);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block7; else goto block8;
block7:;
// line 1808
panda$collections$Stack** $tmp3901 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3902 = *$tmp3901;
panda$core$Object* $tmp3903 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3902);
panda$core$Panda$unref$panda$core$Object$Q($tmp3903);
// line 1809
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3904 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3904));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3905 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3905));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3906 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3906));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1811
panda$collections$Array* $tmp3907 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3908 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3907, ((panda$core$Object*) $tmp3908));
// line 1812
goto block9;
block9:;
panda$core$Int64 $tmp3909 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3910 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3909);
org$pandalanguage$pandac$parser$Token$nullable $tmp3911 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3910);
panda$core$Bit $tmp3912 = panda$core$Bit$init$builtin_bit($tmp3911.nonnull);
bool $tmp3913 = $tmp3912.value;
if ($tmp3913) goto block10; else goto block11;
block10:;
// line 1813
org$pandalanguage$pandac$ASTNode* $tmp3914 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3915 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3915));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3914));
*(&local3) = $tmp3914;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3914));
// line 1814
org$pandalanguage$pandac$ASTNode* $tmp3916 = *(&local3);
panda$core$Bit $tmp3917 = panda$core$Bit$init$builtin_bit($tmp3916 == NULL);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block12; else goto block13;
block12:;
// line 1815
panda$collections$Stack** $tmp3919 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3920 = *$tmp3919;
panda$core$Object* $tmp3921 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3920);
panda$core$Panda$unref$panda$core$Object$Q($tmp3921);
// line 1816
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3922 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3923 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3923));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3924 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3924));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1818
panda$collections$Array* $tmp3925 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3926 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3925, ((panda$core$Object*) $tmp3926));
goto block9;
block11:;
// line 1820
panda$core$Int64 $tmp3927 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3928 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3927);
org$pandalanguage$pandac$parser$Token$nullable $tmp3929 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3928, &$s3930);
panda$core$Bit $tmp3931 = panda$core$Bit$init$builtin_bit(!$tmp3929.nonnull);
bool $tmp3932 = $tmp3931.value;
if ($tmp3932) goto block14; else goto block15;
block14:;
// line 1821
panda$collections$Stack** $tmp3933 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3934 = *$tmp3933;
panda$core$Object* $tmp3935 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3934);
panda$core$Panda$unref$panda$core$Object$Q($tmp3935);
// line 1822
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3936 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3936));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3937 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3937));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3938 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp3939 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3939));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1825
panda$collections$Stack** $tmp3940 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3941 = *$tmp3940;
panda$core$Object* $tmp3942 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3941);
panda$core$Panda$unref$panda$core$Object$Q($tmp3942);
// line 1826
org$pandalanguage$pandac$ASTNode* $tmp3943 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3944 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp3945 = *(&local0);
org$pandalanguage$pandac$Position $tmp3946 = ((org$pandalanguage$pandac$parser$Token) $tmp3945.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3947 = *(&local1);
panda$collections$Array* $tmp3948 = *(&local2);
panda$collections$ImmutableArray* $tmp3949 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3948);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3943, $tmp3944, $tmp3946, $tmp3947, $tmp3949);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3949));
panda$collections$Array* $tmp3950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3950));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3951 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3951));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3943;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1833
panda$core$Int64 $tmp3952 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp3953 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3952);
org$pandalanguage$pandac$parser$Token$nullable $tmp3954 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3953, &$s3955);
*(&local0) = $tmp3954;
// line 1834
org$pandalanguage$pandac$parser$Token$nullable $tmp3956 = *(&local0);
panda$core$Bit $tmp3957 = panda$core$Bit$init$builtin_bit(!$tmp3956.nonnull);
bool $tmp3958 = $tmp3957.value;
if ($tmp3958) goto block1; else goto block2;
block1:;
// line 1835
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1837
panda$core$Int64 $tmp3959 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3960 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3959);
org$pandalanguage$pandac$parser$Token$nullable $tmp3961 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3960);
*(&local1) = $tmp3961;
// line 1838
org$pandalanguage$pandac$parser$Token$nullable $tmp3962 = *(&local1);
panda$core$Bit $tmp3963 = panda$core$Bit$init$builtin_bit($tmp3962.nonnull);
bool $tmp3964 = $tmp3963.value;
if ($tmp3964) goto block3; else goto block4;
block3:;
// line 1839
org$pandalanguage$pandac$ASTNode* $tmp3965 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3966 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp3967 = *(&local0);
org$pandalanguage$pandac$Position $tmp3968 = ((org$pandalanguage$pandac$parser$Token) $tmp3967.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3969 = *(&local1);
panda$core$String* $tmp3970 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3969.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3965, $tmp3966, $tmp3968, $tmp3970);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3970));
return $tmp3965;
block4:;
// line 1841
org$pandalanguage$pandac$ASTNode* $tmp3971 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3972 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp3973 = *(&local0);
org$pandalanguage$pandac$Position $tmp3974 = ((org$pandalanguage$pandac$parser$Token) $tmp3973.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3971, $tmp3972, $tmp3974, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3971));
return $tmp3971;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1848
panda$core$Int64 $tmp3975 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp3976 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3975);
org$pandalanguage$pandac$parser$Token$nullable $tmp3977 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3976, &$s3978);
*(&local0) = $tmp3977;
// line 1849
org$pandalanguage$pandac$parser$Token$nullable $tmp3979 = *(&local0);
panda$core$Bit $tmp3980 = panda$core$Bit$init$builtin_bit(!$tmp3979.nonnull);
bool $tmp3981 = $tmp3980.value;
if ($tmp3981) goto block1; else goto block2;
block1:;
// line 1850
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1852
panda$core$Int64 $tmp3982 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3983 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3982);
org$pandalanguage$pandac$parser$Token$nullable $tmp3984 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3983);
*(&local1) = $tmp3984;
// line 1853
org$pandalanguage$pandac$parser$Token$nullable $tmp3985 = *(&local1);
panda$core$Bit $tmp3986 = panda$core$Bit$init$builtin_bit($tmp3985.nonnull);
bool $tmp3987 = $tmp3986.value;
if ($tmp3987) goto block3; else goto block4;
block3:;
// line 1854
org$pandalanguage$pandac$ASTNode* $tmp3988 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3989 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp3990 = *(&local0);
org$pandalanguage$pandac$Position $tmp3991 = ((org$pandalanguage$pandac$parser$Token) $tmp3990.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3992 = *(&local1);
panda$core$String* $tmp3993 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3992.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3988, $tmp3989, $tmp3991, $tmp3993);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3993));
return $tmp3988;
block4:;
// line 1856
org$pandalanguage$pandac$ASTNode* $tmp3994 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3995 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp3996 = *(&local0);
org$pandalanguage$pandac$Position $tmp3997 = ((org$pandalanguage$pandac$parser$Token) $tmp3996.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3994, $tmp3995, $tmp3997, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3994));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3994));
return $tmp3994;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1863
panda$core$Int64 $tmp3998 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp3999 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3998);
org$pandalanguage$pandac$parser$Token$nullable $tmp4000 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3999, &$s4001);
*(&local0) = $tmp4000;
// line 1864
org$pandalanguage$pandac$parser$Token$nullable $tmp4002 = *(&local0);
panda$core$Bit $tmp4003 = panda$core$Bit$init$builtin_bit(!$tmp4002.nonnull);
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block1; else goto block2;
block1:;
// line 1865
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1867
org$pandalanguage$pandac$parser$Token $tmp4005 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4006 = $tmp4005.kind;
panda$core$Int64 $tmp4007 = $tmp4006.$rawValue;
panda$core$Int64 $tmp4008 = (panda$core$Int64) {101};
panda$core$Bit $tmp4009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4007, $tmp4008);
bool $tmp4010 = $tmp4009.value;
if ($tmp4010) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4011 = (panda$core$Int64) {40};
panda$core$Bit $tmp4012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4007, $tmp4011);
bool $tmp4013 = $tmp4012.value;
if ($tmp4013) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4014 = (panda$core$Int64) {41};
panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4007, $tmp4014);
bool $tmp4016 = $tmp4015.value;
if ($tmp4016) goto block4; else goto block7;
block4:;
// line 1869
org$pandalanguage$pandac$ASTNode* $tmp4017 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4018 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4019 = *(&local0);
org$pandalanguage$pandac$Position $tmp4020 = ((org$pandalanguage$pandac$parser$Token) $tmp4019.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4017, $tmp4018, $tmp4020, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4017));
return $tmp4017;
block7:;
// line 1872
panda$collections$Array* $tmp4021 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4021);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4022 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4022));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
*(&local1) = $tmp4021;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
// line 1873
org$pandalanguage$pandac$ASTNode* $tmp4023 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4024 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4023));
*(&local2) = $tmp4023;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4023));
// line 1874
org$pandalanguage$pandac$ASTNode* $tmp4025 = *(&local2);
panda$core$Bit $tmp4026 = panda$core$Bit$init$builtin_bit($tmp4025 == NULL);
bool $tmp4027 = $tmp4026.value;
if ($tmp4027) goto block8; else goto block9;
block8:;
// line 1875
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4028 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4028));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4029 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4029));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1877
panda$collections$Array* $tmp4030 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4031 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4030, ((panda$core$Object*) $tmp4031));
// line 1878
org$pandalanguage$pandac$ASTNode* $tmp4032 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4033 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4034 = *(&local0);
org$pandalanguage$pandac$Position $tmp4035 = ((org$pandalanguage$pandac$parser$Token) $tmp4034.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4036 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4032, $tmp4033, $tmp4035, $tmp4036);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
org$pandalanguage$pandac$ASTNode* $tmp4037 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4037));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4038 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4038));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4032;
block3:;
panda$core$Bit $tmp4039 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4040 = $tmp4039.value;
if ($tmp4040) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4041 = (panda$core$Int64) {1862};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4042, $tmp4041, &$s4043);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1887
org$pandalanguage$pandac$parser$Token $tmp4044 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4045 = $tmp4044.kind;
panda$core$Int64 $tmp4046 = $tmp4045.$rawValue;
panda$core$Int64 $tmp4047 = (panda$core$Int64) {29};
panda$core$Bit $tmp4048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4046, $tmp4047);
bool $tmp4049 = $tmp4048.value;
if ($tmp4049) goto block2; else goto block3;
block2:;
// line 1888
org$pandalanguage$pandac$ASTNode* $tmp4050 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
return $tmp4050;
block3:;
panda$core$Int64 $tmp4051 = (panda$core$Int64) {30};
panda$core$Bit $tmp4052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4046, $tmp4051);
bool $tmp4053 = $tmp4052.value;
if ($tmp4053) goto block4; else goto block5;
block4:;
// line 1889
org$pandalanguage$pandac$ASTNode* $tmp4054 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
return $tmp4054;
block5:;
panda$core$Int64 $tmp4055 = (panda$core$Int64) {28};
panda$core$Bit $tmp4056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4046, $tmp4055);
bool $tmp4057 = $tmp4056.value;
if ($tmp4057) goto block6; else goto block7;
block6:;
// line 1890
org$pandalanguage$pandac$ASTNode* $tmp4058 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
return $tmp4058;
block7:;
// line 1891
panda$core$Bit $tmp4059 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4061 = (panda$core$Int64) {1891};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4062, $tmp4061);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4063 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4064 = $tmp4063.value;
if ($tmp4064) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4065 = (panda$core$Int64) {1886};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4066, $tmp4065, &$s4067);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1899
org$pandalanguage$pandac$parser$Token $tmp4068 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4069 = $tmp4068.kind;
panda$core$Int64 $tmp4070 = $tmp4069.$rawValue;
panda$core$Int64 $tmp4071 = (panda$core$Int64) {31};
panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4070, $tmp4071);
bool $tmp4073 = $tmp4072.value;
if ($tmp4073) goto block2; else goto block3;
block2:;
// line 1900
org$pandalanguage$pandac$ASTNode* $tmp4074 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
return $tmp4074;
block3:;
panda$core$Int64 $tmp4075 = (panda$core$Int64) {33};
panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4070, $tmp4075);
bool $tmp4077 = $tmp4076.value;
if ($tmp4077) goto block4; else goto block5;
block4:;
// line 1901
org$pandalanguage$pandac$ASTNode* $tmp4078 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
return $tmp4078;
block5:;
panda$core$Int64 $tmp4079 = (panda$core$Int64) {36};
panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4070, $tmp4079);
bool $tmp4081 = $tmp4080.value;
if ($tmp4081) goto block6; else goto block7;
block6:;
// line 1902
org$pandalanguage$pandac$ASTNode* $tmp4082 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
return $tmp4082;
block7:;
panda$core$Int64 $tmp4083 = (panda$core$Int64) {32};
panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4070, $tmp4083);
bool $tmp4085 = $tmp4084.value;
if ($tmp4085) goto block8; else goto block9;
block8:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4086 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
return $tmp4086;
block9:;
// line 1906
panda$core$Int64 $tmp4087 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4088 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4087);
org$pandalanguage$pandac$parser$Token$nullable $tmp4089 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4088, &$s4090);
// line 1907
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4091 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4092 = $tmp4091.value;
if ($tmp4092) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4093 = (panda$core$Int64) {1898};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4094, $tmp4093, &$s4095);
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
// line 1916
// line 1917
panda$core$Int64 $tmp4096 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4097 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4096);
org$pandalanguage$pandac$parser$Token$nullable $tmp4098 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4097);
*(&local1) = $tmp4098;
// line 1918
org$pandalanguage$pandac$parser$Token$nullable $tmp4099 = *(&local1);
panda$core$Bit $tmp4100 = panda$core$Bit$init$builtin_bit(!$tmp4099.nonnull);
bool $tmp4101 = $tmp4100.value;
if ($tmp4101) goto block1; else goto block3;
block1:;
// line 1919
panda$core$Int64 $tmp4102 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4103 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4102);
org$pandalanguage$pandac$parser$Token$nullable $tmp4104 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4103, &$s4105);
*(&local1) = $tmp4104;
// line 1920
org$pandalanguage$pandac$parser$Token$nullable $tmp4106 = *(&local1);
panda$core$Bit $tmp4107 = panda$core$Bit$init$builtin_bit(!$tmp4106.nonnull);
bool $tmp4108 = $tmp4107.value;
if ($tmp4108) goto block4; else goto block5;
block4:;
// line 1921
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 1923
panda$core$Int64 $tmp4109 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4110 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4109);
*(&local0) = $tmp4110;
goto block2;
block3:;
// line 1
// line 1926
panda$core$Int64 $tmp4111 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4112 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4111);
*(&local0) = $tmp4112;
goto block2;
block2:;
// line 1928
panda$core$Int64 $tmp4113 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4114 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4113);
org$pandalanguage$pandac$parser$Token$nullable $tmp4115 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4114, &$s4116);
*(&local2) = $tmp4115;
// line 1929
org$pandalanguage$pandac$parser$Token$nullable $tmp4117 = *(&local2);
panda$core$Bit $tmp4118 = panda$core$Bit$init$builtin_bit(!$tmp4117.nonnull);
bool $tmp4119 = $tmp4118.value;
if ($tmp4119) goto block6; else goto block7;
block6:;
// line 1930
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1932
panda$collections$ImmutableArray* $tmp4120 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4121 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4121));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4120));
*(&local3) = $tmp4120;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4120));
// line 1933
panda$collections$ImmutableArray* $tmp4122 = *(&local3);
panda$core$Bit $tmp4123 = panda$core$Bit$init$builtin_bit($tmp4122 == NULL);
bool $tmp4124 = $tmp4123.value;
if ($tmp4124) goto block8; else goto block9;
block8:;
// line 1934
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4125 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4125));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1936
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1937
org$pandalanguage$pandac$parser$Token $tmp4126 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4127 = $tmp4126.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4128;
$tmp4128 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4128->value = $tmp4127;
panda$core$Int64 $tmp4129 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4130 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4129);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4131;
$tmp4131 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4131->value = $tmp4130;
ITable* $tmp4132 = ((panda$core$Equatable*) $tmp4128)->$class->itable;
while ($tmp4132->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4132 = $tmp4132->next;
}
$fn4134 $tmp4133 = $tmp4132->methods[0];
panda$core$Bit $tmp4135 = $tmp4133(((panda$core$Equatable*) $tmp4128), ((panda$core$Equatable*) $tmp4131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4128)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4131)));
bool $tmp4136 = $tmp4135.value;
if ($tmp4136) goto block10; else goto block12;
block10:;
// line 1938
org$pandalanguage$pandac$ASTNode* $tmp4137 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4138 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4138));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4137));
*(&local4) = $tmp4137;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4137));
// line 1939
org$pandalanguage$pandac$ASTNode* $tmp4139 = *(&local4);
panda$core$Bit $tmp4140 = panda$core$Bit$init$builtin_bit($tmp4139 == NULL);
bool $tmp4141 = $tmp4140.value;
if ($tmp4141) goto block13; else goto block14;
block13:;
// line 1940
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4142 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4143 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4143));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1944
org$pandalanguage$pandac$ASTNode* $tmp4144 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4144));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 1946
panda$collections$ImmutableArray* $tmp4145 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4146 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
*(&local5) = $tmp4145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
// line 1947
panda$collections$ImmutableArray* $tmp4147 = *(&local5);
panda$core$Bit $tmp4148 = panda$core$Bit$init$builtin_bit($tmp4147 == NULL);
bool $tmp4149 = $tmp4148.value;
if ($tmp4149) goto block15; else goto block16;
block15:;
// line 1948
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4150 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4150));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4151 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4151));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4152 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4152));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1950
org$pandalanguage$pandac$ASTNode* $tmp4153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4154 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4155 = *(&local1);
org$pandalanguage$pandac$Position $tmp4156 = ((org$pandalanguage$pandac$parser$Token) $tmp4155.value).position;
panda$collections$ImmutableArray* $tmp4157 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4157);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4158 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4159 = *(&local2);
panda$core$String* $tmp4160 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4159.value));
panda$collections$ImmutableArray* $tmp4161 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4162 = *(&local4);
panda$collections$ImmutableArray* $tmp4163 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4153, $tmp4154, $tmp4156, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4157, $tmp4158, $tmp4160, ((panda$collections$ImmutableArray*) NULL), $tmp4161, $tmp4162, $tmp4163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4160));
panda$collections$ImmutableArray* $tmp4164 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4164));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4165 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4165));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4166 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4166));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4153;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1959
org$pandalanguage$pandac$parser$Token $tmp4167 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4168 = $tmp4167.kind;
panda$core$Int64 $tmp4169 = $tmp4168.$rawValue;
panda$core$Int64 $tmp4170 = (panda$core$Int64) {37};
panda$core$Bit $tmp4171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4170);
bool $tmp4172 = $tmp4171.value;
if ($tmp4172) goto block2; else goto block3;
block2:;
// line 1960
org$pandalanguage$pandac$ASTNode* $tmp4173 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
return $tmp4173;
block3:;
panda$core$Int64 $tmp4174 = (panda$core$Int64) {33};
panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4174);
bool $tmp4176 = $tmp4175.value;
if ($tmp4176) goto block4; else goto block5;
block4:;
// line 1961
org$pandalanguage$pandac$ASTNode* $tmp4177 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
return $tmp4177;
block5:;
panda$core$Int64 $tmp4178 = (panda$core$Int64) {32};
panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4178);
bool $tmp4180 = $tmp4179.value;
if ($tmp4180) goto block6; else goto block7;
block6:;
// line 1962
org$pandalanguage$pandac$ASTNode* $tmp4181 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
return $tmp4181;
block7:;
panda$core$Int64 $tmp4182 = (panda$core$Int64) {31};
panda$core$Bit $tmp4183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4182);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block8; else goto block9;
block8:;
// line 1963
org$pandalanguage$pandac$ASTNode* $tmp4185 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
return $tmp4185;
block9:;
panda$core$Int64 $tmp4186 = (panda$core$Int64) {36};
panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block10; else goto block11;
block10:;
// line 1964
org$pandalanguage$pandac$ASTNode* $tmp4189 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
return $tmp4189;
block11:;
panda$core$Int64 $tmp4190 = (panda$core$Int64) {45};
panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4190);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block12; else goto block13;
block12:;
// line 1965
org$pandalanguage$pandac$ASTNode* $tmp4193 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
return $tmp4193;
block13:;
panda$core$Int64 $tmp4194 = (panda$core$Int64) {39};
panda$core$Bit $tmp4195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4194);
bool $tmp4196 = $tmp4195.value;
if ($tmp4196) goto block14; else goto block15;
block14:;
// line 1966
org$pandalanguage$pandac$ASTNode* $tmp4197 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
return $tmp4197;
block15:;
panda$core$Int64 $tmp4198 = (panda$core$Int64) {100};
panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4198);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block16; else goto block17;
block16:;
// line 1967
org$pandalanguage$pandac$ASTNode* $tmp4201 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
return $tmp4201;
block17:;
panda$core$Int64 $tmp4202 = (panda$core$Int64) {49};
panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4202);
bool $tmp4204 = $tmp4203.value;
if ($tmp4204) goto block18; else goto block19;
block18:;
// line 1969
org$pandalanguage$pandac$parser$Token $tmp4205 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4205;
// line 1970
panda$core$Int64 $tmp4206 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4207 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4206);
org$pandalanguage$pandac$parser$Token$nullable $tmp4208 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4207);
*(&local1) = $tmp4208;
// line 1971
org$pandalanguage$pandac$parser$Token$nullable $tmp4209 = *(&local1);
panda$core$Bit $tmp4210 = panda$core$Bit$init$builtin_bit($tmp4209.nonnull);
bool $tmp4211 = $tmp4210.value;
if ($tmp4211) goto block20; else goto block21;
block20:;
// line 1972
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4212 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4213 = *$tmp4212;
panda$core$Bit $tmp4214 = panda$core$Bit$init$builtin_bit($tmp4213 != NULL);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block22; else goto block23;
block22:;
// line 1973
org$pandalanguage$pandac$parser$Token$nullable $tmp4216 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4216.value));
// line 1974
org$pandalanguage$pandac$parser$Token $tmp4217 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4217);
// line 1975
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4218 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4219 = *$tmp4218;
panda$core$Int64 $tmp4220 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4221 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4220);
$fn4223 $tmp4222 = ($fn4223) $tmp4219->$class->vtable[3];
$tmp4222($tmp4219, $tmp4221);
// line 1976
org$pandalanguage$pandac$parser$Token $tmp4224 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1977
org$pandalanguage$pandac$parser$Token $tmp4225 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1978
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4226 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4227 = *$tmp4226;
panda$core$Int64 $tmp4228 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4229 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4228);
$fn4231 $tmp4230 = ($fn4231) $tmp4227->$class->vtable[4];
$tmp4230($tmp4227, $tmp4229);
goto block23;
block23:;
// line 1980
org$pandalanguage$pandac$parser$Token $tmp4232 = *(&local0);
panda$core$String* $tmp4233 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4232);
org$pandalanguage$pandac$ASTNode* $tmp4234 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4233);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
return $tmp4234;
block21:;
// line 1982
org$pandalanguage$pandac$parser$Token $tmp4235 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4235);
// line 1983
org$pandalanguage$pandac$ASTNode* $tmp4236 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
return $tmp4236;
block19:;
panda$core$Int64 $tmp4237 = (panda$core$Int64) {47};
panda$core$Bit $tmp4238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4237);
bool $tmp4239 = $tmp4238.value;
if ($tmp4239) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4240 = (panda$core$Int64) {48};
panda$core$Bit $tmp4241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4240);
bool $tmp4242 = $tmp4241.value;
if ($tmp4242) goto block24; else goto block26;
block24:;
// line 1986
org$pandalanguage$pandac$ASTNode* $tmp4243 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4243));
return $tmp4243;
block26:;
panda$core$Int64 $tmp4244 = (panda$core$Int64) {24};
panda$core$Bit $tmp4245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4244);
bool $tmp4246 = $tmp4245.value;
if ($tmp4246) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4247 = (panda$core$Int64) {25};
panda$core$Bit $tmp4248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4247);
bool $tmp4249 = $tmp4248.value;
if ($tmp4249) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4250 = (panda$core$Int64) {26};
panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4250);
bool $tmp4252 = $tmp4251.value;
if ($tmp4252) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4253 = (panda$core$Int64) {27};
panda$core$Bit $tmp4254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4253);
bool $tmp4255 = $tmp4254.value;
if ($tmp4255) goto block27; else goto block31;
block27:;
// line 1989
org$pandalanguage$pandac$ASTNode* $tmp4256 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4256));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4256));
return $tmp4256;
block31:;
panda$core$Int64 $tmp4257 = (panda$core$Int64) {23};
panda$core$Bit $tmp4258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4257);
bool $tmp4259 = $tmp4258.value;
if ($tmp4259) goto block32; else goto block33;
block32:;
// line 1992
org$pandalanguage$pandac$ASTNode* $tmp4260 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4260));
return $tmp4260;
block33:;
panda$core$Int64 $tmp4261 = (panda$core$Int64) {22};
panda$core$Bit $tmp4262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4261);
bool $tmp4263 = $tmp4262.value;
if ($tmp4263) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4264 = (panda$core$Int64) {21};
panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, $tmp4264);
bool $tmp4266 = $tmp4265.value;
if ($tmp4266) goto block34; else goto block36;
block34:;
// line 1995
org$pandalanguage$pandac$ASTNode* $tmp4267 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4267));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4267));
return $tmp4267;
block36:;
// line 1999
panda$core$Int64 $tmp4268 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4269 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4268);
org$pandalanguage$pandac$parser$Token$nullable $tmp4270 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4269, &$s4271);
// line 2000
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4272 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4273 = $tmp4272.value;
if ($tmp4273) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4274 = (panda$core$Int64) {1958};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4275, $tmp4274, &$s4276);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2009
panda$core$Int64 $tmp4277 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4278 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4277);
org$pandalanguage$pandac$parser$Token$nullable $tmp4279 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4278, &$s4280);
*(&local0) = $tmp4279;
// line 2010
org$pandalanguage$pandac$parser$Token$nullable $tmp4281 = *(&local0);
panda$core$Bit $tmp4282 = panda$core$Bit$init$builtin_bit(!$tmp4281.nonnull);
bool $tmp4283 = $tmp4282.value;
if ($tmp4283) goto block1; else goto block2;
block1:;
// line 2011
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2013
panda$core$Int64 $tmp4284 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4285 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4284);
org$pandalanguage$pandac$parser$Token$nullable $tmp4286 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4285, &$s4287);
*(&local1) = $tmp4286;
// line 2014
org$pandalanguage$pandac$parser$Token$nullable $tmp4288 = *(&local1);
panda$core$Bit $tmp4289 = panda$core$Bit$init$builtin_bit(!$tmp4288.nonnull);
bool $tmp4290 = $tmp4289.value;
if ($tmp4290) goto block3; else goto block4;
block3:;
// line 2015
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2017
panda$core$MutableString* $tmp4291 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4292 = *(&local1);
panda$core$String* $tmp4293 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4292.value));
panda$core$MutableString$init$panda$core$String($tmp4291, $tmp4293);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4294 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4294));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
*(&local2) = $tmp4291;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4293));
// line 2018
goto block5;
block5:;
// line 2019
panda$core$Int64 $tmp4295 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4296 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4295);
org$pandalanguage$pandac$parser$Token$nullable $tmp4297 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4296);
*(&local1) = $tmp4297;
// line 2020
org$pandalanguage$pandac$parser$Token$nullable $tmp4298 = *(&local1);
panda$core$Bit $tmp4299 = panda$core$Bit$init$builtin_bit(!$tmp4298.nonnull);
bool $tmp4300 = $tmp4299.value;
if ($tmp4300) goto block7; else goto block8;
block7:;
// line 2021
goto block6;
block8:;
// line 2023
panda$core$MutableString* $tmp4301 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4301, &$s4302);
// line 2024
panda$core$Int64 $tmp4303 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4304 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4303);
org$pandalanguage$pandac$parser$Token$nullable $tmp4305 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4304, &$s4306);
*(&local1) = $tmp4305;
// line 2025
org$pandalanguage$pandac$parser$Token$nullable $tmp4307 = *(&local1);
panda$core$Bit $tmp4308 = panda$core$Bit$init$builtin_bit(!$tmp4307.nonnull);
bool $tmp4309 = $tmp4308.value;
if ($tmp4309) goto block9; else goto block10;
block9:;
// line 2026
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4310 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4310));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2028
panda$core$MutableString* $tmp4311 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4312 = *(&local1);
panda$core$String* $tmp4313 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4312.value));
panda$core$MutableString$append$panda$core$String($tmp4311, $tmp4313);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4313));
goto block5;
block6:;
// line 2030
org$pandalanguage$pandac$ASTNode* $tmp4314 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4315 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$nullable $tmp4316 = *(&local0);
org$pandalanguage$pandac$Position $tmp4317 = ((org$pandalanguage$pandac$parser$Token) $tmp4316.value).position;
panda$core$MutableString* $tmp4318 = *(&local2);
panda$core$String* $tmp4319 = panda$core$MutableString$finish$R$panda$core$String($tmp4318);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4314, $tmp4315, $tmp4317, $tmp4319);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4319));
panda$core$MutableString* $tmp4320 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4320));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4314;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2037
panda$core$Int64 $tmp4321 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4322 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4321);
org$pandalanguage$pandac$parser$Token$nullable $tmp4323 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4322, &$s4324);
*(&local0) = $tmp4323;
// line 2038
org$pandalanguage$pandac$parser$Token$nullable $tmp4325 = *(&local0);
panda$core$Bit $tmp4326 = panda$core$Bit$init$builtin_bit(!$tmp4325.nonnull);
bool $tmp4327 = $tmp4326.value;
if ($tmp4327) goto block1; else goto block2;
block1:;
// line 2039
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2041
panda$core$Int64 $tmp4328 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4329 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4328);
org$pandalanguage$pandac$parser$Token$nullable $tmp4330 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4329, &$s4331);
*(&local1) = $tmp4330;
// line 2042
org$pandalanguage$pandac$parser$Token$nullable $tmp4332 = *(&local1);
panda$core$Bit $tmp4333 = panda$core$Bit$init$builtin_bit(!$tmp4332.nonnull);
bool $tmp4334 = $tmp4333.value;
if ($tmp4334) goto block3; else goto block4;
block3:;
// line 2043
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2045
panda$core$MutableString* $tmp4335 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4336 = *(&local1);
panda$core$String* $tmp4337 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4336.value));
panda$core$MutableString$init$panda$core$String($tmp4335, $tmp4337);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4338 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4335));
*(&local2) = $tmp4335;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4335));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4337));
// line 2046
goto block5;
block5:;
// line 2047
panda$core$Int64 $tmp4339 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4340 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4339);
org$pandalanguage$pandac$parser$Token$nullable $tmp4341 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4340);
*(&local1) = $tmp4341;
// line 2048
org$pandalanguage$pandac$parser$Token$nullable $tmp4342 = *(&local1);
panda$core$Bit $tmp4343 = panda$core$Bit$init$builtin_bit(!$tmp4342.nonnull);
bool $tmp4344 = $tmp4343.value;
if ($tmp4344) goto block7; else goto block8;
block7:;
// line 2049
goto block6;
block8:;
// line 2051
panda$core$MutableString* $tmp4345 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4345, &$s4346);
// line 2052
panda$core$Int64 $tmp4347 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4348 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4347);
org$pandalanguage$pandac$parser$Token$nullable $tmp4349 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4348, &$s4350);
*(&local1) = $tmp4349;
// line 2053
org$pandalanguage$pandac$parser$Token$nullable $tmp4351 = *(&local1);
panda$core$Bit $tmp4352 = panda$core$Bit$init$builtin_bit(!$tmp4351.nonnull);
bool $tmp4353 = $tmp4352.value;
if ($tmp4353) goto block9; else goto block10;
block9:;
// line 2054
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4354 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4354));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2056
panda$core$MutableString* $tmp4355 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4356 = *(&local1);
panda$core$String* $tmp4357 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4356.value));
panda$core$MutableString$append$panda$core$String($tmp4355, $tmp4357);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4357));
goto block5;
block6:;
// line 2058
org$pandalanguage$pandac$ASTNode* $tmp4358 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4359 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4360 = *(&local0);
org$pandalanguage$pandac$Position $tmp4361 = ((org$pandalanguage$pandac$parser$Token) $tmp4360.value).position;
panda$core$MutableString* $tmp4362 = *(&local2);
panda$core$String* $tmp4363 = panda$core$MutableString$finish$R$panda$core$String($tmp4362);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4358, $tmp4359, $tmp4361, $tmp4363);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4363));
panda$core$MutableString* $tmp4364 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4364));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4358;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 2065
panda$core$Int64 $tmp4365 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4366 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4365);
org$pandalanguage$pandac$parser$Token$nullable $tmp4367 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4366, &$s4368);
*(&local0) = $tmp4367;
// line 2066
org$pandalanguage$pandac$parser$Token$nullable $tmp4369 = *(&local0);
panda$core$Bit $tmp4370 = panda$core$Bit$init$builtin_bit(!$tmp4369.nonnull);
bool $tmp4371 = $tmp4370.value;
if ($tmp4371) goto block1; else goto block2;
block1:;
// line 2067
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2069
panda$core$Int64 $tmp4372 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4373 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4372);
org$pandalanguage$pandac$parser$Token$nullable $tmp4374 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4373, &$s4375);
*(&local1) = $tmp4374;
// line 2070
org$pandalanguage$pandac$parser$Token$nullable $tmp4376 = *(&local1);
panda$core$Bit $tmp4377 = panda$core$Bit$init$builtin_bit(!$tmp4376.nonnull);
bool $tmp4378 = $tmp4377.value;
if ($tmp4378) goto block3; else goto block4;
block3:;
// line 2071
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2073
panda$collections$Array* $tmp4379 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4379);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4380 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4380));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4379));
*(&local2) = $tmp4379;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4379));
// line 2074
panda$core$Int64 $tmp4381 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4382 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4381);
org$pandalanguage$pandac$parser$Token$nullable $tmp4383 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4382);
panda$core$Bit $tmp4384 = panda$core$Bit$init$builtin_bit($tmp4383.nonnull);
bool $tmp4385 = $tmp4384.value;
if ($tmp4385) goto block5; else goto block7;
block5:;
// line 2075
org$pandalanguage$pandac$ASTNode* $tmp4386 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4387 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4387));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
*(&local3) = $tmp4386;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
// line 2076
org$pandalanguage$pandac$ASTNode* $tmp4388 = *(&local3);
panda$core$Bit $tmp4389 = panda$core$Bit$init$builtin_bit($tmp4388 == NULL);
bool $tmp4390 = $tmp4389.value;
if ($tmp4390) goto block8; else goto block9;
block8:;
// line 2077
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4391 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4391));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4392 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4392));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2079
panda$collections$Array* $tmp4393 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4394 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4395 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4396 = *(&local1);
org$pandalanguage$pandac$Position $tmp4397 = ((org$pandalanguage$pandac$parser$Token) $tmp4396.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4398 = *(&local1);
panda$core$String* $tmp4399 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4398.value));
org$pandalanguage$pandac$ASTNode* $tmp4400 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4394, $tmp4395, $tmp4397, $tmp4399, $tmp4400);
panda$collections$Array$add$panda$collections$Array$T($tmp4393, ((panda$core$Object*) $tmp4394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4399));
org$pandalanguage$pandac$ASTNode* $tmp4401 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4401));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2082
panda$collections$Array* $tmp4402 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4403 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4404 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4405 = *(&local1);
org$pandalanguage$pandac$Position $tmp4406 = ((org$pandalanguage$pandac$parser$Token) $tmp4405.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4407 = *(&local1);
panda$core$String* $tmp4408 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4407.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4403, $tmp4404, $tmp4406, $tmp4408);
panda$collections$Array$add$panda$collections$Array$T($tmp4402, ((panda$core$Object*) $tmp4403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4408));
goto block6;
block6:;
// line 2084
goto block10;
block10:;
panda$core$Int64 $tmp4409 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4410 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4409);
org$pandalanguage$pandac$parser$Token$nullable $tmp4411 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4410);
panda$core$Bit $tmp4412 = panda$core$Bit$init$builtin_bit($tmp4411.nonnull);
bool $tmp4413 = $tmp4412.value;
if ($tmp4413) goto block11; else goto block12;
block11:;
// line 2085
panda$core$Int64 $tmp4414 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4415 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4414);
org$pandalanguage$pandac$parser$Token$nullable $tmp4416 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4415, &$s4417);
*(&local1) = $tmp4416;
// line 2086
org$pandalanguage$pandac$parser$Token$nullable $tmp4418 = *(&local1);
panda$core$Bit $tmp4419 = panda$core$Bit$init$builtin_bit(!$tmp4418.nonnull);
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block13; else goto block14;
block13:;
// line 2087
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4421 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4421));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block14:;
// line 2089
panda$core$Int64 $tmp4422 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4423 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4422);
org$pandalanguage$pandac$parser$Token$nullable $tmp4424 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4423);
panda$core$Bit $tmp4425 = panda$core$Bit$init$builtin_bit($tmp4424.nonnull);
bool $tmp4426 = $tmp4425.value;
if ($tmp4426) goto block15; else goto block17;
block15:;
// line 2090
org$pandalanguage$pandac$ASTNode* $tmp4427 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4428 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4427));
*(&local4) = $tmp4427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4427));
// line 2091
org$pandalanguage$pandac$ASTNode* $tmp4429 = *(&local4);
panda$core$Bit $tmp4430 = panda$core$Bit$init$builtin_bit($tmp4429 == NULL);
bool $tmp4431 = $tmp4430.value;
if ($tmp4431) goto block18; else goto block19;
block18:;
// line 2092
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4432 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4432));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4433 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4433));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block19:;
// line 2094
panda$collections$Array* $tmp4434 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4435 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4436 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4437 = *(&local1);
org$pandalanguage$pandac$Position $tmp4438 = ((org$pandalanguage$pandac$parser$Token) $tmp4437.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4439 = *(&local1);
panda$core$String* $tmp4440 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4439.value));
org$pandalanguage$pandac$ASTNode* $tmp4441 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4435, $tmp4436, $tmp4438, $tmp4440, $tmp4441);
panda$collections$Array$add$panda$collections$Array$T($tmp4434, ((panda$core$Object*) $tmp4435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4440));
org$pandalanguage$pandac$ASTNode* $tmp4442 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4442));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2097
panda$collections$Array* $tmp4443 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4444 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4445 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4446 = *(&local1);
org$pandalanguage$pandac$Position $tmp4447 = ((org$pandalanguage$pandac$parser$Token) $tmp4446.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4448 = *(&local1);
panda$core$String* $tmp4449 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4448.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4444, $tmp4445, $tmp4447, $tmp4449);
panda$collections$Array$add$panda$collections$Array$T($tmp4443, ((panda$core$Object*) $tmp4444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4449));
goto block16;
block16:;
goto block10;
block12:;
// line 2100
panda$core$Int64 $tmp4450 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4451 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4450);
org$pandalanguage$pandac$parser$Token$nullable $tmp4452 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4451, &$s4453);
panda$core$Bit $tmp4454 = panda$core$Bit$init$builtin_bit(!$tmp4452.nonnull);
bool $tmp4455 = $tmp4454.value;
if ($tmp4455) goto block20; else goto block21;
block20:;
// line 2101
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4456 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4456));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block21:;
// line 2103
panda$collections$Array* $tmp4457 = *(&local2);
panda$collections$ImmutableArray* $tmp4458 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4457);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4458));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4458));
panda$collections$Array* $tmp4459 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4459));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4458;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2110
panda$core$Int64 $tmp4460 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4461 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4460);
org$pandalanguage$pandac$parser$Token$nullable $tmp4462 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4461, &$s4463);
*(&local0) = $tmp4462;
// line 2111
org$pandalanguage$pandac$parser$Token$nullable $tmp4464 = *(&local0);
panda$core$Bit $tmp4465 = panda$core$Bit$init$builtin_bit(!$tmp4464.nonnull);
bool $tmp4466 = $tmp4465.value;
if ($tmp4466) goto block1; else goto block2;
block1:;
// line 2112
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2114
panda$collections$Array* $tmp4467 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4467);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4468));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4467));
*(&local1) = $tmp4467;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4467));
// line 2115
org$pandalanguage$pandac$ASTNode* $tmp4469 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4470 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4469));
*(&local2) = $tmp4469;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4469));
// line 2116
org$pandalanguage$pandac$ASTNode* $tmp4471 = *(&local2);
panda$core$Bit $tmp4472 = panda$core$Bit$init$builtin_bit($tmp4471 == NULL);
bool $tmp4473 = $tmp4472.value;
if ($tmp4473) goto block3; else goto block4;
block3:;
// line 2117
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4474 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4474));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4475 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4475));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2119
panda$collections$Array* $tmp4476 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4477 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4476, ((panda$core$Object*) $tmp4477));
// line 2120
goto block5;
block5:;
panda$core$Int64 $tmp4478 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4479 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4478);
org$pandalanguage$pandac$parser$Token$nullable $tmp4480 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4479);
panda$core$Bit $tmp4481 = panda$core$Bit$init$builtin_bit($tmp4480.nonnull);
bool $tmp4482 = $tmp4481.value;
if ($tmp4482) goto block6; else goto block7;
block6:;
// line 2121
org$pandalanguage$pandac$ASTNode* $tmp4483 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4484 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4484));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4483));
*(&local2) = $tmp4483;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4483));
// line 2122
org$pandalanguage$pandac$ASTNode* $tmp4485 = *(&local2);
panda$core$Bit $tmp4486 = panda$core$Bit$init$builtin_bit($tmp4485 == NULL);
bool $tmp4487 = $tmp4486.value;
if ($tmp4487) goto block8; else goto block9;
block8:;
// line 2123
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4488 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4488));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4489 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4489));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2125
panda$collections$Array* $tmp4490 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4491 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4490, ((panda$core$Object*) $tmp4491));
goto block5;
block7:;
// line 2127
panda$collections$Array* $tmp4492 = *(&local1);
panda$collections$ImmutableArray* $tmp4493 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4492);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
org$pandalanguage$pandac$ASTNode* $tmp4494 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4494));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4495 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4495));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4493;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2134
panda$core$Int64 $tmp4496 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4497 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4496);
org$pandalanguage$pandac$parser$Token$nullable $tmp4498 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4497, &$s4499);
*(&local0) = $tmp4498;
// line 2135
*(&local1) = ((panda$core$String*) NULL);
// line 2136
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4500 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4500));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2137
panda$core$Int64 $tmp4501 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4502 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4501);
org$pandalanguage$pandac$parser$Token$nullable $tmp4503 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4502);
*(&local3) = $tmp4503;
// line 2138
org$pandalanguage$pandac$parser$Token$nullable $tmp4504 = *(&local3);
panda$core$Bit $tmp4505 = panda$core$Bit$init$builtin_bit($tmp4504.nonnull);
bool $tmp4506 = $tmp4505.value;
if ($tmp4506) goto block1; else goto block2;
block1:;
// line 2139
org$pandalanguage$pandac$ASTNode* $tmp4507 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4508 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4508));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
*(&local2) = $tmp4507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
// line 2140
org$pandalanguage$pandac$ASTNode* $tmp4509 = *(&local2);
panda$core$Bit $tmp4510 = panda$core$Bit$init$builtin_bit($tmp4509 == NULL);
bool $tmp4511 = $tmp4510.value;
if ($tmp4511) goto block3; else goto block4;
block3:;
// line 2141
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4512));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4513 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4513));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2143
panda$core$Int64 $tmp4514 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4515 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4514);
org$pandalanguage$pandac$parser$Token$nullable $tmp4516 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4515, &$s4517);
*(&local4) = $tmp4516;
// line 2144
org$pandalanguage$pandac$parser$Token$nullable $tmp4518 = *(&local4);
panda$core$Bit $tmp4519 = panda$core$Bit$init$builtin_bit(!$tmp4518.nonnull);
bool $tmp4520 = $tmp4519.value;
if ($tmp4520) goto block5; else goto block6;
block5:;
// line 2145
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4521 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4521));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4522 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4522));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2147
panda$core$String** $tmp4523 = &param0->source;
panda$core$String* $tmp4524 = *$tmp4523;
panda$core$String** $tmp4525 = &param0->source;
panda$core$String* $tmp4526 = *$tmp4525;
org$pandalanguage$pandac$parser$Token$nullable $tmp4527 = *(&local3);
panda$core$String$Index $tmp4528 = ((org$pandalanguage$pandac$parser$Token) $tmp4527.value).start;
panda$core$String$Index $tmp4529 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4526, $tmp4528);
org$pandalanguage$pandac$parser$Token$nullable $tmp4530 = *(&local4);
panda$core$String$Index $tmp4531 = ((org$pandalanguage$pandac$parser$Token) $tmp4530.value).start;
panda$core$Bit $tmp4532 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4533 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4529, $tmp4531, $tmp4532);
panda$core$String* $tmp4534 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4524, $tmp4533);
panda$core$String* $tmp4535 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4534));
*(&local1) = $tmp4534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4534));
goto block2;
block2:;
// line 2149
org$pandalanguage$pandac$ASTNode* $tmp4536 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4537 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4538 = *(&local0);
org$pandalanguage$pandac$Position $tmp4539 = ((org$pandalanguage$pandac$parser$Token) $tmp4538.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4540 = *(&local0);
panda$core$String* $tmp4541 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4540.value));
panda$core$String* $tmp4542 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4543 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4536, $tmp4537, $tmp4539, $tmp4541, $tmp4542, $tmp4543);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4541));
org$pandalanguage$pandac$ASTNode* $tmp4544 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4545 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4536;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2156
panda$collections$Array* $tmp4546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4546);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4546));
*(&local0) = $tmp4546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4546));
// line 2157
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4548 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4549 = $tmp4548.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4550;
$tmp4550 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4550->value = $tmp4549;
panda$core$Int64 $tmp4551 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4552 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4551);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4553;
$tmp4553 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4553->value = $tmp4552;
ITable* $tmp4554 = ((panda$core$Equatable*) $tmp4550)->$class->itable;
while ($tmp4554->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4554 = $tmp4554->next;
}
$fn4556 $tmp4555 = $tmp4554->methods[0];
panda$core$Bit $tmp4557 = $tmp4555(((panda$core$Equatable*) $tmp4550), ((panda$core$Equatable*) $tmp4553));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4550)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4553)));
bool $tmp4558 = $tmp4557.value;
if ($tmp4558) goto block2; else goto block3;
block2:;
// line 2158
org$pandalanguage$pandac$ASTNode* $tmp4559 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4560 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
*(&local1) = $tmp4559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
// line 2159
org$pandalanguage$pandac$ASTNode* $tmp4561 = *(&local1);
panda$core$Bit $tmp4562 = panda$core$Bit$init$builtin_bit($tmp4561 == NULL);
bool $tmp4563 = $tmp4562.value;
if ($tmp4563) goto block4; else goto block5;
block4:;
// line 2160
org$pandalanguage$pandac$ASTNode* $tmp4564 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4564));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
// line 2162
panda$collections$Array* $tmp4565 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4566 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4565, ((panda$core$Object*) $tmp4566));
org$pandalanguage$pandac$ASTNode* $tmp4567 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4567));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 2164
panda$collections$Array* $tmp4568 = *(&local0);
panda$collections$ImmutableArray* $tmp4569 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4568);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
panda$collections$Array* $tmp4570 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4570));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp4569;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2168
panda$core$Int64 $tmp4571 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4572 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4571);
org$pandalanguage$pandac$parser$Token$nullable $tmp4573 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4572, &$s4574);
*(&local0) = $tmp4573;
// line 2169
org$pandalanguage$pandac$parser$Token$nullable $tmp4575 = *(&local0);
panda$core$Bit $tmp4576 = panda$core$Bit$init$builtin_bit(!$tmp4575.nonnull);
bool $tmp4577 = $tmp4576.value;
if ($tmp4577) goto block1; else goto block2;
block1:;
// line 2170
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2172
panda$core$MutableString* $tmp4578 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4578);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4579 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4578));
*(&local1) = $tmp4578;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4578));
// line 2173
goto block3;
block3:;
// line 2174
org$pandalanguage$pandac$parser$Token $tmp4580 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4580;
// line 2175
org$pandalanguage$pandac$parser$Token $tmp4581 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4582 = $tmp4581.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4583;
$tmp4583 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4583->value = $tmp4582;
panda$core$Int64 $tmp4584 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4585 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4584);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4586;
$tmp4586 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4586->value = $tmp4585;
ITable* $tmp4587 = ((panda$core$Equatable*) $tmp4583)->$class->itable;
while ($tmp4587->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4587 = $tmp4587->next;
}
$fn4589 $tmp4588 = $tmp4587->methods[0];
panda$core$Bit $tmp4590 = $tmp4588(((panda$core$Equatable*) $tmp4583), ((panda$core$Equatable*) $tmp4586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4583)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4586)));
bool $tmp4591 = $tmp4590.value;
if ($tmp4591) goto block5; else goto block6;
block5:;
// line 2176
goto block4;
block6:;
// line 2178
org$pandalanguage$pandac$parser$Token $tmp4592 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4593 = $tmp4592.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4594;
$tmp4594 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4594->value = $tmp4593;
panda$core$Int64 $tmp4595 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4596 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4595);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4597;
$tmp4597 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4597->value = $tmp4596;
ITable* $tmp4598 = ((panda$core$Equatable*) $tmp4594)->$class->itable;
while ($tmp4598->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4598 = $tmp4598->next;
}
$fn4600 $tmp4599 = $tmp4598->methods[0];
panda$core$Bit $tmp4601 = $tmp4599(((panda$core$Equatable*) $tmp4594), ((panda$core$Equatable*) $tmp4597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4594)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4597)));
bool $tmp4602 = $tmp4601.value;
if ($tmp4602) goto block7; else goto block8;
block7:;
// line 2179
org$pandalanguage$pandac$parser$Token$nullable $tmp4603 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4603.value), &$s4604);
// line 2180
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4605 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4605));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2182
panda$core$MutableString* $tmp4606 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4607 = *(&local2);
panda$core$String* $tmp4608 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4607);
panda$core$MutableString$append$panda$core$String($tmp4606, $tmp4608);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
goto block3;
block4:;
// line 2184
org$pandalanguage$pandac$ASTNode* $tmp4609 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4610 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4611 = *(&local0);
org$pandalanguage$pandac$Position $tmp4612 = ((org$pandalanguage$pandac$parser$Token) $tmp4611.value).position;
panda$core$MutableString* $tmp4613 = *(&local1);
panda$core$String* $tmp4614 = panda$core$MutableString$finish$R$panda$core$String($tmp4613);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4609, $tmp4610, $tmp4612, $tmp4614);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4614));
panda$core$MutableString* $tmp4615 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4615));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp4609;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2191
panda$core$Int64 $tmp4616 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4617 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4616);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4617);
// line 2192
panda$core$Int64 $tmp4618 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4619 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4618);
org$pandalanguage$pandac$parser$Token$nullable $tmp4620 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4619, &$s4621);
*(&local0) = $tmp4620;
// line 2193
panda$core$Int64 $tmp4622 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4623 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4622);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4623);
// line 2194
org$pandalanguage$pandac$parser$Token$nullable $tmp4624 = *(&local0);
panda$core$Bit $tmp4625 = panda$core$Bit$init$builtin_bit(!$tmp4624.nonnull);
bool $tmp4626 = $tmp4625.value;
if ($tmp4626) goto block1; else goto block2;
block1:;
// line 2195
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2197
org$pandalanguage$pandac$ASTNode* $tmp4627 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4628 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
*(&local1) = $tmp4627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
// line 2198
org$pandalanguage$pandac$ASTNode* $tmp4629 = *(&local1);
panda$core$Bit $tmp4630 = panda$core$Bit$init$builtin_bit($tmp4629 == NULL);
bool $tmp4631 = $tmp4630.value;
if ($tmp4631) goto block3; else goto block4;
block3:;
// line 2199
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4632 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4632));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2201
org$pandalanguage$pandac$ASTNode* $tmp4633 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4634 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp4635 = *(&local0);
org$pandalanguage$pandac$Position $tmp4636 = ((org$pandalanguage$pandac$parser$Token) $tmp4635.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4637 = *(&local0);
panda$core$String* $tmp4638 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4637.value));
org$pandalanguage$pandac$ASTNode* $tmp4639 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4633, $tmp4634, $tmp4636, $tmp4638, $tmp4639);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4638));
org$pandalanguage$pandac$ASTNode* $tmp4640 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4633;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2208
panda$core$Int64 $tmp4641 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4642 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4641);
org$pandalanguage$pandac$parser$Token$nullable $tmp4643 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4642, &$s4644);
*(&local0) = $tmp4643;
// line 2209
org$pandalanguage$pandac$parser$Token$nullable $tmp4645 = *(&local0);
panda$core$Bit $tmp4646 = panda$core$Bit$init$builtin_bit(!$tmp4645.nonnull);
bool $tmp4647 = $tmp4646.value;
if ($tmp4647) goto block1; else goto block2;
block1:;
// line 2210
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2212
panda$collections$Array* $tmp4648 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4648);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4649 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4648));
*(&local1) = $tmp4648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4648));
// line 2213
panda$core$Int64 $tmp4650 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4651 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4650);
org$pandalanguage$pandac$parser$Token$nullable $tmp4652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4651);
panda$core$Bit $tmp4653 = panda$core$Bit$init$builtin_bit(!$tmp4652.nonnull);
bool $tmp4654 = $tmp4653.value;
if ($tmp4654) goto block3; else goto block4;
block3:;
// line 2214
org$pandalanguage$pandac$ASTNode* $tmp4655 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4656 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4656));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4655));
*(&local2) = $tmp4655;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4655));
// line 2215
org$pandalanguage$pandac$ASTNode* $tmp4657 = *(&local2);
panda$core$Bit $tmp4658 = panda$core$Bit$init$builtin_bit($tmp4657 == NULL);
bool $tmp4659 = $tmp4658.value;
if ($tmp4659) goto block5; else goto block6;
block5:;
// line 2216
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4660 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4661 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block6:;
// line 2218
panda$collections$Array* $tmp4662 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4663 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4662, ((panda$core$Object*) $tmp4663));
// line 2219
goto block7;
block7:;
panda$core$Int64 $tmp4664 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4665 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4664);
org$pandalanguage$pandac$parser$Token$nullable $tmp4666 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4665);
panda$core$Bit $tmp4667 = panda$core$Bit$init$builtin_bit($tmp4666.nonnull);
bool $tmp4668 = $tmp4667.value;
if ($tmp4668) goto block8; else goto block9;
block8:;
// line 2220
org$pandalanguage$pandac$ASTNode* $tmp4669 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4669));
*(&local2) = $tmp4669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4669));
// line 2221
org$pandalanguage$pandac$ASTNode* $tmp4671 = *(&local2);
panda$core$Bit $tmp4672 = panda$core$Bit$init$builtin_bit($tmp4671 == NULL);
bool $tmp4673 = $tmp4672.value;
if ($tmp4673) goto block10; else goto block11;
block10:;
// line 2222
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4674 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4675 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4675));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block11:;
// line 2224
panda$collections$Array* $tmp4676 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4677 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4676, ((panda$core$Object*) $tmp4677));
goto block7;
block9:;
// line 2226
panda$core$Int64 $tmp4678 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4679 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4678);
org$pandalanguage$pandac$parser$Token$nullable $tmp4680 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4679, &$s4681);
panda$core$Bit $tmp4682 = panda$core$Bit$init$builtin_bit(!$tmp4680.nonnull);
bool $tmp4683 = $tmp4682.value;
if ($tmp4683) goto block12; else goto block13;
block12:;
// line 2227
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4684 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4684));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4685 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4686 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4686));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 2230
panda$collections$Array* $tmp4687 = *(&local1);
panda$collections$ImmutableArray* $tmp4688 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4687);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$collections$Array* $tmp4689 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4688;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
// line 2238
// line 2239
panda$core$Int64 $tmp4690 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4691 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4690);
org$pandalanguage$pandac$parser$Token$nullable $tmp4692 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4691);
*(&local1) = $tmp4692;
// line 2240
org$pandalanguage$pandac$parser$Token$nullable $tmp4693 = *(&local1);
panda$core$Bit $tmp4694 = panda$core$Bit$init$builtin_bit(!$tmp4693.nonnull);
bool $tmp4695 = $tmp4694.value;
if ($tmp4695) goto block1; else goto block3;
block1:;
// line 2241
panda$core$Int64 $tmp4696 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4697 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4696);
org$pandalanguage$pandac$parser$Token$nullable $tmp4698 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4697, &$s4699);
*(&local1) = $tmp4698;
// line 2242
org$pandalanguage$pandac$parser$Token$nullable $tmp4700 = *(&local1);
panda$core$Bit $tmp4701 = panda$core$Bit$init$builtin_bit(!$tmp4700.nonnull);
bool $tmp4702 = $tmp4701.value;
if ($tmp4702) goto block4; else goto block5;
block4:;
// line 2243
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2245
panda$core$Int64 $tmp4703 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4704 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4703);
*(&local0) = $tmp4704;
goto block2;
block3:;
// line 1
// line 2248
panda$core$Int64 $tmp4705 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4706 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4705);
*(&local0) = $tmp4706;
goto block2;
block2:;
// line 2250
panda$core$Int64 $tmp4707 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4708 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4707);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4708);
// line 2251
panda$core$String* $tmp4709 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4710 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4710));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
*(&local2) = $tmp4709;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
// line 2252
panda$core$Int64 $tmp4711 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4712 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4711);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4712);
// line 2253
panda$core$String* $tmp4713 = *(&local2);
panda$core$Bit $tmp4714 = panda$core$Bit$init$builtin_bit($tmp4713 == NULL);
bool $tmp4715 = $tmp4714.value;
if ($tmp4715) goto block6; else goto block7;
block6:;
// line 2254
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4716 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2256
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2257
org$pandalanguage$pandac$parser$Token $tmp4717 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4718 = $tmp4717.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4719;
$tmp4719 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4719->value = $tmp4718;
panda$core$Int64 $tmp4720 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4721 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4720);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4722;
$tmp4722 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4722->value = $tmp4721;
ITable* $tmp4723 = ((panda$core$Equatable*) $tmp4719)->$class->itable;
while ($tmp4723->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4723 = $tmp4723->next;
}
$fn4725 $tmp4724 = $tmp4723->methods[0];
panda$core$Bit $tmp4726 = $tmp4724(((panda$core$Equatable*) $tmp4719), ((panda$core$Equatable*) $tmp4722));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4719)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4722)));
bool $tmp4727 = $tmp4726.value;
if ($tmp4727) goto block8; else goto block10;
block8:;
// line 2258
panda$collections$ImmutableArray* $tmp4728 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4729 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4728));
*(&local3) = $tmp4728;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4728));
goto block9;
block10:;
// line 1
// line 2261
panda$collections$ImmutableArray* $tmp4730 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block9:;
// line 2263
panda$collections$ImmutableArray* $tmp4731 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4732 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
*(&local4) = $tmp4731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
// line 2264
panda$collections$ImmutableArray* $tmp4733 = *(&local4);
panda$core$Bit $tmp4734 = panda$core$Bit$init$builtin_bit($tmp4733 == NULL);
bool $tmp4735 = $tmp4734.value;
if ($tmp4735) goto block11; else goto block12;
block11:;
// line 2265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4736 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4737 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4738 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4738));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2267
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2268
org$pandalanguage$pandac$parser$Token $tmp4739 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4740 = $tmp4739.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4741;
$tmp4741 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4741->value = $tmp4740;
panda$core$Int64 $tmp4742 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4743 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4742);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4744;
$tmp4744 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4744->value = $tmp4743;
ITable* $tmp4745 = ((panda$core$Equatable*) $tmp4741)->$class->itable;
while ($tmp4745->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4745 = $tmp4745->next;
}
$fn4747 $tmp4746 = $tmp4745->methods[0];
panda$core$Bit $tmp4748 = $tmp4746(((panda$core$Equatable*) $tmp4741), ((panda$core$Equatable*) $tmp4744));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4741)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4744)));
bool $tmp4749 = $tmp4748.value;
if ($tmp4749) goto block13; else goto block15;
block13:;
// line 2269
org$pandalanguage$pandac$ASTNode* $tmp4750 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4751 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
*(&local5) = $tmp4750;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
// line 2270
org$pandalanguage$pandac$ASTNode* $tmp4752 = *(&local5);
panda$core$Bit $tmp4753 = panda$core$Bit$init$builtin_bit($tmp4752 == NULL);
bool $tmp4754 = $tmp4753.value;
if ($tmp4754) goto block16; else goto block17;
block16:;
// line 2271
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4755 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4756 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4756));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4757 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4758 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4758));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2275
org$pandalanguage$pandac$ASTNode* $tmp4759 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4759));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2277
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
// line 2278
org$pandalanguage$pandac$parser$Token $tmp4760 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4761 = $tmp4760.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4762;
$tmp4762 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4762->value = $tmp4761;
panda$core$Int64 $tmp4763 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4764 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4763);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4765;
$tmp4765 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4765->value = $tmp4764;
ITable* $tmp4766 = ((panda$core$Equatable*) $tmp4762)->$class->itable;
while ($tmp4766->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4766 = $tmp4766->next;
}
$fn4768 $tmp4767 = $tmp4766->methods[0];
panda$core$Bit $tmp4769 = $tmp4767(((panda$core$Equatable*) $tmp4762), ((panda$core$Equatable*) $tmp4765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4762)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4765)));
bool $tmp4770 = $tmp4769.value;
if ($tmp4770) goto block18; else goto block20;
block18:;
// line 2279
panda$collections$ImmutableArray* $tmp4771 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4772 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4772));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4771));
*(&local6) = $tmp4771;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4771));
// line 2280
panda$collections$ImmutableArray* $tmp4773 = *(&local6);
panda$core$Bit $tmp4774 = panda$core$Bit$init$builtin_bit($tmp4773 == NULL);
bool $tmp4775 = $tmp4774.value;
if ($tmp4775) goto block21; else goto block22;
block21:;
// line 2281
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4776 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4777 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4777));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4778 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4778));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4779 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4780 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4780));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2285
panda$collections$ImmutableArray* $tmp4781 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block19;
block19:;
// line 2287
org$pandalanguage$pandac$ASTNode* $tmp4782 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4783 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4784 = *(&local1);
org$pandalanguage$pandac$Position $tmp4785 = ((org$pandalanguage$pandac$parser$Token) $tmp4784.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4786 = *(&local0);
panda$core$String* $tmp4787 = *(&local2);
panda$collections$ImmutableArray* $tmp4788 = *(&local3);
panda$collections$ImmutableArray* $tmp4789 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4790 = *(&local5);
panda$collections$ImmutableArray* $tmp4791 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4782, $tmp4783, $tmp4785, param1, param2, $tmp4786, $tmp4787, $tmp4788, $tmp4789, $tmp4790, $tmp4791);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
panda$collections$ImmutableArray* $tmp4792 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4792));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4793 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4794 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4794));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4795 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4795));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4796 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4796));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return $tmp4782;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
// line 2295
// line 2296
panda$core$Int64 $tmp4797 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4798 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4797);
org$pandalanguage$pandac$parser$Token$nullable $tmp4799 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4798);
*(&local1) = $tmp4799;
// line 2297
org$pandalanguage$pandac$parser$Token$nullable $tmp4800 = *(&local1);
panda$core$Bit $tmp4801 = panda$core$Bit$init$builtin_bit(!$tmp4800.nonnull);
bool $tmp4802 = $tmp4801.value;
if ($tmp4802) goto block1; else goto block3;
block1:;
// line 2298
panda$core$Int64 $tmp4803 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4804 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4803);
org$pandalanguage$pandac$parser$Token$nullable $tmp4805 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4804, &$s4806);
*(&local1) = $tmp4805;
// line 2299
org$pandalanguage$pandac$parser$Token$nullable $tmp4807 = *(&local1);
panda$core$Bit $tmp4808 = panda$core$Bit$init$builtin_bit(!$tmp4807.nonnull);
bool $tmp4809 = $tmp4808.value;
if ($tmp4809) goto block4; else goto block5;
block4:;
// line 2300
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2302
panda$core$Int64 $tmp4810 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4811 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4810);
*(&local0) = $tmp4811;
goto block2;
block3:;
// line 1
// line 2305
panda$core$Int64 $tmp4812 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4813 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4812);
*(&local0) = $tmp4813;
goto block2;
block2:;
// line 2307
panda$collections$ImmutableArray* $tmp4814 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4815 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4815));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
*(&local2) = $tmp4814;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
// line 2308
panda$collections$ImmutableArray* $tmp4816 = *(&local2);
panda$core$Bit $tmp4817 = panda$core$Bit$init$builtin_bit($tmp4816 == NULL);
bool $tmp4818 = $tmp4817.value;
if ($tmp4818) goto block6; else goto block7;
block6:;
// line 2309
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4819 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2311
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2312
org$pandalanguage$pandac$parser$Token $tmp4820 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4821 = $tmp4820.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4822;
$tmp4822 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4822->value = $tmp4821;
panda$core$Int64 $tmp4823 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4824 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4823);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4825;
$tmp4825 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4825->value = $tmp4824;
ITable* $tmp4826 = ((panda$core$Equatable*) $tmp4822)->$class->itable;
while ($tmp4826->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4826 = $tmp4826->next;
}
$fn4828 $tmp4827 = $tmp4826->methods[0];
panda$core$Bit $tmp4829 = $tmp4827(((panda$core$Equatable*) $tmp4822), ((panda$core$Equatable*) $tmp4825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4822)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4825)));
bool $tmp4830 = $tmp4829.value;
if ($tmp4830) goto block8; else goto block10;
block8:;
// line 2313
org$pandalanguage$pandac$ASTNode* $tmp4831 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4832 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4831));
*(&local3) = $tmp4831;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4831));
// line 2314
org$pandalanguage$pandac$ASTNode* $tmp4833 = *(&local3);
panda$core$Bit $tmp4834 = panda$core$Bit$init$builtin_bit($tmp4833 == NULL);
bool $tmp4835 = $tmp4834.value;
if ($tmp4835) goto block11; else goto block12;
block11:;
// line 2315
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4836 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4836));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4837 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2319
org$pandalanguage$pandac$ASTNode* $tmp4838 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2321
panda$collections$ImmutableArray* $tmp4839 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4840 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
*(&local4) = $tmp4839;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
// line 2322
panda$collections$ImmutableArray* $tmp4841 = *(&local4);
panda$core$Bit $tmp4842 = panda$core$Bit$init$builtin_bit($tmp4841 == NULL);
bool $tmp4843 = $tmp4842.value;
if ($tmp4843) goto block13; else goto block14;
block13:;
// line 2323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4844 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4845 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4845));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4846 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2325
org$pandalanguage$pandac$ASTNode* $tmp4847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4848 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4849 = *(&local1);
org$pandalanguage$pandac$Position $tmp4850 = ((org$pandalanguage$pandac$parser$Token) $tmp4849.value).position;
panda$collections$ImmutableArray* $tmp4851 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4851);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4852 = *(&local0);
panda$collections$ImmutableArray* $tmp4853 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4854 = *(&local3);
panda$collections$ImmutableArray* $tmp4855 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4847, $tmp4848, $tmp4850, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4851, $tmp4852, &$s4856, ((panda$collections$ImmutableArray*) NULL), $tmp4853, $tmp4854, $tmp4855);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
panda$collections$ImmutableArray* $tmp4857 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4857));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4858 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4858));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4859 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4847;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2333
panda$core$Int64 $tmp4860 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4861 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4860);
org$pandalanguage$pandac$parser$Token$nullable $tmp4862 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4861, &$s4863);
*(&local0) = $tmp4862;
// line 2334
org$pandalanguage$pandac$parser$Token$nullable $tmp4864 = *(&local0);
panda$core$Bit $tmp4865 = panda$core$Bit$init$builtin_bit(!$tmp4864.nonnull);
bool $tmp4866 = $tmp4865.value;
if ($tmp4866) goto block1; else goto block2;
block1:;
// line 2335
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2337
panda$collections$ImmutableArray* $tmp4867 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4868 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4867));
*(&local1) = $tmp4867;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4867));
// line 2338
panda$collections$ImmutableArray* $tmp4869 = *(&local1);
panda$core$Bit $tmp4870 = panda$core$Bit$init$builtin_bit($tmp4869 == NULL);
bool $tmp4871 = $tmp4870.value;
if ($tmp4871) goto block3; else goto block4;
block3:;
// line 2339
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4872 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2341
panda$collections$ImmutableArray* $tmp4873 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4874 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4874));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
*(&local2) = $tmp4873;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
// line 2342
panda$collections$ImmutableArray* $tmp4875 = *(&local2);
panda$core$Bit $tmp4876 = panda$core$Bit$init$builtin_bit($tmp4875 == NULL);
bool $tmp4877 = $tmp4876.value;
if ($tmp4877) goto block5; else goto block6;
block5:;
// line 2343
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4878 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4878));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4879 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4879));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2345
org$pandalanguage$pandac$ASTNode* $tmp4880 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4881 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4882 = *(&local0);
org$pandalanguage$pandac$Position $tmp4883 = ((org$pandalanguage$pandac$parser$Token) $tmp4882.value).position;
panda$core$Int64 $tmp4884 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4885 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4884);
panda$collections$ImmutableArray* $tmp4886 = *(&local1);
panda$collections$ImmutableArray* $tmp4887 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4880, $tmp4881, $tmp4883, param1, param2, $tmp4885, &$s4888, ((panda$collections$ImmutableArray*) NULL), $tmp4886, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4887);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
panda$collections$ImmutableArray* $tmp4889 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4889));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4890 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4890));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4880;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2353
org$pandalanguage$pandac$ASTNode* $tmp4891 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4892 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4892));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4891));
*(&local0) = $tmp4891;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4891));
// line 2354
org$pandalanguage$pandac$ASTNode* $tmp4893 = *(&local0);
panda$core$Bit $tmp4894 = panda$core$Bit$init$builtin_bit($tmp4893 == NULL);
bool $tmp4895 = $tmp4894.value;
if ($tmp4895) goto block1; else goto block2;
block1:;
// line 2355
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4896 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4896));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2357
org$pandalanguage$pandac$ASTNode* $tmp4897 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4898 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp4899 = *(&local0);
$fn4901 $tmp4900 = ($fn4901) $tmp4899->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp4902 = $tmp4900($tmp4899);
org$pandalanguage$pandac$ASTNode* $tmp4903 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4897, $tmp4898, $tmp4902, param1, param2, $tmp4903);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4897));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4897));
org$pandalanguage$pandac$ASTNode* $tmp4904 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4904));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4897;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2364
panda$core$Int64 $tmp4905 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4906 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4905);
org$pandalanguage$pandac$parser$Token$nullable $tmp4907 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4906, &$s4908);
*(&local0) = $tmp4907;
// line 2365
org$pandalanguage$pandac$parser$Token$nullable $tmp4909 = *(&local0);
panda$core$Bit $tmp4910 = panda$core$Bit$init$builtin_bit(!$tmp4909.nonnull);
bool $tmp4911 = $tmp4910.value;
if ($tmp4911) goto block1; else goto block2;
block1:;
// line 2366
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2368
panda$collections$Array* $tmp4912 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4912);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4913 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4913));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
*(&local1) = $tmp4912;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
// line 2369
panda$core$Int64 $tmp4914 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4915 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4914);
org$pandalanguage$pandac$parser$Token$nullable $tmp4916 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4915);
panda$core$Bit $tmp4917 = panda$core$Bit$init$builtin_bit($tmp4916.nonnull);
bool $tmp4918 = $tmp4917.value;
if ($tmp4918) goto block3; else goto block4;
block3:;
// line 2370
org$pandalanguage$pandac$parser$Token $tmp4919 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4920 = $tmp4919.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4921;
$tmp4921 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4921->value = $tmp4920;
panda$core$Int64 $tmp4922 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4923 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4922);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4924;
$tmp4924 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4924->value = $tmp4923;
ITable* $tmp4925 = ((panda$core$Equatable*) $tmp4921)->$class->itable;
while ($tmp4925->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4925 = $tmp4925->next;
}
$fn4927 $tmp4926 = $tmp4925->methods[1];
panda$core$Bit $tmp4928 = $tmp4926(((panda$core$Equatable*) $tmp4921), ((panda$core$Equatable*) $tmp4924));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4921)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4924)));
bool $tmp4929 = $tmp4928.value;
if ($tmp4929) goto block5; else goto block6;
block5:;
// line 2371
org$pandalanguage$pandac$ASTNode* $tmp4930 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4931 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4931));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4930));
*(&local2) = $tmp4930;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4930));
// line 2372
org$pandalanguage$pandac$ASTNode* $tmp4932 = *(&local2);
panda$core$Bit $tmp4933 = panda$core$Bit$init$builtin_bit($tmp4932 == NULL);
bool $tmp4934 = $tmp4933.value;
if ($tmp4934) goto block7; else goto block8;
block7:;
// line 2373
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4935 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4936 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4936));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2375
panda$collections$Array* $tmp4937 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4938 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4937, ((panda$core$Object*) $tmp4938));
// line 2376
goto block9;
block9:;
panda$core$Int64 $tmp4939 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4940 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4939);
org$pandalanguage$pandac$parser$Token$nullable $tmp4941 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4940);
panda$core$Bit $tmp4942 = panda$core$Bit$init$builtin_bit($tmp4941.nonnull);
bool $tmp4943 = $tmp4942.value;
if ($tmp4943) goto block10; else goto block11;
block10:;
// line 2377
org$pandalanguage$pandac$ASTNode* $tmp4944 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4945 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4945));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
*(&local2) = $tmp4944;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
// line 2378
org$pandalanguage$pandac$ASTNode* $tmp4946 = *(&local2);
panda$core$Bit $tmp4947 = panda$core$Bit$init$builtin_bit($tmp4946 == NULL);
bool $tmp4948 = $tmp4947.value;
if ($tmp4948) goto block12; else goto block13;
block12:;
// line 2379
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4949 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4949));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4950 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2381
panda$collections$Array* $tmp4951 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4952 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4951, ((panda$core$Object*) $tmp4952));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp4953 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4953));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 2384
panda$core$Int64 $tmp4954 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4955 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4954);
org$pandalanguage$pandac$parser$Token$nullable $tmp4956 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4955, &$s4957);
panda$core$Bit $tmp4958 = panda$core$Bit$init$builtin_bit(!$tmp4956.nonnull);
bool $tmp4959 = $tmp4958.value;
if ($tmp4959) goto block14; else goto block15;
block14:;
// line 2385
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp4960 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4960));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2388
org$pandalanguage$pandac$ASTNode* $tmp4961 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4962 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp4963 = *(&local0);
org$pandalanguage$pandac$Position $tmp4964 = ((org$pandalanguage$pandac$parser$Token) $tmp4963.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4965 = *(&local0);
panda$core$String* $tmp4966 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4965.value));
panda$collections$Array* $tmp4967 = *(&local1);
panda$collections$ImmutableArray* $tmp4968 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4967);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4961, $tmp4962, $tmp4964, param1, $tmp4966, $tmp4968);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4961));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4961));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4968));
panda$collections$Array* $tmp4969 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4969));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4961;

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
// line 2397
panda$core$Int64 $tmp4970 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp4971 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4970);
org$pandalanguage$pandac$parser$Token$nullable $tmp4972 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4971, &$s4973);
*(&local0) = $tmp4972;
// line 2398
org$pandalanguage$pandac$parser$Token$nullable $tmp4974 = *(&local0);
panda$core$Bit $tmp4975 = panda$core$Bit$init$builtin_bit(!$tmp4974.nonnull);
bool $tmp4976 = $tmp4975.value;
if ($tmp4976) goto block1; else goto block2;
block1:;
// line 2399
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2401
panda$core$Int64 $tmp4977 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4978 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4977);
org$pandalanguage$pandac$parser$Token$nullable $tmp4979 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4978, &$s4980);
*(&local1) = $tmp4979;
// line 2402
org$pandalanguage$pandac$parser$Token$nullable $tmp4981 = *(&local1);
panda$core$Bit $tmp4982 = panda$core$Bit$init$builtin_bit(!$tmp4981.nonnull);
bool $tmp4983 = $tmp4982.value;
if ($tmp4983) goto block3; else goto block4;
block3:;
// line 2403
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2405
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2406
org$pandalanguage$pandac$parser$Token $tmp4984 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4985 = $tmp4984.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4986;
$tmp4986 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4986->value = $tmp4985;
panda$core$Int64 $tmp4987 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4988 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4987);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4989;
$tmp4989 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4989->value = $tmp4988;
ITable* $tmp4990 = ((panda$core$Equatable*) $tmp4986)->$class->itable;
while ($tmp4990->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4990 = $tmp4990->next;
}
$fn4992 $tmp4991 = $tmp4990->methods[0];
panda$core$Bit $tmp4993 = $tmp4991(((panda$core$Equatable*) $tmp4986), ((panda$core$Equatable*) $tmp4989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4986)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4989)));
bool $tmp4994 = $tmp4993.value;
if ($tmp4994) goto block5; else goto block7;
block5:;
// line 2407
panda$collections$ImmutableArray* $tmp4995 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4996 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
*(&local2) = $tmp4995;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
// line 2408
panda$collections$ImmutableArray* $tmp4997 = *(&local2);
panda$core$Bit $tmp4998 = panda$core$Bit$init$builtin_bit($tmp4997 == NULL);
bool $tmp4999 = $tmp4998.value;
if ($tmp4999) goto block8; else goto block9;
block8:;
// line 2409
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5000 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5000));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2413
panda$collections$ImmutableArray* $tmp5001 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5001));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2415
panda$core$Int64 $tmp5002 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5002);
org$pandalanguage$pandac$parser$Token$nullable $tmp5004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5003, &$s5005);
panda$core$Bit $tmp5006 = panda$core$Bit$init$builtin_bit(!$tmp5004.nonnull);
bool $tmp5007 = $tmp5006.value;
if ($tmp5007) goto block10; else goto block11;
block10:;
// line 2416
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5008 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5008));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2418
panda$collections$Array* $tmp5009 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5009);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5010 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5010));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5009));
*(&local3) = $tmp5009;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5009));
// line 2419
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5011 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5011));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2420
goto block12;
block12:;
// line 2421
org$pandalanguage$pandac$parser$Token $tmp5012 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5012;
// line 2422
org$pandalanguage$pandac$parser$Token $tmp5013 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5014 = $tmp5013.kind;
panda$core$Int64 $tmp5015 = $tmp5014.$rawValue;
panda$core$Int64 $tmp5016 = (panda$core$Int64) {18};
panda$core$Bit $tmp5017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5016);
bool $tmp5018 = $tmp5017.value;
if ($tmp5018) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5019 = (panda$core$Int64) {19};
panda$core$Bit $tmp5020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5019);
bool $tmp5021 = $tmp5020.value;
if ($tmp5021) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5022 = (panda$core$Int64) {20};
panda$core$Bit $tmp5023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5022);
bool $tmp5024 = $tmp5023.value;
if ($tmp5024) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5025 = (panda$core$Int64) {22};
panda$core$Bit $tmp5026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5025);
bool $tmp5027 = $tmp5026.value;
if ($tmp5027) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5028 = (panda$core$Int64) {21};
panda$core$Bit $tmp5029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5028);
bool $tmp5030 = $tmp5029.value;
if ($tmp5030) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5031 = (panda$core$Int64) {14};
panda$core$Bit $tmp5032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5031);
bool $tmp5033 = $tmp5032.value;
if ($tmp5033) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5034 = (panda$core$Int64) {24};
panda$core$Bit $tmp5035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5034);
bool $tmp5036 = $tmp5035.value;
if ($tmp5036) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5037 = (panda$core$Int64) {25};
panda$core$Bit $tmp5038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5037);
bool $tmp5039 = $tmp5038.value;
if ($tmp5039) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5040 = (panda$core$Int64) {26};
panda$core$Bit $tmp5041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5040);
bool $tmp5042 = $tmp5041.value;
if ($tmp5042) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5043 = (panda$core$Int64) {27};
panda$core$Bit $tmp5044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5043);
bool $tmp5045 = $tmp5044.value;
if ($tmp5045) goto block15; else goto block25;
block15:;
// line 2426
goto block13;
block25:;
panda$core$Int64 $tmp5046 = (panda$core$Int64) {12};
panda$core$Bit $tmp5047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5046);
bool $tmp5048 = $tmp5047.value;
if ($tmp5048) goto block26; else goto block27;
block26:;
// line 2429
org$pandalanguage$pandac$ASTNode* $tmp5049 = *(&local4);
panda$core$Bit $tmp5050 = panda$core$Bit$init$builtin_bit($tmp5049 != NULL);
bool $tmp5051 = $tmp5050.value;
if ($tmp5051) goto block28; else goto block29;
block28:;
// line 2430
org$pandalanguage$pandac$parser$Token $tmp5052 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5053 = *(&local5);
panda$core$String* $tmp5054 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5053);
panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5056, $tmp5054);
panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, &$s5058);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5052, $tmp5057);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5054));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5057));
goto block29;
block29:;
// line 2432
org$pandalanguage$pandac$ASTNode* $tmp5059 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5060 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5060));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
*(&local4) = $tmp5059;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
goto block14;
block27:;
panda$core$Int64 $tmp5061 = (panda$core$Int64) {49};
panda$core$Bit $tmp5062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5015, $tmp5061);
bool $tmp5063 = $tmp5062.value;
if ($tmp5063) goto block30; else goto block31;
block30:;
// line 2435
org$pandalanguage$pandac$ASTNode* $tmp5064 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5065 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5064);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5066 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5066));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5065));
*(&local6) = $tmp5065;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5065));
// line 2436
org$pandalanguage$pandac$ASTNode* $tmp5067 = *(&local6);
panda$core$Bit $tmp5068 = panda$core$Bit$init$builtin_bit($tmp5067 == NULL);
bool $tmp5069 = $tmp5068.value;
if ($tmp5069) goto block32; else goto block33;
block32:;
// line 2437
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5070 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5070));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5071 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5071));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5072 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5072));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5073 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5073));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2439
panda$collections$Array* $tmp5074 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5075 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5074, ((panda$core$Object*) $tmp5075));
// line 2440
org$pandalanguage$pandac$ASTNode* $tmp5076 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5076));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5077 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5077));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block31:;
// line 2443
goto block13;
block14:;
goto block12;
block13:;
// line 2447
panda$collections$ImmutableArray* $tmp5078 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5078);
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5079 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5079));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5078));
*(&local7) = $tmp5078;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5078));
// line 2448
goto block34;
block34:;
// line 2449
org$pandalanguage$pandac$parser$Token $tmp5080 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5080;
// line 2450
org$pandalanguage$pandac$parser$Token $tmp5081 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5082 = $tmp5081.kind;
panda$core$Int64 $tmp5083 = $tmp5082.$rawValue;
panda$core$Int64 $tmp5084 = (panda$core$Int64) {14};
panda$core$Bit $tmp5085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5084);
bool $tmp5086 = $tmp5085.value;
if ($tmp5086) goto block37; else goto block38;
block37:;
// line 2452
panda$collections$ImmutableArray* $tmp5087 = *(&local7);
ITable* $tmp5088 = ((panda$collections$CollectionView*) $tmp5087)->$class->itable;
while ($tmp5088->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5088 = $tmp5088->next;
}
$fn5090 $tmp5089 = $tmp5088->methods[0];
panda$core$Int64 $tmp5091 = $tmp5089(((panda$collections$CollectionView*) $tmp5087));
panda$core$Int64 $tmp5092 = (panda$core$Int64) {0};
int64_t $tmp5093 = $tmp5091.value;
int64_t $tmp5094 = $tmp5092.value;
bool $tmp5095 = $tmp5093 > $tmp5094;
panda$core$Bit $tmp5096 = (panda$core$Bit) {$tmp5095};
bool $tmp5097 = $tmp5096.value;
if ($tmp5097) goto block39; else goto block40;
block39:;
// line 2453
org$pandalanguage$pandac$parser$Token $tmp5098 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5099 = *(&local8);
panda$core$String* $tmp5100 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5099);
panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5102, $tmp5100);
panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5104);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5098, $tmp5103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5103));
// line 2454
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5105 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5105));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5106 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5106));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5107 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5107));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5108));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2456
panda$collections$ImmutableArray* $tmp5109 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$collections$ImmutableArray* $tmp5110 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
*(&local7) = $tmp5109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
goto block36;
block38:;
panda$core$Int64 $tmp5111 = (panda$core$Int64) {12};
panda$core$Bit $tmp5112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5111);
bool $tmp5113 = $tmp5112.value;
if ($tmp5113) goto block41; else goto block42;
block41:;
// line 2459
org$pandalanguage$pandac$ASTNode* $tmp5114 = *(&local4);
panda$core$Bit $tmp5115 = panda$core$Bit$init$builtin_bit($tmp5114 != NULL);
bool $tmp5116 = $tmp5115.value;
if ($tmp5116) goto block43; else goto block44;
block43:;
*(&local9) = $tmp5115;
goto block45;
block44:;
panda$collections$ImmutableArray* $tmp5117 = *(&local7);
ITable* $tmp5118 = ((panda$collections$CollectionView*) $tmp5117)->$class->itable;
while ($tmp5118->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5118 = $tmp5118->next;
}
$fn5120 $tmp5119 = $tmp5118->methods[0];
panda$core$Int64 $tmp5121 = $tmp5119(((panda$collections$CollectionView*) $tmp5117));
panda$core$Int64 $tmp5122 = (panda$core$Int64) {0};
int64_t $tmp5123 = $tmp5121.value;
int64_t $tmp5124 = $tmp5122.value;
bool $tmp5125 = $tmp5123 > $tmp5124;
panda$core$Bit $tmp5126 = (panda$core$Bit) {$tmp5125};
*(&local9) = $tmp5126;
goto block45;
block45:;
panda$core$Bit $tmp5127 = *(&local9);
bool $tmp5128 = $tmp5127.value;
if ($tmp5128) goto block46; else goto block47;
block46:;
// line 2460
org$pandalanguage$pandac$parser$Token $tmp5129 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5130 = *(&local8);
panda$core$String* $tmp5131 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5130);
panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5133, $tmp5131);
panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, &$s5135);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5129, $tmp5134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5134));
// line 2461
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5136 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5137 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5137));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5138 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5138));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5139));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block47:;
// line 2463
org$pandalanguage$pandac$ASTNode* $tmp5140 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5141 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5140));
*(&local4) = $tmp5140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5140));
goto block36;
block42:;
panda$core$Int64 $tmp5142 = (panda$core$Int64) {18};
panda$core$Bit $tmp5143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5142);
bool $tmp5144 = $tmp5143.value;
if ($tmp5144) goto block48; else goto block49;
block48:;
// line 2466
org$pandalanguage$pandac$ASTNode* $tmp5145 = *(&local4);
panda$collections$ImmutableArray* $tmp5146 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5147 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5145, $tmp5146);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5148 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
*(&local10) = $tmp5147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
// line 2467
org$pandalanguage$pandac$ASTNode* $tmp5149 = *(&local10);
panda$core$Bit $tmp5150 = panda$core$Bit$init$builtin_bit($tmp5149 == NULL);
bool $tmp5151 = $tmp5150.value;
if ($tmp5151) goto block50; else goto block51;
block50:;
// line 2468
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5152 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5152));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5153 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5153));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5154 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5154));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5155 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5155));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5156 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2470
panda$collections$Array* $tmp5157 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5158 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5157, ((panda$core$Object*) $tmp5158));
// line 2471
org$pandalanguage$pandac$ASTNode* $tmp5159 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2472
panda$collections$ImmutableArray* $tmp5160 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5160);
panda$collections$ImmutableArray* $tmp5161 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5161));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
*(&local7) = $tmp5160;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
org$pandalanguage$pandac$ASTNode* $tmp5162 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5162));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block49:;
panda$core$Int64 $tmp5163 = (panda$core$Int64) {19};
panda$core$Bit $tmp5164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5163);
bool $tmp5165 = $tmp5164.value;
if ($tmp5165) goto block52; else goto block53;
block52:;
// line 2475
org$pandalanguage$pandac$ASTNode* $tmp5166 = *(&local4);
panda$collections$ImmutableArray* $tmp5167 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5168 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5166, $tmp5167);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5169 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5168));
*(&local11) = $tmp5168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5168));
// line 2476
org$pandalanguage$pandac$ASTNode* $tmp5170 = *(&local11);
panda$core$Bit $tmp5171 = panda$core$Bit$init$builtin_bit($tmp5170 == NULL);
bool $tmp5172 = $tmp5171.value;
if ($tmp5172) goto block54; else goto block55;
block54:;
// line 2477
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5173 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5173));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5174 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5174));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5175 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5175));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5176 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5176));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5177 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5177));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2479
panda$collections$Array* $tmp5178 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5179 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5178, ((panda$core$Object*) $tmp5179));
// line 2480
org$pandalanguage$pandac$ASTNode* $tmp5180 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5180));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2481
panda$collections$ImmutableArray* $tmp5181 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5181);
panda$collections$ImmutableArray* $tmp5182 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5182));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
*(&local7) = $tmp5181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
org$pandalanguage$pandac$ASTNode* $tmp5183 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5183));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block53:;
panda$core$Int64 $tmp5184 = (panda$core$Int64) {20};
panda$core$Bit $tmp5185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5184);
bool $tmp5186 = $tmp5185.value;
if ($tmp5186) goto block56; else goto block57;
block56:;
// line 2484
org$pandalanguage$pandac$ASTNode* $tmp5187 = *(&local4);
panda$collections$ImmutableArray* $tmp5188 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5189 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5187, $tmp5188);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5190 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5189));
*(&local12) = $tmp5189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5189));
// line 2485
org$pandalanguage$pandac$ASTNode* $tmp5191 = *(&local12);
panda$core$Bit $tmp5192 = panda$core$Bit$init$builtin_bit($tmp5191 == NULL);
bool $tmp5193 = $tmp5192.value;
if ($tmp5193) goto block58; else goto block59;
block58:;
// line 2486
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5194 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5194));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5195 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5195));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5196 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5196));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5197 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5197));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5198 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5198));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2488
panda$collections$Array* $tmp5199 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5200 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5199, ((panda$core$Object*) $tmp5200));
// line 2489
org$pandalanguage$pandac$ASTNode* $tmp5201 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2490
panda$collections$ImmutableArray* $tmp5202 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5202);
panda$collections$ImmutableArray* $tmp5203 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5203));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5202));
*(&local7) = $tmp5202;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5202));
org$pandalanguage$pandac$ASTNode* $tmp5204 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5204));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block57:;
panda$core$Int64 $tmp5205 = (panda$core$Int64) {22};
panda$core$Bit $tmp5206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5205);
bool $tmp5207 = $tmp5206.value;
if ($tmp5207) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5208 = (panda$core$Int64) {21};
panda$core$Bit $tmp5209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5208);
bool $tmp5210 = $tmp5209.value;
if ($tmp5210) goto block60; else goto block62;
block60:;
// line 2493
org$pandalanguage$pandac$ASTNode* $tmp5211 = *(&local4);
panda$collections$ImmutableArray* $tmp5212 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5213 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5211, $tmp5212);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5214 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5214));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5213));
*(&local13) = $tmp5213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5213));
// line 2494
org$pandalanguage$pandac$ASTNode* $tmp5215 = *(&local13);
panda$core$Bit $tmp5216 = panda$core$Bit$init$builtin_bit($tmp5215 == NULL);
bool $tmp5217 = $tmp5216.value;
if ($tmp5217) goto block63; else goto block64;
block63:;
// line 2495
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5218 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5218));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5219 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5219));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5220 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5220));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5221 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5221));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5222 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5222));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2497
panda$collections$Array* $tmp5223 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5224 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5223, ((panda$core$Object*) $tmp5224));
// line 2498
org$pandalanguage$pandac$ASTNode* $tmp5225 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2499
panda$collections$ImmutableArray* $tmp5226 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5226);
panda$collections$ImmutableArray* $tmp5227 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5226));
*(&local7) = $tmp5226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5226));
org$pandalanguage$pandac$ASTNode* $tmp5228 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block62:;
panda$core$Int64 $tmp5229 = (panda$core$Int64) {24};
panda$core$Bit $tmp5230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5229);
bool $tmp5231 = $tmp5230.value;
if ($tmp5231) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5232 = (panda$core$Int64) {25};
panda$core$Bit $tmp5233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5232);
bool $tmp5234 = $tmp5233.value;
if ($tmp5234) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5235 = (panda$core$Int64) {26};
panda$core$Bit $tmp5236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5235);
bool $tmp5237 = $tmp5236.value;
if ($tmp5237) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5238 = (panda$core$Int64) {27};
panda$core$Bit $tmp5239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5238);
bool $tmp5240 = $tmp5239.value;
if ($tmp5240) goto block65; else goto block69;
block65:;
// line 2502
org$pandalanguage$pandac$ASTNode* $tmp5241 = *(&local4);
panda$collections$ImmutableArray* $tmp5242 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5243 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5241, $tmp5242);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5244 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5243));
*(&local14) = $tmp5243;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5243));
// line 2503
org$pandalanguage$pandac$ASTNode* $tmp5245 = *(&local14);
panda$core$Bit $tmp5246 = panda$core$Bit$init$builtin_bit($tmp5245 == NULL);
bool $tmp5247 = $tmp5246.value;
if ($tmp5247) goto block70; else goto block71;
block70:;
// line 2504
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5248 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5248));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5249 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5249));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5250 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5250));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5251 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5251));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5252 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2506
panda$collections$Array* $tmp5253 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5254 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5253, ((panda$core$Object*) $tmp5254));
// line 2507
org$pandalanguage$pandac$ASTNode* $tmp5255 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2508
panda$collections$ImmutableArray* $tmp5256 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5256);
panda$collections$ImmutableArray* $tmp5257 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5256));
*(&local7) = $tmp5256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5256));
org$pandalanguage$pandac$ASTNode* $tmp5258 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block69:;
panda$core$Int64 $tmp5259 = (panda$core$Int64) {101};
panda$core$Bit $tmp5260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5083, $tmp5259);
bool $tmp5261 = $tmp5260.value;
if ($tmp5261) goto block72; else goto block73;
block72:;
// line 2511
panda$core$Int64 $tmp5262 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5263 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5262);
org$pandalanguage$pandac$parser$Token$nullable $tmp5264 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5263, &$s5265);
// line 2512
goto block35;
block73:;
// line 2515
org$pandalanguage$pandac$parser$Token $tmp5266 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5267 = *(&local8);
panda$core$String* $tmp5268 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5267);
panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5270, $tmp5268);
panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5272);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5266, $tmp5271);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5269));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5271));
// line 2516
org$pandalanguage$pandac$parser$Token $tmp5273 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2517
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5274 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5274));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5275 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5276 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5276));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5277 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5277));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2521
org$pandalanguage$pandac$ASTNode* $tmp5278 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5279 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5280 = *(&local0);
org$pandalanguage$pandac$Position $tmp5281 = ((org$pandalanguage$pandac$parser$Token) $tmp5280.value).position;
panda$core$Int64 $tmp5282 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5283 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5282);
org$pandalanguage$pandac$parser$Token$nullable $tmp5284 = *(&local1);
panda$core$String* $tmp5285 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5284.value));
panda$collections$ImmutableArray* $tmp5286 = *(&local2);
panda$collections$Array* $tmp5287 = *(&local3);
panda$collections$ImmutableArray* $tmp5288 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5287);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5278, $tmp5279, $tmp5281, param1, param2, $tmp5283, $tmp5285, $tmp5286, ((panda$collections$ImmutableArray*) NULL), $tmp5288);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5278));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5278));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
panda$collections$ImmutableArray* $tmp5289 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5290 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5291 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5291));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5292 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5278;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2530
org$pandalanguage$pandac$parser$Token $tmp5293 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5293;
// line 2531
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2532
org$pandalanguage$pandac$parser$Token $tmp5294 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5295 = $tmp5294.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5296;
$tmp5296 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5296->value = $tmp5295;
panda$core$Int64 $tmp5297 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5298 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5297);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5299;
$tmp5299 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5299->value = $tmp5298;
ITable* $tmp5300 = ((panda$core$Equatable*) $tmp5296)->$class->itable;
while ($tmp5300->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5300 = $tmp5300->next;
}
$fn5302 $tmp5301 = $tmp5300->methods[0];
panda$core$Bit $tmp5303 = $tmp5301(((panda$core$Equatable*) $tmp5296), ((panda$core$Equatable*) $tmp5299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5296)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5299)));
bool $tmp5304 = $tmp5303.value;
if ($tmp5304) goto block1; else goto block3;
block1:;
// line 2533
org$pandalanguage$pandac$ASTNode* $tmp5305 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5306 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5305));
*(&local1) = $tmp5305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5305));
// line 2534
org$pandalanguage$pandac$ASTNode* $tmp5307 = *(&local1);
panda$core$Bit $tmp5308 = panda$core$Bit$init$builtin_bit($tmp5307 == NULL);
bool $tmp5309 = $tmp5308.value;
if ($tmp5309) goto block4; else goto block5;
block4:;
// line 2535
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2539
org$pandalanguage$pandac$ASTNode* $tmp5311 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2541
panda$collections$ImmutableArray* $tmp5312 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5313 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5313));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
*(&local2) = $tmp5312;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
// line 2542
panda$collections$ImmutableArray* $tmp5314 = *(&local2);
panda$core$Bit $tmp5315 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5316 = $tmp5315.value;
if ($tmp5316) goto block6; else goto block7;
block6:;
// line 2543
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5317 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5318 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5318));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2545
org$pandalanguage$pandac$parser$Token $tmp5319 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5320 = $tmp5319.kind;
panda$core$Int64 $tmp5321 = $tmp5320.$rawValue;
panda$core$Int64 $tmp5322 = (panda$core$Int64) {18};
panda$core$Bit $tmp5323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5322);
bool $tmp5324 = $tmp5323.value;
if ($tmp5324) goto block9; else goto block10;
block9:;
// line 2547
org$pandalanguage$pandac$ASTNode* $tmp5325 = *(&local1);
panda$collections$ImmutableArray* $tmp5326 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5327 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5325, $tmp5326);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5327));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5327));
panda$collections$ImmutableArray* $tmp5328 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5328));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5329 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5327;
block10:;
panda$core$Int64 $tmp5330 = (panda$core$Int64) {19};
panda$core$Bit $tmp5331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5330);
bool $tmp5332 = $tmp5331.value;
if ($tmp5332) goto block11; else goto block12;
block11:;
// line 2550
org$pandalanguage$pandac$ASTNode* $tmp5333 = *(&local1);
panda$collections$ImmutableArray* $tmp5334 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5335 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5333, $tmp5334);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
panda$collections$ImmutableArray* $tmp5336 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5336));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5337 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5337));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5335;
block12:;
panda$core$Int64 $tmp5338 = (panda$core$Int64) {20};
panda$core$Bit $tmp5339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5338);
bool $tmp5340 = $tmp5339.value;
if ($tmp5340) goto block13; else goto block14;
block13:;
// line 2553
org$pandalanguage$pandac$ASTNode* $tmp5341 = *(&local1);
panda$collections$ImmutableArray* $tmp5342 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5343 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5341, $tmp5342);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
panda$collections$ImmutableArray* $tmp5344 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5344));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5345 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5345));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5343;
block14:;
panda$core$Int64 $tmp5346 = (panda$core$Int64) {22};
panda$core$Bit $tmp5347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5346);
bool $tmp5348 = $tmp5347.value;
if ($tmp5348) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5349 = (panda$core$Int64) {21};
panda$core$Bit $tmp5350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5349);
bool $tmp5351 = $tmp5350.value;
if ($tmp5351) goto block15; else goto block17;
block15:;
// line 2556
org$pandalanguage$pandac$ASTNode* $tmp5352 = *(&local1);
panda$collections$ImmutableArray* $tmp5353 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5354 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5352, $tmp5353);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
panda$collections$ImmutableArray* $tmp5355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5355));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5356 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5356));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5354;
block17:;
panda$core$Int64 $tmp5357 = (panda$core$Int64) {23};
panda$core$Bit $tmp5358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5357);
bool $tmp5359 = $tmp5358.value;
if ($tmp5359) goto block18; else goto block19;
block18:;
// line 2559
org$pandalanguage$pandac$ASTNode* $tmp5360 = *(&local1);
panda$collections$ImmutableArray* $tmp5361 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5362 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5360, $tmp5361);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
panda$collections$ImmutableArray* $tmp5363 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5363));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5364 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5364));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5362;
block19:;
panda$core$Int64 $tmp5365 = (panda$core$Int64) {24};
panda$core$Bit $tmp5366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5365);
bool $tmp5367 = $tmp5366.value;
if ($tmp5367) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5368 = (panda$core$Int64) {25};
panda$core$Bit $tmp5369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5368);
bool $tmp5370 = $tmp5369.value;
if ($tmp5370) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5371 = (panda$core$Int64) {26};
panda$core$Bit $tmp5372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5371);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5374 = (panda$core$Int64) {27};
panda$core$Bit $tmp5375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5321, $tmp5374);
bool $tmp5376 = $tmp5375.value;
if ($tmp5376) goto block20; else goto block24;
block20:;
// line 2562
org$pandalanguage$pandac$ASTNode* $tmp5377 = *(&local1);
panda$collections$ImmutableArray* $tmp5378 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5379 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5377, $tmp5378);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
panda$collections$ImmutableArray* $tmp5380 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5381 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5379;
block24:;
// line 2566
panda$core$Int64 $tmp5382 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5383 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5382);
org$pandalanguage$pandac$parser$Token$nullable $tmp5384 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5383, &$s5385);
// line 2567
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5386 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5386));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5387 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5387));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5388 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5389 = $tmp5388.value;
if ($tmp5389) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5390 = (panda$core$Int64) {2529};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5391, $tmp5390, &$s5392);
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
// line 2576
panda$core$Int64 $tmp5393 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5394 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5393);
org$pandalanguage$pandac$parser$Token$nullable $tmp5395 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5394, &$s5396);
*(&local0) = $tmp5395;
// line 2577
org$pandalanguage$pandac$parser$Token$nullable $tmp5397 = *(&local0);
panda$core$Bit $tmp5398 = panda$core$Bit$init$builtin_bit(!$tmp5397.nonnull);
bool $tmp5399 = $tmp5398.value;
if ($tmp5399) goto block1; else goto block2;
block1:;
// line 2578
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2580
panda$core$Int64 $tmp5400 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5401 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5400);
org$pandalanguage$pandac$parser$Token$nullable $tmp5402 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5401, &$s5403);
*(&local1) = $tmp5402;
// line 2581
org$pandalanguage$pandac$parser$Token$nullable $tmp5404 = *(&local1);
panda$core$Bit $tmp5405 = panda$core$Bit$init$builtin_bit(!$tmp5404.nonnull);
bool $tmp5406 = $tmp5405.value;
if ($tmp5406) goto block3; else goto block4;
block3:;
// line 2582
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2584
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2585
org$pandalanguage$pandac$parser$Token $tmp5407 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5408 = $tmp5407.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5409;
$tmp5409 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5409->value = $tmp5408;
panda$core$Int64 $tmp5410 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5411 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5410);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5412;
$tmp5412 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5412->value = $tmp5411;
ITable* $tmp5413 = ((panda$core$Equatable*) $tmp5409)->$class->itable;
while ($tmp5413->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5413 = $tmp5413->next;
}
$fn5415 $tmp5414 = $tmp5413->methods[0];
panda$core$Bit $tmp5416 = $tmp5414(((panda$core$Equatable*) $tmp5409), ((panda$core$Equatable*) $tmp5412));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5409)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5412)));
bool $tmp5417 = $tmp5416.value;
if ($tmp5417) goto block5; else goto block7;
block5:;
// line 2586
panda$collections$ImmutableArray* $tmp5418 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5419 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
*(&local2) = $tmp5418;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
// line 2587
panda$collections$ImmutableArray* $tmp5420 = *(&local2);
panda$core$Bit $tmp5421 = panda$core$Bit$init$builtin_bit($tmp5420 == NULL);
bool $tmp5422 = $tmp5421.value;
if ($tmp5422) goto block8; else goto block9;
block8:;
// line 2588
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5423 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5423));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2592
panda$collections$ImmutableArray* $tmp5424 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5424));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2594
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2595
org$pandalanguage$pandac$parser$Token $tmp5425 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5426 = $tmp5425.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5427;
$tmp5427 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5427->value = $tmp5426;
panda$core$Int64 $tmp5428 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5429 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5428);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5430;
$tmp5430 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5430->value = $tmp5429;
ITable* $tmp5431 = ((panda$core$Equatable*) $tmp5427)->$class->itable;
while ($tmp5431->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5431 = $tmp5431->next;
}
$fn5433 $tmp5432 = $tmp5431->methods[0];
panda$core$Bit $tmp5434 = $tmp5432(((panda$core$Equatable*) $tmp5427), ((panda$core$Equatable*) $tmp5430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5427)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5430)));
bool $tmp5435 = $tmp5434.value;
if ($tmp5435) goto block10; else goto block12;
block10:;
// line 2596
panda$collections$ImmutableArray* $tmp5436 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5437 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5437));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5436));
*(&local3) = $tmp5436;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5436));
// line 2597
panda$collections$ImmutableArray* $tmp5438 = *(&local3);
panda$core$Bit $tmp5439 = panda$core$Bit$init$builtin_bit($tmp5438 == NULL);
bool $tmp5440 = $tmp5439.value;
if ($tmp5440) goto block13; else goto block14;
block13:;
// line 2598
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5441 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5442 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5442));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2602
panda$collections$ImmutableArray* $tmp5443 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5443));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block11;
block11:;
// line 2604
panda$core$Int64 $tmp5444 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5445 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5444);
org$pandalanguage$pandac$parser$Token$nullable $tmp5446 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5445, &$s5447);
panda$core$Bit $tmp5448 = panda$core$Bit$init$builtin_bit(!$tmp5446.nonnull);
bool $tmp5449 = $tmp5448.value;
if ($tmp5449) goto block15; else goto block16;
block15:;
// line 2605
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5450 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5450));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5451 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5451));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2607
panda$collections$Array* $tmp5452 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5452);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5453 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5453));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5452));
*(&local4) = $tmp5452;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5452));
// line 2608
goto block17;
block17:;
panda$core$Int64 $tmp5454 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5455 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5454);
org$pandalanguage$pandac$parser$Token$nullable $tmp5456 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5455);
panda$core$Bit $tmp5457 = panda$core$Bit$init$builtin_bit(!$tmp5456.nonnull);
bool $tmp5458 = $tmp5457.value;
if ($tmp5458) goto block18; else goto block19;
block18:;
// line 2609
org$pandalanguage$pandac$ASTNode* $tmp5459 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5460 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5459));
*(&local5) = $tmp5459;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5459));
// line 2610
org$pandalanguage$pandac$ASTNode* $tmp5461 = *(&local5);
panda$core$Bit $tmp5462 = panda$core$Bit$init$builtin_bit($tmp5461 == NULL);
bool $tmp5463 = $tmp5462.value;
if ($tmp5463) goto block20; else goto block21;
block20:;
// line 2611
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5464 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5464));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5465 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5465));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5466 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5466));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5467 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5467));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2613
panda$collections$Array* $tmp5468 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5469 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5468, ((panda$core$Object*) $tmp5469));
org$pandalanguage$pandac$ASTNode* $tmp5470 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
// line 2615
org$pandalanguage$pandac$ASTNode* $tmp5471 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5472 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5473 = *(&local0);
org$pandalanguage$pandac$Position $tmp5474 = ((org$pandalanguage$pandac$parser$Token) $tmp5473.value).position;
panda$core$Int64 $tmp5475 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5476 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5475);
org$pandalanguage$pandac$parser$Token$nullable $tmp5477 = *(&local1);
panda$core$String* $tmp5478 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5477.value));
panda$collections$ImmutableArray* $tmp5479 = *(&local2);
panda$collections$ImmutableArray* $tmp5480 = *(&local3);
panda$collections$Array* $tmp5481 = *(&local4);
panda$collections$ImmutableArray* $tmp5482 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5481);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5471, $tmp5472, $tmp5474, param1, param2, $tmp5476, $tmp5478, $tmp5479, $tmp5480, $tmp5482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5482));
panda$collections$Array* $tmp5483 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5483));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5484 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5484));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5485 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5485));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5471;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2624
panda$core$Int64 $tmp5486 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5487 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5486);
org$pandalanguage$pandac$parser$Token$nullable $tmp5488 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5487, &$s5489);
*(&local0) = $tmp5488;
// line 2625
org$pandalanguage$pandac$parser$Token$nullable $tmp5490 = *(&local0);
panda$core$Bit $tmp5491 = panda$core$Bit$init$builtin_bit(!$tmp5490.nonnull);
bool $tmp5492 = $tmp5491.value;
if ($tmp5492) goto block1; else goto block2;
block1:;
// line 2626
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2628
panda$core$Int64 $tmp5493 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5494 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5493);
org$pandalanguage$pandac$parser$Token$nullable $tmp5495 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5494, &$s5496);
*(&local1) = $tmp5495;
// line 2629
org$pandalanguage$pandac$parser$Token$nullable $tmp5497 = *(&local1);
panda$core$Bit $tmp5498 = panda$core$Bit$init$builtin_bit(!$tmp5497.nonnull);
bool $tmp5499 = $tmp5498.value;
if ($tmp5499) goto block3; else goto block4;
block3:;
// line 2630
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2632
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2633
org$pandalanguage$pandac$parser$Token $tmp5500 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5501 = $tmp5500.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5502;
$tmp5502 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5502->value = $tmp5501;
panda$core$Int64 $tmp5503 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5504 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5503);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5505;
$tmp5505 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5505->value = $tmp5504;
ITable* $tmp5506 = ((panda$core$Equatable*) $tmp5502)->$class->itable;
while ($tmp5506->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5506 = $tmp5506->next;
}
$fn5508 $tmp5507 = $tmp5506->methods[0];
panda$core$Bit $tmp5509 = $tmp5507(((panda$core$Equatable*) $tmp5502), ((panda$core$Equatable*) $tmp5505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5502)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5505)));
bool $tmp5510 = $tmp5509.value;
if ($tmp5510) goto block5; else goto block7;
block5:;
// line 2634
panda$collections$ImmutableArray* $tmp5511 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5511));
*(&local2) = $tmp5511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5511));
// line 2635
panda$collections$ImmutableArray* $tmp5513 = *(&local2);
panda$core$Bit $tmp5514 = panda$core$Bit$init$builtin_bit($tmp5513 == NULL);
bool $tmp5515 = $tmp5514.value;
if ($tmp5515) goto block8; else goto block9;
block8:;
// line 2636
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5516 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5516));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2640
panda$collections$ImmutableArray* $tmp5517 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5517);
panda$collections$ImmutableArray* $tmp5518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5517));
*(&local2) = $tmp5517;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5517));
goto block6;
block6:;
// line 2642
panda$collections$Array* $tmp5519 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5519);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5520 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5520));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5519));
*(&local3) = $tmp5519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5519));
// line 2643
panda$core$Int64 $tmp5521 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5522 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5521);
org$pandalanguage$pandac$parser$Token$nullable $tmp5523 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5522);
panda$core$Bit $tmp5524 = panda$core$Bit$init$builtin_bit($tmp5523.nonnull);
bool $tmp5525 = $tmp5524.value;
if ($tmp5525) goto block10; else goto block11;
block10:;
// line 2644
org$pandalanguage$pandac$ASTNode* $tmp5526 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5527 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5526));
*(&local4) = $tmp5526;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5526));
// line 2645
org$pandalanguage$pandac$ASTNode* $tmp5528 = *(&local4);
panda$core$Bit $tmp5529 = panda$core$Bit$init$builtin_bit($tmp5528 == NULL);
bool $tmp5530 = $tmp5529.value;
if ($tmp5530) goto block12; else goto block13;
block12:;
// line 2646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5531 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5531));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5532 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5532));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5533 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5533));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2648
panda$collections$Array* $tmp5534 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5535 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5534, ((panda$core$Object*) $tmp5535));
// line 2649
goto block14;
block14:;
panda$core$Int64 $tmp5536 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5537 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5536);
org$pandalanguage$pandac$parser$Token$nullable $tmp5538 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5537);
panda$core$Bit $tmp5539 = panda$core$Bit$init$builtin_bit($tmp5538.nonnull);
bool $tmp5540 = $tmp5539.value;
if ($tmp5540) goto block15; else goto block16;
block15:;
// line 2650
org$pandalanguage$pandac$ASTNode* $tmp5541 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5542 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5542));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5541));
*(&local4) = $tmp5541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5541));
// line 2651
org$pandalanguage$pandac$ASTNode* $tmp5543 = *(&local4);
panda$core$Bit $tmp5544 = panda$core$Bit$init$builtin_bit($tmp5543 == NULL);
bool $tmp5545 = $tmp5544.value;
if ($tmp5545) goto block17; else goto block18;
block17:;
// line 2652
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5546 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5547 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5547));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5548 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5548));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2654
panda$collections$Array* $tmp5549 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5550 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5549, ((panda$core$Object*) $tmp5550));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5551 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5551));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2657
panda$core$Int64 $tmp5552 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5553 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5552);
org$pandalanguage$pandac$parser$Token$nullable $tmp5554 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5553, &$s5555);
panda$core$Bit $tmp5556 = panda$core$Bit$init$builtin_bit(!$tmp5554.nonnull);
bool $tmp5557 = $tmp5556.value;
if ($tmp5557) goto block19; else goto block20;
block19:;
// line 2658
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5558 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5558));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5559 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5559));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2660
panda$collections$Array* $tmp5560 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5560);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5561 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5561));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5560));
*(&local5) = $tmp5560;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5560));
// line 2661
goto block21;
block21:;
panda$core$Int64 $tmp5562 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5563 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5562);
org$pandalanguage$pandac$parser$Token$nullable $tmp5564 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5563);
panda$core$Bit $tmp5565 = panda$core$Bit$init$builtin_bit(!$tmp5564.nonnull);
bool $tmp5566 = $tmp5565.value;
if ($tmp5566) goto block22; else goto block23;
block22:;
// line 2662
org$pandalanguage$pandac$ASTNode* $tmp5567 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5568 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5567));
*(&local6) = $tmp5567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5567));
// line 2663
org$pandalanguage$pandac$ASTNode* $tmp5569 = *(&local6);
panda$core$Bit $tmp5570 = panda$core$Bit$init$builtin_bit($tmp5569 == NULL);
bool $tmp5571 = $tmp5570.value;
if ($tmp5571) goto block24; else goto block25;
block24:;
// line 2664
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5572 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5572));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5573 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5573));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5574 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5574));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5575 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5575));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2666
panda$collections$Array* $tmp5576 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5577 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5576, ((panda$core$Object*) $tmp5577));
org$pandalanguage$pandac$ASTNode* $tmp5578 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5578));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
// line 2668
org$pandalanguage$pandac$ASTNode* $tmp5579 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5580 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5581 = *(&local0);
org$pandalanguage$pandac$Position $tmp5582 = ((org$pandalanguage$pandac$parser$Token) $tmp5581.value).position;
panda$core$Int64 $tmp5583 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5584 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5583);
org$pandalanguage$pandac$parser$Token$nullable $tmp5585 = *(&local1);
panda$core$String* $tmp5586 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5585.value));
panda$collections$ImmutableArray* $tmp5587 = *(&local2);
panda$collections$Array* $tmp5588 = *(&local3);
panda$collections$ImmutableArray* $tmp5589 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5588);
panda$collections$Array* $tmp5590 = *(&local5);
panda$collections$ImmutableArray* $tmp5591 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5590);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5579, $tmp5580, $tmp5582, param1, param2, $tmp5584, $tmp5586, $tmp5587, $tmp5589, $tmp5591);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5589));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5591));
panda$collections$Array* $tmp5592 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5592));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5593 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5594 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5594));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5579;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2676
org$pandalanguage$pandac$parser$Token $tmp5595 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5596 = $tmp5595.kind;
panda$core$Int64 $tmp5597 = $tmp5596.$rawValue;
panda$core$Int64 $tmp5598 = (panda$core$Int64) {16};
panda$core$Bit $tmp5599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5597, $tmp5598);
bool $tmp5600 = $tmp5599.value;
if ($tmp5600) goto block2; else goto block3;
block2:;
// line 2678
org$pandalanguage$pandac$ASTNode* $tmp5601 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5601));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5601));
return $tmp5601;
block3:;
// line 2681
org$pandalanguage$pandac$ASTNode* $tmp5602 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
return $tmp5602;
block1:;
panda$core$Bit $tmp5603 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5604 = $tmp5603.value;
if ($tmp5604) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5605 = (panda$core$Int64) {2675};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5606, $tmp5605, &$s5607);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2690
panda$collections$Array* $tmp5608 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5608);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5609 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5609));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5608));
*(&local0) = $tmp5608;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5608));
// line 2691
org$pandalanguage$pandac$parser$Token $tmp5610 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5611 = $tmp5610.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5612;
$tmp5612 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5612->value = $tmp5611;
panda$core$Int64 $tmp5613 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5614 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5613);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5615;
$tmp5615 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5615->value = $tmp5614;
ITable* $tmp5616 = ((panda$core$Equatable*) $tmp5612)->$class->itable;
while ($tmp5616->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5616 = $tmp5616->next;
}
$fn5618 $tmp5617 = $tmp5616->methods[0];
panda$core$Bit $tmp5619 = $tmp5617(((panda$core$Equatable*) $tmp5612), ((panda$core$Equatable*) $tmp5615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5612)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5615)));
bool $tmp5620 = $tmp5619.value;
if ($tmp5620) goto block1; else goto block2;
block1:;
// line 2692
org$pandalanguage$pandac$ASTNode* $tmp5621 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5622 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5622));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5621));
*(&local1) = $tmp5621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5621));
// line 2693
org$pandalanguage$pandac$ASTNode* $tmp5623 = *(&local1);
panda$core$Bit $tmp5624 = panda$core$Bit$init$builtin_bit($tmp5623 != NULL);
bool $tmp5625 = $tmp5624.value;
if ($tmp5625) goto block3; else goto block4;
block3:;
// line 2694
panda$collections$Array* $tmp5626 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5627 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5626, ((panda$core$Object*) $tmp5627));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5628 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5628));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2697
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5629 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5630 = $tmp5629.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5631;
$tmp5631 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5631->value = $tmp5630;
panda$core$Int64 $tmp5632 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5633 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5632);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5634;
$tmp5634 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5634->value = $tmp5633;
ITable* $tmp5635 = ((panda$core$Equatable*) $tmp5631)->$class->itable;
while ($tmp5635->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5635 = $tmp5635->next;
}
$fn5637 $tmp5636 = $tmp5635->methods[1];
panda$core$Bit $tmp5638 = $tmp5636(((panda$core$Equatable*) $tmp5631), ((panda$core$Equatable*) $tmp5634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5631)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5634)));
bool $tmp5639 = $tmp5638.value;
if ($tmp5639) goto block6; else goto block7;
block6:;
// line 2698
org$pandalanguage$pandac$ASTNode* $tmp5640 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5641 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5641));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5640));
*(&local2) = $tmp5640;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5640));
// line 2699
org$pandalanguage$pandac$ASTNode* $tmp5642 = *(&local2);
panda$core$Bit $tmp5643 = panda$core$Bit$init$builtin_bit($tmp5642 == NULL);
bool $tmp5644 = $tmp5643.value;
if ($tmp5644) goto block8; else goto block9;
block8:;
// line 2700
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5645 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5645));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5646 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5646));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2702
panda$core$Bit* $tmp5647 = &param0->inSpeculative;
panda$core$Bit $tmp5648 = *$tmp5647;
panda$core$Bit $tmp5649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5648);
bool $tmp5650 = $tmp5649.value;
if ($tmp5650) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5651 = (panda$core$Int64) {2702};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5652, $tmp5651);
abort(); // unreachable
block10:;
// line 2703
panda$collections$Array* $tmp5653 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5654 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5653, ((panda$core$Object*) $tmp5654));
org$pandalanguage$pandac$ASTNode* $tmp5655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 2705
org$pandalanguage$pandac$ASTNode* $tmp5656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5657 = (panda$core$Int64) {17};
panda$collections$Array* $tmp5658 = *(&local0);
panda$collections$ImmutableArray* $tmp5659 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5658);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5656, $tmp5657, $tmp5659);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5659));
panda$collections$Array* $tmp5660 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp5656;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Lexer** $tmp5661 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5662 = *$tmp5661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
org$pandalanguage$regex$RegexParser** $tmp5663 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5664 = *$tmp5663;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5664));
panda$threads$MessageQueue** $tmp5665 = &param0->errors;
panda$threads$MessageQueue* $tmp5666 = *$tmp5665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5666));
panda$io$File** $tmp5667 = &param0->path;
panda$io$File* $tmp5668 = *$tmp5667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5668));
panda$core$String** $tmp5669 = &param0->source;
panda$core$String* $tmp5670 = *$tmp5669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5671 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5672 = *$tmp5671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5672));
panda$collections$Stack** $tmp5673 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5674 = *$tmp5673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5674));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5675 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5676 = *$tmp5675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5676));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5677 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5678 = *$tmp5677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
return;

}

