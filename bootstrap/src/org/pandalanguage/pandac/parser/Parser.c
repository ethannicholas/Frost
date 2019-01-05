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

typedef void (*$fn60)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn77)(panda$collections$CollectionView*);
typedef void (*$fn100)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn140)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn149)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn155)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn160)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn244)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn258)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn273)(panda$collections$CollectionView*);
typedef void (*$fn286)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn290)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn297)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn309)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn324)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn336)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn371)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn379)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn421)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn519)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn564)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn578)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn693)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn707)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn797)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn804)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn812)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn819)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn841)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn852)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn876)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn921)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn937)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn1028)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1036)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1047)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1064)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1100)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1108)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1127)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn1145)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1687)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1691)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1707)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1711)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn1733)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1744)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2057)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2208)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2217)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2259)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2316)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2408)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2677)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2829)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2940)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2951)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2963)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3002)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3181)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3234)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3718)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3743)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3784)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3801)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4138)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4227)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4235)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4560)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4593)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4604)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4729)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4751)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4772)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4832)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn4905)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4931)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4996)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5094)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5124)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5306)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5419)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5437)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5512)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5622)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5641)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 115, 3267958933078468177, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x6f\x72\x6d\x61\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, -6104022719463629235, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 150, 5596123724125244779, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -3528500452895244303, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, -447243349616865045, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x67\x65\x74\x43\x6c\x61\x73\x73\x4e\x61\x6d\x65\x28\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 143, 3966034510964126636, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 4113279969965127102, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x4f\x72\x54\x75\x70\x6c\x65\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, 1133438859089359542, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, 4799290866155849891, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 7025835381767841785, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 1288059034360540827, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -6498999101577693159, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4989268421802719344, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5520043150958930526, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, -4330199518315084178, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
// unreffing REF($1:org.pandalanguage.pandac.parser.Lexer)
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
// unreffing REF($15:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
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
// unreffing REF($29:panda.collections.Stack<panda.core.Bit>)
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
// unreffing REF($48:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
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
// unreffing REF($83:panda.collections.Stack.T)
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
// unreffing REF($89:org.pandalanguage.regex.RegexParser)
// line 62
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp35 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp36 = *$tmp35;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// line 63
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp37 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp38 = *$tmp37;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
return;

}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, panda$io$File* param1, panda$core$String* param2) {

// line 67
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp40 = &param0->reportErrors;
*$tmp40 = $tmp39;
// line 68
org$pandalanguage$pandac$parser$Lexer** $tmp41 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp42 = *$tmp41;
org$pandalanguage$pandac$parser$Lexer$start$panda$core$String($tmp42, param2);
// line 69
panda$io$File** $tmp43 = &param0->path;
panda$io$File* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp45 = &param0->path;
*$tmp45 = param1;
// line 70
panda$core$String** $tmp46 = &param0->source;
panda$core$String* $tmp47 = *$tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp48 = &param0->source;
*$tmp48 = param2;
// line 71
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp49 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp50 = *$tmp49;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp50);
// line 72
org$pandalanguage$regex$RegexParser** $tmp51 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp52 = *$tmp51;
org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String($tmp52, param1, param2);
// line 73
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp53 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp54 = *$tmp53;
panda$core$Bit $tmp55 = panda$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block1; else goto block2;
block1:;
// line 74
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp57 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp58 = *$tmp57;
$fn60 $tmp59 = ($fn60) $tmp58->$class->vtable[2];
$tmp59($tmp58);
goto block2;
block2:;
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
panda$core$Bit local3;
// line 79
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp61 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp62 = *$tmp61;
ITable* $tmp63 = ((panda$collections$CollectionView*) $tmp62)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) $tmp62));
panda$core$Int64 $tmp67 = (panda$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
panda$core$Bit $tmp71 = (panda$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 80
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp73 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp74 = *$tmp73;
ITable* $tmp75 = ((panda$collections$CollectionView*) $tmp74)->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$core$Int64 $tmp78 = $tmp76(((panda$collections$CollectionView*) $tmp74));
panda$core$Int64 $tmp79 = (panda$core$Int64) {1};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 - $tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {$tmp82};
*(&local0) = $tmp83;
// line 81
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp84 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp87 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp85, $tmp86);
*(&local1) = $tmp87;
// line 82
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp88 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp89 = *$tmp88;
panda$core$Int64 $tmp90 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp91 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp89, $tmp90);
// line 83
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp92 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp93 = *$tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block3; else goto block4;
block3:;
// line 84
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp96 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp97 = *$tmp96;
org$pandalanguage$pandac$parser$Token $tmp98 = *(&local1);
$fn100 $tmp99 = ($fn100) $tmp97->$class->vtable[6];
$tmp99($tmp97, $tmp98);
goto block4;
block4:;
// line 86
org$pandalanguage$pandac$parser$Token $tmp101 = *(&local1);
return $tmp101;
block2:;
// line 88
org$pandalanguage$pandac$parser$Lexer** $tmp102 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp103 = *$tmp102;
org$pandalanguage$pandac$parser$Token $tmp104 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token($tmp103);
*(&local2) = $tmp104;
// line 89
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp105 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp106 = *$tmp105;
panda$core$Bit $tmp107 = panda$core$Bit$init$builtin_bit($tmp106 != NULL);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block5; else goto block6;
block5:;
// line 90
org$pandalanguage$pandac$parser$Token $tmp109 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp110 = $tmp109.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp111;
$tmp111 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp111->value = $tmp110;
panda$core$Int64 $tmp112 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp113 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp112);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((panda$core$Equatable*) $tmp111)->$class->itable;
while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) $tmp111), ((panda$core$Equatable*) $tmp114));
bool $tmp119 = $tmp118.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
// unreffing REF($73:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp111)));
// unreffing REF($69:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp119) goto block7; else goto block8;
block7:;
// line 91
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp120 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp121 = *$tmp120;
panda$collections$Stack** $tmp122 = &$tmp121->stack;
panda$collections$Stack* $tmp123 = *$tmp122;
panda$core$Int64 $tmp124 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp123);
panda$core$Int64 $tmp125 = (panda$core$Int64) {0};
panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp124, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block11; else goto block12;
block11:;
*(&local3) = $tmp126;
goto block13;
block12:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp128 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp129 = *$tmp128;
panda$collections$Stack** $tmp130 = &$tmp129->stack;
panda$collections$Stack* $tmp131 = *$tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {0};
panda$core$Object* $tmp133 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp131, $tmp132);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp134;
$tmp134 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp134->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp133)->value;
panda$core$Int64 $tmp135 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp136 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp135);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp137;
$tmp137 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp137->value = $tmp136;
ITable* $tmp138 = ((panda$core$Equatable*) $tmp134)->$class->itable;
while ($tmp138->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[1];
panda$core$Bit $tmp141 = $tmp139(((panda$core$Equatable*) $tmp134), ((panda$core$Equatable*) $tmp137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp137)));
// unreffing REF($111:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp134)));
// unreffing REF($107:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp133);
// unreffing REF($105:panda.collections.Stack.T)
*(&local3) = $tmp141;
goto block13;
block13:;
panda$core$Bit $tmp142 = *(&local3);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block9; else goto block14;
block9:;
// line 93
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp144 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp145 = *$tmp144;
panda$core$Int64 $tmp146 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp147 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp146);
$fn149 $tmp148 = ($fn149) $tmp145->$class->vtable[3];
$tmp148($tmp145, $tmp147);
goto block10;
block14:;
// line 1
// line 96
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp150 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp151 = *$tmp150;
panda$core$Int64 $tmp152 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp153 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp152);
$fn155 $tmp154 = ($fn155) $tmp151->$class->vtable[4];
$tmp154($tmp151, $tmp153);
goto block10;
block10:;
goto block8;
block8:;
// line 99
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp156 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp157 = *$tmp156;
org$pandalanguage$pandac$parser$Token $tmp158 = *(&local2);
$fn160 $tmp159 = ($fn160) $tmp157->$class->vtable[6];
$tmp159($tmp157, $tmp158);
goto block6;
block6:;
// line 101
panda$core$Bit* $tmp161 = &param0->inSpeculative;
panda$core$Bit $tmp162 = *$tmp161;
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block15; else goto block16;
block15:;
// line 102
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp164 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp165 = *$tmp164;
org$pandalanguage$pandac$parser$Token $tmp166 = *(&local2);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp165, $tmp166);
goto block16;
block16:;
// line 104
org$pandalanguage$pandac$parser$Token $tmp167 = *(&local2);
return $tmp167;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
// line 108
goto block1;
block1:;
// line 109
org$pandalanguage$pandac$parser$Token $tmp168 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp168;
// line 110
org$pandalanguage$pandac$parser$Token $tmp169 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp170 = $tmp169.kind;
panda$core$Int64 $tmp171 = $tmp170.$rawValue;
panda$core$Int64 $tmp172 = (panda$core$Int64) {13};
panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block4; else goto block5;
block4:;
// line 112
goto block1;
block5:;
panda$core$Int64 $tmp175 = (panda$core$Int64) {9};
panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block6; else goto block7;
block6:;
// line 115
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp178 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp179 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp180 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp179);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp178, param0, $tmp180);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp181 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
*(&local1) = $tmp178;
// line 116
goto block8;
block8:;
// line 117
org$pandalanguage$pandac$parser$Token $tmp182 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp182;
// line 118
org$pandalanguage$pandac$parser$Token $tmp183 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp184 = $tmp183.kind;
panda$core$Int64 $tmp185 = $tmp184.$rawValue;
panda$core$Int64 $tmp186 = (panda$core$Int64) {13};
panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp185, $tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block11; else goto block12;
block11:;
// line 120
org$pandalanguage$pandac$parser$Token $tmp189 = *(&local2);
panda$core$String* $tmp190 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp189);
panda$core$Bit $tmp191 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp190, &$s192);
bool $tmp193 = $tmp191.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($46:panda.core.String)
if ($tmp193) goto block13; else goto block14;
block13:;
// line 121
goto block9;
block14:;
goto block10;
block12:;
panda$core$Int64 $tmp194 = (panda$core$Int64) {0};
panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp185, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block15; else goto block10;
block15:;
// line 125
org$pandalanguage$pandac$parser$Token $tmp197 = *(&local2);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($20:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return $tmp197;
block10:;
goto block8;
block9:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp199 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($20:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
goto block3;
block7:;
panda$core$Int64 $tmp200 = (panda$core$Int64) {10};
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block16; else goto block17;
block16:;
// line 131
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp203 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp204 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp205 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp204);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp203, param0, $tmp205);
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp206 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
*(&local3) = $tmp203;
// line 132
goto block18;
block18:;
// line 133
org$pandalanguage$pandac$parser$Token $tmp207 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp207;
// line 134
org$pandalanguage$pandac$parser$Token $tmp208 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp209 = $tmp208.kind;
panda$core$Int64 $tmp210 = $tmp209.$rawValue;
panda$core$Int64 $tmp211 = (panda$core$Int64) {11};
panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block21; else goto block22;
block21:;
// line 136
goto block19;
block22:;
panda$core$Int64 $tmp214 = (panda$core$Int64) {0};
panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp210, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block23; else goto block20;
block23:;
// line 139
org$pandalanguage$pandac$parser$Token $tmp217 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp217, &$s218);
// line 140
panda$core$Bit $tmp219 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp220 = &param0->reportErrors;
*$tmp220 = $tmp219;
// line 141
org$pandalanguage$pandac$parser$Token $tmp221 = *(&local4);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp222 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($86:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return $tmp221;
block20:;
goto block18;
block19:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp223 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($86:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
goto block3;
block17:;
// line 147
org$pandalanguage$pandac$parser$Token $tmp224 = *(&local0);
return $tmp224;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 154
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp230 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp231 = *$tmp230;
panda$core$Bit $tmp232 = panda$core$Bit$init$builtin_bit($tmp231 != NULL);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block1; else goto block2;
block1:;
// line 155
goto block3;
block3:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp234 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp235 = *$tmp234;
panda$collections$Array** $tmp236 = &$tmp235->tokens;
panda$collections$Array* $tmp237 = *$tmp236;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp238 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp239 = *$tmp238;
panda$collections$Array** $tmp240 = &$tmp239->tokens;
panda$collections$Array* $tmp241 = *$tmp240;
ITable* $tmp242 = ((panda$collections$CollectionView*) $tmp241)->$class->itable;
while ($tmp242->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
panda$core$Int64 $tmp245 = $tmp243(((panda$collections$CollectionView*) $tmp241));
panda$core$Int64 $tmp246 = (panda$core$Int64) {1};
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247 - $tmp248;
panda$core$Int64 $tmp250 = (panda$core$Int64) {$tmp249};
panda$core$Object* $tmp251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp237, $tmp250);
panda$core$Object** $tmp252 = &((org$pandalanguage$pandac$Pair*) $tmp251)->first;
panda$core$Object* $tmp253 = *$tmp252;
panda$core$String* $tmp254 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp253)->value);
panda$core$String* $tmp255 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, param1);
ITable* $tmp256 = ((panda$core$Equatable*) $tmp254)->$class->itable;
while ($tmp256->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
panda$core$Bit $tmp259 = $tmp257(((panda$core$Equatable*) $tmp254), ((panda$core$Equatable*) $tmp255));
bool $tmp260 = $tmp259.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp251);
// unreffing REF($28:panda.collections.Array.T)
if ($tmp260) goto block4; else goto block5;
block4:;
// line 157
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp261 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp262 = *$tmp261;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp263 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp264 = *$tmp263;
panda$collections$Array** $tmp265 = &$tmp264->tokens;
panda$collections$Array* $tmp266 = *$tmp265;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp267 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp268 = *$tmp267;
panda$collections$Array** $tmp269 = &$tmp268->tokens;
panda$collections$Array* $tmp270 = *$tmp269;
ITable* $tmp271 = ((panda$collections$CollectionView*) $tmp270)->$class->itable;
while ($tmp271->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
panda$core$Int64 $tmp274 = $tmp272(((panda$collections$CollectionView*) $tmp270));
panda$core$Int64 $tmp275 = (panda$core$Int64) {1};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
panda$core$Int64 $tmp279 = (panda$core$Int64) {$tmp278};
panda$core$Object* $tmp280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp266, $tmp279);
panda$core$Object** $tmp281 = &((org$pandalanguage$pandac$Pair*) $tmp280)->first;
panda$core$Object* $tmp282 = *$tmp281;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp262, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp282)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp280);
// unreffing REF($74:panda.collections.Array.T)
// line 159
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp283 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp284 = *$tmp283;
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[7];
$tmp285($tmp284);
goto block3;
block5:;
// line 161
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp287 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp288 = *$tmp287;
$fn290 $tmp289 = ($fn290) $tmp288->$class->vtable[7];
$tmp289($tmp288);
goto block2;
block2:;
// line 163
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp291 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp292 = *$tmp291;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp292, param1);
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

// line 167
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp293 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp294 = *$tmp293;
ITable* $tmp295 = ((panda$collections$CollectionView*) $tmp294)->$class->itable;
while ($tmp295->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[0];
panda$core$Int64 $tmp298 = $tmp296(((panda$collections$CollectionView*) $tmp294));
panda$core$Int64 $tmp299 = (panda$core$Int64) {0};
panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp298, $tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block1:;
// line 168
org$pandalanguage$pandac$parser$Token $tmp302 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp302);
goto block2;
block2:;
// line 170
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp303 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp304 = *$tmp303;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp305 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp306 = *$tmp305;
ITable* $tmp307 = ((panda$collections$CollectionView*) $tmp306)->$class->itable;
while ($tmp307->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[0];
panda$core$Int64 $tmp310 = $tmp308(((panda$collections$CollectionView*) $tmp306));
panda$core$Int64 $tmp311 = (panda$core$Int64) {1};
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312 - $tmp313;
panda$core$Int64 $tmp315 = (panda$core$Int64) {$tmp314};
org$pandalanguage$pandac$parser$Token $tmp316 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp304, $tmp315);
return $tmp316;

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 174
org$pandalanguage$pandac$parser$Token $tmp317 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp317;
// line 175
org$pandalanguage$pandac$parser$Token $tmp318 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp319 = $tmp318.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp320;
$tmp320 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp320->value = $tmp319;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp321;
$tmp321 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp321->value = param1;
ITable* $tmp322 = ((panda$core$Equatable*) $tmp320)->$class->itable;
while ($tmp322->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
panda$core$Bit $tmp325 = $tmp323(((panda$core$Equatable*) $tmp320), ((panda$core$Equatable*) $tmp321));
bool $tmp326 = $tmp325.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp321)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp320)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp326) goto block1; else goto block2;
block1:;
// line 176
org$pandalanguage$pandac$parser$Token $tmp327 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp327, true });
block2:;
// line 178
org$pandalanguage$pandac$parser$Token $tmp328 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp328);
// line 179
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1, panda$core$String* param2) {

org$pandalanguage$pandac$parser$Token local0;
// line 183
org$pandalanguage$pandac$parser$Token $tmp329 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp329;
// line 184
org$pandalanguage$pandac$parser$Token $tmp330 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp331 = $tmp330.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp332;
$tmp332 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp332->value = $tmp331;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp333;
$tmp333 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp333->value = param1;
ITable* $tmp334 = ((panda$core$Equatable*) $tmp332)->$class->itable;
while ($tmp334->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
panda$core$Bit $tmp337 = $tmp335(((panda$core$Equatable*) $tmp332), ((panda$core$Equatable*) $tmp333));
bool $tmp338 = $tmp337.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp333)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp332)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp338) goto block1; else goto block2;
block1:;
// line 185
org$pandalanguage$pandac$parser$Token $tmp339 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp339, true });
block2:;
// line 187
org$pandalanguage$pandac$parser$Token $tmp340 = *(&local0);
panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s342, param2);
panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s344);
org$pandalanguage$pandac$parser$Token $tmp345 = *(&local0);
panda$core$String* $tmp346 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp345);
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, $tmp346);
panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s349);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp340, $tmp348);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
// unreffing REF($25:panda.core.String)
// line 188
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1, panda$core$String* param2) {

panda$core$Bit local0;
// line 192
panda$core$Bit* $tmp350 = &param0->inSpeculative;
panda$core$Bit $tmp351 = *$tmp350;
panda$core$Bit $tmp352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block3; else goto block4;
block3:;
panda$core$Bit* $tmp354 = &param0->reportErrors;
panda$core$Bit $tmp355 = *$tmp354;
*(&local0) = $tmp355;
goto block5;
block4:;
*(&local0) = $tmp352;
goto block5;
block5:;
panda$core$Bit $tmp356 = *(&local0);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block1; else goto block2;
block1:;
// line 193
panda$threads$MessageQueue** $tmp358 = &param0->errors;
panda$threads$MessageQueue* $tmp359 = *$tmp358;
org$pandalanguage$pandac$Compiler$Error* $tmp360 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp361 = &param0->path;
panda$io$File* $tmp362 = *$tmp361;
org$pandalanguage$pandac$Position $tmp363 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp360, $tmp362, $tmp363, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp359, ((panda$core$Immutable*) $tmp360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($19:org.pandalanguage.pandac.Compiler.Error)
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 198
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp364 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp365 = *$tmp364;
panda$core$Bit $tmp366 = panda$core$Bit$init$builtin_bit($tmp365 != NULL);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block1; else goto block2;
block1:;
// line 199
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp368 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp369 = *$tmp368;
$fn371 $tmp370 = ($fn371) $tmp369->$class->vtable[3];
$tmp370($tmp369, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 204
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp372 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp373 = *$tmp372;
panda$core$Bit $tmp374 = panda$core$Bit$init$builtin_bit($tmp373 != NULL);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block1; else goto block2;
block1:;
// line 205
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp376 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp377 = *$tmp376;
$fn379 $tmp378 = ($fn379) $tmp377->$class->vtable[4];
$tmp378($tmp377, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp380 = &param0->inSpeculative;
panda$core$Bit $tmp381 = *$tmp380;
panda$core$Bit $tmp382 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp381);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp384 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s385, $tmp384, &$s386);
abort(); // unreachable
block1:;
// line 212
panda$core$Bit* $tmp387 = &param0->inSpeculative;
panda$core$Bit $tmp388 = *$tmp387;
panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp391 = (panda$core$Int64) {212};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s392, $tmp391);
abort(); // unreachable
block3:;
// line 213
panda$core$Bit $tmp393 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp394 = &param0->inSpeculative;
*$tmp394 = $tmp393;
// line 214
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp395 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp396 = *$tmp395;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp396);
// line 215
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp397 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp398 = *$tmp397;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp399 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp400 = *$tmp399;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT($tmp398, ((panda$collections$CollectionView*) $tmp400));
return;

}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp401 = &param0->inSpeculative;
panda$core$Bit $tmp402 = *$tmp401;
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block1:;
// line 221
panda$core$Bit $tmp407 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp408 = &param0->inSpeculative;
*$tmp408 = $tmp407;
return;

}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
panda$core$Bit* $tmp409 = &param0->inSpeculative;
panda$core$Bit $tmp410 = *$tmp409;
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp412 = (panda$core$Int64) {226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s413, $tmp412, &$s414);
abort(); // unreachable
block1:;
// line 227
panda$core$Bit $tmp415 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp416 = &param0->inSpeculative;
*$tmp416 = $tmp415;
// line 228
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp417 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp418 = *$tmp417;
ITable* $tmp419 = ((panda$collections$CollectionView*) $tmp418)->$class->itable;
while ($tmp419->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
panda$core$Int64 $tmp422 = $tmp420(((panda$collections$CollectionView*) $tmp418));
panda$core$Int64 $tmp423 = (panda$core$Int64) {1};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 - $tmp425;
panda$core$Int64 $tmp427 = (panda$core$Int64) {$tmp426};
panda$core$Int64 $tmp428 = (panda$core$Int64) {0};
panda$core$Int64 $tmp429 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp430 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp431 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp427, $tmp428, $tmp429, $tmp430);
panda$core$Int64 $tmp432 = $tmp431.start;
*(&local0) = $tmp432;
panda$core$Int64 $tmp433 = $tmp431.end;
panda$core$Int64 $tmp434 = $tmp431.step;
panda$core$UInt64 $tmp435 = panda$core$Int64$convert$R$panda$core$UInt64($tmp434);
panda$core$Int64 $tmp436 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp434);
panda$core$UInt64 $tmp437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp436);
panda$core$Bit $tmp438 = $tmp431.inclusive;
bool $tmp439 = $tmp438.value;
panda$core$Int64 $tmp440 = (panda$core$Int64) {0};
int64_t $tmp441 = $tmp434.value;
int64_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 >= $tmp442;
panda$core$Bit $tmp444 = (panda$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block6; else goto block7;
block6:;
if ($tmp439) goto block8; else goto block9;
block8:;
int64_t $tmp446 = $tmp432.value;
int64_t $tmp447 = $tmp433.value;
bool $tmp448 = $tmp446 <= $tmp447;
panda$core$Bit $tmp449 = (panda$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block3; else goto block4;
block9:;
int64_t $tmp451 = $tmp432.value;
int64_t $tmp452 = $tmp433.value;
bool $tmp453 = $tmp451 < $tmp452;
panda$core$Bit $tmp454 = (panda$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block3; else goto block4;
block7:;
if ($tmp439) goto block10; else goto block11;
block10:;
int64_t $tmp456 = $tmp432.value;
int64_t $tmp457 = $tmp433.value;
bool $tmp458 = $tmp456 >= $tmp457;
panda$core$Bit $tmp459 = (panda$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block3; else goto block4;
block11:;
int64_t $tmp461 = $tmp432.value;
int64_t $tmp462 = $tmp433.value;
bool $tmp463 = $tmp461 > $tmp462;
panda$core$Bit $tmp464 = (panda$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block3; else goto block4;
block3:;
// line 229
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp466 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp467 = *$tmp466;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp468 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp469 = *$tmp468;
panda$core$Int64 $tmp470 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp471 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp469, $tmp470);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp467, $tmp471);
goto block5;
block5:;
panda$core$Int64 $tmp472 = *(&local0);
if ($tmp445) goto block13; else goto block14;
block13:;
int64_t $tmp473 = $tmp433.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 - $tmp474;
panda$core$Int64 $tmp476 = (panda$core$Int64) {$tmp475};
panda$core$UInt64 $tmp477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp476);
if ($tmp439) goto block15; else goto block16;
block15:;
uint64_t $tmp478 = $tmp477.value;
uint64_t $tmp479 = $tmp435.value;
bool $tmp480 = $tmp478 >= $tmp479;
panda$core$Bit $tmp481 = (panda$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block12; else goto block4;
block16:;
uint64_t $tmp483 = $tmp477.value;
uint64_t $tmp484 = $tmp435.value;
bool $tmp485 = $tmp483 > $tmp484;
panda$core$Bit $tmp486 = (panda$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block12; else goto block4;
block14:;
int64_t $tmp488 = $tmp472.value;
int64_t $tmp489 = $tmp433.value;
int64_t $tmp490 = $tmp488 - $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {$tmp490};
panda$core$UInt64 $tmp492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp491);
if ($tmp439) goto block17; else goto block18;
block17:;
uint64_t $tmp493 = $tmp492.value;
uint64_t $tmp494 = $tmp437.value;
bool $tmp495 = $tmp493 >= $tmp494;
panda$core$Bit $tmp496 = (panda$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block12; else goto block4;
block18:;
uint64_t $tmp498 = $tmp492.value;
uint64_t $tmp499 = $tmp437.value;
bool $tmp500 = $tmp498 > $tmp499;
panda$core$Bit $tmp501 = (panda$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block12; else goto block4;
block12:;
int64_t $tmp503 = $tmp472.value;
int64_t $tmp504 = $tmp434.value;
int64_t $tmp505 = $tmp503 + $tmp504;
panda$core$Int64 $tmp506 = (panda$core$Int64) {$tmp505};
*(&local0) = $tmp506;
goto block3;
block4:;
return;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 234
panda$core$String** $tmp507 = &param0->source;
panda$core$String* $tmp508 = *$tmp507;
panda$core$String$Index $tmp509 = param1.start;
panda$core$String$Index $tmp510 = param1.end;
panda$core$Bit $tmp511 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp512 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp509, $tmp510, $tmp511);
panda$core$String* $tmp513 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp508, $tmp512);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
// unreffing REF($7:panda.core.String)
return $tmp513;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$ASTNode* param2) {

// line 238
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block1; else goto block2;
block1:;
// line 239
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block2:;
// line 241
org$pandalanguage$pandac$ASTNode* $tmp516 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp517 = (panda$core$Int64) {4};
$fn519 $tmp518 = ($fn519) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp520 = $tmp518(param1);
panda$core$Int64 $tmp521 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp522 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp521);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp516, $tmp517, $tmp520, param1, $tmp522, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($10:org.pandalanguage.pandac.ASTNode)
return $tmp516;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 245
panda$core$MutableString* $tmp523 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp523);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp524 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
*(&local0) = $tmp523;
// line 246
goto block1;
block1:;
// line 247
org$pandalanguage$pandac$parser$Token $tmp525 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp525;
// line 248
org$pandalanguage$pandac$parser$Token $tmp526 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp527 = $tmp526.kind;
panda$core$Int64 $tmp528 = $tmp527.$rawValue;
panda$core$Int64 $tmp529 = (panda$core$Int64) {13};
panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp529);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block4; else goto block5;
block4:;
// line 250
org$pandalanguage$pandac$parser$Token $tmp532 = *(&local1);
panda$core$String* $tmp533 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp532);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp534 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
*(&local2) = $tmp533;
// line 251
panda$core$String* $tmp535 = *(&local2);
panda$core$Bit $tmp536 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp535, &$s537);
bool $tmp538 = $tmp536.value;
if ($tmp538) goto block6; else goto block7;
block6:;
// line 252
org$pandalanguage$pandac$parser$Token $tmp539 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp539, &$s540);
// line 253
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp541 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing REF($25:panda.core.String)
panda$core$MutableString* $tmp542 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block7:;
// line 255
panda$core$MutableString* $tmp543 = *(&local0);
panda$core$String* $tmp544 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp543, $tmp544);
panda$core$String* $tmp545 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing REF($25:panda.core.String)
goto block3;
block5:;
panda$core$Int64 $tmp546 = (panda$core$Int64) {0};
panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp546);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block8; else goto block9;
block8:;
// line 258
org$pandalanguage$pandac$parser$Token $tmp549 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp549, &$s550);
// line 259
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp552 = (panda$core$Int64) {107};
panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block10; else goto block11;
block10:;
// line 262
org$pandalanguage$pandac$parser$Token $tmp555 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp555;
// line 263
org$pandalanguage$pandac$parser$Token $tmp556 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp557 = $tmp556.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp558;
$tmp558 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp558->value = $tmp557;
panda$core$Int64 $tmp559 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp560 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp559);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp561;
$tmp561 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp561->value = $tmp560;
ITable* $tmp562 = ((panda$core$Equatable*) $tmp558)->$class->itable;
while ($tmp562->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
panda$core$Bit $tmp565 = $tmp563(((panda$core$Equatable*) $tmp558), ((panda$core$Equatable*) $tmp561));
bool $tmp566 = $tmp565.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp561)));
// unreffing REF($107:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp558)));
// unreffing REF($103:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp566) goto block12; else goto block13;
block12:;
// line 264
org$pandalanguage$pandac$parser$Token $tmp567 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp567, &$s568);
// line 265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp569 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block13:;
// line 267
org$pandalanguage$pandac$parser$Token $tmp570 = *(&local3);
panda$core$String* $tmp571 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp570);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp572 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
*(&local4) = $tmp571;
// line 268
panda$core$String* $tmp573 = *(&local4);
panda$collections$ListView* $tmp574 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp573);
panda$core$Int64 $tmp575 = (panda$core$Int64) {0};
ITable* $tmp576 = $tmp574->$class->itable;
while ($tmp576->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp576 = $tmp576->next;
}
$fn578 $tmp577 = $tmp576->methods[0];
panda$core$Object* $tmp579 = $tmp577($tmp574, $tmp575);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp579)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp579);
// unreffing REF($149:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing REF($145:panda.collections.ListView<panda.core.Char8>)
// line 269
panda$core$Char8 $tmp580 = *(&local5);
panda$core$UInt8 $tmp581 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp582 = panda$core$Char8$init$panda$core$UInt8($tmp581);
panda$core$Bit $tmp583 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp582);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block15; else goto block16;
block15:;
// line 270
panda$core$MutableString* $tmp585 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp585, &$s586);
goto block14;
block16:;
panda$core$UInt8 $tmp587 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp588 = panda$core$Char8$init$panda$core$UInt8($tmp587);
panda$core$Bit $tmp589 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp588);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block17; else goto block18;
block17:;
// line 271
panda$core$MutableString* $tmp591 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp591, &$s592);
goto block14;
block18:;
panda$core$UInt8 $tmp593 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp594 = panda$core$Char8$init$panda$core$UInt8($tmp593);
panda$core$Bit $tmp595 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block19; else goto block20;
block19:;
// line 272
panda$core$MutableString* $tmp597 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp597, &$s598);
goto block14;
block20:;
panda$core$UInt8 $tmp599 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp600 = panda$core$Char8$init$panda$core$UInt8($tmp599);
panda$core$Bit $tmp601 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp600);
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block21; else goto block22;
block21:;
// line 273
panda$core$MutableString* $tmp603 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp603, &$s604);
goto block14;
block22:;
panda$core$UInt8 $tmp605 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp606 = panda$core$Char8$init$panda$core$UInt8($tmp605);
panda$core$Bit $tmp607 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp606);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block23; else goto block24;
block23:;
// line 274
panda$core$MutableString* $tmp609 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp609, &$s610);
goto block14;
block24:;
panda$core$UInt8 $tmp611 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp612 = panda$core$Char8$init$panda$core$UInt8($tmp611);
panda$core$Bit $tmp613 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block25; else goto block26;
block25:;
// line 275
panda$core$MutableString* $tmp615 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp615, &$s616);
goto block14;
block26:;
panda$core$UInt8 $tmp617 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp618 = panda$core$Char8$init$panda$core$UInt8($tmp617);
panda$core$Bit $tmp619 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp580, $tmp618);
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block27; else goto block28;
block27:;
// line 276
panda$core$MutableString* $tmp621 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp621, &$s622);
goto block14;
block28:;
// line 278
org$pandalanguage$pandac$parser$Token $tmp623 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp623, &$s624);
// line 279
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp625 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($135:panda.core.String)
panda$core$MutableString* $tmp626 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block14:;
// line 282
panda$core$MutableString* $tmp627 = *(&local0);
panda$core$String* $tmp628 = *(&local4);
panda$core$String* $tmp629 = *(&local4);
panda$core$String* $tmp630 = *(&local4);
panda$core$String$Index $tmp631 = panda$core$String$get_start$R$panda$core$String$Index($tmp630);
panda$core$String$Index $tmp632 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp629, $tmp631);
panda$core$Bit $tmp633 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp634 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp632, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp633);
panda$core$String* $tmp635 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp628, $tmp634);
panda$core$MutableString$append$panda$core$String($tmp627, $tmp635);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing REF($256:panda.core.String)
panda$core$String* $tmp636 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($135:panda.core.String)
goto block3;
block11:;
panda$core$Int64 $tmp637 = (panda$core$Int64) {101};
panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp637);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block29; else goto block30;
block29:;
// line 285
org$pandalanguage$pandac$parser$Token $tmp640 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp640);
// line 286
panda$core$MutableString* $tmp641 = *(&local0);
panda$core$String* $tmp642 = panda$core$MutableString$finish$R$panda$core$String($tmp641);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing REF($279:panda.core.String)
panda$core$MutableString* $tmp643 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.core.MutableString)
return $tmp642;
block30:;
// line 289
panda$core$MutableString* $tmp644 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp645 = *(&local1);
panda$core$String* $tmp646 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp645);
panda$core$MutableString$append$panda$core$String($tmp644, $tmp646);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing REF($298:panda.core.String)
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp647 = panda$core$Bit$init$builtin_bit(false);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp649 = (panda$core$Int64) {244};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s650, $tmp649, &$s651);
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
// line 296
panda$core$MutableString* $tmp652 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp652);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp653 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
*(&local0) = $tmp652;
// line 297
goto block1;
block1:;
// line 298
org$pandalanguage$pandac$parser$Token $tmp654 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp654;
// line 299
org$pandalanguage$pandac$parser$Token $tmp655 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp656 = $tmp655.kind;
panda$core$Int64 $tmp657 = $tmp656.$rawValue;
panda$core$Int64 $tmp658 = (panda$core$Int64) {13};
panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp658);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block4; else goto block5;
block4:;
// line 301
org$pandalanguage$pandac$parser$Token $tmp661 = *(&local1);
panda$core$String* $tmp662 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp661);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp663 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
*(&local2) = $tmp662;
// line 302
panda$core$String* $tmp664 = *(&local2);
panda$core$Bit $tmp665 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp664, &$s666);
bool $tmp667 = $tmp665.value;
if ($tmp667) goto block6; else goto block7;
block6:;
// line 303
org$pandalanguage$pandac$parser$Token $tmp668 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp668, &$s669);
// line 304
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($25:panda.core.String)
panda$core$MutableString* $tmp671 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block7:;
// line 306
panda$core$MutableString* $tmp672 = *(&local0);
panda$core$String* $tmp673 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp672, $tmp673);
panda$core$String* $tmp674 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($25:panda.core.String)
goto block3;
block5:;
panda$core$Int64 $tmp675 = (panda$core$Int64) {0};
panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp675);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block8; else goto block9;
block8:;
// line 309
org$pandalanguage$pandac$parser$Token $tmp678 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp678, &$s679);
// line 310
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp680 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp681 = (panda$core$Int64) {107};
panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp681);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block10; else goto block11;
block10:;
// line 313
org$pandalanguage$pandac$parser$Token $tmp684 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp684;
// line 314
org$pandalanguage$pandac$parser$Token $tmp685 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp686 = $tmp685.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp687;
$tmp687 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp687->value = $tmp686;
panda$core$Int64 $tmp688 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp689 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp688);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp690;
$tmp690 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp690->value = $tmp689;
ITable* $tmp691 = ((panda$core$Equatable*) $tmp687)->$class->itable;
while ($tmp691->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
panda$core$Bit $tmp694 = $tmp692(((panda$core$Equatable*) $tmp687), ((panda$core$Equatable*) $tmp690));
bool $tmp695 = $tmp694.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp690)));
// unreffing REF($107:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp687)));
// unreffing REF($103:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp695) goto block12; else goto block13;
block12:;
// line 315
org$pandalanguage$pandac$parser$Token $tmp696 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp696, &$s697);
// line 316
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp698 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block13:;
// line 318
org$pandalanguage$pandac$parser$Token $tmp699 = *(&local3);
panda$core$String* $tmp700 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp699);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp701 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
*(&local4) = $tmp700;
// line 319
panda$core$String* $tmp702 = *(&local4);
panda$collections$ListView* $tmp703 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp702);
panda$core$Int64 $tmp704 = (panda$core$Int64) {0};
ITable* $tmp705 = $tmp703->$class->itable;
while ($tmp705->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
panda$core$Object* $tmp708 = $tmp706($tmp703, $tmp704);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp708)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp708);
// unreffing REF($149:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($145:panda.collections.ListView<panda.core.Char8>)
// line 320
panda$core$Char8 $tmp709 = *(&local5);
panda$core$UInt8 $tmp710 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp711 = panda$core$Char8$init$panda$core$UInt8($tmp710);
panda$core$Bit $tmp712 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp711);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block15; else goto block16;
block15:;
// line 321
panda$core$MutableString* $tmp714 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp714, &$s715);
goto block14;
block16:;
panda$core$UInt8 $tmp716 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp717 = panda$core$Char8$init$panda$core$UInt8($tmp716);
panda$core$Bit $tmp718 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block17; else goto block18;
block17:;
// line 322
panda$core$MutableString* $tmp720 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp720, &$s721);
goto block14;
block18:;
panda$core$UInt8 $tmp722 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp723 = panda$core$Char8$init$panda$core$UInt8($tmp722);
panda$core$Bit $tmp724 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp723);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block19; else goto block20;
block19:;
// line 323
panda$core$MutableString* $tmp726 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp726, &$s727);
goto block14;
block20:;
panda$core$UInt8 $tmp728 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp729 = panda$core$Char8$init$panda$core$UInt8($tmp728);
panda$core$Bit $tmp730 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp729);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block21; else goto block22;
block21:;
// line 324
panda$core$MutableString* $tmp732 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp732, &$s733);
goto block14;
block22:;
panda$core$UInt8 $tmp734 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp735 = panda$core$Char8$init$panda$core$UInt8($tmp734);
panda$core$Bit $tmp736 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp735);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block23; else goto block24;
block23:;
// line 325
panda$core$MutableString* $tmp738 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp738, &$s739);
goto block14;
block24:;
panda$core$UInt8 $tmp740 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp741 = panda$core$Char8$init$panda$core$UInt8($tmp740);
panda$core$Bit $tmp742 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block25; else goto block26;
block25:;
// line 326
panda$core$MutableString* $tmp744 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp744, &$s745);
goto block14;
block26:;
panda$core$UInt8 $tmp746 = (panda$core$UInt8) {58};
panda$core$Char8 $tmp747 = panda$core$Char8$init$panda$core$UInt8($tmp746);
panda$core$Bit $tmp748 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block27; else goto block28;
block27:;
// line 327
panda$core$MutableString* $tmp750 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp750, &$s751);
goto block14;
block28:;
panda$core$UInt8 $tmp752 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp753 = panda$core$Char8$init$panda$core$UInt8($tmp752);
panda$core$Bit $tmp754 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp709, $tmp753);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block29; else goto block30;
block29:;
// line 328
panda$core$MutableString* $tmp756 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp756, &$s757);
goto block14;
block30:;
// line 330
org$pandalanguage$pandac$parser$Token $tmp758 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp758, &$s759);
// line 331
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp760 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing REF($135:panda.core.String)
panda$core$MutableString* $tmp761 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return ((panda$core$String*) NULL);
block14:;
// line 334
panda$core$MutableString* $tmp762 = *(&local0);
panda$core$String* $tmp763 = *(&local4);
panda$core$String* $tmp764 = *(&local4);
panda$core$String* $tmp765 = *(&local4);
panda$core$String$Index $tmp766 = panda$core$String$get_start$R$panda$core$String$Index($tmp765);
panda$core$String$Index $tmp767 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp764, $tmp766);
panda$core$Bit $tmp768 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp769 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp767, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp768);
panda$core$String* $tmp770 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp763, $tmp769);
panda$core$MutableString$append$panda$core$String($tmp762, $tmp770);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing REF($265:panda.core.String)
panda$core$String* $tmp771 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing REF($135:panda.core.String)
goto block3;
block11:;
panda$core$Int64 $tmp772 = (panda$core$Int64) {96};
panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block31; else goto block32;
block31:;
// line 337
org$pandalanguage$pandac$parser$Token $tmp775 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp775);
// line 338
panda$core$MutableString* $tmp776 = *(&local0);
panda$core$String* $tmp777 = panda$core$MutableString$finish$R$panda$core$String($tmp776);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
// unreffing REF($288:panda.core.String)
panda$core$MutableString* $tmp778 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return $tmp777;
block32:;
panda$core$Int64 $tmp779 = (panda$core$Int64) {101};
panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, $tmp779);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block33; else goto block34;
block33:;
// line 341
org$pandalanguage$pandac$parser$Token $tmp782 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp782);
// line 342
panda$core$MutableString* $tmp783 = *(&local0);
panda$core$String* $tmp784 = panda$core$MutableString$finish$R$panda$core$String($tmp783);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing REF($313:panda.core.String)
panda$core$MutableString* $tmp785 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($1:panda.core.MutableString)
return $tmp784;
block34:;
// line 345
panda$core$MutableString* $tmp786 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp787 = *(&local1);
panda$core$String* $tmp788 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp787);
panda$core$MutableString$append$panda$core$String($tmp786, $tmp788);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($332:panda.core.String)
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp789 = panda$core$Bit$init$builtin_bit(false);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp791 = (panda$core$Int64) {295};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s792, $tmp791, &$s793);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 353
org$pandalanguage$pandac$ASTNode* $tmp794 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp795 = (panda$core$Int64) {15};
$fn797 $tmp796 = ($fn797) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp798 = $tmp796(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp794, $tmp795, $tmp798, param1, &$s799);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp800 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
*(&local0) = $tmp794;
// line 354
org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp802 = (panda$core$Int64) {8};
$fn804 $tmp803 = ($fn804) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp805 = $tmp803(param1);
org$pandalanguage$pandac$ASTNode* $tmp806 = *(&local0);
panda$collections$ImmutableArray* $tmp807 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp807);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp801, $tmp802, $tmp805, $tmp806, $tmp807);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp808 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
*(&local1) = $tmp801;
// line 355
org$pandalanguage$pandac$ASTNode* $tmp809 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp810 = (panda$core$Int64) {42};
$fn812 $tmp811 = ($fn812) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp813 = $tmp811(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp809, $tmp810, $tmp813, &$s814);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp815 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
*(&local2) = $tmp809;
// line 356
org$pandalanguage$pandac$ASTNode* $tmp816 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp817 = (panda$core$Int64) {4};
$fn819 $tmp818 = ($fn819) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp820 = $tmp818(param1);
org$pandalanguage$pandac$ASTNode* $tmp821 = *(&local1);
panda$core$Int64 $tmp822 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp823 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp822);
org$pandalanguage$pandac$ASTNode* $tmp824 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp816, $tmp817, $tmp820, $tmp821, $tmp823, $tmp824);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing REF($44:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp825 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing stringType
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp826 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing call
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
// unreffing REF($19:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp827 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
// unreffing dot
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode)
return $tmp816;

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
// line 361
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp828 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp829 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp830 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp829);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp828, param0, $tmp830);
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp831 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
*(&local0) = $tmp828;
// line 362
org$pandalanguage$pandac$parser$Token $tmp832 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp832;
// line 363
org$pandalanguage$pandac$parser$Token $tmp833 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp834 = $tmp833.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp835;
$tmp835 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp835->value = $tmp834;
panda$core$Int64 $tmp836 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$Kind $tmp837 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp836);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp838;
$tmp838 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp838->value = $tmp837;
ITable* $tmp839 = ((panda$core$Equatable*) $tmp835)->$class->itable;
while ($tmp839->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[1];
panda$core$Bit $tmp842 = $tmp840(((panda$core$Equatable*) $tmp835), ((panda$core$Equatable*) $tmp838));
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$parser$Token $tmp844 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp845 = $tmp844.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp846;
$tmp846 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp846->value = $tmp845;
panda$core$Int64 $tmp847 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$Kind $tmp848 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp847);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp849;
$tmp849 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp849->value = $tmp848;
ITable* $tmp850 = ((panda$core$Equatable*) $tmp846)->$class->itable;
while ($tmp850->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp850 = $tmp850->next;
}
$fn852 $tmp851 = $tmp850->methods[1];
panda$core$Bit $tmp853 = $tmp851(((panda$core$Equatable*) $tmp846), ((panda$core$Equatable*) $tmp849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp849)));
// unreffing REF($33:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp846)));
// unreffing REF($29:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local2) = $tmp853;
goto block5;
block4:;
*(&local2) = $tmp842;
goto block5;
block5:;
panda$core$Bit $tmp854 = *(&local2);
bool $tmp855 = $tmp854.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp838)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp835)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp855) goto block1; else goto block2;
block1:;
// line 364
org$pandalanguage$pandac$parser$Token $tmp856 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp857 = *(&local1);
panda$core$String* $tmp858 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp857);
panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s860, $tmp858);
panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s862);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp856, $tmp861);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing REF($59:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing REF($58:panda.core.String)
// line 365
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp863 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 367
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp864 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 368
panda$core$MutableString* $tmp865 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp865);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp866 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
*(&local4) = $tmp865;
// line 369
goto block6;
block6:;
// line 370
org$pandalanguage$pandac$parser$Token $tmp867 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp867;
// line 371
org$pandalanguage$pandac$parser$Token $tmp868 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp869 = $tmp868.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp870;
$tmp870 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp870->value = $tmp869;
org$pandalanguage$pandac$parser$Token $tmp871 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp872 = $tmp871.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp873;
$tmp873 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp873->value = $tmp872;
ITable* $tmp874 = ((panda$core$Equatable*) $tmp870)->$class->itable;
while ($tmp874->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp874 = $tmp874->next;
}
$fn876 $tmp875 = $tmp874->methods[0];
panda$core$Bit $tmp877 = $tmp875(((panda$core$Equatable*) $tmp870), ((panda$core$Equatable*) $tmp873));
bool $tmp878 = $tmp877.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp873)));
// unreffing REF($113:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp870)));
// unreffing REF($109:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp878) goto block8; else goto block9;
block8:;
// line 372
goto block7;
block9:;
// line 374
org$pandalanguage$pandac$parser$Token $tmp879 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp880 = $tmp879.kind;
panda$core$Int64 $tmp881 = $tmp880.$rawValue;
panda$core$Int64 $tmp882 = (panda$core$Int64) {13};
panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block11; else goto block12;
block11:;
// line 376
org$pandalanguage$pandac$parser$Token $tmp885 = *(&local5);
panda$core$String* $tmp886 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp885);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp887 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
*(&local6) = $tmp886;
// line 377
panda$core$String* $tmp888 = *(&local6);
panda$core$Bit $tmp889 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp888, &$s890);
bool $tmp891 = $tmp889.value;
if ($tmp891) goto block13; else goto block14;
block13:;
// line 378
org$pandalanguage$pandac$parser$Token $tmp892 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp892, &$s893);
// line 379
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp894 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp895 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp896 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp897 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 381
panda$core$MutableString* $tmp898 = *(&local4);
panda$core$String* $tmp899 = *(&local6);
panda$core$MutableString$append$panda$core$String($tmp898, $tmp899);
panda$core$String* $tmp900 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing REF($136:panda.core.String)
goto block10;
block12:;
panda$core$Int64 $tmp901 = (panda$core$Int64) {0};
panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp901);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block15; else goto block16;
block15:;
// line 384
org$pandalanguage$pandac$parser$Token $tmp904 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp904, &$s905);
// line 385
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp906 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp907 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp908 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
panda$core$Int64 $tmp909 = (panda$core$Int64) {107};
panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp909);
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block17; else goto block18;
block17:;
// line 388
org$pandalanguage$pandac$parser$Token $tmp912 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local7) = $tmp912;
// line 389
org$pandalanguage$pandac$parser$Token $tmp913 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind $tmp914 = $tmp913.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp915;
$tmp915 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp915->value = $tmp914;
panda$core$Int64 $tmp916 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp917 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp916);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp918;
$tmp918 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp918->value = $tmp917;
ITable* $tmp919 = ((panda$core$Equatable*) $tmp915)->$class->itable;
while ($tmp919->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp919 = $tmp919->next;
}
$fn921 $tmp920 = $tmp919->methods[0];
panda$core$Bit $tmp922 = $tmp920(((panda$core$Equatable*) $tmp915), ((panda$core$Equatable*) $tmp918));
bool $tmp923 = $tmp922.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp918)));
// unreffing REF($244:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp915)));
// unreffing REF($240:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp923) goto block19; else goto block20;
block19:;
// line 390
org$pandalanguage$pandac$parser$Token $tmp924 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp924, &$s925);
// line 391
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp926 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp927 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp928 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 393
org$pandalanguage$pandac$parser$Token $tmp929 = *(&local7);
panda$core$String* $tmp930 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp929);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp931 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
*(&local8) = $tmp930;
// line 394
panda$core$String* $tmp932 = *(&local8);
panda$collections$ListView* $tmp933 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp932);
panda$core$Int64 $tmp934 = (panda$core$Int64) {0};
ITable* $tmp935 = $tmp933->$class->itable;
while ($tmp935->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp935 = $tmp935->next;
}
$fn937 $tmp936 = $tmp935->methods[0];
panda$core$Object* $tmp938 = $tmp936($tmp933, $tmp934);
*(&local9) = ((panda$core$Char8$wrapper*) $tmp938)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp938);
// unreffing REF($299:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($295:panda.collections.ListView<panda.core.Char8>)
// line 395
panda$core$Char8 $tmp939 = *(&local9);
panda$core$UInt8 $tmp940 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp941 = panda$core$Char8$init$panda$core$UInt8($tmp940);
panda$core$Bit $tmp942 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp941);
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block22; else goto block23;
block22:;
// line 396
panda$core$MutableString* $tmp944 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp944, &$s945);
goto block21;
block23:;
panda$core$UInt8 $tmp946 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp947 = panda$core$Char8$init$panda$core$UInt8($tmp946);
panda$core$Bit $tmp948 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp947);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block24; else goto block25;
block24:;
// line 397
panda$core$MutableString* $tmp950 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp950, &$s951);
goto block21;
block25:;
panda$core$UInt8 $tmp952 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp953 = panda$core$Char8$init$panda$core$UInt8($tmp952);
panda$core$Bit $tmp954 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp953);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block26; else goto block27;
block26:;
// line 398
panda$core$MutableString* $tmp956 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp956, &$s957);
goto block21;
block27:;
panda$core$UInt8 $tmp958 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp959 = panda$core$Char8$init$panda$core$UInt8($tmp958);
panda$core$Bit $tmp960 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp959);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block28; else goto block29;
block28:;
// line 399
panda$core$MutableString* $tmp962 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp962, &$s963);
goto block21;
block29:;
panda$core$UInt8 $tmp964 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp965 = panda$core$Char8$init$panda$core$UInt8($tmp964);
panda$core$Bit $tmp966 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp965);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block30; else goto block31;
block30:;
// line 400
panda$core$MutableString* $tmp968 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp968, &$s969);
goto block21;
block31:;
panda$core$UInt8 $tmp970 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp971 = panda$core$Char8$init$panda$core$UInt8($tmp970);
panda$core$Bit $tmp972 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block32; else goto block33;
block32:;
// line 401
panda$core$MutableString* $tmp974 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp974, &$s975);
goto block21;
block33:;
panda$core$UInt8 $tmp976 = (panda$core$UInt8) {123};
panda$core$Char8 $tmp977 = panda$core$Char8$init$panda$core$UInt8($tmp976);
panda$core$Bit $tmp978 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp939, $tmp977);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block34; else goto block35;
block34:;
// line 404
panda$core$Bit* $tmp980 = &param0->allowLambdas;
panda$core$Bit $tmp981 = *$tmp980;
*(&local10) = $tmp981;
// line 405
panda$core$Bit $tmp982 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp983 = &param0->allowLambdas;
*$tmp983 = $tmp982;
// line 406
org$pandalanguage$pandac$ASTNode* $tmp984 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp985 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
*(&local11) = $tmp984;
// line 407
panda$core$Bit $tmp986 = *(&local10);
panda$core$Bit* $tmp987 = &param0->allowLambdas;
*$tmp987 = $tmp986;
// line 408
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local11);
panda$core$Bit $tmp989 = panda$core$Bit$init$builtin_bit($tmp988 == NULL);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block36; else goto block37;
block36:;
// line 409
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp991 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($378:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp992 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing REF($285:panda.core.String)
panda$core$MutableString* $tmp993 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp994 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp995 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
// line 411
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp996 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local12) = ((panda$core$String*) NULL);
// line 412
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp997 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local13) = ((panda$core$String*) NULL);
// line 413
panda$core$Int64 $tmp998 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp999 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp998);
org$pandalanguage$pandac$parser$Token$nullable $tmp1000 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp999);
panda$core$Bit $tmp1001 = panda$core$Bit$init$builtin_bit($tmp1000.nonnull);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block38; else goto block39;
block38:;
// line 414
org$pandalanguage$pandac$parser$Token $tmp1003 = *(&local1);
panda$core$String* $tmp1004 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1003);
panda$core$String* $tmp1005 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
*(&local12) = $tmp1004;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
// unreffing REF($463:panda.core.String?)
goto block39;
block39:;
// line 416
panda$core$Int64 $tmp1006 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1007 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1006);
org$pandalanguage$pandac$parser$Token$nullable $tmp1008 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1007);
panda$core$Bit $tmp1009 = panda$core$Bit$init$builtin_bit($tmp1008.nonnull);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block40; else goto block41;
block40:;
// line 417
org$pandalanguage$pandac$parser$Token $tmp1011 = *(&local1);
panda$core$String* $tmp1012 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1011);
panda$core$String* $tmp1013 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
*(&local13) = $tmp1012;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// unreffing REF($484:panda.core.String?)
// line 418
panda$core$String* $tmp1014 = *(&local13);
panda$core$Bit $tmp1015 = panda$core$Bit$init$builtin_bit($tmp1014 == NULL);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block42; else goto block43;
block42:;
// line 419
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1017 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1018 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1019 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($378:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1020 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing REF($285:panda.core.String)
panda$core$MutableString* $tmp1021 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1022 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1023 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 421
org$pandalanguage$pandac$ASTNode* $tmp1024 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1025 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1026 = *(&local11);
$fn1028 $tmp1027 = ($fn1028) $tmp1026->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1029 = $tmp1027($tmp1026);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1024, $tmp1025, $tmp1029, &$s1030);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1031 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
*(&local14) = $tmp1024;
// line 423
org$pandalanguage$pandac$ASTNode* $tmp1032 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1033 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp1034 = *(&local11);
$fn1036 $tmp1035 = ($fn1036) $tmp1034->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1037 = $tmp1035($tmp1034);
org$pandalanguage$pandac$ASTNode* $tmp1038 = *(&local11);
panda$core$Int64 $tmp1039 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp1040 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1039);
org$pandalanguage$pandac$ASTNode* $tmp1041 = *(&local14);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1032, $tmp1033, $tmp1037, $tmp1038, $tmp1040, $tmp1041);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1042 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
*(&local15) = $tmp1032;
// line 425
org$pandalanguage$pandac$ASTNode* $tmp1043 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1044 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1045 = *(&local11);
$fn1047 $tmp1046 = ($fn1047) $tmp1045->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1048 = $tmp1046($tmp1045);
org$pandalanguage$pandac$ASTNode* $tmp1049 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1043, $tmp1044, $tmp1048, $tmp1049, &$s1050);
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1051 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
*(&local16) = $tmp1043;
// line 426
panda$collections$Array* $tmp1052 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1052);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1053 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
*(&local17) = $tmp1052;
// line 427
panda$collections$Array* $tmp1054 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1055 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1056 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1057 = *(&local1);
org$pandalanguage$pandac$Position $tmp1058 = $tmp1057.position;
panda$core$String* $tmp1059 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1055, $tmp1056, $tmp1058, $tmp1059);
panda$collections$Array$add$panda$collections$Array$T($tmp1054, ((panda$core$Object*) $tmp1055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing REF($616:org.pandalanguage.pandac.ASTNode)
// line 428
org$pandalanguage$pandac$ASTNode* $tmp1060 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1061 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1062 = *(&local11);
$fn1064 $tmp1063 = ($fn1064) $tmp1062->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1065 = $tmp1063($tmp1062);
org$pandalanguage$pandac$ASTNode* $tmp1066 = *(&local16);
panda$collections$Array* $tmp1067 = *(&local17);
panda$collections$ImmutableArray* $tmp1068 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1067);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1060, $tmp1061, $tmp1065, $tmp1066, $tmp1068);
org$pandalanguage$pandac$ASTNode* $tmp1069 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
*(&local11) = $tmp1060;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing REF($638:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing REF($629:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp1070 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1070));
// unreffing callArgs
*(&local17) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing REF($603:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1071 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
// unreffing dot
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing REF($587:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1072 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
// unreffing cast
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// unreffing REF($567:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1073 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
// unreffing formattable
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing REF($552:org.pandalanguage.pandac.ASTNode)
goto block41;
block41:;
// line 430
panda$core$Int64 $tmp1074 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp1075 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1074);
org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1075, &$s1077);
panda$core$Bit $tmp1078 = panda$core$Bit$init$builtin_bit(!$tmp1076.nonnull);
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block44; else goto block45;
block44:;
// line 431
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1080 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1081 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1082 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($378:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1083 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing REF($285:panda.core.String)
panda$core$MutableString* $tmp1084 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1085 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1086 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 433
panda$core$String* $tmp1087 = *(&local12);
panda$core$Bit $tmp1088 = panda$core$Bit$init$builtin_bit($tmp1087 != NULL);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block46; else goto block47;
block46:;
// line 434
panda$core$String* $tmp1090 = *(&local13);
panda$core$Bit $tmp1091 = panda$core$Bit$init$builtin_bit($tmp1090 == NULL);
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block48; else goto block49;
block48:;
// line 435
org$pandalanguage$pandac$ASTNode* $tmp1093 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1094 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1093);
org$pandalanguage$pandac$ASTNode* $tmp1095 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
*(&local11) = $tmp1094;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
// unreffing REF($761:org.pandalanguage.pandac.ASTNode)
goto block49;
block49:;
// line 437
org$pandalanguage$pandac$ASTNode* $tmp1096 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1097 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1098 = *(&local11);
$fn1100 $tmp1099 = ($fn1100) $tmp1098->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1101 = $tmp1099($tmp1098);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1096, $tmp1097, $tmp1101, &$s1102);
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1103 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
*(&local18) = $tmp1096;
// line 438
org$pandalanguage$pandac$ASTNode* $tmp1104 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1105 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1106 = *(&local11);
$fn1108 $tmp1107 = ($fn1108) $tmp1106->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1109 = $tmp1107($tmp1106);
org$pandalanguage$pandac$ASTNode* $tmp1110 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1104, $tmp1105, $tmp1109, $tmp1110, &$s1111);
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1112 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
*(&local19) = $tmp1104;
// line 439
panda$collections$Array* $tmp1113 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1113);
*(&local20) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1114 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
*(&local20) = $tmp1113;
// line 440
panda$collections$Array* $tmp1115 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1116 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1115, ((panda$core$Object*) $tmp1116));
// line 441
panda$collections$Array* $tmp1117 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1118 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1119 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1120 = *(&local1);
org$pandalanguage$pandac$Position $tmp1121 = $tmp1120.position;
panda$core$String* $tmp1122 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1118, $tmp1119, $tmp1121, $tmp1122);
panda$collections$Array$add$panda$collections$Array$T($tmp1117, ((panda$core$Object*) $tmp1118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing REF($825:org.pandalanguage.pandac.ASTNode)
// line 442
org$pandalanguage$pandac$ASTNode* $tmp1123 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1124 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1125 = *(&local11);
$fn1127 $tmp1126 = ($fn1127) $tmp1125->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1128 = $tmp1126($tmp1125);
org$pandalanguage$pandac$ASTNode* $tmp1129 = *(&local19);
panda$collections$Array* $tmp1130 = *(&local20);
panda$collections$ImmutableArray* $tmp1131 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1130);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1123, $tmp1124, $tmp1128, $tmp1129, $tmp1131);
org$pandalanguage$pandac$ASTNode* $tmp1132 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
*(&local11) = $tmp1123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing REF($847:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
// unreffing REF($838:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp1133 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing callArgs
*(&local20) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($805:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1134 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing callTarget
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing REF($789:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1135 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing pandaType
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing REF($774:org.pandalanguage.pandac.ASTNode)
goto block47;
block47:;
// line 444
panda$core$MutableString* $tmp1136 = *(&local4);
panda$core$String* $tmp1137 = panda$core$MutableString$finish$R$panda$core$String($tmp1136);
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1138 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
*(&local21) = $tmp1137;
// line 445
panda$core$MutableString* $tmp1139 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1139);
panda$core$MutableString* $tmp1140 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
*(&local4) = $tmp1139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
// unreffing REF($899:panda.core.MutableString)
// line 446
panda$core$String* $tmp1141 = *(&local21);
ITable* $tmp1143 = ((panda$core$Equatable*) $tmp1141)->$class->itable;
while ($tmp1143->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1143 = $tmp1143->next;
}
$fn1145 $tmp1144 = $tmp1143->methods[1];
panda$core$Bit $tmp1146 = $tmp1144(((panda$core$Equatable*) $tmp1141), ((panda$core$Equatable*) &$s1142));
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block52; else goto block53;
block52:;
*(&local22) = $tmp1146;
goto block54;
block53:;
org$pandalanguage$pandac$ASTNode* $tmp1148 = *(&local3);
panda$core$Bit $tmp1149 = panda$core$Bit$init$builtin_bit($tmp1148 != NULL);
*(&local22) = $tmp1149;
goto block54;
block54:;
panda$core$Bit $tmp1150 = *(&local22);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block50; else goto block55;
block50:;
// line 447
org$pandalanguage$pandac$ASTNode* $tmp1152 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1154 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1155 = *(&local1);
org$pandalanguage$pandac$Position $tmp1156 = $tmp1155.position;
panda$core$String* $tmp1157 = *(&local21);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1153, $tmp1154, $tmp1156, $tmp1157);
org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1152, $tmp1153);
org$pandalanguage$pandac$ASTNode* $tmp1159 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
*(&local3) = $tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
// unreffing REF($937:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
// unreffing REF($931:org.pandalanguage.pandac.ASTNode)
// line 449
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1161 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1162 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1160, $tmp1161);
org$pandalanguage$pandac$ASTNode* $tmp1163 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
*(&local3) = $tmp1162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
// unreffing REF($955:org.pandalanguage.pandac.ASTNode)
goto block51;
block55:;
// line 1
// line 452
org$pandalanguage$pandac$ASTNode* $tmp1164 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1165 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1164);
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
*(&local3) = $tmp1165;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
// unreffing REF($971:org.pandalanguage.pandac.ASTNode)
goto block51;
block51:;
panda$core$String* $tmp1167 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing text
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
// unreffing REF($890:panda.core.String)
panda$core$String* $tmp1168 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1169 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1170 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($378:org.pandalanguage.pandac.ASTNode?)
goto block21;
block35:;
// line 456
org$pandalanguage$pandac$parser$Token $tmp1171 = *(&local5);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1171, &$s1172);
// line 457
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1173 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing REF($285:panda.core.String)
panda$core$MutableString* $tmp1174 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1175 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 460
panda$core$MutableString* $tmp1177 = *(&local4);
panda$core$String* $tmp1178 = *(&local8);
panda$core$String* $tmp1179 = *(&local8);
panda$core$String* $tmp1180 = *(&local8);
panda$core$String$Index $tmp1181 = panda$core$String$get_start$R$panda$core$String$Index($tmp1180);
panda$core$String$Index $tmp1182 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp1179, $tmp1181);
panda$core$Bit $tmp1183 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1184 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1182, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1183);
panda$core$String* $tmp1185 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp1178, $tmp1184);
panda$core$MutableString$append$panda$core$String($tmp1177, $tmp1185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($1056:panda.core.String)
panda$core$String* $tmp1186 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing REF($285:panda.core.String)
goto block10;
block18:;
// line 463
panda$core$MutableString* $tmp1187 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp1188 = *(&local5);
panda$core$String* $tmp1189 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1188);
panda$core$MutableString$append$panda$core$String($tmp1187, $tmp1189);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
// unreffing REF($1073:panda.core.String)
goto block10;
block10:;
goto block6;
block7:;
// line 467
org$pandalanguage$pandac$ASTNode* $tmp1190 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1191 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1192 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1193 = *(&local1);
org$pandalanguage$pandac$Position $tmp1194 = $tmp1193.position;
panda$core$MutableString* $tmp1195 = *(&local4);
panda$core$String* $tmp1196 = panda$core$MutableString$finish$R$panda$core$String($tmp1195);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1191, $tmp1192, $tmp1194, $tmp1196);
org$pandalanguage$pandac$ASTNode* $tmp1197 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1190, $tmp1191);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($1089:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($1087:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// unreffing REF($1082:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp1198 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($92:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1199 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1200 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
return $tmp1197;

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
// line 476
panda$core$Int64 $tmp1201 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1202 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1201);
org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1202, &$s1204);
*(&local0) = $tmp1203;
// line 477
org$pandalanguage$pandac$parser$Token$nullable $tmp1205 = *(&local0);
panda$core$Bit $tmp1206 = panda$core$Bit$init$builtin_bit(!$tmp1205.nonnull);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block1; else goto block2;
block1:;
// line 478
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 480
org$pandalanguage$pandac$ASTNode* $tmp1208 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
*(&local1) = $tmp1208;
// line 481
org$pandalanguage$pandac$ASTNode* $tmp1210 = *(&local1);
panda$core$Bit $tmp1211 = panda$core$Bit$init$builtin_bit($tmp1210 == NULL);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block3; else goto block4;
block3:;
// line 482
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1213 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 484
org$pandalanguage$pandac$ASTNode* $tmp1214 = *(&local1);
panda$core$Int64* $tmp1215 = &$tmp1214->$rawValue;
panda$core$Int64 $tmp1216 = *$tmp1215;
panda$core$Int64 $tmp1217 = (panda$core$Int64) {20};
panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1216, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp1220 = (org$pandalanguage$pandac$Position*) ($tmp1214->$data + 0);
org$pandalanguage$pandac$Position $tmp1221 = *$tmp1220;
*(&local2) = $tmp1221;
panda$core$String** $tmp1222 = (panda$core$String**) ($tmp1214->$data + 16);
panda$core$String* $tmp1223 = *$tmp1222;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1224 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
*(&local3) = $tmp1223;
// line 487
panda$core$Int64 $tmp1225 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1226 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1225);
org$pandalanguage$pandac$parser$Token$nullable $tmp1227 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1226);
panda$core$Bit $tmp1228 = panda$core$Bit$init$builtin_bit($tmp1227.nonnull);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block8; else goto block9;
block8:;
// line 489
panda$collections$Array* $tmp1230 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1230);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1231 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
*(&local4) = $tmp1230;
// line 490
org$pandalanguage$pandac$ASTNode* $tmp1232 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1233 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
*(&local5) = $tmp1232;
// line 491
org$pandalanguage$pandac$ASTNode* $tmp1234 = *(&local5);
panda$core$Bit $tmp1235 = panda$core$Bit$init$builtin_bit($tmp1234 == NULL);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block10; else goto block11;
block10:;
// line 492
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1237 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1238 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1239 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1240 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 494
panda$collections$Array* $tmp1241 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1242 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1243 = (panda$core$Int64) {31};
org$pandalanguage$pandac$Position $tmp1244 = *(&local2);
panda$core$String* $tmp1245 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1246 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1242, $tmp1243, $tmp1244, $tmp1245, $tmp1246);
panda$collections$Array$add$panda$collections$Array$T($tmp1241, ((panda$core$Object*) $tmp1242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode)
// line 495
goto block12;
block12:;
panda$core$Int64 $tmp1247 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1248 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1247);
org$pandalanguage$pandac$parser$Token$nullable $tmp1249 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1248);
panda$core$Bit $tmp1250 = panda$core$Bit$init$builtin_bit($tmp1249.nonnull);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block13; else goto block14;
block13:;
// line 496
panda$core$Int64 $tmp1252 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1252);
org$pandalanguage$pandac$parser$Token$nullable $tmp1254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1253, &$s1255);
*(&local6) = $tmp1254;
// line 497
panda$core$Int64 $tmp1256 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1257 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1256);
org$pandalanguage$pandac$parser$Token$nullable $tmp1258 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1257, &$s1259);
panda$core$Bit $tmp1260 = panda$core$Bit$init$builtin_bit(!$tmp1258.nonnull);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block15; else goto block16;
block15:;
// line 498
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1262 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1263 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1264 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1265 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 500
org$pandalanguage$pandac$ASTNode* $tmp1266 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1267 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
*(&local7) = $tmp1266;
// line 501
org$pandalanguage$pandac$ASTNode* $tmp1268 = *(&local7);
panda$core$Bit $tmp1269 = panda$core$Bit$init$builtin_bit($tmp1268 == NULL);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block17; else goto block18;
block17:;
// line 502
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1271 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp1272 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1273 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1274 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1275 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 504
panda$collections$Array* $tmp1276 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1277 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1278 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1279 = *(&local6);
org$pandalanguage$pandac$Position $tmp1280 = ((org$pandalanguage$pandac$parser$Token) $tmp1279.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1281 = *(&local6);
panda$core$String* $tmp1282 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1281.value));
org$pandalanguage$pandac$ASTNode* $tmp1283 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1277, $tmp1278, $tmp1280, $tmp1282, $tmp1283);
panda$collections$Array$add$panda$collections$Array$T($tmp1276, ((panda$core$Object*) $tmp1277));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
// unreffing REF($259:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1284 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
goto block12;
block14:;
// line 507
panda$core$Int64 $tmp1285 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1286 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1285);
org$pandalanguage$pandac$parser$Token$nullable $tmp1287 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1286, &$s1288);
panda$core$Bit $tmp1289 = panda$core$Bit$init$builtin_bit(!$tmp1287.nonnull);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block19; else goto block20;
block19:;
// line 508
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1291 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1291));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1292 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1293 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1293));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1294 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1294));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 510
panda$core$Int64 $tmp1295 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1296 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1295);
org$pandalanguage$pandac$parser$Token$nullable $tmp1297 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1296, &$s1298);
panda$core$Bit $tmp1299 = panda$core$Bit$init$builtin_bit(!$tmp1297.nonnull);
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block21; else goto block22;
block21:;
// line 511
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1301 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1302 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1303 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1304));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 513
org$pandalanguage$pandac$ASTNode* $tmp1305 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1306 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
*(&local8) = $tmp1305;
// line 514
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local8);
panda$core$Bit $tmp1308 = panda$core$Bit$init$builtin_bit($tmp1307 == NULL);
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block23; else goto block24;
block23:;
// line 515
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1310 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// unreffing REF($370:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp1311 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1312 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1313 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 517
org$pandalanguage$pandac$ASTNode* $tmp1315 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1316 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1317 = *(&local0);
org$pandalanguage$pandac$Position $tmp1318 = ((org$pandalanguage$pandac$parser$Token) $tmp1317.value).position;
panda$collections$Array* $tmp1319 = *(&local4);
panda$collections$ImmutableArray* $tmp1320 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1319);
org$pandalanguage$pandac$ASTNode* $tmp1321 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1315, $tmp1316, $tmp1318, $tmp1320, $tmp1321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
// unreffing REF($433:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
// unreffing REF($426:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1322 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// unreffing REF($370:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp1323 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1324 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1325 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1326 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp1315;
block9:;
// line 519
panda$core$Int64 $tmp1327 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1328 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1327);
org$pandalanguage$pandac$parser$Token$nullable $tmp1329 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1328);
panda$core$Bit $tmp1330 = panda$core$Bit$init$builtin_bit($tmp1329.nonnull);
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block25; else goto block26;
block25:;
// line 521
panda$collections$Array* $tmp1332 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1332);
*(&local9) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1333 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
*(&local9) = $tmp1332;
// line 522
panda$collections$Array* $tmp1334 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1334, ((panda$core$Object*) $tmp1335));
// line 523
panda$core$Bit $tmp1336 = panda$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1336;
// line 524
goto block27;
block27:;
// line 525
org$pandalanguage$pandac$ASTNode* $tmp1337 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
*(&local11) = $tmp1337;
// line 526
org$pandalanguage$pandac$ASTNode* $tmp1339 = *(&local11);
panda$core$Bit $tmp1340 = panda$core$Bit$init$builtin_bit($tmp1339 == NULL);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block30; else goto block31;
block30:;
// line 527
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1342 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing REF($517:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1343 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($494:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1344 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1345 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
// line 529
org$pandalanguage$pandac$ASTNode* $tmp1346 = *(&local11);
panda$core$Int64* $tmp1347 = &$tmp1346->$rawValue;
panda$core$Int64 $tmp1348 = *$tmp1347;
panda$core$Int64 $tmp1349 = (panda$core$Int64) {20};
panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1348, $tmp1349);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block33; else goto block34;
block33:;
goto block32;
block34:;
// line 534
panda$core$Bit $tmp1352 = panda$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1352;
goto block32;
block32:;
// line 537
panda$collections$Array* $tmp1353 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1354 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1353, ((panda$core$Object*) $tmp1354));
org$pandalanguage$pandac$ASTNode* $tmp1355 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing REF($517:org.pandalanguage.pandac.ASTNode?)
goto block28;
block28:;
panda$core$Int64 $tmp1356 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1357 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1356);
org$pandalanguage$pandac$parser$Token$nullable $tmp1358 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1357);
panda$core$Bit $tmp1359 = panda$core$Bit$init$builtin_bit($tmp1358.nonnull);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block27; else goto block29;
block29:;
// line 539
panda$core$Int64 $tmp1361 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1362 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1361);
org$pandalanguage$pandac$parser$Token$nullable $tmp1363 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1362, &$s1364);
panda$core$Bit $tmp1365 = panda$core$Bit$init$builtin_bit(!$tmp1363.nonnull);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block35; else goto block36;
block35:;
// line 540
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1367 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($494:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1368 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1369 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
// line 542
panda$core$Bit $tmp1370 = *(&local10);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block39; else goto block40;
block39:;
panda$core$Int64 $tmp1372 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1373 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1372);
org$pandalanguage$pandac$parser$Token$nullable $tmp1374 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1373);
panda$core$Bit $tmp1375 = panda$core$Bit$init$builtin_bit($tmp1374.nonnull);
*(&local12) = $tmp1375;
goto block41;
block40:;
*(&local12) = $tmp1370;
goto block41;
block41:;
panda$core$Bit $tmp1376 = *(&local12);
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block37; else goto block38;
block37:;
// line 543
org$pandalanguage$pandac$ASTNode* $tmp1378 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
*(&local13) = $tmp1378;
// line 544
org$pandalanguage$pandac$ASTNode* $tmp1380 = *(&local13);
panda$core$Bit $tmp1381 = panda$core$Bit$init$builtin_bit($tmp1380 == NULL);
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block42; else goto block43;
block42:;
// line 545
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1383 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing REF($651:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1384 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($494:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1385 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1386 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 547
org$pandalanguage$pandac$ASTNode* $tmp1387 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1388 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1389 = *(&local0);
org$pandalanguage$pandac$Position $tmp1390 = ((org$pandalanguage$pandac$parser$Token) $tmp1389.value).position;
panda$collections$Array* $tmp1391 = *(&local9);
panda$collections$ImmutableArray* $tmp1392 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1391);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1387, $tmp1388, $tmp1390, $tmp1392, $tmp1393);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// unreffing REF($706:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
// unreffing REF($699:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1394 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing REF($651:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1395 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($494:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1396 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1397 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp1387;
block38:;
// line 550
org$pandalanguage$pandac$parser$Token$nullable $tmp1398 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1398.value), &$s1399);
// line 551
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1400 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($494:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1401 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1402 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 554
panda$core$Int64 $tmp1403 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1404 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1403);
org$pandalanguage$pandac$parser$Token$nullable $tmp1405 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1404, &$s1406);
panda$core$Bit $tmp1407 = panda$core$Bit$init$builtin_bit(!$tmp1405.nonnull);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block44; else goto block45;
block44:;
// line 555
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1409 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 557
panda$core$Int64 $tmp1411 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1412 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1411);
org$pandalanguage$pandac$parser$Token$nullable $tmp1413 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1412);
panda$core$Bit $tmp1414 = panda$core$Bit$init$builtin_bit($tmp1413.nonnull);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block46; else goto block47;
block46:;
// line 558
panda$collections$Array* $tmp1416 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1416);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1417 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
*(&local14) = $tmp1416;
// line 559
panda$collections$Array* $tmp1418 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1419 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1418, ((panda$core$Object*) $tmp1419));
// line 560
org$pandalanguage$pandac$ASTNode* $tmp1420 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1421 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
*(&local15) = $tmp1420;
// line 561
org$pandalanguage$pandac$ASTNode* $tmp1422 = *(&local15);
panda$core$Bit $tmp1423 = panda$core$Bit$init$builtin_bit($tmp1422 == NULL);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block48; else goto block49;
block48:;
// line 562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1425 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($831:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1426 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($813:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1427 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1428 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block49:;
// line 564
org$pandalanguage$pandac$ASTNode* $tmp1429 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1430 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1431 = *(&local0);
org$pandalanguage$pandac$Position $tmp1432 = ((org$pandalanguage$pandac$parser$Token) $tmp1431.value).position;
panda$collections$Array* $tmp1433 = *(&local14);
panda$collections$ImmutableArray* $tmp1434 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1433);
org$pandalanguage$pandac$ASTNode* $tmp1435 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1429, $tmp1430, $tmp1432, $tmp1434, $tmp1435);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing REF($886:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing REF($879:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($831:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1437 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($813:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp1438 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp1429;
block47:;
// line 566
org$pandalanguage$pandac$ASTNode* $tmp1440 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
panda$core$String* $tmp1441 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1442 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp1440;
block7:;
// line 570
panda$core$Int64 $tmp1443 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1444 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1443);
org$pandalanguage$pandac$parser$Token$nullable $tmp1445 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1444);
panda$core$Bit $tmp1446 = panda$core$Bit$init$builtin_bit(!$tmp1445.nonnull);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block50; else goto block51;
block50:;
// line 571
panda$core$Int64 $tmp1448 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1449 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1448);
org$pandalanguage$pandac$parser$Token$nullable $tmp1450 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1449, &$s1451);
// line 572
org$pandalanguage$pandac$ASTNode* $tmp1452 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp1452;
block51:;
// line 574
panda$collections$Array* $tmp1454 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1454);
*(&local16) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1455 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
*(&local16) = $tmp1454;
// line 575
panda$collections$Array* $tmp1456 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1457 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1456, ((panda$core$Object*) $tmp1457));
// line 576
goto block52;
block52:;
// line 577
org$pandalanguage$pandac$ASTNode* $tmp1458 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1459 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
*(&local17) = $tmp1458;
// line 578
org$pandalanguage$pandac$ASTNode* $tmp1460 = *(&local17);
panda$core$Bit $tmp1461 = panda$core$Bit$init$builtin_bit($tmp1460 == NULL);
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block55; else goto block56;
block55:;
// line 579
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1463 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing REF($994:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1464 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($974:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1465 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block56:;
// line 581
panda$collections$Array* $tmp1466 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1467 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp1466, ((panda$core$Object*) $tmp1467));
org$pandalanguage$pandac$ASTNode* $tmp1468 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing REF($994:org.pandalanguage.pandac.ASTNode?)
goto block53;
block53:;
panda$core$Int64 $tmp1469 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1470 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1469);
org$pandalanguage$pandac$parser$Token$nullable $tmp1471 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1470);
panda$core$Bit $tmp1472 = panda$core$Bit$init$builtin_bit($tmp1471.nonnull);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block52; else goto block54;
block54:;
// line 584
panda$core$Int64 $tmp1474 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1475 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1474);
org$pandalanguage$pandac$parser$Token$nullable $tmp1476 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1475, &$s1477);
// line 586
org$pandalanguage$pandac$parser$Token$nullable $tmp1478 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1478.value), &$s1479);
// line 587
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1480 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($974:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1481 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
panda$core$Bit $tmp1482 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1483 = $tmp1482.value;
if ($tmp1483) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp1484 = (panda$core$Int64) {475};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1485, $tmp1484, &$s1486);
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
// line 596
panda$core$Int64 $tmp1487 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1488 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1487);
org$pandalanguage$pandac$parser$Token$nullable $tmp1489 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1488, &$s1490);
*(&local0) = $tmp1489;
// line 597
panda$core$Int64 $tmp1491 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1492 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1491);
org$pandalanguage$pandac$parser$Token$nullable $tmp1493 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1492);
panda$core$Bit $tmp1494 = panda$core$Bit$init$builtin_bit($tmp1493.nonnull);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block1; else goto block2;
block1:;
// line 598
org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
*(&local1) = $tmp1496;
// line 599
org$pandalanguage$pandac$ASTNode* $tmp1498 = *(&local1);
panda$core$Bit $tmp1499 = panda$core$Bit$init$builtin_bit($tmp1498 == NULL);
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block3; else goto block4;
block3:;
// line 600
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1501 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 602
panda$collections$Array* $tmp1502 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1502);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1503 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
*(&local2) = $tmp1502;
// line 603
panda$collections$Array* $tmp1504 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1505 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1506 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1507 = *(&local0);
org$pandalanguage$pandac$Position $tmp1508 = ((org$pandalanguage$pandac$parser$Token) $tmp1507.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1509 = *(&local0);
panda$core$String* $tmp1510 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1509.value));
org$pandalanguage$pandac$ASTNode* $tmp1511 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1505, $tmp1506, $tmp1508, $tmp1510, $tmp1511);
panda$collections$Array$add$panda$collections$Array$T($tmp1504, ((panda$core$Object*) $tmp1505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
// unreffing REF($54:org.pandalanguage.pandac.ASTNode)
// line 604
panda$core$Int64 $tmp1512 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1513 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1512);
org$pandalanguage$pandac$parser$Token$nullable $tmp1514 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1513, &$s1515);
panda$core$Bit $tmp1516 = panda$core$Bit$init$builtin_bit(!$tmp1514.nonnull);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block5; else goto block6;
block5:;
// line 605
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($41:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1519 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 607
org$pandalanguage$pandac$ASTNode* $tmp1520 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1521 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
*(&local3) = $tmp1520;
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1522 = *(&local3);
panda$core$Bit $tmp1523 = panda$core$Bit$init$builtin_bit($tmp1522 == NULL);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block7; else goto block8;
block7:;
// line 609
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1525 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($102:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1526 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($41:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1527 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 611
org$pandalanguage$pandac$ASTNode* $tmp1528 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1529 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1530 = *(&local0);
org$pandalanguage$pandac$Position $tmp1531 = ((org$pandalanguage$pandac$parser$Token) $tmp1530.value).position;
panda$collections$Array* $tmp1532 = *(&local2);
panda$collections$ImmutableArray* $tmp1533 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1532);
org$pandalanguage$pandac$ASTNode* $tmp1534 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1528, $tmp1529, $tmp1531, $tmp1533, $tmp1534);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
// unreffing REF($152:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1535 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($102:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1536 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1536));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($41:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp1537 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return $tmp1528;
block2:;
// line 613
panda$collections$Array* $tmp1538 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1538);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1539 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
*(&local4) = $tmp1538;
// line 614
panda$collections$Array* $tmp1540 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1541 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1542 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp1543 = *(&local0);
org$pandalanguage$pandac$Position $tmp1544 = ((org$pandalanguage$pandac$parser$Token) $tmp1543.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1545 = *(&local0);
panda$core$String* $tmp1546 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1545.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1541, $tmp1542, $tmp1544, $tmp1546);
panda$collections$Array$add$panda$collections$Array$T($tmp1540, ((panda$core$Object*) $tmp1541));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
// unreffing REF($212:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
// unreffing REF($205:org.pandalanguage.pandac.ASTNode)
// line 615
panda$core$Int64 $tmp1547 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1548 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1547);
org$pandalanguage$pandac$parser$Token$nullable $tmp1549 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1548, &$s1550);
panda$core$Bit $tmp1551 = panda$core$Bit$init$builtin_bit(!$tmp1549.nonnull);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block9; else goto block10;
block9:;
// line 616
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1553 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($192:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 618
org$pandalanguage$pandac$ASTNode* $tmp1554 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1555 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
*(&local5) = $tmp1554;
// line 619
org$pandalanguage$pandac$ASTNode* $tmp1556 = *(&local5);
panda$core$Bit $tmp1557 = panda$core$Bit$init$builtin_bit($tmp1556 == NULL);
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block11; else goto block12;
block11:;
// line 620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1559 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing REF($243:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1560 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($192:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 622
org$pandalanguage$pandac$ASTNode* $tmp1561 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1562 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1563 = *(&local0);
org$pandalanguage$pandac$Position $tmp1564 = ((org$pandalanguage$pandac$parser$Token) $tmp1563.value).position;
panda$collections$Array* $tmp1565 = *(&local4);
panda$collections$ImmutableArray* $tmp1566 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1565);
org$pandalanguage$pandac$ASTNode* $tmp1567 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1561, $tmp1562, $tmp1564, $tmp1566, $tmp1567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
// unreffing REF($285:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing REF($278:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1568 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing REF($243:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp1569 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($192:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp1561;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 629
panda$core$Int64 $tmp1570 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1571 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1570);
org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1571, &$s1573);
panda$core$Bit $tmp1574 = panda$core$Bit$init$builtin_bit(!$tmp1572.nonnull);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block1; else goto block2;
block1:;
// line 630
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 633
org$pandalanguage$pandac$parser$Lexer** $tmp1576 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1577 = *$tmp1576;
org$pandalanguage$plex$runtime$DFA** $tmp1578 = &$tmp1577->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1579 = *$tmp1578;
panda$core$Int64* $tmp1580 = &$tmp1579->offset;
panda$core$Int64 $tmp1581 = *$tmp1580;
panda$core$Int64 $tmp1582 = (panda$core$Int64) {1};
int64_t $tmp1583 = $tmp1581.value;
int64_t $tmp1584 = $tmp1582.value;
int64_t $tmp1585 = $tmp1583 - $tmp1584;
panda$core$Int64 $tmp1586 = (panda$core$Int64) {$tmp1585};
*(&local0) = $tmp1586;
// line 634
org$pandalanguage$regex$RegexParser** $tmp1587 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1588 = *$tmp1587;
org$pandalanguage$regex$RegexLexer** $tmp1589 = &$tmp1588->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1590 = *$tmp1589;
org$pandalanguage$plex$runtime$DFA** $tmp1591 = &$tmp1590->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1592 = *$tmp1591;
org$pandalanguage$pandac$parser$Lexer** $tmp1593 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1594 = *$tmp1593;
org$pandalanguage$plex$runtime$DFA** $tmp1595 = &$tmp1594->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1596 = *$tmp1595;
panda$core$Int64* $tmp1597 = &$tmp1596->offset;
panda$core$Int64 $tmp1598 = *$tmp1597;
panda$core$Int64* $tmp1599 = &$tmp1592->offset;
*$tmp1599 = $tmp1598;
// line 635
org$pandalanguage$regex$RegexParser** $tmp1600 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1601 = *$tmp1600;
org$pandalanguage$regex$RegexLexer** $tmp1602 = &$tmp1601->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1603 = *$tmp1602;
org$pandalanguage$plex$runtime$DFA** $tmp1604 = &$tmp1603->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1605 = *$tmp1604;
org$pandalanguage$pandac$parser$Lexer** $tmp1606 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1607 = *$tmp1606;
org$pandalanguage$plex$runtime$DFA** $tmp1608 = &$tmp1607->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1609 = *$tmp1608;
panda$core$Int64* $tmp1610 = &$tmp1609->line;
panda$core$Int64 $tmp1611 = *$tmp1610;
panda$core$Int64* $tmp1612 = &$tmp1605->line;
*$tmp1612 = $tmp1611;
// line 636
org$pandalanguage$regex$RegexParser** $tmp1613 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1614 = *$tmp1613;
org$pandalanguage$regex$RegexLexer** $tmp1615 = &$tmp1614->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1616 = *$tmp1615;
org$pandalanguage$plex$runtime$DFA** $tmp1617 = &$tmp1616->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1618 = *$tmp1617;
org$pandalanguage$pandac$parser$Lexer** $tmp1619 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1620 = *$tmp1619;
org$pandalanguage$plex$runtime$DFA** $tmp1621 = &$tmp1620->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1622 = *$tmp1621;
panda$core$Int64* $tmp1623 = &$tmp1622->column;
panda$core$Int64 $tmp1624 = *$tmp1623;
panda$core$Int64* $tmp1625 = &$tmp1618->column;
*$tmp1625 = $tmp1624;
// line 637
org$pandalanguage$regex$RegexParser** $tmp1626 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1627 = *$tmp1626;
org$pandalanguage$pandac$ASTNode* $tmp1628 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q($tmp1627);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1629 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
*(&local1) = $tmp1628;
// line 638
org$pandalanguage$pandac$parser$Lexer** $tmp1630 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1631 = *$tmp1630;
org$pandalanguage$plex$runtime$DFA** $tmp1632 = &$tmp1631->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1633 = *$tmp1632;
org$pandalanguage$regex$RegexParser** $tmp1634 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1635 = *$tmp1634;
org$pandalanguage$regex$RegexLexer** $tmp1636 = &$tmp1635->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1637 = *$tmp1636;
org$pandalanguage$plex$runtime$DFA** $tmp1638 = &$tmp1637->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1639 = *$tmp1638;
panda$core$Int64* $tmp1640 = &$tmp1639->offset;
panda$core$Int64 $tmp1641 = *$tmp1640;
panda$core$Int64* $tmp1642 = &$tmp1633->offset;
*$tmp1642 = $tmp1641;
// line 639
org$pandalanguage$pandac$parser$Lexer** $tmp1643 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1644 = *$tmp1643;
org$pandalanguage$plex$runtime$DFA** $tmp1645 = &$tmp1644->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1646 = *$tmp1645;
org$pandalanguage$regex$RegexParser** $tmp1647 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1648 = *$tmp1647;
org$pandalanguage$regex$RegexLexer** $tmp1649 = &$tmp1648->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1650 = *$tmp1649;
org$pandalanguage$plex$runtime$DFA** $tmp1651 = &$tmp1650->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1652 = *$tmp1651;
panda$core$Int64* $tmp1653 = &$tmp1652->line;
panda$core$Int64 $tmp1654 = *$tmp1653;
panda$core$Int64* $tmp1655 = &$tmp1646->line;
*$tmp1655 = $tmp1654;
// line 640
org$pandalanguage$pandac$parser$Lexer** $tmp1656 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1657 = *$tmp1656;
org$pandalanguage$plex$runtime$DFA** $tmp1658 = &$tmp1657->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1659 = *$tmp1658;
org$pandalanguage$regex$RegexParser** $tmp1660 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1661 = *$tmp1660;
org$pandalanguage$regex$RegexLexer** $tmp1662 = &$tmp1661->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1663 = *$tmp1662;
org$pandalanguage$plex$runtime$DFA** $tmp1664 = &$tmp1663->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1665 = *$tmp1664;
panda$core$Int64* $tmp1666 = &$tmp1665->column;
panda$core$Int64 $tmp1667 = *$tmp1666;
panda$core$Int64* $tmp1668 = &$tmp1659->column;
*$tmp1668 = $tmp1667;
// line 641
org$pandalanguage$pandac$ASTNode* $tmp1669 = *(&local1);
panda$core$Bit $tmp1670 = panda$core$Bit$init$builtin_bit($tmp1669 == NULL);
bool $tmp1671 = $tmp1670.value;
if ($tmp1671) goto block3; else goto block4;
block3:;
// line 642
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1672 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 644
panda$core$Int64 $tmp1673 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1674 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1673);
org$pandalanguage$pandac$parser$Token$nullable $tmp1675 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1674, &$s1676);
panda$core$Bit $tmp1677 = panda$core$Bit$init$builtin_bit(!$tmp1675.nonnull);
bool $tmp1678 = $tmp1677.value;
if ($tmp1678) goto block5; else goto block6;
block5:;
// line 645
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1679 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 647
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1680 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1681 = *$tmp1680;
panda$core$Bit $tmp1682 = panda$core$Bit$init$builtin_bit($tmp1681 != NULL);
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block7; else goto block8;
block7:;
// line 649
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1684 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1685 = *$tmp1684;
$fn1687 $tmp1686 = ($fn1687) $tmp1685->$class->vtable[7];
$tmp1686($tmp1685);
// line 650
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1688 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1689 = *$tmp1688;
$fn1691 $tmp1690 = ($fn1691) $tmp1689->$class->vtable[7];
$tmp1690($tmp1689);
// line 652
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1692 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1693 = *$tmp1692;
panda$core$Int64 $tmp1694 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$Kind $tmp1695 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1694);
panda$core$Int64 $tmp1696 = *(&local0);
panda$core$String$Index $tmp1697 = panda$core$String$Index$init$panda$core$Int64($tmp1696);
org$pandalanguage$pandac$parser$Lexer** $tmp1698 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1699 = *$tmp1698;
org$pandalanguage$plex$runtime$DFA** $tmp1700 = &$tmp1699->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1701 = *$tmp1700;
panda$core$Int64* $tmp1702 = &$tmp1701->offset;
panda$core$Int64 $tmp1703 = *$tmp1702;
panda$core$String$Index $tmp1704 = panda$core$String$Index$init$panda$core$Int64($tmp1703);
org$pandalanguage$pandac$ASTNode* $tmp1705 = *(&local1);
$fn1707 $tmp1706 = ($fn1707) $tmp1705->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1708 = $tmp1706($tmp1705);
org$pandalanguage$pandac$parser$Token $tmp1709 = org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position($tmp1695, $tmp1697, $tmp1704, $tmp1708);
$fn1711 $tmp1710 = ($fn1711) $tmp1693->$class->vtable[6];
$tmp1710($tmp1693, $tmp1709);
goto block8;
block8:;
// line 655
org$pandalanguage$pandac$ASTNode* $tmp1712 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
org$pandalanguage$pandac$ASTNode* $tmp1713 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
return $tmp1712;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$Kind local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$String* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 664
org$pandalanguage$pandac$parser$Token $tmp1714 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1714;
// line 665
org$pandalanguage$pandac$parser$Token $tmp1715 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1716 = $tmp1715.kind;
panda$core$Int64 $tmp1717 = $tmp1716.$rawValue;
panda$core$Int64 $tmp1718 = (panda$core$Int64) {49};
panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1718);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block2; else goto block3;
block2:;
// line 667
org$pandalanguage$pandac$parser$Token $tmp1721 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1722 = $tmp1721.kind;
*(&local1) = $tmp1722;
// line 668
panda$core$Bit* $tmp1723 = &param0->allowLambdas;
panda$core$Bit $tmp1724 = *$tmp1723;
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1726 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1727;
$tmp1727 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1727->value = $tmp1726;
panda$core$Int64 $tmp1728 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1729 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1728);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1730;
$tmp1730 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1730->value = $tmp1729;
ITable* $tmp1731 = ((panda$core$Equatable*) $tmp1727)->$class->itable;
while ($tmp1731->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1731 = $tmp1731->next;
}
$fn1733 $tmp1732 = $tmp1731->methods[0];
panda$core$Bit $tmp1734 = $tmp1732(((panda$core$Equatable*) $tmp1727), ((panda$core$Equatable*) $tmp1730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1730)));
// unreffing REF($25:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1727)));
// unreffing REF($21:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local3) = $tmp1734;
goto block8;
block7:;
*(&local3) = $tmp1724;
goto block8;
block8:;
panda$core$Bit $tmp1735 = *(&local3);
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block9; else goto block10;
block9:;
*(&local2) = $tmp1735;
goto block11;
block10:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1737 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1738;
$tmp1738 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1738->value = $tmp1737;
panda$core$Int64 $tmp1739 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1740 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1739);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1741;
$tmp1741 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1741->value = $tmp1740;
ITable* $tmp1742 = ((panda$core$Equatable*) $tmp1738)->$class->itable;
while ($tmp1742->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1742 = $tmp1742->next;
}
$fn1744 $tmp1743 = $tmp1742->methods[0];
panda$core$Bit $tmp1745 = $tmp1743(((panda$core$Equatable*) $tmp1738), ((panda$core$Equatable*) $tmp1741));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1741)));
// unreffing REF($48:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1738)));
// unreffing REF($44:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local2) = $tmp1745;
goto block11;
block11:;
panda$core$Bit $tmp1746 = *(&local2);
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block4; else goto block5;
block4:;
// line 669
org$pandalanguage$pandac$parser$Token $tmp1748 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1748);
// line 670
org$pandalanguage$pandac$ASTNode* $tmp1749 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
// unreffing REF($66:org.pandalanguage.pandac.ASTNode?)
return $tmp1749;
block5:;
// line 672
org$pandalanguage$pandac$ASTNode* $tmp1750 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1751 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token $tmp1752 = *(&local0);
org$pandalanguage$pandac$Position $tmp1753 = $tmp1752.position;
org$pandalanguage$pandac$parser$Token $tmp1754 = *(&local0);
panda$core$String* $tmp1755 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1754);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1750, $tmp1751, $tmp1753, $tmp1755);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode)
return $tmp1750;
block3:;
panda$core$Int64 $tmp1756 = (panda$core$Int64) {3};
panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1756);
bool $tmp1758 = $tmp1757.value;
if ($tmp1758) goto block12; else goto block13;
block12:;
// line 675
org$pandalanguage$pandac$ASTNode* $tmp1759 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1760 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1761 = *(&local0);
org$pandalanguage$pandac$Position $tmp1762 = $tmp1761.position;
org$pandalanguage$pandac$parser$Token $tmp1763 = *(&local0);
panda$core$String* $tmp1764 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1763);
panda$core$UInt64$nullable $tmp1765 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1764);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1759, $tmp1760, $tmp1762, ((panda$core$UInt64) $tmp1765.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
// unreffing REF($96:org.pandalanguage.pandac.ASTNode)
return $tmp1759;
block13:;
panda$core$Int64 $tmp1766 = (panda$core$Int64) {4};
panda$core$Bit $tmp1767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1766);
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block14; else goto block15;
block14:;
// line 678
org$pandalanguage$pandac$ASTNode* $tmp1769 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1770 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1771 = *(&local0);
org$pandalanguage$pandac$Position $tmp1772 = $tmp1771.position;
org$pandalanguage$pandac$parser$Token $tmp1773 = *(&local0);
panda$core$String* $tmp1774 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1773);
panda$core$Int64 $tmp1775 = (panda$core$Int64) {2};
panda$core$Bit $tmp1776 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1777 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1775, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1776);
panda$core$String* $tmp1778 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1774, $tmp1777);
panda$core$Int64 $tmp1779 = (panda$core$Int64) {2};
panda$core$UInt64$nullable $tmp1780 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1778, $tmp1779);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1769, $tmp1770, $tmp1772, ((panda$core$UInt64) $tmp1780.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing REF($120:org.pandalanguage.pandac.ASTNode)
return $tmp1769;
block15:;
panda$core$Int64 $tmp1781 = (panda$core$Int64) {5};
panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1781);
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block16; else goto block17;
block16:;
// line 681
org$pandalanguage$pandac$ASTNode* $tmp1784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1785 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1786 = *(&local0);
org$pandalanguage$pandac$Position $tmp1787 = $tmp1786.position;
org$pandalanguage$pandac$parser$Token $tmp1788 = *(&local0);
panda$core$String* $tmp1789 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1788);
panda$core$Int64 $tmp1790 = (panda$core$Int64) {2};
panda$core$Bit $tmp1791 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1792 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1790, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1791);
panda$core$String* $tmp1793 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1789, $tmp1792);
panda$core$Int64 $tmp1794 = (panda$core$Int64) {16};
panda$core$UInt64$nullable $tmp1795 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1793, $tmp1794);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1784, $tmp1785, $tmp1787, ((panda$core$UInt64) $tmp1795.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
// unreffing REF($163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
// unreffing REF($153:org.pandalanguage.pandac.ASTNode)
return $tmp1784;
block17:;
panda$core$Int64 $tmp1796 = (panda$core$Int64) {6};
panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1796);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block18; else goto block19;
block18:;
// line 684
org$pandalanguage$pandac$ASTNode* $tmp1799 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1800 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token $tmp1801 = *(&local0);
org$pandalanguage$pandac$Position $tmp1802 = $tmp1801.position;
org$pandalanguage$pandac$parser$Token $tmp1803 = *(&local0);
panda$core$String* $tmp1804 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1803);
panda$core$Real64$nullable $tmp1805 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1804);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1799, $tmp1800, $tmp1802, ((panda$core$Real64) $tmp1805.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
// unreffing REF($186:org.pandalanguage.pandac.ASTNode)
return $tmp1799;
block19:;
panda$core$Int64 $tmp1806 = (panda$core$Int64) {47};
panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block20; else goto block21;
block20:;
// line 687
org$pandalanguage$pandac$ASTNode* $tmp1809 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1810 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token $tmp1811 = *(&local0);
org$pandalanguage$pandac$Position $tmp1812 = $tmp1811.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1809, $tmp1810, $tmp1812);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing REF($210:org.pandalanguage.pandac.ASTNode)
return $tmp1809;
block21:;
panda$core$Int64 $tmp1813 = (panda$core$Int64) {48};
panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1813);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block22; else goto block23;
block22:;
// line 690
org$pandalanguage$pandac$ASTNode* $tmp1816 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1817 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token $tmp1818 = *(&local0);
org$pandalanguage$pandac$Position $tmp1819 = $tmp1818.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1816, $tmp1817, $tmp1819);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing REF($227:org.pandalanguage.pandac.ASTNode)
return $tmp1816;
block23:;
panda$core$Int64 $tmp1820 = (panda$core$Int64) {44};
panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1820);
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block24; else goto block25;
block24:;
// line 693
org$pandalanguage$pandac$ASTNode* $tmp1823 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1824 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token $tmp1825 = *(&local0);
org$pandalanguage$pandac$Position $tmp1826 = $tmp1825.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1823, $tmp1824, $tmp1826);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
// unreffing REF($244:org.pandalanguage.pandac.ASTNode)
return $tmp1823;
block25:;
panda$core$Int64 $tmp1827 = (panda$core$Int64) {42};
panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1827);
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block26; else goto block27;
block26:;
// line 696
org$pandalanguage$pandac$ASTNode* $tmp1830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1831 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1832 = *(&local0);
org$pandalanguage$pandac$Position $tmp1833 = $tmp1832.position;
panda$core$Bit $tmp1834 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1830, $tmp1831, $tmp1833, $tmp1834);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
// unreffing REF($261:org.pandalanguage.pandac.ASTNode)
return $tmp1830;
block27:;
panda$core$Int64 $tmp1835 = (panda$core$Int64) {43};
panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1835);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block28; else goto block29;
block28:;
// line 699
org$pandalanguage$pandac$ASTNode* $tmp1838 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1839 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1840 = *(&local0);
org$pandalanguage$pandac$Position $tmp1841 = $tmp1840.position;
panda$core$Bit $tmp1842 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1838, $tmp1839, $tmp1841, $tmp1842);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
// unreffing REF($279:org.pandalanguage.pandac.ASTNode)
return $tmp1838;
block29:;
panda$core$Int64 $tmp1843 = (panda$core$Int64) {8};
panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1843);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {7};
panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1846);
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block30; else goto block32;
block30:;
// line 702
org$pandalanguage$pandac$parser$Token $tmp1849 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1849);
// line 703
org$pandalanguage$pandac$ASTNode* $tmp1850 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
// unreffing REF($304:org.pandalanguage.pandac.ASTNode?)
return $tmp1850;
block32:;
panda$core$Int64 $tmp1851 = (panda$core$Int64) {104};
panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1851);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block33; else goto block34;
block33:;
// line 706
org$pandalanguage$pandac$parser$Token $tmp1854 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1854);
// line 707
org$pandalanguage$pandac$ASTNode* $tmp1855 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
// unreffing REF($319:org.pandalanguage.pandac.ASTNode?)
return $tmp1855;
block34:;
panda$core$Int64 $tmp1856 = (panda$core$Int64) {14};
panda$core$Bit $tmp1857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1856);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block35; else goto block36;
block35:;
// line 710
org$pandalanguage$pandac$parser$Token $tmp1859 = *(&local0);
panda$core$String* $tmp1860 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1859);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1861 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
*(&local4) = $tmp1860;
// line 711
panda$core$String* $tmp1862 = *(&local4);
panda$core$Bit $tmp1863 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1862, &$s1864);
bool $tmp1865 = $tmp1863.value;
if ($tmp1865) goto block37; else goto block39;
block37:;
// line 712
panda$core$Int64 $tmp1866 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1867 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1866);
org$pandalanguage$pandac$parser$Token$nullable $tmp1868 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1867, &$s1869);
// line 713
org$pandalanguage$pandac$ASTNode* $tmp1870 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1871 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
*(&local5) = $tmp1870;
// line 714
org$pandalanguage$pandac$ASTNode* $tmp1872 = *(&local5);
panda$core$Bit $tmp1873 = panda$core$Bit$init$builtin_bit($tmp1872 == NULL);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block40; else goto block41;
block40:;
// line 715
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1875 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($350:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1876 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($332:panda.core.String)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block41:;
// line 717
panda$core$Int64 $tmp1877 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1878 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1877);
org$pandalanguage$pandac$parser$Token$nullable $tmp1879 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1878, &$s1880);
// line 718
org$pandalanguage$pandac$ASTNode* $tmp1881 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1882 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token $tmp1883 = *(&local0);
org$pandalanguage$pandac$Position $tmp1884 = $tmp1883.position;
org$pandalanguage$pandac$ASTNode* $tmp1885 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1881, $tmp1882, $tmp1884, $tmp1885);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1881));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1881));
// unreffing REF($389:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1886 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($350:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1887 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($332:panda.core.String)
return $tmp1881;
block39:;
// line 720
panda$core$String* $tmp1888 = *(&local4);
panda$core$Bit $tmp1889 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1888, &$s1890);
bool $tmp1891 = $tmp1889.value;
if ($tmp1891) goto block42; else goto block43;
block42:;
// line 721
org$pandalanguage$pandac$ASTNode* $tmp1892 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1893 = (panda$core$Int64) {3};
org$pandalanguage$pandac$parser$Token $tmp1894 = *(&local0);
org$pandalanguage$pandac$Position $tmp1895 = $tmp1894.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1892, $tmp1893, $tmp1895);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing REF($425:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp1896 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($332:panda.core.String)
return $tmp1892;
block43:;
goto block38;
block38:;
// line 723
org$pandalanguage$pandac$parser$Token $tmp1897 = *(&local0);
panda$core$String* $tmp1898 = *(&local4);
panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1900, $tmp1898);
panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, &$s1902);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1897, $tmp1901);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
// unreffing REF($450:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
// unreffing REF($449:panda.core.String)
// line 724
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1903 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($332:panda.core.String)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
panda$core$Int64 $tmp1904 = (panda$core$Int64) {21};
panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1904);
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp1907 = (panda$core$Int64) {22};
panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1907);
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block44; else goto block46;
block44:;
// line 727
org$pandalanguage$pandac$parser$Token $tmp1910 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1910);
// line 728
org$pandalanguage$pandac$ASTNode* $tmp1911 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing REF($482:org.pandalanguage.pandac.ASTNode?)
return $tmp1911;
block46:;
panda$core$Int64 $tmp1912 = (panda$core$Int64) {55};
panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1912);
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block47; else goto block48;
block47:;
// line 731
org$pandalanguage$pandac$parser$Token $tmp1915 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1915);
// line 732
org$pandalanguage$pandac$ASTNode* $tmp1916 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
// unreffing REF($497:org.pandalanguage.pandac.ASTNode?)
return $tmp1916;
block48:;
// line 735
org$pandalanguage$pandac$parser$Token $tmp1917 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp1918 = *(&local0);
panda$core$String* $tmp1919 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1918);
panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1921, $tmp1919);
panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1923);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1917, $tmp1922);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
// unreffing REF($509:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
// unreffing REF($508:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
// unreffing REF($507:panda.core.String)
// line 736
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp1924 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1926 = (panda$core$Int64) {663};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1927, $tmp1926, &$s1928);
abort(); // unreachable
block49:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 743
panda$core$Int64* $tmp1929 = &param0->$rawValue;
panda$core$Int64 $tmp1930 = *$tmp1929;
panda$core$Int64 $tmp1931 = (panda$core$Int64) {20};
panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1930, $tmp1931);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1934 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1935 = *$tmp1934;
panda$core$String** $tmp1936 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1937 = *$tmp1936;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1938 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
*(&local0) = $tmp1937;
// line 745
panda$core$String* $tmp1939 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
panda$core$String* $tmp1940 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp1939;
block3:;
panda$core$Int64 $tmp1941 = (panda$core$Int64) {15};
panda$core$Bit $tmp1942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1930, $tmp1941);
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1944 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1945 = *$tmp1944;
org$pandalanguage$pandac$ASTNode** $tmp1946 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1947 = *$tmp1946;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
*(&local1) = $tmp1947;
panda$core$String** $tmp1949 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1950 = *$tmp1949;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1951 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
*(&local2) = $tmp1950;
// line 748
org$pandalanguage$pandac$ASTNode* $tmp1952 = *(&local1);
panda$core$String* $tmp1953 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp1952);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1954 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
*(&local3) = $tmp1953;
// line 749
panda$core$String* $tmp1955 = *(&local3);
panda$core$Bit $tmp1956 = panda$core$Bit$init$builtin_bit($tmp1955 != NULL);
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block6; else goto block7;
block6:;
// line 750
panda$core$String* $tmp1958 = *(&local3);
panda$core$String* $tmp1959 = *(&local2);
panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1961, $tmp1959);
panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, $tmp1960);
panda$core$String* $tmp1963 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
*(&local3) = $tmp1962;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
// unreffing REF($74:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing REF($73:panda.core.String)
goto block7;
block7:;
// line 752
panda$core$String* $tmp1964 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
panda$core$String* $tmp1965 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing REF($55:panda.core.String?)
panda$core$String* $tmp1966 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
// unreffing field
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1967 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1964;
block5:;
// line 755
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp1968 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1970 = (panda$core$Int64) {742};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1971, $tmp1970, &$s1972);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token local1;
// line 766
org$pandalanguage$pandac$parser$Token $tmp1973 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1973;
// line 767
org$pandalanguage$pandac$parser$Token $tmp1974 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1975 = $tmp1974.kind;
panda$core$Int64 $tmp1976 = $tmp1975.$rawValue;
panda$core$Int64 $tmp1977 = (panda$core$Int64) {49};
panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1977);
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1980 = (panda$core$Int64) {52};
panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1980);
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1983 = (panda$core$Int64) {53};
panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1983);
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1986 = (panda$core$Int64) {54};
panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1986);
bool $tmp1988 = $tmp1987.value;
if ($tmp1988) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1989 = (panda$core$Int64) {55};
panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1989);
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1992 = (panda$core$Int64) {56};
panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1992);
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1995 = (panda$core$Int64) {58};
panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1995);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1998 = (panda$core$Int64) {59};
panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp1998);
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp2001 = (panda$core$Int64) {60};
panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2001);
bool $tmp2003 = $tmp2002.value;
if ($tmp2003) goto block2; else goto block11;
block11:;
panda$core$Int64 $tmp2004 = (panda$core$Int64) {63};
panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2004);
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block2; else goto block12;
block12:;
panda$core$Int64 $tmp2007 = (panda$core$Int64) {66};
panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2007);
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block2; else goto block13;
block13:;
panda$core$Int64 $tmp2010 = (panda$core$Int64) {65};
panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2010);
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block2; else goto block14;
block14:;
panda$core$Int64 $tmp2013 = (panda$core$Int64) {57};
panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2013);
bool $tmp2015 = $tmp2014.value;
if ($tmp2015) goto block2; else goto block15;
block15:;
panda$core$Int64 $tmp2016 = (panda$core$Int64) {67};
panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2016);
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block2; else goto block16;
block16:;
panda$core$Int64 $tmp2019 = (panda$core$Int64) {68};
panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2019);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block2; else goto block17;
block17:;
panda$core$Int64 $tmp2022 = (panda$core$Int64) {69};
panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2022);
bool $tmp2024 = $tmp2023.value;
if ($tmp2024) goto block2; else goto block18;
block18:;
panda$core$Int64 $tmp2025 = (panda$core$Int64) {70};
panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2025);
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block2; else goto block19;
block19:;
panda$core$Int64 $tmp2028 = (panda$core$Int64) {71};
panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2028);
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block2; else goto block20;
block20:;
panda$core$Int64 $tmp2031 = (panda$core$Int64) {72};
panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2031);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block2; else goto block21;
block21:;
panda$core$Int64 $tmp2034 = (panda$core$Int64) {50};
panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2034);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block2; else goto block22;
block22:;
panda$core$Int64 $tmp2037 = (panda$core$Int64) {51};
panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2037);
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block2; else goto block23;
block23:;
panda$core$Int64 $tmp2040 = (panda$core$Int64) {73};
panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block2; else goto block24;
block2:;
// line 774
org$pandalanguage$pandac$parser$Token $tmp2043 = *(&local0);
panda$core$String* $tmp2044 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2043);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
// unreffing REF($97:panda.core.String)
return $tmp2044;
block24:;
panda$core$Int64 $tmp2045 = (panda$core$Int64) {64};
panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block25; else goto block26;
block25:;
// line 777
org$pandalanguage$pandac$parser$Token $tmp2048 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2048;
// line 778
org$pandalanguage$pandac$parser$Token $tmp2049 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2050 = $tmp2049.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2051;
$tmp2051 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2051->value = $tmp2050;
panda$core$Int64 $tmp2052 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2053 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2052);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2054;
$tmp2054 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2054->value = $tmp2053;
ITable* $tmp2055 = ((panda$core$Equatable*) $tmp2051)->$class->itable;
while ($tmp2055->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2055 = $tmp2055->next;
}
$fn2057 $tmp2056 = $tmp2055->methods[0];
panda$core$Bit $tmp2058 = $tmp2056(((panda$core$Equatable*) $tmp2051), ((panda$core$Equatable*) $tmp2054));
bool $tmp2059 = $tmp2058.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2054)));
// unreffing REF($119:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2051)));
// unreffing REF($115:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2059) goto block27; else goto block29;
block27:;
// line 779
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2060));
return &$s2060;
block29:;
// line 1
// line 782
org$pandalanguage$pandac$parser$Token $tmp2061 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2061);
// line 783
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2062));
return &$s2062;
block28:;
goto block1;
block26:;
panda$core$Int64 $tmp2063 = (panda$core$Int64) {102};
panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1976, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block30; else goto block31;
block30:;
// line 787
panda$core$Int64 $tmp2066 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2067 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2066);
org$pandalanguage$pandac$parser$Token$nullable $tmp2068 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2067, &$s2069);
panda$core$Bit $tmp2070 = panda$core$Bit$init$builtin_bit(!$tmp2068.nonnull);
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block32; else goto block33;
block32:;
// line 788
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block33:;
// line 790
panda$core$Int64 $tmp2072 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp2073 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2072);
org$pandalanguage$pandac$parser$Token$nullable $tmp2074 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2073);
panda$core$Bit $tmp2075 = panda$core$Bit$init$builtin_bit($tmp2074.nonnull);
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block34; else goto block35;
block34:;
// line 791
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2077));
return &$s2077;
block35:;
// line 793
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2078));
return &$s2078;
block31:;
// line 796
org$pandalanguage$pandac$parser$Token $tmp2079 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2080 = *(&local0);
panda$core$String* $tmp2081 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2080);
panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2083, $tmp2081);
panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, &$s2085);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp2079, $tmp2084);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
// unreffing REF($182:panda.core.String)
// line 798
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2086 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2088 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2089, $tmp2088, &$s2090);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 804
panda$core$Bit $tmp2091 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode* $tmp2092 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2091);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing REF($2:org.pandalanguage.pandac.ASTNode?)
return $tmp2092;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 812
panda$core$Int64 $tmp2093 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2094 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2093);
org$pandalanguage$pandac$parser$Token$nullable $tmp2095 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2094, &$s2096);
*(&local0) = $tmp2095;
// line 813
org$pandalanguage$pandac$parser$Token$nullable $tmp2097 = *(&local0);
panda$core$Bit $tmp2098 = panda$core$Bit$init$builtin_bit(!$tmp2097.nonnull);
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block1; else goto block2;
block1:;
// line 814
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 816
panda$collections$Array* $tmp2100 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2100);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2101 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
*(&local1) = $tmp2100;
// line 817
panda$core$Int64 $tmp2102 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2103 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2102);
org$pandalanguage$pandac$parser$Token$nullable $tmp2104 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2103);
panda$core$Bit $tmp2105 = panda$core$Bit$init$builtin_bit(!$tmp2104.nonnull);
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block3; else goto block4;
block3:;
// line 818
org$pandalanguage$pandac$ASTNode* $tmp2107 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
*(&local2) = $tmp2107;
// line 819
org$pandalanguage$pandac$ASTNode* $tmp2109 = *(&local2);
panda$core$Bit $tmp2110 = panda$core$Bit$init$builtin_bit($tmp2109 == NULL);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block5; else goto block6;
block5:;
// line 820
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2112 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2113 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 822
panda$collections$Array* $tmp2114 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2115 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2114, ((panda$core$Object*) $tmp2115));
// line 823
goto block7;
block7:;
panda$core$Int64 $tmp2116 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2117 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2116);
org$pandalanguage$pandac$parser$Token$nullable $tmp2118 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2117);
panda$core$Bit $tmp2119 = panda$core$Bit$init$builtin_bit($tmp2118.nonnull);
bool $tmp2120 = $tmp2119.value;
if ($tmp2120) goto block8; else goto block9;
block8:;
// line 824
org$pandalanguage$pandac$ASTNode* $tmp2121 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
*(&local2) = $tmp2121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 825
org$pandalanguage$pandac$ASTNode* $tmp2123 = *(&local2);
panda$core$Bit $tmp2124 = panda$core$Bit$init$builtin_bit($tmp2123 == NULL);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block10; else goto block11;
block10:;
// line 826
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2127 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2127));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 828
panda$collections$Array* $tmp2128 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2129 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2128, ((panda$core$Object*) $tmp2129));
goto block7;
block9:;
// line 830
panda$core$Int64 $tmp2130 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2131 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2130);
org$pandalanguage$pandac$parser$Token$nullable $tmp2132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2131, &$s2133);
panda$core$Bit $tmp2134 = panda$core$Bit$init$builtin_bit(!$tmp2132.nonnull);
bool $tmp2135 = $tmp2134.value;
if ($tmp2135) goto block12; else goto block13;
block12:;
// line 831
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2136 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2137 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp2138 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
goto block4;
block4:;
// line 834
org$pandalanguage$pandac$parser$Token $tmp2139 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2139;
// line 835
org$pandalanguage$pandac$parser$Token $tmp2140 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2141 = $tmp2140.kind;
panda$core$Int64 $tmp2142 = $tmp2141.$rawValue;
panda$core$Int64 $tmp2143 = (panda$core$Int64) {91};
panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, $tmp2143);
bool $tmp2145 = $tmp2144.value;
if ($tmp2145) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2146 = (panda$core$Int64) {92};
panda$core$Bit $tmp2147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, $tmp2146);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp2149 = (panda$core$Int64) {93};
panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, $tmp2149);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp2152 = (panda$core$Int64) {94};
panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, $tmp2152);
bool $tmp2154 = $tmp2153.value;
if ($tmp2154) goto block15; else goto block19;
block15:;
// line 838
org$pandalanguage$pandac$parser$Token $tmp2155 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 839
panda$core$Int64 $tmp2156 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2157 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2156);
org$pandalanguage$pandac$parser$Token$nullable $tmp2158 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2157, &$s2159);
panda$core$Bit $tmp2160 = panda$core$Bit$init$builtin_bit(!$tmp2158.nonnull);
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block20; else goto block21;
block20:;
// line 840
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2162 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 842
panda$collections$Array* $tmp2163 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2163);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2164 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
*(&local4) = $tmp2163;
// line 843
panda$core$Int64 $tmp2165 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2166 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2165);
org$pandalanguage$pandac$parser$Token$nullable $tmp2167 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2166);
panda$core$Bit $tmp2168 = panda$core$Bit$init$builtin_bit(!$tmp2167.nonnull);
bool $tmp2169 = $tmp2168.value;
if ($tmp2169) goto block22; else goto block23;
block22:;
// line 844
org$pandalanguage$pandac$ASTNode* $tmp2170 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2171 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
*(&local5) = $tmp2170;
// line 845
org$pandalanguage$pandac$ASTNode* $tmp2172 = *(&local5);
panda$core$Bit $tmp2173 = panda$core$Bit$init$builtin_bit($tmp2172 == NULL);
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block24; else goto block25;
block24:;
// line 846
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2175 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($232:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2176 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp2177 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2177));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 848
panda$collections$Array* $tmp2178 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2179 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2178, ((panda$core$Object*) $tmp2179));
// line 849
goto block26;
block26:;
panda$core$Int64 $tmp2180 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2181 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2180);
org$pandalanguage$pandac$parser$Token$nullable $tmp2182 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2181);
panda$core$Bit $tmp2183 = panda$core$Bit$init$builtin_bit($tmp2182.nonnull);
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block27; else goto block28;
block27:;
// line 850
org$pandalanguage$pandac$ASTNode* $tmp2185 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2186 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
*(&local5) = $tmp2185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($291:org.pandalanguage.pandac.ASTNode?)
// line 851
org$pandalanguage$pandac$ASTNode* $tmp2187 = *(&local5);
panda$core$Bit $tmp2188 = panda$core$Bit$init$builtin_bit($tmp2187 == NULL);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block29; else goto block30;
block29:;
// line 852
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2190 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($232:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2191 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp2192 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 854
panda$collections$Array* $tmp2193 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2194 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2193, ((panda$core$Object*) $tmp2194));
goto block26;
block28:;
// line 856
panda$core$Int64 $tmp2195 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2196 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2195);
org$pandalanguage$pandac$parser$Token$nullable $tmp2197 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2196, &$s2198);
panda$core$Bit $tmp2199 = panda$core$Bit$init$builtin_bit(!$tmp2197.nonnull);
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block31; else goto block32;
block31:;
// line 857
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2201 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2201));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($232:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2202 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2202));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp2203 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
org$pandalanguage$pandac$ASTNode* $tmp2204 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($232:org.pandalanguage.pandac.ASTNode?)
goto block23;
block23:;
// line 860
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 861
panda$collections$Array* $tmp2205 = *(&local4);
ITable* $tmp2206 = ((panda$collections$CollectionView*) $tmp2205)->$class->itable;
while ($tmp2206->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2206 = $tmp2206->next;
}
$fn2208 $tmp2207 = $tmp2206->methods[0];
panda$core$Int64 $tmp2209 = $tmp2207(((panda$collections$CollectionView*) $tmp2205));
panda$core$Int64 $tmp2210 = (panda$core$Int64) {0};
panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2209, $tmp2210);
bool $tmp2212 = $tmp2211.value;
if ($tmp2212) goto block33; else goto block35;
block33:;
// line 862
org$pandalanguage$pandac$ASTNode* $tmp2213 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2213));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block35:;
// line 864
panda$collections$Array* $tmp2214 = *(&local4);
ITable* $tmp2215 = ((panda$collections$CollectionView*) $tmp2214)->$class->itable;
while ($tmp2215->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2215 = $tmp2215->next;
}
$fn2217 $tmp2216 = $tmp2215->methods[0];
panda$core$Int64 $tmp2218 = $tmp2216(((panda$collections$CollectionView*) $tmp2214));
panda$core$Int64 $tmp2219 = (panda$core$Int64) {1};
panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2218, $tmp2219);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block36; else goto block38;
block36:;
// line 865
panda$collections$Array* $tmp2222 = *(&local4);
panda$core$Int64 $tmp2223 = (panda$core$Int64) {0};
panda$core$Object* $tmp2224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2222, $tmp2223);
org$pandalanguage$pandac$ASTNode* $tmp2225 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2224)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2224);
panda$core$Panda$unref$panda$core$Object$Q($tmp2224);
// unreffing REF($420:panda.collections.Array.T)
goto block37;
block38:;
// line 1
// line 869
org$pandalanguage$pandac$parser$Token$nullable $tmp2226 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2226.value), &$s2227);
// line 870
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2228 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2229 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2229));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp2230 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2230));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 872
org$pandalanguage$pandac$ASTNode* $tmp2231 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2232 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp2233 = *(&local0);
org$pandalanguage$pandac$Position $tmp2234 = ((org$pandalanguage$pandac$parser$Token) $tmp2233.value).position;
org$pandalanguage$pandac$parser$Token $tmp2235 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2236 = $tmp2235.kind;
panda$collections$Array* $tmp2237 = *(&local1);
panda$collections$ImmutableArray* $tmp2238 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2237);
org$pandalanguage$pandac$ASTNode* $tmp2239 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2231, $tmp2232, $tmp2234, $tmp2236, $tmp2238, $tmp2239);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
// unreffing REF($474:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2231));
// unreffing REF($465:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2240 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2241 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2241));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp2242 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp2231;
block19:;
// line 877
org$pandalanguage$pandac$parser$Token$nullable $tmp2243 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2243.value), &$s2244);
// line 878
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2245 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
panda$core$Bit $tmp2246 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp2248 = (panda$core$Int64) {811};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2249, $tmp2248, &$s2250);
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
// line 888
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 889
org$pandalanguage$pandac$parser$Token $tmp2251 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2252 = $tmp2251.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2253;
$tmp2253 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2253->value = $tmp2252;
panda$core$Int64 $tmp2254 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2255 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2254);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2256;
$tmp2256 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2256->value = $tmp2255;
ITable* $tmp2257 = ((panda$core$Equatable*) $tmp2253)->$class->itable;
while ($tmp2257->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2257 = $tmp2257->next;
}
$fn2259 $tmp2258 = $tmp2257->methods[0];
panda$core$Bit $tmp2260 = $tmp2258(((panda$core$Equatable*) $tmp2253), ((panda$core$Equatable*) $tmp2256));
bool $tmp2261 = $tmp2260.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2256)));
// unreffing REF($9:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2253)));
// unreffing REF($5:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2261) goto block1; else goto block3;
block1:;
// line 890
org$pandalanguage$pandac$ASTNode* $tmp2262 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2263 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
*(&local0) = $tmp2262;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
// line 891
org$pandalanguage$pandac$ASTNode* $tmp2264 = *(&local0);
panda$core$Bit $tmp2265 = panda$core$Bit$init$builtin_bit($tmp2264 == NULL);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block4; else goto block5;
block4:;
// line 892
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2267 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2267));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 896
panda$core$Int64 $tmp2268 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2269 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2268);
org$pandalanguage$pandac$parser$Token$nullable $tmp2270 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2269, &$s2271);
*(&local1) = $tmp2270;
// line 897
org$pandalanguage$pandac$parser$Token$nullable $tmp2272 = *(&local1);
panda$core$Bit $tmp2273 = panda$core$Bit$init$builtin_bit(!$tmp2272.nonnull);
bool $tmp2274 = $tmp2273.value;
if ($tmp2274) goto block6; else goto block7;
block6:;
// line 898
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2275 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 900
panda$core$MutableString* $tmp2276 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp2277 = *(&local1);
panda$core$String* $tmp2278 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2277.value));
panda$core$MutableString$init$panda$core$String($tmp2276, $tmp2278);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2279 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2279));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
*(&local2) = $tmp2276;
// line 901
goto block8;
block8:;
panda$core$Int64 $tmp2280 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp2281 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2280);
org$pandalanguage$pandac$parser$Token$nullable $tmp2282 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2281);
panda$core$Bit $tmp2283 = panda$core$Bit$init$builtin_bit($tmp2282.nonnull);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block9; else goto block10;
block9:;
// line 902
panda$core$Int64 $tmp2285 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2286 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2285);
org$pandalanguage$pandac$parser$Token$nullable $tmp2287 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2286, &$s2288);
*(&local3) = $tmp2287;
// line 903
org$pandalanguage$pandac$parser$Token$nullable $tmp2289 = *(&local3);
panda$core$Bit $tmp2290 = panda$core$Bit$init$builtin_bit(!$tmp2289.nonnull);
bool $tmp2291 = $tmp2290.value;
if ($tmp2291) goto block11; else goto block12;
block11:;
// line 904
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp2292 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2293 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2293));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 906
panda$core$MutableString* $tmp2294 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp2294, &$s2295);
// line 907
panda$core$MutableString* $tmp2296 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp2297 = *(&local3);
panda$core$String* $tmp2298 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2297.value));
panda$core$MutableString$append$panda$core$String($tmp2296, $tmp2298);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// unreffing REF($128:panda.core.String)
goto block8;
block10:;
// line 909
panda$core$MutableString* $tmp2299 = *(&local2);
panda$core$String* $tmp2300 = panda$core$MutableString$finish$R$panda$core$String($tmp2299);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp2301 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
*(&local4) = $tmp2300;
// line 910
org$pandalanguage$pandac$ASTNode* $tmp2302 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2303 = (panda$core$Int64) {42};
org$pandalanguage$pandac$parser$Token$nullable $tmp2304 = *(&local1);
org$pandalanguage$pandac$Position $tmp2305 = ((org$pandalanguage$pandac$parser$Token) $tmp2304.value).position;
panda$core$String* $tmp2306 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2302, $tmp2303, $tmp2305, $tmp2306);
org$pandalanguage$pandac$ASTNode* $tmp2307 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
*(&local0) = $tmp2302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode)
// line 911
org$pandalanguage$pandac$parser$Token $tmp2308 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2309 = $tmp2308.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2310;
$tmp2310 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2310->value = $tmp2309;
panda$core$Int64 $tmp2311 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2312 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2311);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2313;
$tmp2313 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2313->value = $tmp2312;
ITable* $tmp2314 = ((panda$core$Equatable*) $tmp2310)->$class->itable;
while ($tmp2314->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2314 = $tmp2314->next;
}
$fn2316 $tmp2315 = $tmp2314->methods[0];
panda$core$Bit $tmp2317 = $tmp2315(((panda$core$Equatable*) $tmp2310), ((panda$core$Equatable*) $tmp2313));
bool $tmp2318 = $tmp2317.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2313)));
// unreffing REF($169:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2310)));
// unreffing REF($165:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2318) goto block13; else goto block14;
block13:;
// line 914
bool $tmp2319 = param1.value;
if ($tmp2319) goto block15; else goto block16;
block15:;
// line 915
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 917
org$pandalanguage$pandac$parser$Token $tmp2320 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 918
panda$collections$Array* $tmp2321 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2321);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2322 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
*(&local5) = $tmp2321;
// line 919
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2324 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2323);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2325 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
*(&local6) = $tmp2324;
// line 920
org$pandalanguage$pandac$ASTNode* $tmp2326 = *(&local6);
panda$core$Bit $tmp2327 = panda$core$Bit$init$builtin_bit($tmp2326 == NULL);
bool $tmp2328 = $tmp2327.value;
if ($tmp2328) goto block17; else goto block18;
block17:;
// line 921
bool $tmp2329 = param1.value;
if ($tmp2329) goto block19; else goto block20;
block19:;
// line 922
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 923
org$pandalanguage$pandac$ASTNode* $tmp2330 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
org$pandalanguage$pandac$ASTNode* $tmp2331 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2332 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2333 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2334 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2335 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2330;
block20:;
// line 925
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2336 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2336));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2337 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2338 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2339 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2339));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2340 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 927
panda$collections$Array* $tmp2341 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2342 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2341, ((panda$core$Object*) $tmp2342));
// line 928
goto block21;
block21:;
panda$core$Int64 $tmp2343 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2344 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2343);
org$pandalanguage$pandac$parser$Token$nullable $tmp2345 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2344);
panda$core$Bit $tmp2346 = panda$core$Bit$init$builtin_bit($tmp2345.nonnull);
bool $tmp2347 = $tmp2346.value;
if ($tmp2347) goto block22; else goto block23;
block22:;
// line 929
panda$core$Bit $tmp2348 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2349 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2348);
org$pandalanguage$pandac$ASTNode* $tmp2350 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
*(&local6) = $tmp2349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
// unreffing REF($327:org.pandalanguage.pandac.ASTNode?)
// line 930
org$pandalanguage$pandac$ASTNode* $tmp2351 = *(&local6);
panda$core$Bit $tmp2352 = panda$core$Bit$init$builtin_bit($tmp2351 == NULL);
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block24; else goto block25;
block24:;
// line 931
bool $tmp2354 = param1.value;
if ($tmp2354) goto block26; else goto block27;
block26:;
// line 932
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 933
org$pandalanguage$pandac$ASTNode* $tmp2355 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
org$pandalanguage$pandac$ASTNode* $tmp2356 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2357 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2358 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2359 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2360 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2355;
block27:;
// line 935
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2361 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2362 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2363 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2364 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2365 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 937
panda$collections$Array* $tmp2366 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2367 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2366, ((panda$core$Object*) $tmp2367));
goto block21;
block23:;
// line 939
panda$core$Int64 $tmp2368 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2369 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2368);
org$pandalanguage$pandac$parser$Token$nullable $tmp2370 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2369, &$s2371);
panda$core$Bit $tmp2372 = panda$core$Bit$init$builtin_bit(!$tmp2370.nonnull);
bool $tmp2373 = $tmp2372.value;
if ($tmp2373) goto block28; else goto block29;
block28:;
// line 940
bool $tmp2374 = param1.value;
if ($tmp2374) goto block30; else goto block31;
block30:;
// line 941
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 942
org$pandalanguage$pandac$ASTNode* $tmp2375 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
org$pandalanguage$pandac$ASTNode* $tmp2376 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2377 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2378 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2379 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2380 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2375;
block31:;
// line 944
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2381 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2382 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2383 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp2385 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block29:;
// line 946
org$pandalanguage$pandac$ASTNode* $tmp2386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2387 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$nullable $tmp2388 = *(&local1);
org$pandalanguage$pandac$Position $tmp2389 = ((org$pandalanguage$pandac$parser$Token) $tmp2388.value).position;
panda$core$String* $tmp2390 = *(&local4);
panda$collections$Array* $tmp2391 = *(&local5);
panda$collections$ImmutableArray* $tmp2392 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2391);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2386, $tmp2387, $tmp2389, $tmp2390, $tmp2392);
org$pandalanguage$pandac$ASTNode* $tmp2393 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
*(&local0) = $tmp2386;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
// unreffing REF($556:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
// unreffing REF($548:org.pandalanguage.pandac.ASTNode)
// line 947
bool $tmp2394 = param1.value;
if ($tmp2394) goto block32; else goto block33;
block32:;
// line 948
org$pandalanguage$pandac$parser$Parser$accept(param0);
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp2395 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2396 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($189:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
goto block14;
block14:;
panda$core$String* $tmp2397 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($136:panda.core.String)
panda$core$MutableString* $tmp2398 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($69:panda.core.MutableString)
goto block2;
block2:;
// line 952
panda$core$Int64 $tmp2399 = (panda$core$Int64) {95};
org$pandalanguage$pandac$parser$Token$Kind $tmp2400 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2399);
org$pandalanguage$pandac$parser$Token$nullable $tmp2401 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2400);
panda$core$Bit $tmp2402 = panda$core$Bit$init$builtin_bit($tmp2401.nonnull);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block34; else goto block35;
block34:;
// line 953
org$pandalanguage$pandac$ASTNode* $tmp2404 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2405 = (panda$core$Int64) {29};
org$pandalanguage$pandac$ASTNode* $tmp2406 = *(&local0);
$fn2408 $tmp2407 = ($fn2408) $tmp2406->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2409 = $tmp2407($tmp2406);
org$pandalanguage$pandac$ASTNode* $tmp2410 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2404, $tmp2405, $tmp2409, $tmp2410);
org$pandalanguage$pandac$ASTNode* $tmp2411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
*(&local0) = $tmp2404;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
// unreffing REF($624:org.pandalanguage.pandac.ASTNode)
goto block35;
block35:;
// line 955
org$pandalanguage$pandac$ASTNode* $tmp2412 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
org$pandalanguage$pandac$ASTNode* $tmp2413 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2413));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2412;

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
// line 969
org$pandalanguage$pandac$ASTNode* $tmp2414 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
*(&local0) = $tmp2414;
// line 970
org$pandalanguage$pandac$ASTNode* $tmp2416 = *(&local0);
panda$core$Bit $tmp2417 = panda$core$Bit$init$builtin_bit($tmp2416 == NULL);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block1; else goto block2;
block1:;
// line 971
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2419 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 973
goto block3;
block3:;
// line 974
org$pandalanguage$pandac$parser$Token $tmp2420 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2420;
// line 975
org$pandalanguage$pandac$parser$Token $tmp2421 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2422 = $tmp2421.kind;
panda$core$Int64 $tmp2423 = $tmp2422.$rawValue;
panda$core$Int64 $tmp2424 = (panda$core$Int64) {104};
panda$core$Bit $tmp2425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, $tmp2424);
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block6; else goto block7;
block6:;
// line 977
panda$collections$Stack** $tmp2427 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2428 = *$tmp2427;
panda$core$Bit $tmp2429 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2430;
$tmp2430 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2430->value = $tmp2429;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2428, ((panda$core$Object*) $tmp2430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// unreffing REF($45:panda.collections.Stack.T)
// line 978
panda$collections$Array* $tmp2431 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2431);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2432 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
*(&local2) = $tmp2431;
// line 979
panda$core$Int64 $tmp2433 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2434 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2433);
org$pandalanguage$pandac$parser$Token$nullable $tmp2435 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2434);
panda$core$Bit $tmp2436 = panda$core$Bit$init$builtin_bit(!$tmp2435.nonnull);
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block8; else goto block9;
block8:;
// line 980
org$pandalanguage$pandac$ASTNode* $tmp2438 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2439 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
*(&local3) = $tmp2438;
// line 981
org$pandalanguage$pandac$ASTNode* $tmp2440 = *(&local3);
panda$core$Bit $tmp2441 = panda$core$Bit$init$builtin_bit($tmp2440 == NULL);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block10; else goto block11;
block10:;
// line 982
panda$collections$Stack** $tmp2443 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2444 = *$tmp2443;
panda$core$Object* $tmp2445 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2444);
panda$core$Panda$unref$panda$core$Object$Q($tmp2445);
// unreffing REF($88:panda.collections.Stack.T)
// line 983
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2446 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
// unreffing REF($70:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2447 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp2448 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 985
panda$collections$Array* $tmp2449 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2450 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2449, ((panda$core$Object*) $tmp2450));
// line 986
goto block12;
block12:;
panda$core$Int64 $tmp2451 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2452 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2451);
org$pandalanguage$pandac$parser$Token$nullable $tmp2453 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2452);
panda$core$Bit $tmp2454 = panda$core$Bit$init$builtin_bit($tmp2453.nonnull);
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block13; else goto block14;
block13:;
// line 987
org$pandalanguage$pandac$ASTNode* $tmp2456 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2457 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
*(&local3) = $tmp2456;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
// unreffing REF($138:org.pandalanguage.pandac.ASTNode?)
// line 988
org$pandalanguage$pandac$ASTNode* $tmp2458 = *(&local3);
panda$core$Bit $tmp2459 = panda$core$Bit$init$builtin_bit($tmp2458 == NULL);
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block15; else goto block16;
block15:;
// line 989
panda$collections$Stack** $tmp2461 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2462 = *$tmp2461;
panda$core$Object* $tmp2463 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2462);
panda$core$Panda$unref$panda$core$Object$Q($tmp2463);
// unreffing REF($158:panda.collections.Stack.T)
// line 990
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2464 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
// unreffing REF($70:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2465 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp2466 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2466));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 992
panda$collections$Array* $tmp2467 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2468 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2467, ((panda$core$Object*) $tmp2468));
goto block12;
block14:;
// line 994
panda$core$Int64 $tmp2469 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2470 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2469);
org$pandalanguage$pandac$parser$Token$nullable $tmp2471 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2470, &$s2472);
panda$core$Bit $tmp2473 = panda$core$Bit$init$builtin_bit(!$tmp2471.nonnull);
bool $tmp2474 = $tmp2473.value;
if ($tmp2474) goto block17; else goto block18;
block17:;
// line 995
panda$collections$Stack** $tmp2475 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2476 = *$tmp2475;
panda$core$Object* $tmp2477 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2476);
panda$core$Panda$unref$panda$core$Object$Q($tmp2477);
// unreffing REF($211:panda.collections.Stack.T)
// line 996
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2478 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
// unreffing REF($70:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2479 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp2480 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
org$pandalanguage$pandac$ASTNode* $tmp2481 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
// unreffing REF($70:org.pandalanguage.pandac.ASTNode?)
goto block9;
block9:;
// line 999
panda$collections$Stack** $tmp2482 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2483 = *$tmp2482;
panda$core$Object* $tmp2484 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2483);
panda$core$Panda$unref$panda$core$Object$Q($tmp2484);
// unreffing REF($257:panda.collections.Stack.T)
// line 1000
org$pandalanguage$pandac$ASTNode* $tmp2485 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2486 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token $tmp2487 = *(&local1);
org$pandalanguage$pandac$Position $tmp2488 = $tmp2487.position;
org$pandalanguage$pandac$ASTNode* $tmp2489 = *(&local0);
panda$collections$Array* $tmp2490 = *(&local2);
panda$collections$ImmutableArray* $tmp2491 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2490);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2485, $tmp2486, $tmp2488, $tmp2489, $tmp2491);
org$pandalanguage$pandac$ASTNode* $tmp2492 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
*(&local0) = $tmp2485;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
// unreffing REF($271:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
// unreffing REF($263:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp2493 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
goto block5;
block7:;
panda$core$Int64 $tmp2494 = (panda$core$Int64) {102};
panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, $tmp2494);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block19; else goto block20;
block19:;
// line 1003
org$pandalanguage$pandac$ASTNode* $tmp2497 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2498 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
*(&local4) = $tmp2497;
// line 1004
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local4);
panda$core$Bit $tmp2500 = panda$core$Bit$init$builtin_bit($tmp2499 == NULL);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block21; else goto block22;
block21:;
// line 1005
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2502 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing REF($301:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2503 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1007
panda$core$Int64 $tmp2504 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2505 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2504);
org$pandalanguage$pandac$parser$Token$nullable $tmp2506 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2505, &$s2507);
panda$core$Bit $tmp2508 = panda$core$Bit$init$builtin_bit(!$tmp2506.nonnull);
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block23; else goto block24;
block23:;
// line 1008
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2510 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing REF($301:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2511 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 1010
org$pandalanguage$pandac$ASTNode* $tmp2512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2513 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2514 = *(&local1);
org$pandalanguage$pandac$Position $tmp2515 = $tmp2514.position;
org$pandalanguage$pandac$ASTNode* $tmp2516 = *(&local0);
panda$core$Int64 $tmp2517 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp2518 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2517);
org$pandalanguage$pandac$ASTNode* $tmp2519 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2512, $tmp2513, $tmp2515, $tmp2516, $tmp2518, $tmp2519);
org$pandalanguage$pandac$ASTNode* $tmp2520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
*(&local0) = $tmp2512;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
// unreffing REF($364:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2521 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing REF($301:org.pandalanguage.pandac.ASTNode?)
goto block5;
block20:;
panda$core$Int64 $tmp2522 = (panda$core$Int64) {99};
panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, $tmp2522);
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block25; else goto block26;
block25:;
// line 1013
*(&local5) = ((panda$core$String*) NULL);
// line 1014
panda$core$Int64 $tmp2525 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2526 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2525);
org$pandalanguage$pandac$parser$Token$nullable $tmp2527 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2526);
panda$core$Bit $tmp2528 = panda$core$Bit$init$builtin_bit($tmp2527.nonnull);
bool $tmp2529 = $tmp2528.value;
if ($tmp2529) goto block27; else goto block29;
block27:;
// line 1015
panda$core$String* $tmp2531 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2530));
*(&local5) = &$s2530;
goto block28;
block29:;
// line 1
// line 1018
panda$core$String* $tmp2532 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$String* $tmp2533 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
*(&local5) = $tmp2532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// unreffing REF($419:panda.core.String?)
// line 1019
panda$core$String* $tmp2534 = *(&local5);
panda$core$Bit $tmp2535 = panda$core$Bit$init$builtin_bit($tmp2534 == NULL);
bool $tmp2536 = $tmp2535.value;
if ($tmp2536) goto block30; else goto block31;
block30:;
// line 1020
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp2537 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2538 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1023
org$pandalanguage$pandac$ASTNode* $tmp2539 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2540 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token $tmp2541 = *(&local1);
org$pandalanguage$pandac$Position $tmp2542 = $tmp2541.position;
org$pandalanguage$pandac$ASTNode* $tmp2543 = *(&local0);
panda$core$String* $tmp2544 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2539, $tmp2540, $tmp2542, $tmp2543, $tmp2544);
org$pandalanguage$pandac$ASTNode* $tmp2545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
*(&local0) = $tmp2539;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
// unreffing REF($454:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp2546 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block5;
block26:;
panda$core$Int64 $tmp2547 = (panda$core$Int64) {90};
panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, $tmp2547);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block32; else goto block33;
block32:;
// line 1026
org$pandalanguage$pandac$ASTNode* $tmp2550 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2551 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
*(&local6) = $tmp2550;
// line 1027
org$pandalanguage$pandac$ASTNode* $tmp2552 = *(&local6);
panda$core$Bit $tmp2553 = panda$core$Bit$init$builtin_bit($tmp2552 == NULL);
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block34; else goto block35;
block34:;
// line 1028
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2555 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
// unreffing REF($484:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2556 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block35:;
// line 1030
org$pandalanguage$pandac$ASTNode* $tmp2557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2558 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2559 = *(&local1);
org$pandalanguage$pandac$Position $tmp2560 = $tmp2559.position;
org$pandalanguage$pandac$ASTNode* $tmp2561 = *(&local0);
panda$core$Int64 $tmp2562 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp2563 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2562);
org$pandalanguage$pandac$ASTNode* $tmp2564 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2557, $tmp2558, $tmp2560, $tmp2561, $tmp2563, $tmp2564);
org$pandalanguage$pandac$ASTNode* $tmp2565 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
*(&local0) = $tmp2557;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
// unreffing REF($519:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2566 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
// unreffing REF($484:org.pandalanguage.pandac.ASTNode?)
goto block5;
block33:;
panda$core$Int64 $tmp2567 = (panda$core$Int64) {63};
panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2423, $tmp2567);
bool $tmp2569 = $tmp2568.value;
if ($tmp2569) goto block36; else goto block37;
block36:;
// line 1035
org$pandalanguage$pandac$parser$Token $tmp2570 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2570);
// line 1036
org$pandalanguage$pandac$ASTNode* $tmp2571 = *(&local0);
panda$core$String* $tmp2572 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2571);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2573 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
*(&local7) = $tmp2572;
// line 1037
panda$core$String* $tmp2574 = *(&local7);
panda$core$Bit $tmp2575 = panda$core$Bit$init$builtin_bit($tmp2574 != NULL);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block38; else goto block39;
block38:;
// line 1038
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 1039
org$pandalanguage$pandac$parser$Token $tmp2577 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1042
panda$collections$Array* $tmp2578 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2578);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2579 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
*(&local8) = $tmp2578;
// line 1043
panda$core$Bit $tmp2580 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2581 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2580);
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2582 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
*(&local9) = $tmp2581;
// line 1044
org$pandalanguage$pandac$ASTNode* $tmp2583 = *(&local9);
panda$core$Bit $tmp2584 = panda$core$Bit$init$builtin_bit($tmp2583 == NULL);
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block40; else goto block41;
block40:;
// line 1045
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1046
org$pandalanguage$pandac$ASTNode* $tmp2586 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
org$pandalanguage$pandac$ASTNode* $tmp2587 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2588 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2589 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
org$pandalanguage$pandac$ASTNode* $tmp2590 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2586;
block41:;
// line 1048
panda$collections$Array* $tmp2591 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2592 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2591, ((panda$core$Object*) $tmp2592));
// line 1049
goto block42;
block42:;
panda$core$Int64 $tmp2593 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2594 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2593);
org$pandalanguage$pandac$parser$Token$nullable $tmp2595 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2594);
panda$core$Bit $tmp2596 = panda$core$Bit$init$builtin_bit($tmp2595.nonnull);
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block43; else goto block44;
block43:;
// line 1050
panda$core$Bit $tmp2598 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2599 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2598);
org$pandalanguage$pandac$ASTNode* $tmp2600 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2599));
*(&local9) = $tmp2599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2599));
// unreffing REF($661:org.pandalanguage.pandac.ASTNode?)
// line 1051
org$pandalanguage$pandac$ASTNode* $tmp2601 = *(&local9);
panda$core$Bit $tmp2602 = panda$core$Bit$init$builtin_bit($tmp2601 == NULL);
bool $tmp2603 = $tmp2602.value;
if ($tmp2603) goto block45; else goto block46;
block45:;
// line 1052
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1053
org$pandalanguage$pandac$ASTNode* $tmp2604 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
org$pandalanguage$pandac$ASTNode* $tmp2605 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2606 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2607 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
org$pandalanguage$pandac$ASTNode* $tmp2608 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2604;
block46:;
// line 1055
panda$collections$Array* $tmp2609 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2610 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2609, ((panda$core$Object*) $tmp2610));
goto block42;
block44:;
// line 1057
panda$core$Int64 $tmp2611 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2612 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2611);
org$pandalanguage$pandac$parser$Token$nullable $tmp2613 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2612, &$s2614);
*(&local10) = $tmp2613;
// line 1058
org$pandalanguage$pandac$parser$Token$nullable $tmp2615 = *(&local10);
panda$core$Bit $tmp2616 = panda$core$Bit$init$builtin_bit(!$tmp2615.nonnull);
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block47; else goto block48;
block47:;
// line 1059
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1060
org$pandalanguage$pandac$ASTNode* $tmp2618 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
org$pandalanguage$pandac$ASTNode* $tmp2619 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2620 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2621 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
org$pandalanguage$pandac$ASTNode* $tmp2622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2618;
block48:;
// line 1089
// line 1090
panda$collections$Stack** $tmp2623 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2624 = *$tmp2623;
panda$core$Int64 $tmp2625 = (panda$core$Int64) {0};
panda$core$Object* $tmp2626 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2624, $tmp2625);
bool $tmp2627 = ((panda$core$Bit$wrapper*) $tmp2626)->value.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2626);
// unreffing REF($780:panda.collections.Stack.T)
if ($tmp2627) goto block49; else goto block51;
block49:;
// line 1091
org$pandalanguage$pandac$parser$Token $tmp2628 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local12) = $tmp2628;
// line 1092
org$pandalanguage$pandac$parser$Token $tmp2629 = *(&local12);
org$pandalanguage$pandac$parser$Token$Kind $tmp2630 = $tmp2629.kind;
panda$core$Int64 $tmp2631 = $tmp2630.$rawValue;
panda$core$Int64 $tmp2632 = (panda$core$Int64) {99};
panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631, $tmp2632);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp2635 = (panda$core$Int64) {106};
panda$core$Bit $tmp2636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631, $tmp2635);
bool $tmp2637 = $tmp2636.value;
if ($tmp2637) goto block53; else goto block55;
block55:;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {90};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block53; else goto block56;
block53:;
// line 1094
panda$core$Bit $tmp2641 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2641;
goto block52;
block56:;
panda$core$Int64 $tmp2642 = (panda$core$Int64) {104};
panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631, $tmp2642);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block57; else goto block58;
block57:;
// line 1097
org$pandalanguage$pandac$parser$Token $tmp2645 = *(&local12);
org$pandalanguage$pandac$Position $tmp2646 = $tmp2645.position;
panda$core$Int64 $tmp2647 = $tmp2646.line;
org$pandalanguage$pandac$parser$Token$nullable $tmp2648 = *(&local10);
org$pandalanguage$pandac$Position $tmp2649 = ((org$pandalanguage$pandac$parser$Token) $tmp2648.value).position;
panda$core$Int64 $tmp2650 = $tmp2649.line;
panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2647, $tmp2650);
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$parser$Token $tmp2653 = *(&local12);
org$pandalanguage$pandac$Position $tmp2654 = $tmp2653.position;
panda$core$Int64 $tmp2655 = $tmp2654.column;
org$pandalanguage$pandac$parser$Token$nullable $tmp2656 = *(&local10);
org$pandalanguage$pandac$Position $tmp2657 = ((org$pandalanguage$pandac$parser$Token) $tmp2656.value).position;
panda$core$Int64 $tmp2658 = $tmp2657.column;
panda$core$Int64 $tmp2659 = (panda$core$Int64) {1};
int64_t $tmp2660 = $tmp2658.value;
int64_t $tmp2661 = $tmp2659.value;
int64_t $tmp2662 = $tmp2660 + $tmp2661;
panda$core$Int64 $tmp2663 = (panda$core$Int64) {$tmp2662};
panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2655, $tmp2663);
*(&local13) = $tmp2664;
goto block61;
block60:;
*(&local13) = $tmp2651;
goto block61;
block61:;
panda$core$Bit $tmp2665 = *(&local13);
*(&local11) = $tmp2665;
goto block52;
block58:;
// line 1101
panda$core$Bit $tmp2666 = panda$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp2666;
goto block52;
block52:;
// line 1104
panda$core$Bit $tmp2667 = *(&local11);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block62; else goto block63;
block62:;
// line 1105
org$pandalanguage$pandac$parser$Token $tmp2669 = *(&local12);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2669);
goto block63;
block63:;
goto block50;
block51:;
// line 1
// line 1109
panda$core$Bit $tmp2670 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2670;
goto block50;
block50:;
// line 1111
panda$core$Bit $tmp2671 = *(&local11);
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block64; else goto block66;
block64:;
// line 1112
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1113
org$pandalanguage$pandac$ASTNode* $tmp2673 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2674 = (panda$core$Int64) {19};
org$pandalanguage$pandac$ASTNode* $tmp2675 = *(&local0);
$fn2677 $tmp2676 = ($fn2677) $tmp2675->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2678 = $tmp2676($tmp2675);
panda$core$String* $tmp2679 = *(&local7);
panda$collections$Array* $tmp2680 = *(&local8);
panda$collections$ImmutableArray* $tmp2681 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2680);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2673, $tmp2674, $tmp2678, $tmp2679, $tmp2681);
org$pandalanguage$pandac$ASTNode* $tmp2682 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
*(&local0) = $tmp2673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
// unreffing REF($880:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
// unreffing REF($870:org.pandalanguage.pandac.ASTNode)
// line 1114
org$pandalanguage$pandac$ASTNode* $tmp2683 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2684 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2685 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
goto block3;
block66:;
// line 1
// line 1117
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1118
org$pandalanguage$pandac$ASTNode* $tmp2686 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
org$pandalanguage$pandac$ASTNode* $tmp2687 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2688 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$String* $tmp2689 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
org$pandalanguage$pandac$ASTNode* $tmp2690 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2686;
block65:;
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($590:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp2692 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($578:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
goto block39;
block39:;
// line 1121
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
panda$core$String* $tmp2694 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing REF($559:panda.core.String?)
org$pandalanguage$pandac$ASTNode* $tmp2695 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2695));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2693;
block37:;
// line 1124
org$pandalanguage$pandac$parser$Token $tmp2696 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2696);
// line 1125
org$pandalanguage$pandac$ASTNode* $tmp2697 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
org$pandalanguage$pandac$ASTNode* $tmp2698 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2697;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2699 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2700 = $tmp2699.value;
if ($tmp2700) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp2701 = (panda$core$Int64) {968};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2702, $tmp2701, &$s2703);
abort(); // unreachable
block67:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1135
org$pandalanguage$pandac$ASTNode* $tmp2704 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2705 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
*(&local0) = $tmp2704;
// line 1136
org$pandalanguage$pandac$ASTNode* $tmp2706 = *(&local0);
panda$core$Bit $tmp2707 = panda$core$Bit$init$builtin_bit($tmp2706 == NULL);
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block1; else goto block2;
block1:;
// line 1137
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2709 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2709));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1139
goto block3;
block3:;
// line 1140
panda$core$Int64 $tmp2710 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2711 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2710);
org$pandalanguage$pandac$parser$Token$nullable $tmp2712 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2711);
*(&local1) = $tmp2712;
// line 1141
org$pandalanguage$pandac$parser$Token$nullable $tmp2713 = *(&local1);
panda$core$Bit $tmp2714 = panda$core$Bit$init$builtin_bit(!$tmp2713.nonnull);
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block5; else goto block6;
block5:;
// line 1142
goto block4;
block6:;
// line 1144
org$pandalanguage$pandac$ASTNode* $tmp2716 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2717 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
*(&local2) = $tmp2716;
// line 1145
org$pandalanguage$pandac$ASTNode* $tmp2718 = *(&local2);
panda$core$Bit $tmp2719 = panda$core$Bit$init$builtin_bit($tmp2718 == NULL);
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block7; else goto block8;
block7:;
// line 1146
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2721 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2722 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1148
org$pandalanguage$pandac$ASTNode* $tmp2723 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2724 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp2725 = *(&local1);
org$pandalanguage$pandac$Position $tmp2726 = ((org$pandalanguage$pandac$parser$Token) $tmp2725.value).position;
org$pandalanguage$pandac$ASTNode* $tmp2727 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp2728 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2729 = ((org$pandalanguage$pandac$parser$Token) $tmp2728.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp2730 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2723, $tmp2724, $tmp2726, $tmp2727, $tmp2729, $tmp2730);
org$pandalanguage$pandac$ASTNode* $tmp2731 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
*(&local0) = $tmp2723;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2732 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2732));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
goto block3;
block4:;
// line 1150
org$pandalanguage$pandac$ASTNode* $tmp2733 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
org$pandalanguage$pandac$ASTNode* $tmp2734 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2733;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1157
org$pandalanguage$pandac$parser$Token $tmp2735 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2735;
// line 1158
org$pandalanguage$pandac$parser$Token $tmp2736 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2737 = $tmp2736.kind;
panda$core$Int64 $tmp2738 = $tmp2737.$rawValue;
panda$core$Int64 $tmp2739 = (panda$core$Int64) {53};
panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2738, $tmp2739);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2742 = (panda$core$Int64) {50};
panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2738, $tmp2742);
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2745 = (panda$core$Int64) {51};
panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2738, $tmp2745);
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block2; else goto block5;
block2:;
// line 1160
org$pandalanguage$pandac$ASTNode* $tmp2748 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2749 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
*(&local1) = $tmp2748;
// line 1161
org$pandalanguage$pandac$ASTNode* $tmp2750 = *(&local1);
panda$core$Bit $tmp2751 = panda$core$Bit$init$builtin_bit($tmp2750 == NULL);
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block6; else goto block7;
block6:;
// line 1162
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2753 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1164
org$pandalanguage$pandac$ASTNode* $tmp2754 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2755 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token $tmp2756 = *(&local0);
org$pandalanguage$pandac$Position $tmp2757 = $tmp2756.position;
org$pandalanguage$pandac$parser$Token $tmp2758 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2759 = $tmp2758.kind;
org$pandalanguage$pandac$ASTNode* $tmp2760 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2754, $tmp2755, $tmp2757, $tmp2759, $tmp2760);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
// unreffing REF($47:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2761 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
return $tmp2754;
block5:;
// line 1167
org$pandalanguage$pandac$parser$Token $tmp2762 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2762);
// line 1168
org$pandalanguage$pandac$ASTNode* $tmp2763 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode?)
return $tmp2763;
block1:;
panda$core$Bit $tmp2764 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2766 = (panda$core$Int64) {1156};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2767, $tmp2766, &$s2768);
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
// line 1180
org$pandalanguage$pandac$ASTNode* $tmp2769 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
*(&local0) = $tmp2769;
// line 1181
org$pandalanguage$pandac$ASTNode* $tmp2771 = *(&local0);
panda$core$Bit $tmp2772 = panda$core$Bit$init$builtin_bit($tmp2771 == NULL);
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block1; else goto block2;
block1:;
// line 1182
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1184
goto block3;
block3:;
// line 1185
org$pandalanguage$pandac$parser$Token $tmp2775 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2775;
// line 1186
org$pandalanguage$pandac$parser$Token $tmp2776 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2777 = $tmp2776.kind;
panda$core$Int64 $tmp2778 = $tmp2777.$rawValue;
panda$core$Int64 $tmp2779 = (panda$core$Int64) {54};
panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2779);
bool $tmp2781 = $tmp2780.value;
if ($tmp2781) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2782 = (panda$core$Int64) {55};
panda$core$Bit $tmp2783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2782);
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2785 = (panda$core$Int64) {56};
panda$core$Bit $tmp2786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2785);
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp2788 = (panda$core$Int64) {57};
panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2788);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp2791 = (panda$core$Int64) {73};
panda$core$Bit $tmp2792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2791);
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp2794 = (panda$core$Int64) {68};
panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2794);
bool $tmp2796 = $tmp2795.value;
if ($tmp2796) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp2797 = (panda$core$Int64) {70};
panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2797);
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block6; else goto block13;
block6:;
// line 1189
org$pandalanguage$pandac$ASTNode* $tmp2800 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2801 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
*(&local2) = $tmp2800;
// line 1190
org$pandalanguage$pandac$ASTNode* $tmp2802 = *(&local2);
panda$core$Bit $tmp2803 = panda$core$Bit$init$builtin_bit($tmp2802 == NULL);
bool $tmp2804 = $tmp2803.value;
if ($tmp2804) goto block14; else goto block15;
block14:;
// line 1191
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2805 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// unreffing REF($65:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2806 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1193
org$pandalanguage$pandac$ASTNode* $tmp2807 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2808 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2809 = *(&local1);
org$pandalanguage$pandac$Position $tmp2810 = $tmp2809.position;
org$pandalanguage$pandac$ASTNode* $tmp2811 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2812 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2813 = $tmp2812.kind;
org$pandalanguage$pandac$ASTNode* $tmp2814 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2807, $tmp2808, $tmp2810, $tmp2811, $tmp2813, $tmp2814);
org$pandalanguage$pandac$ASTNode* $tmp2815 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2815));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
*(&local0) = $tmp2807;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
// unreffing REF($100:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2816 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2816));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// unreffing REF($65:org.pandalanguage.pandac.ASTNode?)
goto block5;
block13:;
panda$core$Int64 $tmp2817 = (panda$core$Int64) {64};
panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, $tmp2817);
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block16; else goto block17;
block16:;
// line 1196
org$pandalanguage$pandac$parser$Token $tmp2820 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2820;
// line 1197
org$pandalanguage$pandac$parser$Token $tmp2821 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2822 = $tmp2821.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2823;
$tmp2823 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2823->value = $tmp2822;
panda$core$Int64 $tmp2824 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2825 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2824);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2826;
$tmp2826 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2826->value = $tmp2825;
ITable* $tmp2827 = ((panda$core$Equatable*) $tmp2823)->$class->itable;
while ($tmp2827->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2827 = $tmp2827->next;
}
$fn2829 $tmp2828 = $tmp2827->methods[0];
panda$core$Bit $tmp2830 = $tmp2828(((panda$core$Equatable*) $tmp2823), ((panda$core$Equatable*) $tmp2826));
bool $tmp2831 = $tmp2830.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2826)));
// unreffing REF($144:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2823)));
// unreffing REF($140:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2831) goto block18; else goto block20;
block18:;
// line 1199
org$pandalanguage$pandac$ASTNode* $tmp2832 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2833 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
*(&local4) = $tmp2832;
// line 1200
org$pandalanguage$pandac$ASTNode* $tmp2834 = *(&local4);
panda$core$Bit $tmp2835 = panda$core$Bit$init$builtin_bit($tmp2834 == NULL);
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block21; else goto block22;
block21:;
// line 1201
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2837 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
// unreffing REF($156:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2838 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1203
org$pandalanguage$pandac$ASTNode* $tmp2839 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2840 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2841 = *(&local1);
org$pandalanguage$pandac$Position $tmp2842 = $tmp2841.position;
org$pandalanguage$pandac$ASTNode* $tmp2843 = *(&local0);
panda$core$Int64 $tmp2844 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$Kind $tmp2845 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2844);
org$pandalanguage$pandac$ASTNode* $tmp2846 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2839, $tmp2840, $tmp2842, $tmp2843, $tmp2845, $tmp2846);
org$pandalanguage$pandac$ASTNode* $tmp2847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
*(&local0) = $tmp2839;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
// unreffing REF($191:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2848 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
// unreffing REF($156:org.pandalanguage.pandac.ASTNode?)
goto block19;
block20:;
// line 1
// line 1206
org$pandalanguage$pandac$parser$Token $tmp2849 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2849);
// line 1207
org$pandalanguage$pandac$parser$Token $tmp2850 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2850);
// line 1208
org$pandalanguage$pandac$ASTNode* $tmp2851 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
org$pandalanguage$pandac$ASTNode* $tmp2852 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2851;
block19:;
goto block5;
block17:;
// line 1212
org$pandalanguage$pandac$parser$Token $tmp2853 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2853);
// line 1213
org$pandalanguage$pandac$ASTNode* $tmp2854 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
org$pandalanguage$pandac$ASTNode* $tmp2855 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2854;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2856 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp2858 = (panda$core$Int64) {1179};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2859, $tmp2858, &$s2860);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1224
org$pandalanguage$pandac$ASTNode* $tmp2861 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
*(&local0) = $tmp2861;
// line 1225
org$pandalanguage$pandac$ASTNode* $tmp2863 = *(&local0);
panda$core$Bit $tmp2864 = panda$core$Bit$init$builtin_bit($tmp2863 == NULL);
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block1; else goto block2;
block1:;
// line 1226
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2866 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1228
goto block3;
block3:;
// line 1229
org$pandalanguage$pandac$parser$Token $tmp2867 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2867;
// line 1230
org$pandalanguage$pandac$parser$Token $tmp2868 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2869 = $tmp2868.kind;
panda$core$Int64 $tmp2870 = $tmp2869.$rawValue;
panda$core$Int64 $tmp2871 = (panda$core$Int64) {52};
panda$core$Bit $tmp2872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2870, $tmp2871);
bool $tmp2873 = $tmp2872.value;
if ($tmp2873) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2874 = (panda$core$Int64) {53};
panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2870, $tmp2874);
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2877 = (panda$core$Int64) {72};
panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2870, $tmp2877);
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block6; else goto block9;
block6:;
// line 1232
org$pandalanguage$pandac$ASTNode* $tmp2880 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2881 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
*(&local2) = $tmp2880;
// line 1233
org$pandalanguage$pandac$ASTNode* $tmp2882 = *(&local2);
panda$core$Bit $tmp2883 = panda$core$Bit$init$builtin_bit($tmp2882 == NULL);
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block10; else goto block11;
block10:;
// line 1234
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2885 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing REF($49:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp2886 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1236
org$pandalanguage$pandac$ASTNode* $tmp2887 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2888 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2889 = *(&local1);
org$pandalanguage$pandac$Position $tmp2890 = $tmp2889.position;
org$pandalanguage$pandac$ASTNode* $tmp2891 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2892 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2893 = $tmp2892.kind;
org$pandalanguage$pandac$ASTNode* $tmp2894 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2887, $tmp2888, $tmp2890, $tmp2891, $tmp2893, $tmp2894);
org$pandalanguage$pandac$ASTNode* $tmp2895 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
*(&local0) = $tmp2887;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
// unreffing REF($84:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2896 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing REF($49:org.pandalanguage.pandac.ASTNode?)
goto block5;
block9:;
// line 1239
org$pandalanguage$pandac$parser$Token $tmp2897 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2897);
// line 1240
org$pandalanguage$pandac$ASTNode* $tmp2898 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
org$pandalanguage$pandac$ASTNode* $tmp2899 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp2898;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2900 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2901 = $tmp2900.value;
if ($tmp2901) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2902 = (panda$core$Int64) {1223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2903, $tmp2902, &$s2904);
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
// line 1251
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1252
org$pandalanguage$pandac$parser$Token $tmp2905 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2906 = $tmp2905.kind;
panda$core$Int64 $tmp2907 = $tmp2906.$rawValue;
panda$core$Int64 $tmp2908 = (panda$core$Int64) {98};
panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2907, $tmp2908);
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2911 = (panda$core$Int64) {97};
panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2907, $tmp2911);
bool $tmp2913 = $tmp2912.value;
if ($tmp2913) goto block2; else goto block4;
block2:;
// line 1254
org$pandalanguage$pandac$ASTNode* $tmp2914 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1257
org$pandalanguage$pandac$ASTNode* $tmp2915 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2916 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
*(&local0) = $tmp2915;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
// unreffing REF($23:org.pandalanguage.pandac.ASTNode?)
// line 1258
org$pandalanguage$pandac$ASTNode* $tmp2917 = *(&local0);
panda$core$Bit $tmp2918 = panda$core$Bit$init$builtin_bit($tmp2917 == NULL);
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block5; else goto block6;
block5:;
// line 1259
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2920 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1263
org$pandalanguage$pandac$parser$Token $tmp2921 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2921;
// line 1264
org$pandalanguage$pandac$parser$Token $tmp2922 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2923 = $tmp2922.kind;
panda$core$Int64 $tmp2924 = $tmp2923.$rawValue;
panda$core$Int64 $tmp2925 = (panda$core$Int64) {98};
panda$core$Bit $tmp2926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2924, $tmp2925);
bool $tmp2927 = $tmp2926.value;
if ($tmp2927) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2928 = (panda$core$Int64) {97};
panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2924, $tmp2928);
bool $tmp2930 = $tmp2929.value;
if ($tmp2930) goto block8; else goto block10;
block8:;
// line 1266
org$pandalanguage$pandac$parser$Token $tmp2931 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp2931;
// line 1267
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1268
org$pandalanguage$pandac$parser$Token $tmp2932 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2933 = $tmp2932.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2934;
$tmp2934 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2934->value = $tmp2933;
panda$core$Int64 $tmp2935 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2936 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2935);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2937;
$tmp2937 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2937->value = $tmp2936;
ITable* $tmp2938 = ((panda$core$Equatable*) $tmp2934)->$class->itable;
while ($tmp2938->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2938 = $tmp2938->next;
}
$fn2940 $tmp2939 = $tmp2938->methods[1];
panda$core$Bit $tmp2941 = $tmp2939(((panda$core$Equatable*) $tmp2934), ((panda$core$Equatable*) $tmp2937));
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$parser$Token $tmp2943 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2944 = $tmp2943.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2945;
$tmp2945 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2945->value = $tmp2944;
panda$core$Int64 $tmp2946 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2947 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2946);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2948;
$tmp2948 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2948->value = $tmp2947;
ITable* $tmp2949 = ((panda$core$Equatable*) $tmp2945)->$class->itable;
while ($tmp2949->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2949 = $tmp2949->next;
}
$fn2951 $tmp2950 = $tmp2949->methods[1];
panda$core$Bit $tmp2952 = $tmp2950(((panda$core$Equatable*) $tmp2945), ((panda$core$Equatable*) $tmp2948));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2948)));
// unreffing REF($87:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2945)));
// unreffing REF($83:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local5) = $tmp2952;
goto block15;
block14:;
*(&local5) = $tmp2941;
goto block15;
block15:;
panda$core$Bit $tmp2953 = *(&local5);
bool $tmp2954 = $tmp2953.value;
if ($tmp2954) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$parser$Token $tmp2955 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2956 = $tmp2955.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2957;
$tmp2957 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2957->value = $tmp2956;
panda$core$Int64 $tmp2958 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2959 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2958);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2960;
$tmp2960 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2960->value = $tmp2959;
ITable* $tmp2961 = ((panda$core$Equatable*) $tmp2957)->$class->itable;
while ($tmp2961->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2961 = $tmp2961->next;
}
$fn2963 $tmp2962 = $tmp2961->methods[1];
panda$core$Bit $tmp2964 = $tmp2962(((panda$core$Equatable*) $tmp2957), ((panda$core$Equatable*) $tmp2960));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2960)));
// unreffing REF($109:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2957)));
// unreffing REF($105:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local4) = $tmp2964;
goto block18;
block17:;
*(&local4) = $tmp2953;
goto block18;
block18:;
panda$core$Bit $tmp2965 = *(&local4);
bool $tmp2966 = $tmp2965.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2937)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2934)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2966) goto block11; else goto block19;
block11:;
// line 1270
org$pandalanguage$pandac$ASTNode* $tmp2967 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2968 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
*(&local3) = $tmp2967;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
// unreffing REF($132:org.pandalanguage.pandac.ASTNode?)
// line 1271
org$pandalanguage$pandac$ASTNode* $tmp2969 = *(&local3);
panda$core$Bit $tmp2970 = panda$core$Bit$init$builtin_bit($tmp2969 == NULL);
bool $tmp2971 = $tmp2970.value;
if ($tmp2971) goto block20; else goto block21;
block20:;
// line 1272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2972 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2973 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2973));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
goto block12;
block19:;
// line 1
// line 1276
org$pandalanguage$pandac$ASTNode* $tmp2974 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block12:;
// line 1278
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1279
panda$core$Int64 $tmp2975 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2976 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2975);
org$pandalanguage$pandac$parser$Token$nullable $tmp2977 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2976);
panda$core$Bit $tmp2978 = panda$core$Bit$init$builtin_bit($tmp2977.nonnull);
bool $tmp2979 = $tmp2978.value;
if ($tmp2979) goto block22; else goto block24;
block22:;
// line 1280
org$pandalanguage$pandac$ASTNode* $tmp2980 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2981 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
*(&local6) = $tmp2980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
// unreffing REF($183:org.pandalanguage.pandac.ASTNode?)
// line 1281
org$pandalanguage$pandac$ASTNode* $tmp2982 = *(&local6);
panda$core$Bit $tmp2983 = panda$core$Bit$init$builtin_bit($tmp2982 == NULL);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block25; else goto block26;
block25:;
// line 1282
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2985 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2986 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2987 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1286
org$pandalanguage$pandac$ASTNode* $tmp2988 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2988));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1288
org$pandalanguage$pandac$ASTNode* $tmp2989 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2990 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token $tmp2991 = *(&local1);
org$pandalanguage$pandac$Position $tmp2992 = $tmp2991.position;
org$pandalanguage$pandac$ASTNode* $tmp2993 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2994 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2995 = $tmp2994.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2996;
$tmp2996 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2996->value = $tmp2995;
panda$core$Int64 $tmp2997 = (panda$core$Int64) {97};
org$pandalanguage$pandac$parser$Token$Kind $tmp2998 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2997);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2999;
$tmp2999 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2999->value = $tmp2998;
ITable* $tmp3000 = ((panda$core$Equatable*) $tmp2996)->$class->itable;
while ($tmp3000->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3000 = $tmp3000->next;
}
$fn3002 $tmp3001 = $tmp3000->methods[0];
panda$core$Bit $tmp3003 = $tmp3001(((panda$core$Equatable*) $tmp2996), ((panda$core$Equatable*) $tmp2999));
org$pandalanguage$pandac$ASTNode* $tmp3004 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3005 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q($tmp2989, $tmp2990, $tmp2992, $tmp2993, $tmp3003, $tmp3004, $tmp3005);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2999)));
// unreffing REF($240:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2996)));
// unreffing REF($236:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
// unreffing REF($229:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3006 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3007 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3008 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3008));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2989;
block10:;
// line 1292
org$pandalanguage$pandac$parser$Token $tmp3009 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3009);
// line 1293
org$pandalanguage$pandac$ASTNode* $tmp3010 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
org$pandalanguage$pandac$ASTNode* $tmp3011 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3011));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3010;
block7:;
panda$core$Bit $tmp3012 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3013 = $tmp3012.value;
if ($tmp3013) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3014 = (panda$core$Int64) {1250};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3015, $tmp3014, &$s3016);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1303
org$pandalanguage$pandac$ASTNode* $tmp3017 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3018 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
*(&local0) = $tmp3017;
// line 1304
org$pandalanguage$pandac$ASTNode* $tmp3019 = *(&local0);
panda$core$Bit $tmp3020 = panda$core$Bit$init$builtin_bit($tmp3019 == NULL);
bool $tmp3021 = $tmp3020.value;
if ($tmp3021) goto block1; else goto block2;
block1:;
// line 1305
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3022 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1307
goto block3;
block3:;
// line 1308
org$pandalanguage$pandac$parser$Token $tmp3023 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3023;
// line 1309
org$pandalanguage$pandac$parser$Token $tmp3024 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3025 = $tmp3024.kind;
panda$core$Int64 $tmp3026 = $tmp3025.$rawValue;
panda$core$Int64 $tmp3027 = (panda$core$Int64) {59};
panda$core$Bit $tmp3028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3027);
bool $tmp3029 = $tmp3028.value;
if ($tmp3029) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3030 = (panda$core$Int64) {60};
panda$core$Bit $tmp3031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3030);
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3033 = (panda$core$Int64) {61};
panda$core$Bit $tmp3034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3033);
bool $tmp3035 = $tmp3034.value;
if ($tmp3035) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp3036 = (panda$core$Int64) {62};
panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3036);
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp3039 = (panda$core$Int64) {63};
panda$core$Bit $tmp3040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3039);
bool $tmp3041 = $tmp3040.value;
if ($tmp3041) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp3042 = (panda$core$Int64) {64};
panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3042);
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp3045 = (panda$core$Int64) {65};
panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3045);
bool $tmp3047 = $tmp3046.value;
if ($tmp3047) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp3048 = (panda$core$Int64) {66};
panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3026, $tmp3048);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block6; else goto block14;
block6:;
// line 1318
org$pandalanguage$pandac$ASTNode* $tmp3051 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3052 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3051));
*(&local2) = $tmp3051;
// line 1319
org$pandalanguage$pandac$ASTNode* $tmp3053 = *(&local2);
panda$core$Bit $tmp3054 = panda$core$Bit$init$builtin_bit($tmp3053 == NULL);
bool $tmp3055 = $tmp3054.value;
if ($tmp3055) goto block15; else goto block16;
block15:;
// line 1320
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3056 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3056));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3051));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3057 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1322
org$pandalanguage$pandac$ASTNode* $tmp3058 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3059 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3060 = *(&local1);
org$pandalanguage$pandac$Position $tmp3061 = $tmp3060.position;
org$pandalanguage$pandac$ASTNode* $tmp3062 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3063 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3064 = $tmp3063.kind;
org$pandalanguage$pandac$ASTNode* $tmp3065 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3058, $tmp3059, $tmp3061, $tmp3062, $tmp3064, $tmp3065);
org$pandalanguage$pandac$ASTNode* $tmp3066 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3066));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
*(&local0) = $tmp3058;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
// unreffing REF($104:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3067 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3067));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3051));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
goto block5;
block14:;
// line 1325
org$pandalanguage$pandac$parser$Token $tmp3068 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3068);
// line 1326
org$pandalanguage$pandac$ASTNode* $tmp3069 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
org$pandalanguage$pandac$ASTNode* $tmp3070 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3069;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3071 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3073 = (panda$core$Int64) {1302};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3074, $tmp3073, &$s3075);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1336
org$pandalanguage$pandac$ASTNode* $tmp3076 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3077 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3076));
*(&local0) = $tmp3076;
// line 1337
org$pandalanguage$pandac$ASTNode* $tmp3078 = *(&local0);
panda$core$Bit $tmp3079 = panda$core$Bit$init$builtin_bit($tmp3078 == NULL);
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block1; else goto block2;
block1:;
// line 1338
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3081 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3076));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1340
goto block3;
block3:;
// line 1341
org$pandalanguage$pandac$parser$Token $tmp3082 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3082;
// line 1342
org$pandalanguage$pandac$parser$Token $tmp3083 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3084 = $tmp3083.kind;
panda$core$Int64 $tmp3085 = $tmp3084.$rawValue;
panda$core$Int64 $tmp3086 = (panda$core$Int64) {67};
panda$core$Bit $tmp3087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3085, $tmp3086);
bool $tmp3088 = $tmp3087.value;
if ($tmp3088) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3089 = (panda$core$Int64) {71};
panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3085, $tmp3089);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block6; else goto block8;
block6:;
// line 1344
org$pandalanguage$pandac$ASTNode* $tmp3092 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3093 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
*(&local2) = $tmp3092;
// line 1345
org$pandalanguage$pandac$ASTNode* $tmp3094 = *(&local2);
panda$core$Bit $tmp3095 = panda$core$Bit$init$builtin_bit($tmp3094 == NULL);
bool $tmp3096 = $tmp3095.value;
if ($tmp3096) goto block9; else goto block10;
block9:;
// line 1346
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3097 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3098 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3098));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3076));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1348
org$pandalanguage$pandac$ASTNode* $tmp3099 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3100 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3101 = *(&local1);
org$pandalanguage$pandac$Position $tmp3102 = $tmp3101.position;
org$pandalanguage$pandac$ASTNode* $tmp3103 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3104 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3105 = $tmp3104.kind;
org$pandalanguage$pandac$ASTNode* $tmp3106 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3099, $tmp3100, $tmp3102, $tmp3103, $tmp3105, $tmp3106);
org$pandalanguage$pandac$ASTNode* $tmp3107 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3107));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
*(&local0) = $tmp3099;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
// unreffing REF($80:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
goto block5;
block8:;
// line 1351
org$pandalanguage$pandac$parser$Token $tmp3109 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3109);
// line 1352
org$pandalanguage$pandac$ASTNode* $tmp3110 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
org$pandalanguage$pandac$ASTNode* $tmp3111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3111));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3076));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3110;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3112 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3113 = $tmp3112.value;
if ($tmp3113) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3114 = (panda$core$Int64) {1335};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3115, $tmp3114, &$s3116);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1362
org$pandalanguage$pandac$ASTNode* $tmp3117 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
*(&local0) = $tmp3117;
// line 1363
org$pandalanguage$pandac$ASTNode* $tmp3119 = *(&local0);
panda$core$Bit $tmp3120 = panda$core$Bit$init$builtin_bit($tmp3119 == NULL);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block1; else goto block2;
block1:;
// line 1364
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3122 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3122));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1366
goto block3;
block3:;
// line 1367
panda$core$Int64 $tmp3123 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3124 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3123);
org$pandalanguage$pandac$parser$Token$nullable $tmp3125 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3124);
*(&local1) = $tmp3125;
// line 1368
org$pandalanguage$pandac$parser$Token$nullable $tmp3126 = *(&local1);
panda$core$Bit $tmp3127 = panda$core$Bit$init$builtin_bit(!$tmp3126.nonnull);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block5; else goto block6;
block5:;
// line 1369
goto block4;
block6:;
// line 1371
org$pandalanguage$pandac$ASTNode* $tmp3129 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
*(&local2) = $tmp3129;
// line 1372
org$pandalanguage$pandac$ASTNode* $tmp3131 = *(&local2);
panda$core$Bit $tmp3132 = panda$core$Bit$init$builtin_bit($tmp3131 == NULL);
bool $tmp3133 = $tmp3132.value;
if ($tmp3133) goto block7; else goto block8;
block7:;
// line 1373
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3134 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3135));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1375
org$pandalanguage$pandac$ASTNode* $tmp3136 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3137 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp3138 = *(&local1);
org$pandalanguage$pandac$Position $tmp3139 = ((org$pandalanguage$pandac$parser$Token) $tmp3138.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3140 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp3141 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3142 = ((org$pandalanguage$pandac$parser$Token) $tmp3141.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp3143 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3136, $tmp3137, $tmp3139, $tmp3140, $tmp3142, $tmp3143);
org$pandalanguage$pandac$ASTNode* $tmp3144 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3144));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
*(&local0) = $tmp3136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3145 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
goto block3;
block4:;
// line 1377
org$pandalanguage$pandac$ASTNode* $tmp3146 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
org$pandalanguage$pandac$ASTNode* $tmp3147 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3147));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3146;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1384
panda$core$Int64 $tmp3148 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3149 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3148);
org$pandalanguage$pandac$parser$Token$nullable $tmp3150 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3149, &$s3151);
*(&local0) = $tmp3150;
// line 1385
org$pandalanguage$pandac$parser$Token$nullable $tmp3152 = *(&local0);
panda$core$Bit $tmp3153 = panda$core$Bit$init$builtin_bit(!$tmp3152.nonnull);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block1; else goto block2;
block1:;
// line 1386
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1388
org$pandalanguage$pandac$ASTNode* $tmp3155 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3156 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
*(&local1) = $tmp3155;
// line 1389
org$pandalanguage$pandac$ASTNode* $tmp3157 = *(&local1);
panda$core$Bit $tmp3158 = panda$core$Bit$init$builtin_bit($tmp3157 == NULL);
bool $tmp3159 = $tmp3158.value;
if ($tmp3159) goto block3; else goto block4;
block3:;
// line 1390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3160 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3160));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1392
panda$collections$ImmutableArray* $tmp3161 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3162 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
*(&local2) = $tmp3161;
// line 1393
panda$collections$ImmutableArray* $tmp3163 = *(&local2);
panda$core$Bit $tmp3164 = panda$core$Bit$init$builtin_bit($tmp3163 == NULL);
bool $tmp3165 = $tmp3164.value;
if ($tmp3165) goto block5; else goto block6;
block5:;
// line 1394
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3166 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3166));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3167 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1396
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1397
panda$core$Int64 $tmp3168 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3169 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3168);
org$pandalanguage$pandac$parser$Token$nullable $tmp3170 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3169);
panda$core$Bit $tmp3171 = panda$core$Bit$init$builtin_bit($tmp3170.nonnull);
bool $tmp3172 = $tmp3171.value;
if ($tmp3172) goto block7; else goto block9;
block7:;
// line 1398
org$pandalanguage$pandac$parser$Token $tmp3173 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3174 = $tmp3173.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3175;
$tmp3175 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3175->value = $tmp3174;
panda$core$Int64 $tmp3176 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3177 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3176);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3178;
$tmp3178 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3178->value = $tmp3177;
ITable* $tmp3179 = ((panda$core$Equatable*) $tmp3175)->$class->itable;
while ($tmp3179->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3179 = $tmp3179->next;
}
$fn3181 $tmp3180 = $tmp3179->methods[0];
panda$core$Bit $tmp3182 = $tmp3180(((panda$core$Equatable*) $tmp3175), ((panda$core$Equatable*) $tmp3178));
bool $tmp3183 = $tmp3182.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3178)));
// unreffing REF($94:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3175)));
// unreffing REF($90:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3183) goto block10; else goto block12;
block10:;
// line 1399
org$pandalanguage$pandac$ASTNode* $tmp3184 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3185 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3185));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3184));
*(&local3) = $tmp3184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3184));
// unreffing REF($106:org.pandalanguage.pandac.ASTNode?)
// line 1400
org$pandalanguage$pandac$ASTNode* $tmp3186 = *(&local3);
panda$core$Bit $tmp3187 = panda$core$Bit$init$builtin_bit($tmp3186 == NULL);
bool $tmp3188 = $tmp3187.value;
if ($tmp3188) goto block13; else goto block14;
block13:;
// line 1401
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3189 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3190 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3190));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3191 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3191));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1405
org$pandalanguage$pandac$ASTNode* $tmp3192 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3193 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3193));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3192));
*(&local3) = $tmp3192;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3192));
// unreffing REF($150:org.pandalanguage.pandac.ASTNode?)
// line 1406
org$pandalanguage$pandac$ASTNode* $tmp3194 = *(&local3);
panda$core$Bit $tmp3195 = panda$core$Bit$init$builtin_bit($tmp3194 == NULL);
bool $tmp3196 = $tmp3195.value;
if ($tmp3196) goto block15; else goto block16;
block15:;
// line 1407
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3197 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3197));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3198 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3198));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3199 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3199));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1412
org$pandalanguage$pandac$ASTNode* $tmp3200 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1414
org$pandalanguage$pandac$ASTNode* $tmp3201 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3202 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp3203 = *(&local0);
org$pandalanguage$pandac$Position $tmp3204 = ((org$pandalanguage$pandac$parser$Token) $tmp3203.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3205 = *(&local1);
panda$collections$ImmutableArray* $tmp3206 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3207 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp3201, $tmp3202, $tmp3204, $tmp3205, $tmp3206, $tmp3207);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
// unreffing REF($203:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3208 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3209 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3209));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3210 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3210));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3201;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1421
panda$core$Int64 $tmp3211 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3212 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3211);
org$pandalanguage$pandac$parser$Token$nullable $tmp3213 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3212, &$s3214);
panda$core$Bit $tmp3215 = panda$core$Bit$init$builtin_bit(!$tmp3213.nonnull);
bool $tmp3216 = $tmp3215.value;
if ($tmp3216) goto block1; else goto block2;
block1:;
// line 1422
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1424
panda$core$Bit $tmp3217 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3218 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3217);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3218));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return $tmp3218;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1431
panda$core$Int64 $tmp3219 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3220 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3219);
org$pandalanguage$pandac$parser$Token$nullable $tmp3221 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3220, &$s3222);
*(&local0) = $tmp3221;
// line 1432
org$pandalanguage$pandac$parser$Token$nullable $tmp3223 = *(&local0);
panda$core$Bit $tmp3224 = panda$core$Bit$init$builtin_bit(!$tmp3223.nonnull);
bool $tmp3225 = $tmp3224.value;
if ($tmp3225) goto block1; else goto block2;
block1:;
// line 1433
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1435
org$pandalanguage$pandac$parser$Token $tmp3226 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3227 = $tmp3226.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3228;
$tmp3228 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3228->value = $tmp3227;
panda$core$Int64 $tmp3229 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3230 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3229);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3231;
$tmp3231 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3231->value = $tmp3230;
ITable* $tmp3232 = ((panda$core$Equatable*) $tmp3228)->$class->itable;
while ($tmp3232->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3232 = $tmp3232->next;
}
$fn3234 $tmp3233 = $tmp3232->methods[0];
panda$core$Bit $tmp3235 = $tmp3233(((panda$core$Equatable*) $tmp3228), ((panda$core$Equatable*) $tmp3231));
bool $tmp3236 = $tmp3235.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3231)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3228)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3236) goto block3; else goto block4;
block3:;
// line 1436
org$pandalanguage$pandac$ASTNode* $tmp3237 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3237));
*(&local1) = $tmp3237;
// line 1437
org$pandalanguage$pandac$ASTNode* $tmp3239 = *(&local1);
panda$core$Bit $tmp3240 = panda$core$Bit$init$builtin_bit($tmp3239 == NULL);
bool $tmp3241 = $tmp3240.value;
if ($tmp3241) goto block5; else goto block6;
block5:;
// line 1438
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3242 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3242));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3237));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1440
org$pandalanguage$pandac$ASTNode* $tmp3243 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3244 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp3245 = *(&local0);
org$pandalanguage$pandac$Position $tmp3246 = ((org$pandalanguage$pandac$parser$Token) $tmp3245.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3247 = *(&local0);
panda$core$String* $tmp3248 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3247.value));
org$pandalanguage$pandac$ASTNode* $tmp3249 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3243, $tmp3244, $tmp3246, $tmp3248, $tmp3249);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3248));
// unreffing REF($68:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
// unreffing REF($61:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3250));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3237));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
return $tmp3243;
block4:;
// line 1442
org$pandalanguage$pandac$ASTNode* $tmp3251 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3252 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3253 = *(&local0);
org$pandalanguage$pandac$Position $tmp3254 = ((org$pandalanguage$pandac$parser$Token) $tmp3253.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3255 = *(&local0);
panda$core$String* $tmp3256 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3255.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3251, $tmp3252, $tmp3254, $tmp3256);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
// unreffing REF($90:org.pandalanguage.pandac.ASTNode)
return $tmp3251;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
// line 1449
panda$core$Int64 $tmp3257 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3258 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3257);
org$pandalanguage$pandac$parser$Token$nullable $tmp3259 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3258, &$s3260);
*(&local0) = $tmp3259;
// line 1450
org$pandalanguage$pandac$parser$Token$nullable $tmp3261 = *(&local0);
panda$core$Bit $tmp3262 = panda$core$Bit$init$builtin_bit(!$tmp3261.nonnull);
bool $tmp3263 = $tmp3262.value;
if ($tmp3263) goto block1; else goto block2;
block1:;
// line 1451
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1453
org$pandalanguage$pandac$ASTNode* $tmp3264 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3265 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
*(&local1) = $tmp3264;
// line 1454
org$pandalanguage$pandac$ASTNode* $tmp3266 = *(&local1);
panda$core$Bit $tmp3267 = panda$core$Bit$init$builtin_bit($tmp3266 == NULL);
bool $tmp3268 = $tmp3267.value;
if ($tmp3268) goto block3; else goto block4;
block3:;
// line 1455
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3269));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1457
panda$core$Int64 $tmp3270 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3271 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3270);
org$pandalanguage$pandac$parser$Token$nullable $tmp3272 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3271, &$s3273);
panda$core$Bit $tmp3274 = panda$core$Bit$init$builtin_bit(!$tmp3272.nonnull);
bool $tmp3275 = $tmp3274.value;
if ($tmp3275) goto block5; else goto block6;
block5:;
// line 1458
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3276));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1460
org$pandalanguage$pandac$ASTNode* $tmp3277 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3278 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3278));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
*(&local2) = $tmp3277;
// line 1461
org$pandalanguage$pandac$ASTNode* $tmp3279 = *(&local2);
panda$core$Bit $tmp3280 = panda$core$Bit$init$builtin_bit($tmp3279 == NULL);
bool $tmp3281 = $tmp3280.value;
if ($tmp3281) goto block7; else goto block8;
block7:;
// line 1462
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3282 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3283 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1464
panda$collections$ImmutableArray* $tmp3284 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3285 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
*(&local3) = $tmp3284;
// line 1465
panda$collections$ImmutableArray* $tmp3286 = *(&local3);
panda$core$Bit $tmp3287 = panda$core$Bit$init$builtin_bit($tmp3286 == NULL);
bool $tmp3288 = $tmp3287.value;
if ($tmp3288) goto block9; else goto block10;
block9:;
// line 1466
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
// unreffing REF($98:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3290 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3291 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1468
org$pandalanguage$pandac$ASTNode* $tmp3292 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3293 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$nullable $tmp3294 = *(&local0);
org$pandalanguage$pandac$Position $tmp3295 = ((org$pandalanguage$pandac$parser$Token) $tmp3294.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3296 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3297 = *(&local2);
panda$collections$ImmutableArray* $tmp3298 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3292, $tmp3293, $tmp3295, param1, $tmp3296, $tmp3297, $tmp3298);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
// unreffing REF($141:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
// unreffing REF($98:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3300 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3301 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3292;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 1475
panda$core$Int64 $tmp3302 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3303 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3302);
org$pandalanguage$pandac$parser$Token$nullable $tmp3304 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3303, &$s3305);
*(&local0) = $tmp3304;
// line 1476
org$pandalanguage$pandac$parser$Token$nullable $tmp3306 = *(&local0);
panda$core$Bit $tmp3307 = panda$core$Bit$init$builtin_bit(!$tmp3306.nonnull);
bool $tmp3308 = $tmp3307.value;
if ($tmp3308) goto block1; else goto block2;
block1:;
// line 1477
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1479
org$pandalanguage$pandac$ASTNode* $tmp3309 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
*(&local1) = $tmp3309;
// line 1480
org$pandalanguage$pandac$ASTNode* $tmp3311 = *(&local1);
panda$core$Bit $tmp3312 = panda$core$Bit$init$builtin_bit($tmp3311 == NULL);
bool $tmp3313 = $tmp3312.value;
if ($tmp3313) goto block3; else goto block4;
block3:;
// line 1481
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1483
panda$collections$ImmutableArray* $tmp3315 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3316 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
*(&local2) = $tmp3315;
// line 1484
panda$collections$ImmutableArray* $tmp3317 = *(&local2);
panda$core$Bit $tmp3318 = panda$core$Bit$init$builtin_bit($tmp3317 == NULL);
bool $tmp3319 = $tmp3318.value;
if ($tmp3319) goto block5; else goto block6;
block5:;
// line 1485
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3320 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3321 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1487
org$pandalanguage$pandac$ASTNode* $tmp3322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3323 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$nullable $tmp3324 = *(&local0);
org$pandalanguage$pandac$Position $tmp3325 = ((org$pandalanguage$pandac$parser$Token) $tmp3324.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3326 = *(&local1);
panda$collections$ImmutableArray* $tmp3327 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3322, $tmp3323, $tmp3325, param1, $tmp3326, $tmp3327);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3328 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3328));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3329 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3329));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3322;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1494
panda$core$Int64 $tmp3330 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3331 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3330);
org$pandalanguage$pandac$parser$Token$nullable $tmp3332 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3331, &$s3333);
*(&local0) = $tmp3332;
// line 1495
org$pandalanguage$pandac$parser$Token$nullable $tmp3334 = *(&local0);
panda$core$Bit $tmp3335 = panda$core$Bit$init$builtin_bit(!$tmp3334.nonnull);
bool $tmp3336 = $tmp3335.value;
if ($tmp3336) goto block1; else goto block2;
block1:;
// line 1496
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1498
panda$collections$ImmutableArray* $tmp3337 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3338 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
*(&local1) = $tmp3337;
// line 1499
panda$collections$ImmutableArray* $tmp3339 = *(&local1);
panda$core$Bit $tmp3340 = panda$core$Bit$init$builtin_bit($tmp3339 == NULL);
bool $tmp3341 = $tmp3340.value;
if ($tmp3341) goto block3; else goto block4;
block3:;
// line 1500
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3342 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1502
panda$core$Int64 $tmp3343 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3344 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3343);
org$pandalanguage$pandac$parser$Token$nullable $tmp3345 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3344, &$s3346);
panda$core$Bit $tmp3347 = panda$core$Bit$init$builtin_bit(!$tmp3345.nonnull);
bool $tmp3348 = $tmp3347.value;
if ($tmp3348) goto block5; else goto block6;
block5:;
// line 1503
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3349 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1505
org$pandalanguage$pandac$ASTNode* $tmp3350 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3351 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3351));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3350));
*(&local2) = $tmp3350;
// line 1506
org$pandalanguage$pandac$ASTNode* $tmp3352 = *(&local2);
panda$core$Bit $tmp3353 = panda$core$Bit$init$builtin_bit($tmp3352 == NULL);
bool $tmp3354 = $tmp3353.value;
if ($tmp3354) goto block7; else goto block8;
block7:;
// line 1507
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3350));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp3356 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1509
org$pandalanguage$pandac$ASTNode* $tmp3357 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3358 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$nullable $tmp3359 = *(&local0);
org$pandalanguage$pandac$Position $tmp3360 = ((org$pandalanguage$pandac$parser$Token) $tmp3359.value).position;
panda$collections$ImmutableArray* $tmp3361 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3362 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3357, $tmp3358, $tmp3360, param1, $tmp3361, $tmp3362);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3363 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3363));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3350));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp3364 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp3357;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
// line 1516
panda$core$Int64 $tmp3365 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3366 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3365);
org$pandalanguage$pandac$parser$Token$nullable $tmp3367 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3366, &$s3368);
*(&local0) = $tmp3367;
// line 1517
org$pandalanguage$pandac$parser$Token$nullable $tmp3369 = *(&local0);
panda$core$Bit $tmp3370 = panda$core$Bit$init$builtin_bit(!$tmp3369.nonnull);
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block1; else goto block2;
block1:;
// line 1518
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1520
panda$collections$ImmutableArray* $tmp3372 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
*(&local1) = $tmp3372;
// line 1521
panda$collections$ImmutableArray* $tmp3374 = *(&local1);
panda$core$Bit $tmp3375 = panda$core$Bit$init$builtin_bit($tmp3374 == NULL);
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block3; else goto block4;
block3:;
// line 1522
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3377 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3377));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1524
org$pandalanguage$pandac$ASTNode* $tmp3378 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3379 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token$nullable $tmp3380 = *(&local0);
org$pandalanguage$pandac$Position $tmp3381 = ((org$pandalanguage$pandac$parser$Token) $tmp3380.value).position;
panda$collections$ImmutableArray* $tmp3382 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3378, $tmp3379, $tmp3381, param1, $tmp3382);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3383 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3383));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp3378;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1531
panda$core$Int64 $tmp3384 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3385 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3384);
org$pandalanguage$pandac$parser$Token$nullable $tmp3386 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3385, &$s3387);
*(&local0) = $tmp3386;
// line 1532
org$pandalanguage$pandac$parser$Token$nullable $tmp3388 = *(&local0);
panda$core$Bit $tmp3389 = panda$core$Bit$init$builtin_bit(!$tmp3388.nonnull);
bool $tmp3390 = $tmp3389.value;
if ($tmp3390) goto block1; else goto block2;
block1:;
// line 1533
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1535
org$pandalanguage$pandac$ASTNode* $tmp3391 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
*(&local1) = $tmp3391;
// line 1536
org$pandalanguage$pandac$ASTNode* $tmp3393 = *(&local1);
panda$core$Bit $tmp3394 = panda$core$Bit$init$builtin_bit($tmp3393 == NULL);
bool $tmp3395 = $tmp3394.value;
if ($tmp3395) goto block3; else goto block4;
block3:;
// line 1537
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3396 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1539
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1540
panda$core$Int64 $tmp3397 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3398 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3397);
org$pandalanguage$pandac$parser$Token$nullable $tmp3399 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3398);
panda$core$Bit $tmp3400 = panda$core$Bit$init$builtin_bit($tmp3399.nonnull);
bool $tmp3401 = $tmp3400.value;
if ($tmp3401) goto block5; else goto block7;
block5:;
// line 1541
org$pandalanguage$pandac$ASTNode* $tmp3402 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3403 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3403));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
*(&local2) = $tmp3402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
// line 1542
org$pandalanguage$pandac$ASTNode* $tmp3404 = *(&local2);
panda$core$Bit $tmp3405 = panda$core$Bit$init$builtin_bit($tmp3404 == NULL);
bool $tmp3406 = $tmp3405.value;
if ($tmp3406) goto block8; else goto block9;
block8:;
// line 1543
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3407 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3407));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3408 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3408));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1547
org$pandalanguage$pandac$ASTNode* $tmp3409 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1549
org$pandalanguage$pandac$ASTNode* $tmp3410 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3411 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$nullable $tmp3412 = *(&local0);
org$pandalanguage$pandac$Position $tmp3413 = ((org$pandalanguage$pandac$parser$Token) $tmp3412.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3414 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3415 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3410, $tmp3411, $tmp3413, $tmp3414, $tmp3415);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
// unreffing REF($97:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3416 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3416));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3417 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3417));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3410;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$core$Bit* $tmp3418 = &param0->allowLambdas;
panda$core$Bit $tmp3419 = *$tmp3418;
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3421 = (panda$core$Int64) {1557};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3422, $tmp3421, &$s3423);
abort(); // unreachable
block1:;
// line 1558
panda$core$Int64 $tmp3424 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3425 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3424);
org$pandalanguage$pandac$parser$Token$nullable $tmp3426 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3425, &$s3427);
*(&local0) = $tmp3426;
// line 1559
org$pandalanguage$pandac$parser$Token$nullable $tmp3428 = *(&local0);
panda$core$Bit $tmp3429 = panda$core$Bit$init$builtin_bit(!$tmp3428.nonnull);
bool $tmp3430 = $tmp3429.value;
if ($tmp3430) goto block3; else goto block4;
block3:;
// line 1560
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1562
panda$core$Bit $tmp3431 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3432 = &param0->allowLambdas;
*$tmp3432 = $tmp3431;
// line 1563
panda$collections$Array* $tmp3433 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3433);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3434 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3434));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
*(&local1) = $tmp3433;
// line 1564
org$pandalanguage$pandac$ASTNode* $tmp3435 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3436 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
*(&local2) = $tmp3435;
// line 1565
org$pandalanguage$pandac$ASTNode* $tmp3437 = *(&local2);
panda$core$Bit $tmp3438 = panda$core$Bit$init$builtin_bit($tmp3437 == NULL);
bool $tmp3439 = $tmp3438.value;
if ($tmp3439) goto block5; else goto block6;
block5:;
// line 1566
panda$core$Bit $tmp3440 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3441 = &param0->allowLambdas;
*$tmp3441 = $tmp3440;
// line 1567
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3442 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3442));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3443 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3443));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1569
panda$collections$Array* $tmp3444 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3445 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3444, ((panda$core$Object*) $tmp3445));
// line 1570
goto block7;
block7:;
panda$core$Int64 $tmp3446 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3447 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3446);
org$pandalanguage$pandac$parser$Token$nullable $tmp3448 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3447);
panda$core$Bit $tmp3449 = panda$core$Bit$init$builtin_bit($tmp3448.nonnull);
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block8; else goto block9;
block8:;
// line 1571
org$pandalanguage$pandac$ASTNode* $tmp3451 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3452 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3452));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3451));
*(&local2) = $tmp3451;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3451));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
// line 1572
org$pandalanguage$pandac$ASTNode* $tmp3453 = *(&local2);
panda$core$Bit $tmp3454 = panda$core$Bit$init$builtin_bit($tmp3453 == NULL);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block10; else goto block11;
block10:;
// line 1573
panda$core$Bit $tmp3456 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3457 = &param0->allowLambdas;
*$tmp3457 = $tmp3456;
// line 1574
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3458 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3458));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3459 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3459));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1576
panda$collections$Array* $tmp3460 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3461 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3460, ((panda$core$Object*) $tmp3461));
goto block7;
block9:;
// line 1578
panda$core$Bit $tmp3462 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3463 = &param0->allowLambdas;
*$tmp3463 = $tmp3462;
// line 1579
panda$collections$ImmutableArray* $tmp3464 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3465 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3465));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
*(&local3) = $tmp3464;
// line 1580
panda$collections$ImmutableArray* $tmp3466 = *(&local3);
panda$core$Bit $tmp3467 = panda$core$Bit$init$builtin_bit($tmp3466 == NULL);
bool $tmp3468 = $tmp3467.value;
if ($tmp3468) goto block12; else goto block13;
block12:;
// line 1581
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3469 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3469));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
// unreffing REF($146:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3470 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3470));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3471 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3471));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1583
org$pandalanguage$pandac$ASTNode* $tmp3472 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3473 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token$nullable $tmp3474 = *(&local0);
org$pandalanguage$pandac$Position $tmp3475 = ((org$pandalanguage$pandac$parser$Token) $tmp3474.value).position;
panda$collections$Array* $tmp3476 = *(&local1);
panda$collections$ImmutableArray* $tmp3477 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3476);
panda$collections$ImmutableArray* $tmp3478 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3472, $tmp3473, $tmp3475, $tmp3477, $tmp3478);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3477));
// unreffing REF($196:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3472));
// unreffing REF($189:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3479 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3479));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
// unreffing REF($146:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp3480 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3481 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3481));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp3472;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token local6;
// line 1590
panda$core$Int64 $tmp3482 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3483 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3482);
org$pandalanguage$pandac$parser$Token$nullable $tmp3484 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3483, &$s3485);
*(&local0) = $tmp3484;
// line 1591
org$pandalanguage$pandac$parser$Token$nullable $tmp3486 = *(&local0);
panda$core$Bit $tmp3487 = panda$core$Bit$init$builtin_bit(!$tmp3486.nonnull);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block1; else goto block2;
block1:;
// line 1592
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1594
org$pandalanguage$pandac$ASTNode* $tmp3489 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3490 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
*(&local1) = $tmp3489;
// line 1595
org$pandalanguage$pandac$ASTNode* $tmp3491 = *(&local1);
panda$core$Bit $tmp3492 = panda$core$Bit$init$builtin_bit($tmp3491 == NULL);
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block3; else goto block4;
block3:;
// line 1596
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3494 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3494));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1598
panda$core$Int64 $tmp3495 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3496 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3495);
org$pandalanguage$pandac$parser$Token$nullable $tmp3497 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3496, &$s3498);
panda$core$Bit $tmp3499 = panda$core$Bit$init$builtin_bit(!$tmp3497.nonnull);
bool $tmp3500 = $tmp3499.value;
if ($tmp3500) goto block5; else goto block6;
block5:;
// line 1599
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3501 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3501));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1601
panda$collections$Array* $tmp3502 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3502);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3503 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
*(&local2) = $tmp3502;
// line 1602
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3504 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3504));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 1603
goto block7;
block7:;
// line 1604
org$pandalanguage$pandac$parser$Token $tmp3505 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3505;
// line 1605
org$pandalanguage$pandac$parser$Token $tmp3506 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3507 = $tmp3506.kind;
panda$core$Int64 $tmp3508 = $tmp3507.$rawValue;
panda$core$Int64 $tmp3509 = (panda$core$Int64) {101};
panda$core$Bit $tmp3510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3508, $tmp3509);
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block10; else goto block11;
block10:;
// line 1607
goto block8;
block11:;
panda$core$Int64 $tmp3512 = (panda$core$Int64) {40};
panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3508, $tmp3512);
bool $tmp3514 = $tmp3513.value;
if ($tmp3514) goto block12; else goto block13;
block12:;
// line 1610
org$pandalanguage$pandac$ASTNode* $tmp3515 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3516 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
*(&local5) = $tmp3515;
// line 1611
org$pandalanguage$pandac$ASTNode* $tmp3517 = *(&local5);
panda$core$Bit $tmp3518 = panda$core$Bit$init$builtin_bit($tmp3517 == NULL);
bool $tmp3519 = $tmp3518.value;
if ($tmp3519) goto block14; else goto block15;
block14:;
// line 1612
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3520 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3520));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp3521 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3521));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3522 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3522));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($63:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3523 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3523));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1614
panda$collections$Array* $tmp3524 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3525 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3524, ((panda$core$Object*) $tmp3525));
org$pandalanguage$pandac$ASTNode* $tmp3526 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3526));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
goto block9;
block13:;
panda$core$Int64 $tmp3527 = (panda$core$Int64) {41};
panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3508, $tmp3527);
bool $tmp3529 = $tmp3528.value;
if ($tmp3529) goto block16; else goto block17;
block16:;
// line 1617
org$pandalanguage$pandac$parser$Token $tmp3530 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3530;
// line 1618
panda$collections$ImmutableArray* $tmp3531 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp3532 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3532));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
*(&local3) = $tmp3531;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
// unreffing REF($172:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 1619
panda$collections$ImmutableArray* $tmp3533 = *(&local3);
panda$core$Bit $tmp3534 = panda$core$Bit$init$builtin_bit($tmp3533 == NULL);
bool $tmp3535 = $tmp3534.value;
if ($tmp3535) goto block18; else goto block19;
block18:;
// line 1620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3536 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3537 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3537));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($63:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3538 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3538));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1622
goto block8;
block17:;
// line 1625
org$pandalanguage$pandac$parser$Token $tmp3539 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1626
org$pandalanguage$pandac$parser$Token $tmp3540 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3541 = *(&local4);
panda$core$String* $tmp3542 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3541);
panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3544, $tmp3542);
panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, &$s3546);
panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3548, $tmp3545);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3540, $tmp3547);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3547));
// unreffing REF($223:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3545));
// unreffing REF($222:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3543));
// unreffing REF($221:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3542));
// unreffing REF($220:panda.core.String)
// line 1628
goto block8;
block9:;
goto block7;
block8:;
// line 1632
panda$core$Int64 $tmp3549 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3550 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3549);
org$pandalanguage$pandac$parser$Token$nullable $tmp3551 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3550, &$s3552);
panda$core$Bit $tmp3553 = panda$core$Bit$init$builtin_bit(!$tmp3551.nonnull);
bool $tmp3554 = $tmp3553.value;
if ($tmp3554) goto block20; else goto block21;
block20:;
// line 1633
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3555 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3556 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3556));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($63:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3557 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 1635
panda$collections$ImmutableArray* $tmp3558 = *(&local3);
panda$core$Bit $tmp3559 = panda$core$Bit$init$builtin_bit($tmp3558 != NULL);
bool $tmp3560 = $tmp3559.value;
if ($tmp3560) goto block22; else goto block23;
block22:;
// line 1636
org$pandalanguage$pandac$ASTNode* $tmp3561 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3562 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3563 = *(&local0);
org$pandalanguage$pandac$Position $tmp3564 = ((org$pandalanguage$pandac$parser$Token) $tmp3563.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3565 = *(&local1);
panda$collections$Array* $tmp3566 = *(&local2);
panda$collections$ImmutableArray* $tmp3567 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3566);
panda$collections$ImmutableArray* $tmp3568 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3561, $tmp3562, $tmp3564, $tmp3565, $tmp3567, $tmp3568);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3567));
// unreffing REF($289:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
// unreffing REF($280:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3569 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3569));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3570 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($63:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3571 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3571));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3561;
block23:;
// line 1638
org$pandalanguage$pandac$ASTNode* $tmp3572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3573 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3574 = *(&local0);
org$pandalanguage$pandac$Position $tmp3575 = ((org$pandalanguage$pandac$parser$Token) $tmp3574.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3576 = *(&local1);
panda$collections$Array* $tmp3577 = *(&local2);
panda$collections$ImmutableArray* $tmp3578 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3577);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3572, $tmp3573, $tmp3575, $tmp3576, $tmp3578, ((panda$collections$ImmutableArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3578));
// unreffing REF($334:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3572));
// unreffing REF($325:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3579 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3579));
// unreffing other
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$Array* $tmp3580 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3580));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($63:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3581 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3581));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
return $tmp3572;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1645
panda$core$Int64 $tmp3582 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3583 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3582);
org$pandalanguage$pandac$parser$Token$nullable $tmp3584 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3583, &$s3585);
*(&local0) = $tmp3584;
// line 1646
org$pandalanguage$pandac$parser$Token$nullable $tmp3586 = *(&local0);
panda$core$Bit $tmp3587 = panda$core$Bit$init$builtin_bit(!$tmp3586.nonnull);
bool $tmp3588 = $tmp3587.value;
if ($tmp3588) goto block1; else goto block2;
block1:;
// line 1647
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 1649
panda$collections$Array* $tmp3589 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3589);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3590 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
*(&local1) = $tmp3589;
// line 1650
goto block3;
block3:;
// line 1651
org$pandalanguage$pandac$parser$Token $tmp3591 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3592 = $tmp3591.kind;
panda$core$Int64 $tmp3593 = $tmp3592.$rawValue;
panda$core$Int64 $tmp3594 = (panda$core$Int64) {101};
panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3593, $tmp3594);
bool $tmp3596 = $tmp3595.value;
if ($tmp3596) goto block6; else goto block7;
block6:;
// line 1653
org$pandalanguage$pandac$parser$Token $tmp3597 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1654
goto block4;
block7:;
panda$core$Int64 $tmp3598 = (panda$core$Int64) {29};
panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3593, $tmp3598);
bool $tmp3600 = $tmp3599.value;
if ($tmp3600) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3601 = (panda$core$Int64) {30};
panda$core$Bit $tmp3602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3593, $tmp3601);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3604 = (panda$core$Int64) {28};
panda$core$Bit $tmp3605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3593, $tmp3604);
bool $tmp3606 = $tmp3605.value;
if ($tmp3606) goto block8; else goto block11;
block8:;
// line 1657
org$pandalanguage$pandac$ASTNode* $tmp3607 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3608 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
*(&local2) = $tmp3607;
// line 1658
org$pandalanguage$pandac$ASTNode* $tmp3609 = *(&local2);
panda$core$Bit $tmp3610 = panda$core$Bit$init$builtin_bit($tmp3609 == NULL);
bool $tmp3611 = $tmp3610.value;
if ($tmp3611) goto block12; else goto block13;
block12:;
// line 1659
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3612 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3612));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3613 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block13:;
// line 1661
panda$core$Int64 $tmp3614 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3615 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3614);
org$pandalanguage$pandac$parser$Token$nullable $tmp3616 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3615, &$s3617);
panda$core$Bit $tmp3618 = panda$core$Bit$init$builtin_bit(!$tmp3616.nonnull);
bool $tmp3619 = $tmp3618.value;
if ($tmp3619) goto block14; else goto block15;
block14:;
// line 1662
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3621 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block15:;
// line 1664
panda$collections$Array* $tmp3622 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3623 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3622, ((panda$core$Object*) $tmp3623));
// line 1665
org$pandalanguage$pandac$ASTNode* $tmp3624 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3624));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
goto block4;
block11:;
// line 1668
org$pandalanguage$pandac$ASTNode* $tmp3625 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3626 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3625));
*(&local3) = $tmp3625;
// line 1669
org$pandalanguage$pandac$ASTNode* $tmp3627 = *(&local3);
panda$core$Bit $tmp3628 = panda$core$Bit$init$builtin_bit($tmp3627 == NULL);
bool $tmp3629 = $tmp3628.value;
if ($tmp3629) goto block16; else goto block17;
block16:;
// line 1670
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3630 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3630));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3625));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3631 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3631));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block17:;
// line 1672
panda$collections$Array* $tmp3632 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3633 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3632, ((panda$core$Object*) $tmp3633));
org$pandalanguage$pandac$ASTNode* $tmp3634 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3634));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3625));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode?)
goto block5;
block5:;
goto block3;
block4:;
// line 1676
panda$collections$Array* $tmp3635 = *(&local1);
panda$collections$ImmutableArray* $tmp3636 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3635);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3636));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3636));
// unreffing REF($187:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$collections$Array* $tmp3637 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3637));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp3636;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$ImmutableArray* local0 = NULL;
// line 1683
panda$collections$ImmutableArray* $tmp3638 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3639 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
*(&local0) = $tmp3638;
// line 1684
panda$collections$ImmutableArray* $tmp3640 = *(&local0);
panda$core$Bit $tmp3641 = panda$core$Bit$init$builtin_bit($tmp3640 == NULL);
bool $tmp3642 = $tmp3641.value;
if ($tmp3642) goto block1; else goto block2;
block1:;
// line 1685
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3643 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3643));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
// unreffing REF($1:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1687
org$pandalanguage$pandac$ASTNode* $tmp3644 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3645 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Position $tmp3646 = org$pandalanguage$pandac$Position$init();
panda$collections$ImmutableArray* $tmp3647 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3644, $tmp3645, $tmp3646, $tmp3647);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp3648 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3648));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
// unreffing REF($1:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp3644;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1694
org$pandalanguage$pandac$ASTNode* $tmp3649 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3650 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
*(&local0) = $tmp3649;
// line 1695
org$pandalanguage$pandac$ASTNode* $tmp3651 = *(&local0);
panda$core$Bit $tmp3652 = panda$core$Bit$init$builtin_bit($tmp3651 == NULL);
bool $tmp3653 = $tmp3652.value;
if ($tmp3653) goto block1; else goto block2;
block1:;
// line 1696
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3654 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3654));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1698
org$pandalanguage$pandac$parser$Token $tmp3655 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3656 = $tmp3655.kind;
panda$core$Int64 $tmp3657 = $tmp3656.$rawValue;
panda$core$Int64 $tmp3658 = (panda$core$Int64) {74};
panda$core$Bit $tmp3659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3658);
bool $tmp3660 = $tmp3659.value;
if ($tmp3660) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3661 = (panda$core$Int64) {75};
panda$core$Bit $tmp3662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3661);
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3664 = (panda$core$Int64) {76};
panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3664);
bool $tmp3666 = $tmp3665.value;
if ($tmp3666) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3667 = (panda$core$Int64) {77};
panda$core$Bit $tmp3668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3667);
bool $tmp3669 = $tmp3668.value;
if ($tmp3669) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3670 = (panda$core$Int64) {78};
panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3670);
bool $tmp3672 = $tmp3671.value;
if ($tmp3672) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3673 = (panda$core$Int64) {79};
panda$core$Bit $tmp3674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3673);
bool $tmp3675 = $tmp3674.value;
if ($tmp3675) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3676 = (panda$core$Int64) {80};
panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3676);
bool $tmp3678 = $tmp3677.value;
if ($tmp3678) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3679 = (panda$core$Int64) {81};
panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3679);
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3682 = (panda$core$Int64) {82};
panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3682);
bool $tmp3684 = $tmp3683.value;
if ($tmp3684) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3685 = (panda$core$Int64) {83};
panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3685);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3688 = (panda$core$Int64) {84};
panda$core$Bit $tmp3689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3688);
bool $tmp3690 = $tmp3689.value;
if ($tmp3690) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3691 = (panda$core$Int64) {85};
panda$core$Bit $tmp3692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3691);
bool $tmp3693 = $tmp3692.value;
if ($tmp3693) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3694 = (panda$core$Int64) {86};
panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3694);
bool $tmp3696 = $tmp3695.value;
if ($tmp3696) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3697 = (panda$core$Int64) {87};
panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3697);
bool $tmp3699 = $tmp3698.value;
if ($tmp3699) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3700 = (panda$core$Int64) {88};
panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3700);
bool $tmp3702 = $tmp3701.value;
if ($tmp3702) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3703 = (panda$core$Int64) {89};
panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3703);
bool $tmp3705 = $tmp3704.value;
if ($tmp3705) goto block4; else goto block20;
block4:;
// line 1704
org$pandalanguage$pandac$parser$Token $tmp3706 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3706;
// line 1705
org$pandalanguage$pandac$ASTNode* $tmp3707 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3708 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3707));
*(&local2) = $tmp3707;
// line 1706
org$pandalanguage$pandac$ASTNode* $tmp3709 = *(&local2);
panda$core$Bit $tmp3710 = panda$core$Bit$init$builtin_bit($tmp3709 == NULL);
bool $tmp3711 = $tmp3710.value;
if ($tmp3711) goto block21; else goto block22;
block21:;
// line 1707
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3712 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3712));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3707));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3713 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3713));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1709
org$pandalanguage$pandac$ASTNode* $tmp3714 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3715 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3716 = *(&local0);
$fn3718 $tmp3717 = ($fn3718) $tmp3716->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3719 = $tmp3717($tmp3716);
org$pandalanguage$pandac$ASTNode* $tmp3720 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3721 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3722 = $tmp3721.kind;
org$pandalanguage$pandac$ASTNode* $tmp3723 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3714, $tmp3715, $tmp3719, $tmp3720, $tmp3722, $tmp3723);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3714));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3714));
// unreffing REF($134:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3724 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3724));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3707));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3725 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3725));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3714;
block20:;
panda$core$Int64 $tmp3726 = (panda$core$Int64) {59};
panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, $tmp3726);
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block23; else goto block24;
block23:;
// line 1712
org$pandalanguage$pandac$parser$Token $tmp3729 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3729, &$s3730);
// line 1713
org$pandalanguage$pandac$parser$Token $tmp3731 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3731;
// line 1714
org$pandalanguage$pandac$ASTNode* $tmp3732 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3733 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3733));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3732));
*(&local4) = $tmp3732;
// line 1715
org$pandalanguage$pandac$ASTNode* $tmp3734 = *(&local4);
panda$core$Bit $tmp3735 = panda$core$Bit$init$builtin_bit($tmp3734 == NULL);
bool $tmp3736 = $tmp3735.value;
if ($tmp3736) goto block25; else goto block26;
block25:;
// line 1716
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3737 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3732));
// unreffing REF($181:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3738 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3738));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1718
org$pandalanguage$pandac$ASTNode* $tmp3739 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3740 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3741 = *(&local0);
$fn3743 $tmp3742 = ($fn3743) $tmp3741->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3744 = $tmp3742($tmp3741);
org$pandalanguage$pandac$ASTNode* $tmp3745 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3746 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3747 = $tmp3746.kind;
org$pandalanguage$pandac$ASTNode* $tmp3748 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3739, $tmp3740, $tmp3744, $tmp3745, $tmp3747, $tmp3748);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3739));
// unreffing REF($216:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3749 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3749));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3732));
// unreffing REF($181:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3750 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3750));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3739;
block24:;
// line 1721
org$pandalanguage$pandac$ASTNode* $tmp3751 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3751));
org$pandalanguage$pandac$ASTNode* $tmp3752 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3752));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3751;
block3:;
panda$core$Bit $tmp3753 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3754 = $tmp3753.value;
if ($tmp3754) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3755 = (panda$core$Int64) {1693};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3756, $tmp3755, &$s3757);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1730
org$pandalanguage$pandac$ASTNode* $tmp3758 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3759 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3759));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
*(&local0) = $tmp3758;
// line 1731
org$pandalanguage$pandac$ASTNode* $tmp3760 = *(&local0);
panda$core$Bit $tmp3761 = panda$core$Bit$init$builtin_bit($tmp3760 == NULL);
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block1; else goto block2;
block1:;
// line 1732
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3763 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3763));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1734
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1735
panda$core$Int64 $tmp3764 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3765 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3764);
org$pandalanguage$pandac$parser$Token$nullable $tmp3766 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3765);
panda$core$Bit $tmp3767 = panda$core$Bit$init$builtin_bit($tmp3766.nonnull);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block3; else goto block5;
block3:;
// line 1736
org$pandalanguage$pandac$ASTNode* $tmp3769 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3770 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3770));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3769));
*(&local1) = $tmp3769;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3769));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 1737
org$pandalanguage$pandac$ASTNode* $tmp3771 = *(&local1);
panda$core$Bit $tmp3772 = panda$core$Bit$init$builtin_bit($tmp3771 == NULL);
bool $tmp3773 = $tmp3772.value;
if ($tmp3773) goto block6; else goto block7;
block6:;
// line 1738
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3774 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3775 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3775));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1741
org$pandalanguage$pandac$parser$Token $tmp3776 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3777 = $tmp3776.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3778;
$tmp3778 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3778->value = $tmp3777;
panda$core$Int64 $tmp3779 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3780 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3779);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3781;
$tmp3781 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3781->value = $tmp3780;
ITable* $tmp3782 = ((panda$core$Equatable*) $tmp3778)->$class->itable;
while ($tmp3782->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3782 = $tmp3782->next;
}
$fn3784 $tmp3783 = $tmp3782->methods[0];
panda$core$Bit $tmp3785 = $tmp3783(((panda$core$Equatable*) $tmp3778), ((panda$core$Equatable*) $tmp3781));
bool $tmp3786 = $tmp3785.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3781)));
// unreffing REF($79:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3778)));
// unreffing REF($75:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3786) goto block8; else goto block10;
block8:;
// line 1742
org$pandalanguage$pandac$parser$Token $tmp3787 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3787, &$s3788);
// line 1743
org$pandalanguage$pandac$ASTNode* $tmp3789 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3790 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3790));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
*(&local1) = $tmp3789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode?)
// line 1744
org$pandalanguage$pandac$ASTNode* $tmp3791 = *(&local1);
panda$core$Bit $tmp3792 = panda$core$Bit$init$builtin_bit($tmp3791 == NULL);
bool $tmp3793 = $tmp3792.value;
if ($tmp3793) goto block11; else goto block12;
block11:;
// line 1745
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3794 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3794));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3795 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3795));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1749
org$pandalanguage$pandac$ASTNode* $tmp3796 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1751
org$pandalanguage$pandac$ASTNode* $tmp3797 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3798 = (panda$core$Int64) {13};
org$pandalanguage$pandac$ASTNode* $tmp3799 = *(&local0);
$fn3801 $tmp3800 = ($fn3801) $tmp3799->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3802 = $tmp3800($tmp3799);
org$pandalanguage$pandac$ASTNode* $tmp3803 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3804 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3797, $tmp3798, $tmp3802, $tmp3803, $tmp3804);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
// unreffing REF($139:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3805 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3805));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3806 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3806));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp3797;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1758
org$pandalanguage$pandac$parser$Token $tmp3807 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3807;
// line 1759
// line 1760
org$pandalanguage$pandac$parser$Token $tmp3808 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3809 = $tmp3808.kind;
panda$core$Int64 $tmp3810 = $tmp3809.$rawValue;
panda$core$Int64 $tmp3811 = (panda$core$Int64) {24};
panda$core$Bit $tmp3812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3810, $tmp3811);
bool $tmp3813 = $tmp3812.value;
if ($tmp3813) goto block2; else goto block3;
block2:;
// line 1762
panda$core$Int64 $tmp3814 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3815 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3814);
*(&local1) = $tmp3815;
goto block1;
block3:;
panda$core$Int64 $tmp3816 = (panda$core$Int64) {25};
panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3810, $tmp3816);
bool $tmp3818 = $tmp3817.value;
if ($tmp3818) goto block4; else goto block5;
block4:;
// line 1765
panda$core$Int64 $tmp3819 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3820 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3819);
*(&local1) = $tmp3820;
goto block1;
block5:;
panda$core$Int64 $tmp3821 = (panda$core$Int64) {26};
panda$core$Bit $tmp3822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3810, $tmp3821);
bool $tmp3823 = $tmp3822.value;
if ($tmp3823) goto block6; else goto block7;
block6:;
// line 1768
panda$core$Int64 $tmp3824 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3825 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3824);
*(&local1) = $tmp3825;
goto block1;
block7:;
panda$core$Int64 $tmp3826 = (panda$core$Int64) {27};
panda$core$Bit $tmp3827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3810, $tmp3826);
bool $tmp3828 = $tmp3827.value;
if ($tmp3828) goto block8; else goto block9;
block8:;
// line 1771
panda$core$Int64 $tmp3829 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3830 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3829);
*(&local1) = $tmp3830;
goto block1;
block9:;
// line 1774
org$pandalanguage$pandac$parser$Token $tmp3831 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3831, &$s3832);
goto block1;
block1:;
// line 1777
panda$collections$Array* $tmp3833 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3833);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3834 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3834));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
*(&local2) = $tmp3833;
// line 1778
org$pandalanguage$pandac$ASTNode* $tmp3835 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3836 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
*(&local3) = $tmp3835;
// line 1779
org$pandalanguage$pandac$ASTNode* $tmp3837 = *(&local3);
panda$core$Bit $tmp3838 = panda$core$Bit$init$builtin_bit($tmp3837 == NULL);
bool $tmp3839 = $tmp3838.value;
if ($tmp3839) goto block10; else goto block11;
block10:;
// line 1780
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3840 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3840));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3841 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3841));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
// unreffing REF($49:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1782
panda$collections$Array* $tmp3842 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3843 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3842, ((panda$core$Object*) $tmp3843));
// line 1783
goto block12;
block12:;
panda$core$Int64 $tmp3844 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3845 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3844);
org$pandalanguage$pandac$parser$Token$nullable $tmp3846 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3845);
panda$core$Bit $tmp3847 = panda$core$Bit$init$builtin_bit($tmp3846.nonnull);
bool $tmp3848 = $tmp3847.value;
if ($tmp3848) goto block13; else goto block14;
block13:;
// line 1784
org$pandalanguage$pandac$ASTNode* $tmp3849 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3850 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3850));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
*(&local4) = $tmp3849;
// line 1785
org$pandalanguage$pandac$ASTNode* $tmp3851 = *(&local4);
panda$core$Bit $tmp3852 = panda$core$Bit$init$builtin_bit($tmp3851 == NULL);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block15; else goto block16;
block15:;
// line 1786
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3854 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3854));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
// unreffing REF($111:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp3855 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3855));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3856 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
// unreffing REF($49:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1788
panda$collections$Array* $tmp3857 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3858 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3857, ((panda$core$Object*) $tmp3858));
org$pandalanguage$pandac$ASTNode* $tmp3859 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3859));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
// unreffing REF($111:org.pandalanguage.pandac.ASTNode?)
goto block12;
block14:;
// line 1790
org$pandalanguage$pandac$ASTNode* $tmp3860 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3861 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token $tmp3862 = *(&local0);
org$pandalanguage$pandac$Position $tmp3863 = $tmp3862.position;
org$pandalanguage$pandac$Variable$Kind $tmp3864 = *(&local1);
panda$collections$Array* $tmp3865 = *(&local2);
panda$collections$ImmutableArray* $tmp3866 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3865);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3860, $tmp3861, $tmp3863, $tmp3864, $tmp3866);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3866));
// unreffing REF($177:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3860));
// unreffing REF($170:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3867 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3867));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3868 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3868));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
// unreffing REF($49:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp3860;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1797
panda$core$Int64 $tmp3869 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp3870 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3869);
org$pandalanguage$pandac$parser$Token$nullable $tmp3871 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3870, &$s3872);
*(&local0) = $tmp3871;
// line 1798
org$pandalanguage$pandac$parser$Token$nullable $tmp3873 = *(&local0);
panda$core$Bit $tmp3874 = panda$core$Bit$init$builtin_bit(!$tmp3873.nonnull);
bool $tmp3875 = $tmp3874.value;
if ($tmp3875) goto block1; else goto block2;
block1:;
// line 1799
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1801
panda$core$Int64 $tmp3876 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp3877 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3876);
org$pandalanguage$pandac$parser$Token$nullable $tmp3878 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3877, &$s3879);
panda$core$Bit $tmp3880 = panda$core$Bit$init$builtin_bit(!$tmp3878.nonnull);
bool $tmp3881 = $tmp3880.value;
if ($tmp3881) goto block3; else goto block4;
block3:;
// line 1802
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1804
panda$collections$Stack** $tmp3882 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3883 = *$tmp3882;
panda$core$Bit $tmp3884 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp3885;
$tmp3885 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp3885->value = $tmp3884;
panda$collections$Stack$push$panda$collections$Stack$T($tmp3883, ((panda$core$Object*) $tmp3885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3885));
// unreffing REF($32:panda.collections.Stack.T)
// line 1805
org$pandalanguage$pandac$ASTNode* $tmp3886 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3887 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3888 = *(&local0);
org$pandalanguage$pandac$Position $tmp3889 = ((org$pandalanguage$pandac$parser$Token) $tmp3888.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3890 = *(&local0);
panda$core$String* $tmp3891 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3890.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3886, $tmp3887, $tmp3889, $tmp3891);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3892 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3892));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
*(&local1) = $tmp3886;
// line 1806
panda$collections$Array* $tmp3893 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3893);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3894 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3894));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
*(&local2) = $tmp3893;
// line 1807
panda$core$Int64 $tmp3895 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3896 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3895);
org$pandalanguage$pandac$parser$Token$nullable $tmp3897 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3896);
panda$core$Bit $tmp3898 = panda$core$Bit$init$builtin_bit(!$tmp3897.nonnull);
bool $tmp3899 = $tmp3898.value;
if ($tmp3899) goto block5; else goto block6;
block5:;
// line 1808
org$pandalanguage$pandac$ASTNode* $tmp3900 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3901 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3901));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
*(&local3) = $tmp3900;
// line 1809
org$pandalanguage$pandac$ASTNode* $tmp3902 = *(&local3);
panda$core$Bit $tmp3903 = panda$core$Bit$init$builtin_bit($tmp3902 == NULL);
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block7; else goto block8;
block7:;
// line 1810
panda$collections$Stack** $tmp3905 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3906 = *$tmp3905;
panda$core$Object* $tmp3907 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3906);
panda$core$Panda$unref$panda$core$Object$Q($tmp3907);
// unreffing REF($92:panda.collections.Stack.T)
// line 1811
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3908 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3908));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3909 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3909));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3910 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3910));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3891));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1813
panda$collections$Array* $tmp3911 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3912 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3911, ((panda$core$Object*) $tmp3912));
// line 1814
goto block9;
block9:;
panda$core$Int64 $tmp3913 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3914 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3913);
org$pandalanguage$pandac$parser$Token$nullable $tmp3915 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3914);
panda$core$Bit $tmp3916 = panda$core$Bit$init$builtin_bit($tmp3915.nonnull);
bool $tmp3917 = $tmp3916.value;
if ($tmp3917) goto block10; else goto block11;
block10:;
// line 1815
org$pandalanguage$pandac$ASTNode* $tmp3918 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3919 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3919));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3918));
*(&local3) = $tmp3918;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3918));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode?)
// line 1816
org$pandalanguage$pandac$ASTNode* $tmp3920 = *(&local3);
panda$core$Bit $tmp3921 = panda$core$Bit$init$builtin_bit($tmp3920 == NULL);
bool $tmp3922 = $tmp3921.value;
if ($tmp3922) goto block12; else goto block13;
block12:;
// line 1817
panda$collections$Stack** $tmp3923 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3924 = *$tmp3923;
panda$core$Object* $tmp3925 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3924);
panda$core$Panda$unref$panda$core$Object$Q($tmp3925);
// unreffing REF($165:panda.collections.Stack.T)
// line 1818
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3926 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3926));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3927 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3927));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3928 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3928));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3891));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1820
panda$collections$Array* $tmp3929 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3930 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3929, ((panda$core$Object*) $tmp3930));
goto block9;
block11:;
// line 1822
panda$core$Int64 $tmp3931 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3932 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3931);
org$pandalanguage$pandac$parser$Token$nullable $tmp3933 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3932, &$s3934);
panda$core$Bit $tmp3935 = panda$core$Bit$init$builtin_bit(!$tmp3933.nonnull);
bool $tmp3936 = $tmp3935.value;
if ($tmp3936) goto block14; else goto block15;
block14:;
// line 1823
panda$collections$Stack** $tmp3937 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3938 = *$tmp3937;
panda$core$Object* $tmp3939 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3938);
panda$core$Panda$unref$panda$core$Object$Q($tmp3939);
// unreffing REF($221:panda.collections.Stack.T)
// line 1824
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3940 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3940));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp3941 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3941));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3942 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3942));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3891));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp3943 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode?)
goto block6;
block6:;
// line 1827
panda$collections$Stack** $tmp3944 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3945 = *$tmp3944;
panda$core$Object* $tmp3946 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3945);
panda$core$Panda$unref$panda$core$Object$Q($tmp3946);
// unreffing REF($270:panda.collections.Stack.T)
// line 1828
org$pandalanguage$pandac$ASTNode* $tmp3947 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3948 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp3949 = *(&local0);
org$pandalanguage$pandac$Position $tmp3950 = ((org$pandalanguage$pandac$parser$Token) $tmp3949.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3951 = *(&local1);
panda$collections$Array* $tmp3952 = *(&local2);
panda$collections$ImmutableArray* $tmp3953 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3952);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3947, $tmp3948, $tmp3950, $tmp3951, $tmp3953);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3953));
// unreffing REF($284:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3947));
// unreffing REF($276:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp3954 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3954));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// unreffing REF($55:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp3955 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3955));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3891));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
return $tmp3947;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1835
panda$core$Int64 $tmp3956 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp3957 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3956);
org$pandalanguage$pandac$parser$Token$nullable $tmp3958 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3957, &$s3959);
*(&local0) = $tmp3958;
// line 1836
org$pandalanguage$pandac$parser$Token$nullable $tmp3960 = *(&local0);
panda$core$Bit $tmp3961 = panda$core$Bit$init$builtin_bit(!$tmp3960.nonnull);
bool $tmp3962 = $tmp3961.value;
if ($tmp3962) goto block1; else goto block2;
block1:;
// line 1837
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1839
panda$core$Int64 $tmp3963 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3964 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3963);
org$pandalanguage$pandac$parser$Token$nullable $tmp3965 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3964);
*(&local1) = $tmp3965;
// line 1840
org$pandalanguage$pandac$parser$Token$nullable $tmp3966 = *(&local1);
panda$core$Bit $tmp3967 = panda$core$Bit$init$builtin_bit($tmp3966.nonnull);
bool $tmp3968 = $tmp3967.value;
if ($tmp3968) goto block3; else goto block4;
block3:;
// line 1841
org$pandalanguage$pandac$ASTNode* $tmp3969 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3970 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp3971 = *(&local0);
org$pandalanguage$pandac$Position $tmp3972 = ((org$pandalanguage$pandac$parser$Token) $tmp3971.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3973 = *(&local1);
panda$core$String* $tmp3974 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3973.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3969, $tmp3970, $tmp3972, $tmp3974);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3969));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp3969;
block4:;
// line 1843
org$pandalanguage$pandac$ASTNode* $tmp3975 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3976 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp3977 = *(&local0);
org$pandalanguage$pandac$Position $tmp3978 = ((org$pandalanguage$pandac$parser$Token) $tmp3977.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3975, $tmp3976, $tmp3978, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp3975;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1850
panda$core$Int64 $tmp3979 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp3980 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3979);
org$pandalanguage$pandac$parser$Token$nullable $tmp3981 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3980, &$s3982);
*(&local0) = $tmp3981;
// line 1851
org$pandalanguage$pandac$parser$Token$nullable $tmp3983 = *(&local0);
panda$core$Bit $tmp3984 = panda$core$Bit$init$builtin_bit(!$tmp3983.nonnull);
bool $tmp3985 = $tmp3984.value;
if ($tmp3985) goto block1; else goto block2;
block1:;
// line 1852
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1854
panda$core$Int64 $tmp3986 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3987 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3986);
org$pandalanguage$pandac$parser$Token$nullable $tmp3988 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3987);
*(&local1) = $tmp3988;
// line 1855
org$pandalanguage$pandac$parser$Token$nullable $tmp3989 = *(&local1);
panda$core$Bit $tmp3990 = panda$core$Bit$init$builtin_bit($tmp3989.nonnull);
bool $tmp3991 = $tmp3990.value;
if ($tmp3991) goto block3; else goto block4;
block3:;
// line 1856
org$pandalanguage$pandac$ASTNode* $tmp3992 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3993 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp3994 = *(&local0);
org$pandalanguage$pandac$Position $tmp3995 = ((org$pandalanguage$pandac$parser$Token) $tmp3994.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3996 = *(&local1);
panda$core$String* $tmp3997 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3996.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3992, $tmp3993, $tmp3995, $tmp3997);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3992));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp3992;
block4:;
// line 1858
org$pandalanguage$pandac$ASTNode* $tmp3998 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3999 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp4000 = *(&local0);
org$pandalanguage$pandac$Position $tmp4001 = ((org$pandalanguage$pandac$parser$Token) $tmp4000.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3998, $tmp3999, $tmp4001, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp3998;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1865
panda$core$Int64 $tmp4002 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp4003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4002);
org$pandalanguage$pandac$parser$Token$nullable $tmp4004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4003, &$s4005);
*(&local0) = $tmp4004;
// line 1866
org$pandalanguage$pandac$parser$Token$nullable $tmp4006 = *(&local0);
panda$core$Bit $tmp4007 = panda$core$Bit$init$builtin_bit(!$tmp4006.nonnull);
bool $tmp4008 = $tmp4007.value;
if ($tmp4008) goto block1; else goto block2;
block1:;
// line 1867
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1869
org$pandalanguage$pandac$parser$Token $tmp4009 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4010 = $tmp4009.kind;
panda$core$Int64 $tmp4011 = $tmp4010.$rawValue;
panda$core$Int64 $tmp4012 = (panda$core$Int64) {101};
panda$core$Bit $tmp4013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4011, $tmp4012);
bool $tmp4014 = $tmp4013.value;
if ($tmp4014) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4015 = (panda$core$Int64) {40};
panda$core$Bit $tmp4016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4011, $tmp4015);
bool $tmp4017 = $tmp4016.value;
if ($tmp4017) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4018 = (panda$core$Int64) {41};
panda$core$Bit $tmp4019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4011, $tmp4018);
bool $tmp4020 = $tmp4019.value;
if ($tmp4020) goto block4; else goto block7;
block4:;
// line 1871
org$pandalanguage$pandac$ASTNode* $tmp4021 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4022 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4023 = *(&local0);
org$pandalanguage$pandac$Position $tmp4024 = ((org$pandalanguage$pandac$parser$Token) $tmp4023.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4021, $tmp4022, $tmp4024, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
// unreffing REF($32:org.pandalanguage.pandac.ASTNode)
return $tmp4021;
block7:;
// line 1874
panda$collections$Array* $tmp4025 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4025);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4026 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
*(&local1) = $tmp4025;
// line 1875
org$pandalanguage$pandac$ASTNode* $tmp4027 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4028 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4028));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
*(&local2) = $tmp4027;
// line 1876
org$pandalanguage$pandac$ASTNode* $tmp4029 = *(&local2);
panda$core$Bit $tmp4030 = panda$core$Bit$init$builtin_bit($tmp4029 == NULL);
bool $tmp4031 = $tmp4030.value;
if ($tmp4031) goto block8; else goto block9;
block8:;
// line 1877
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4032 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4033 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4033));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
// unreffing REF($46:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1879
panda$collections$Array* $tmp4034 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4035 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4034, ((panda$core$Object*) $tmp4035));
// line 1880
org$pandalanguage$pandac$ASTNode* $tmp4036 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4037 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4038 = *(&local0);
org$pandalanguage$pandac$Position $tmp4039 = ((org$pandalanguage$pandac$parser$Token) $tmp4038.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4040 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4036, $tmp4037, $tmp4039, $tmp4040);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4036));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4036));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4041 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4042 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
// unreffing REF($46:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4036;
block3:;
panda$core$Bit $tmp4043 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4044 = $tmp4043.value;
if ($tmp4044) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4045 = (panda$core$Int64) {1864};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4046, $tmp4045, &$s4047);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1889
org$pandalanguage$pandac$parser$Token $tmp4048 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4049 = $tmp4048.kind;
panda$core$Int64 $tmp4050 = $tmp4049.$rawValue;
panda$core$Int64 $tmp4051 = (panda$core$Int64) {29};
panda$core$Bit $tmp4052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4050, $tmp4051);
bool $tmp4053 = $tmp4052.value;
if ($tmp4053) goto block2; else goto block3;
block2:;
// line 1890
org$pandalanguage$pandac$ASTNode* $tmp4054 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4054;
block3:;
panda$core$Int64 $tmp4055 = (panda$core$Int64) {30};
panda$core$Bit $tmp4056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4050, $tmp4055);
bool $tmp4057 = $tmp4056.value;
if ($tmp4057) goto block4; else goto block5;
block4:;
// line 1891
org$pandalanguage$pandac$ASTNode* $tmp4058 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4058;
block5:;
panda$core$Int64 $tmp4059 = (panda$core$Int64) {28};
panda$core$Bit $tmp4060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4050, $tmp4059);
bool $tmp4061 = $tmp4060.value;
if ($tmp4061) goto block6; else goto block7;
block6:;
// line 1892
org$pandalanguage$pandac$ASTNode* $tmp4062 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4062;
block7:;
// line 1893
panda$core$Bit $tmp4063 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4064 = $tmp4063.value;
if ($tmp4064) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4065 = (panda$core$Int64) {1893};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4066, $tmp4065);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4067 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4068 = $tmp4067.value;
if ($tmp4068) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4069 = (panda$core$Int64) {1888};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4070, $tmp4069, &$s4071);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1901
org$pandalanguage$pandac$parser$Token $tmp4072 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4073 = $tmp4072.kind;
panda$core$Int64 $tmp4074 = $tmp4073.$rawValue;
panda$core$Int64 $tmp4075 = (panda$core$Int64) {31};
panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4074, $tmp4075);
bool $tmp4077 = $tmp4076.value;
if ($tmp4077) goto block2; else goto block3;
block2:;
// line 1902
org$pandalanguage$pandac$ASTNode* $tmp4078 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4078;
block3:;
panda$core$Int64 $tmp4079 = (panda$core$Int64) {33};
panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4074, $tmp4079);
bool $tmp4081 = $tmp4080.value;
if ($tmp4081) goto block4; else goto block5;
block4:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4082 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4082;
block5:;
panda$core$Int64 $tmp4083 = (panda$core$Int64) {36};
panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4074, $tmp4083);
bool $tmp4085 = $tmp4084.value;
if ($tmp4085) goto block6; else goto block7;
block6:;
// line 1904
org$pandalanguage$pandac$ASTNode* $tmp4086 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4086;
block7:;
panda$core$Int64 $tmp4087 = (panda$core$Int64) {32};
panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4074, $tmp4087);
bool $tmp4089 = $tmp4088.value;
if ($tmp4089) goto block8; else goto block9;
block8:;
// line 1905
org$pandalanguage$pandac$ASTNode* $tmp4090 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4090;
block9:;
// line 1908
panda$core$Int64 $tmp4091 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4092 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4091);
org$pandalanguage$pandac$parser$Token$nullable $tmp4093 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4092, &$s4094);
// line 1909
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4095 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4096 = $tmp4095.value;
if ($tmp4096) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4097 = (panda$core$Int64) {1900};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4098, $tmp4097, &$s4099);
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
// line 1918
// line 1919
panda$core$Int64 $tmp4100 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4101 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4100);
org$pandalanguage$pandac$parser$Token$nullable $tmp4102 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4101);
*(&local1) = $tmp4102;
// line 1920
org$pandalanguage$pandac$parser$Token$nullable $tmp4103 = *(&local1);
panda$core$Bit $tmp4104 = panda$core$Bit$init$builtin_bit(!$tmp4103.nonnull);
bool $tmp4105 = $tmp4104.value;
if ($tmp4105) goto block1; else goto block3;
block1:;
// line 1921
panda$core$Int64 $tmp4106 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4107 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4106);
org$pandalanguage$pandac$parser$Token$nullable $tmp4108 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4107, &$s4109);
*(&local1) = $tmp4108;
// line 1922
org$pandalanguage$pandac$parser$Token$nullable $tmp4110 = *(&local1);
panda$core$Bit $tmp4111 = panda$core$Bit$init$builtin_bit(!$tmp4110.nonnull);
bool $tmp4112 = $tmp4111.value;
if ($tmp4112) goto block4; else goto block5;
block4:;
// line 1923
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 1925
panda$core$Int64 $tmp4113 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4114 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4113);
*(&local0) = $tmp4114;
goto block2;
block3:;
// line 1
// line 1928
panda$core$Int64 $tmp4115 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4116 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4115);
*(&local0) = $tmp4116;
goto block2;
block2:;
// line 1930
panda$core$Int64 $tmp4117 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4118 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4117);
org$pandalanguage$pandac$parser$Token$nullable $tmp4119 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4118, &$s4120);
*(&local2) = $tmp4119;
// line 1931
org$pandalanguage$pandac$parser$Token$nullable $tmp4121 = *(&local2);
panda$core$Bit $tmp4122 = panda$core$Bit$init$builtin_bit(!$tmp4121.nonnull);
bool $tmp4123 = $tmp4122.value;
if ($tmp4123) goto block6; else goto block7;
block6:;
// line 1932
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1934
panda$collections$ImmutableArray* $tmp4124 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4125 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4125));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
*(&local3) = $tmp4124;
// line 1935
panda$collections$ImmutableArray* $tmp4126 = *(&local3);
panda$core$Bit $tmp4127 = panda$core$Bit$init$builtin_bit($tmp4126 == NULL);
bool $tmp4128 = $tmp4127.value;
if ($tmp4128) goto block8; else goto block9;
block8:;
// line 1936
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4129 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4129));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
// unreffing REF($54:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1938
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1939
org$pandalanguage$pandac$parser$Token $tmp4130 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4131 = $tmp4130.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4132;
$tmp4132 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4132->value = $tmp4131;
panda$core$Int64 $tmp4133 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4134 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4133);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4135;
$tmp4135 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4135->value = $tmp4134;
ITable* $tmp4136 = ((panda$core$Equatable*) $tmp4132)->$class->itable;
while ($tmp4136->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4136 = $tmp4136->next;
}
$fn4138 $tmp4137 = $tmp4136->methods[0];
panda$core$Bit $tmp4139 = $tmp4137(((panda$core$Equatable*) $tmp4132), ((panda$core$Equatable*) $tmp4135));
bool $tmp4140 = $tmp4139.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4135)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4132)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4140) goto block10; else goto block12;
block10:;
// line 1940
org$pandalanguage$pandac$ASTNode* $tmp4141 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4142 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4141));
*(&local4) = $tmp4141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4141));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
// line 1941
org$pandalanguage$pandac$ASTNode* $tmp4143 = *(&local4);
panda$core$Bit $tmp4144 = panda$core$Bit$init$builtin_bit($tmp4143 == NULL);
bool $tmp4145 = $tmp4144.value;
if ($tmp4145) goto block13; else goto block14;
block13:;
// line 1942
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4146 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4147 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4147));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
// unreffing REF($54:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1946
org$pandalanguage$pandac$ASTNode* $tmp4148 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 1948
panda$collections$ImmutableArray* $tmp4149 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4150 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4150));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
*(&local5) = $tmp4149;
// line 1949
panda$collections$ImmutableArray* $tmp4151 = *(&local5);
panda$core$Bit $tmp4152 = panda$core$Bit$init$builtin_bit($tmp4151 == NULL);
bool $tmp4153 = $tmp4152.value;
if ($tmp4153) goto block15; else goto block16;
block15:;
// line 1950
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4154 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
// unreffing REF($145:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp4155 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4155));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4156 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4156));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
// unreffing REF($54:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1952
org$pandalanguage$pandac$ASTNode* $tmp4157 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4158 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4159 = *(&local1);
org$pandalanguage$pandac$Position $tmp4160 = ((org$pandalanguage$pandac$parser$Token) $tmp4159.value).position;
panda$collections$ImmutableArray* $tmp4161 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4161);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4162 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4163 = *(&local2);
panda$core$String* $tmp4164 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4163.value));
panda$collections$ImmutableArray* $tmp4165 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4166 = *(&local4);
panda$collections$ImmutableArray* $tmp4167 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4157, $tmp4158, $tmp4160, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4161, $tmp4162, $tmp4164, ((panda$collections$ImmutableArray*) NULL), $tmp4165, $tmp4166, $tmp4167);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4164));
// unreffing REF($196:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4161));
// unreffing REF($190:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
// unreffing REF($185:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp4168 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4168));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
// unreffing REF($145:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp4169 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4170 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4170));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
// unreffing REF($54:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp4157;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1961
org$pandalanguage$pandac$parser$Token $tmp4171 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4172 = $tmp4171.kind;
panda$core$Int64 $tmp4173 = $tmp4172.$rawValue;
panda$core$Int64 $tmp4174 = (panda$core$Int64) {37};
panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4174);
bool $tmp4176 = $tmp4175.value;
if ($tmp4176) goto block2; else goto block3;
block2:;
// line 1962
org$pandalanguage$pandac$ASTNode* $tmp4177 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4177;
block3:;
panda$core$Int64 $tmp4178 = (panda$core$Int64) {33};
panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4178);
bool $tmp4180 = $tmp4179.value;
if ($tmp4180) goto block4; else goto block5;
block4:;
// line 1963
org$pandalanguage$pandac$ASTNode* $tmp4181 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4181;
block5:;
panda$core$Int64 $tmp4182 = (panda$core$Int64) {32};
panda$core$Bit $tmp4183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4182);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block6; else goto block7;
block6:;
// line 1964
org$pandalanguage$pandac$ASTNode* $tmp4185 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4185;
block7:;
panda$core$Int64 $tmp4186 = (panda$core$Int64) {31};
panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block8; else goto block9;
block8:;
// line 1965
org$pandalanguage$pandac$ASTNode* $tmp4189 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4189;
block9:;
panda$core$Int64 $tmp4190 = (panda$core$Int64) {36};
panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4190);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block10; else goto block11;
block10:;
// line 1966
org$pandalanguage$pandac$ASTNode* $tmp4193 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode?)
return $tmp4193;
block11:;
panda$core$Int64 $tmp4194 = (panda$core$Int64) {45};
panda$core$Bit $tmp4195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4194);
bool $tmp4196 = $tmp4195.value;
if ($tmp4196) goto block12; else goto block13;
block12:;
// line 1967
org$pandalanguage$pandac$ASTNode* $tmp4197 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
return $tmp4197;
block13:;
panda$core$Int64 $tmp4198 = (panda$core$Int64) {39};
panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4198);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block14; else goto block15;
block14:;
// line 1968
org$pandalanguage$pandac$ASTNode* $tmp4201 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
return $tmp4201;
block15:;
panda$core$Int64 $tmp4202 = (panda$core$Int64) {100};
panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4202);
bool $tmp4204 = $tmp4203.value;
if ($tmp4204) goto block16; else goto block17;
block16:;
// line 1969
org$pandalanguage$pandac$ASTNode* $tmp4205 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
return $tmp4205;
block17:;
panda$core$Int64 $tmp4206 = (panda$core$Int64) {49};
panda$core$Bit $tmp4207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4206);
bool $tmp4208 = $tmp4207.value;
if ($tmp4208) goto block18; else goto block19;
block18:;
// line 1971
org$pandalanguage$pandac$parser$Token $tmp4209 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4209;
// line 1972
panda$core$Int64 $tmp4210 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4211 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4210);
org$pandalanguage$pandac$parser$Token$nullable $tmp4212 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4211);
*(&local1) = $tmp4212;
// line 1973
org$pandalanguage$pandac$parser$Token$nullable $tmp4213 = *(&local1);
panda$core$Bit $tmp4214 = panda$core$Bit$init$builtin_bit($tmp4213.nonnull);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block20; else goto block21;
block20:;
// line 1974
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4216 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4217 = *$tmp4216;
panda$core$Bit $tmp4218 = panda$core$Bit$init$builtin_bit($tmp4217 != NULL);
bool $tmp4219 = $tmp4218.value;
if ($tmp4219) goto block22; else goto block23;
block22:;
// line 1975
org$pandalanguage$pandac$parser$Token$nullable $tmp4220 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4220.value));
// line 1976
org$pandalanguage$pandac$parser$Token $tmp4221 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4221);
// line 1977
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4222 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4223 = *$tmp4222;
panda$core$Int64 $tmp4224 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4225 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4224);
$fn4227 $tmp4226 = ($fn4227) $tmp4223->$class->vtable[3];
$tmp4226($tmp4223, $tmp4225);
// line 1978
org$pandalanguage$pandac$parser$Token $tmp4228 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1979
org$pandalanguage$pandac$parser$Token $tmp4229 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1980
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4230 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4231 = *$tmp4230;
panda$core$Int64 $tmp4232 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4233 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4232);
$fn4235 $tmp4234 = ($fn4235) $tmp4231->$class->vtable[4];
$tmp4234($tmp4231, $tmp4233);
goto block23;
block23:;
// line 1982
org$pandalanguage$pandac$parser$Token $tmp4236 = *(&local0);
panda$core$String* $tmp4237 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4236);
org$pandalanguage$pandac$ASTNode* $tmp4238 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4237);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4238));
// unreffing REF($157:org.pandalanguage.pandac.ASTNode?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4237));
// unreffing REF($155:panda.core.String)
return $tmp4238;
block21:;
// line 1984
org$pandalanguage$pandac$parser$Token $tmp4239 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4239);
// line 1985
org$pandalanguage$pandac$ASTNode* $tmp4240 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4240));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4240));
// unreffing REF($171:org.pandalanguage.pandac.ASTNode?)
return $tmp4240;
block19:;
panda$core$Int64 $tmp4241 = (panda$core$Int64) {47};
panda$core$Bit $tmp4242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4241);
bool $tmp4243 = $tmp4242.value;
if ($tmp4243) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4244 = (panda$core$Int64) {48};
panda$core$Bit $tmp4245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4244);
bool $tmp4246 = $tmp4245.value;
if ($tmp4246) goto block24; else goto block26;
block24:;
// line 1988
org$pandalanguage$pandac$ASTNode* $tmp4247 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4247));
// unreffing REF($187:org.pandalanguage.pandac.ASTNode?)
return $tmp4247;
block26:;
panda$core$Int64 $tmp4248 = (panda$core$Int64) {24};
panda$core$Bit $tmp4249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4248);
bool $tmp4250 = $tmp4249.value;
if ($tmp4250) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4251 = (panda$core$Int64) {25};
panda$core$Bit $tmp4252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4251);
bool $tmp4253 = $tmp4252.value;
if ($tmp4253) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4254 = (panda$core$Int64) {26};
panda$core$Bit $tmp4255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4254);
bool $tmp4256 = $tmp4255.value;
if ($tmp4256) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4257 = (panda$core$Int64) {27};
panda$core$Bit $tmp4258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4257);
bool $tmp4259 = $tmp4258.value;
if ($tmp4259) goto block27; else goto block31;
block27:;
// line 1991
org$pandalanguage$pandac$ASTNode* $tmp4260 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4260));
// unreffing REF($211:org.pandalanguage.pandac.ASTNode?)
return $tmp4260;
block31:;
panda$core$Int64 $tmp4261 = (panda$core$Int64) {23};
panda$core$Bit $tmp4262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4261);
bool $tmp4263 = $tmp4262.value;
if ($tmp4263) goto block32; else goto block33;
block32:;
// line 1994
org$pandalanguage$pandac$ASTNode* $tmp4264 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
// unreffing REF($223:org.pandalanguage.pandac.ASTNode?)
return $tmp4264;
block33:;
panda$core$Int64 $tmp4265 = (panda$core$Int64) {22};
panda$core$Bit $tmp4266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4265);
bool $tmp4267 = $tmp4266.value;
if ($tmp4267) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4268 = (panda$core$Int64) {21};
panda$core$Bit $tmp4269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4173, $tmp4268);
bool $tmp4270 = $tmp4269.value;
if ($tmp4270) goto block34; else goto block36;
block34:;
// line 1997
org$pandalanguage$pandac$ASTNode* $tmp4271 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4271));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4271));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode?)
return $tmp4271;
block36:;
// line 2001
panda$core$Int64 $tmp4272 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4273 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4272);
org$pandalanguage$pandac$parser$Token$nullable $tmp4274 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4273, &$s4275);
// line 2002
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4276 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4277 = $tmp4276.value;
if ($tmp4277) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4278 = (panda$core$Int64) {1960};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4279, $tmp4278, &$s4280);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2011
panda$core$Int64 $tmp4281 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4281);
org$pandalanguage$pandac$parser$Token$nullable $tmp4283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4282, &$s4284);
*(&local0) = $tmp4283;
// line 2012
org$pandalanguage$pandac$parser$Token$nullable $tmp4285 = *(&local0);
panda$core$Bit $tmp4286 = panda$core$Bit$init$builtin_bit(!$tmp4285.nonnull);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block1; else goto block2;
block1:;
// line 2013
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2015
panda$core$Int64 $tmp4288 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4289 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4288);
org$pandalanguage$pandac$parser$Token$nullable $tmp4290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4289, &$s4291);
*(&local1) = $tmp4290;
// line 2016
org$pandalanguage$pandac$parser$Token$nullable $tmp4292 = *(&local1);
panda$core$Bit $tmp4293 = panda$core$Bit$init$builtin_bit(!$tmp4292.nonnull);
bool $tmp4294 = $tmp4293.value;
if ($tmp4294) goto block3; else goto block4;
block3:;
// line 2017
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2019
panda$core$MutableString* $tmp4295 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4296 = *(&local1);
panda$core$String* $tmp4297 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4296.value));
panda$core$MutableString$init$panda$core$String($tmp4295, $tmp4297);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4298 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4295));
*(&local2) = $tmp4295;
// line 2020
goto block5;
block5:;
// line 2021
panda$core$Int64 $tmp4299 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4300 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4299);
org$pandalanguage$pandac$parser$Token$nullable $tmp4301 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4300);
*(&local1) = $tmp4301;
// line 2022
org$pandalanguage$pandac$parser$Token$nullable $tmp4302 = *(&local1);
panda$core$Bit $tmp4303 = panda$core$Bit$init$builtin_bit(!$tmp4302.nonnull);
bool $tmp4304 = $tmp4303.value;
if ($tmp4304) goto block7; else goto block8;
block7:;
// line 2023
goto block6;
block8:;
// line 2025
panda$core$MutableString* $tmp4305 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4305, &$s4306);
// line 2026
panda$core$Int64 $tmp4307 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4308 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4307);
org$pandalanguage$pandac$parser$Token$nullable $tmp4309 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4308, &$s4310);
*(&local1) = $tmp4309;
// line 2027
org$pandalanguage$pandac$parser$Token$nullable $tmp4311 = *(&local1);
panda$core$Bit $tmp4312 = panda$core$Bit$init$builtin_bit(!$tmp4311.nonnull);
bool $tmp4313 = $tmp4312.value;
if ($tmp4313) goto block9; else goto block10;
block9:;
// line 2028
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4314 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4314));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4295));
// unreffing REF($31:panda.core.MutableString)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2030
panda$core$MutableString* $tmp4315 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4316 = *(&local1);
panda$core$String* $tmp4317 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4316.value));
panda$core$MutableString$append$panda$core$String($tmp4315, $tmp4317);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2032
org$pandalanguage$pandac$ASTNode* $tmp4318 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4319 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$nullable $tmp4320 = *(&local0);
org$pandalanguage$pandac$Position $tmp4321 = ((org$pandalanguage$pandac$parser$Token) $tmp4320.value).position;
panda$core$MutableString* $tmp4322 = *(&local2);
panda$core$String* $tmp4323 = panda$core$MutableString$finish$R$panda$core$String($tmp4322);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4318, $tmp4319, $tmp4321, $tmp4323);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4323));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4318));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4324 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4324));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4295));
// unreffing REF($31:panda.core.MutableString)
return $tmp4318;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2039
panda$core$Int64 $tmp4325 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4326 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4325);
org$pandalanguage$pandac$parser$Token$nullable $tmp4327 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4326, &$s4328);
*(&local0) = $tmp4327;
// line 2040
org$pandalanguage$pandac$parser$Token$nullable $tmp4329 = *(&local0);
panda$core$Bit $tmp4330 = panda$core$Bit$init$builtin_bit(!$tmp4329.nonnull);
bool $tmp4331 = $tmp4330.value;
if ($tmp4331) goto block1; else goto block2;
block1:;
// line 2041
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2043
panda$core$Int64 $tmp4332 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4333 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4332);
org$pandalanguage$pandac$parser$Token$nullable $tmp4334 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4333, &$s4335);
*(&local1) = $tmp4334;
// line 2044
org$pandalanguage$pandac$parser$Token$nullable $tmp4336 = *(&local1);
panda$core$Bit $tmp4337 = panda$core$Bit$init$builtin_bit(!$tmp4336.nonnull);
bool $tmp4338 = $tmp4337.value;
if ($tmp4338) goto block3; else goto block4;
block3:;
// line 2045
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2047
panda$core$MutableString* $tmp4339 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4340 = *(&local1);
panda$core$String* $tmp4341 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4340.value));
panda$core$MutableString$init$panda$core$String($tmp4339, $tmp4341);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4342 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4342));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
*(&local2) = $tmp4339;
// line 2048
goto block5;
block5:;
// line 2049
panda$core$Int64 $tmp4343 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4344 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4343);
org$pandalanguage$pandac$parser$Token$nullable $tmp4345 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4344);
*(&local1) = $tmp4345;
// line 2050
org$pandalanguage$pandac$parser$Token$nullable $tmp4346 = *(&local1);
panda$core$Bit $tmp4347 = panda$core$Bit$init$builtin_bit(!$tmp4346.nonnull);
bool $tmp4348 = $tmp4347.value;
if ($tmp4348) goto block7; else goto block8;
block7:;
// line 2051
goto block6;
block8:;
// line 2053
panda$core$MutableString* $tmp4349 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4349, &$s4350);
// line 2054
panda$core$Int64 $tmp4351 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4352 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4351);
org$pandalanguage$pandac$parser$Token$nullable $tmp4353 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4352, &$s4354);
*(&local1) = $tmp4353;
// line 2055
org$pandalanguage$pandac$parser$Token$nullable $tmp4355 = *(&local1);
panda$core$Bit $tmp4356 = panda$core$Bit$init$builtin_bit(!$tmp4355.nonnull);
bool $tmp4357 = $tmp4356.value;
if ($tmp4357) goto block9; else goto block10;
block9:;
// line 2056
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4358 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4341));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
// unreffing REF($31:panda.core.MutableString)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2058
panda$core$MutableString* $tmp4359 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4360 = *(&local1);
panda$core$String* $tmp4361 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4360.value));
panda$core$MutableString$append$panda$core$String($tmp4359, $tmp4361);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4361));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2060
org$pandalanguage$pandac$ASTNode* $tmp4362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4363 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4364 = *(&local0);
org$pandalanguage$pandac$Position $tmp4365 = ((org$pandalanguage$pandac$parser$Token) $tmp4364.value).position;
panda$core$MutableString* $tmp4366 = *(&local2);
panda$core$String* $tmp4367 = panda$core$MutableString$finish$R$panda$core$String($tmp4366);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4362, $tmp4363, $tmp4365, $tmp4367);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4367));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4368 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4368));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4341));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
// unreffing REF($31:panda.core.MutableString)
return $tmp4362;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 2067
panda$core$Int64 $tmp4369 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4370 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4369);
org$pandalanguage$pandac$parser$Token$nullable $tmp4371 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4370, &$s4372);
*(&local0) = $tmp4371;
// line 2068
org$pandalanguage$pandac$parser$Token$nullable $tmp4373 = *(&local0);
panda$core$Bit $tmp4374 = panda$core$Bit$init$builtin_bit(!$tmp4373.nonnull);
bool $tmp4375 = $tmp4374.value;
if ($tmp4375) goto block1; else goto block2;
block1:;
// line 2069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2071
panda$core$Int64 $tmp4376 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4377 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4376);
org$pandalanguage$pandac$parser$Token$nullable $tmp4378 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4377, &$s4379);
*(&local1) = $tmp4378;
// line 2072
org$pandalanguage$pandac$parser$Token$nullable $tmp4380 = *(&local1);
panda$core$Bit $tmp4381 = panda$core$Bit$init$builtin_bit(!$tmp4380.nonnull);
bool $tmp4382 = $tmp4381.value;
if ($tmp4382) goto block3; else goto block4;
block3:;
// line 2073
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2075
panda$collections$Array* $tmp4383 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4383);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
*(&local2) = $tmp4383;
// line 2076
panda$core$Int64 $tmp4385 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4386 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4385);
org$pandalanguage$pandac$parser$Token$nullable $tmp4387 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4386);
panda$core$Bit $tmp4388 = panda$core$Bit$init$builtin_bit($tmp4387.nonnull);
bool $tmp4389 = $tmp4388.value;
if ($tmp4389) goto block5; else goto block7;
block5:;
// line 2077
org$pandalanguage$pandac$ASTNode* $tmp4390 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4391 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4391));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
*(&local3) = $tmp4390;
// line 2078
org$pandalanguage$pandac$ASTNode* $tmp4392 = *(&local3);
panda$core$Bit $tmp4393 = panda$core$Bit$init$builtin_bit($tmp4392 == NULL);
bool $tmp4394 = $tmp4393.value;
if ($tmp4394) goto block8; else goto block9;
block8:;
// line 2079
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4395 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
// unreffing REF($50:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4396 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4396));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2081
panda$collections$Array* $tmp4397 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4398 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4399 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4400 = *(&local1);
org$pandalanguage$pandac$Position $tmp4401 = ((org$pandalanguage$pandac$parser$Token) $tmp4400.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4402 = *(&local1);
panda$core$String* $tmp4403 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4402.value));
org$pandalanguage$pandac$ASTNode* $tmp4404 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4398, $tmp4399, $tmp4401, $tmp4403, $tmp4404);
panda$collections$Array$add$panda$collections$Array$T($tmp4397, ((panda$core$Object*) $tmp4398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4403));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4398));
// unreffing REF($87:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4405 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4405));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
// unreffing REF($50:org.pandalanguage.pandac.ASTNode?)
goto block6;
block7:;
// line 1
// line 2084
panda$collections$Array* $tmp4406 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4407 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4408 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4409 = *(&local1);
org$pandalanguage$pandac$Position $tmp4410 = ((org$pandalanguage$pandac$parser$Token) $tmp4409.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4411 = *(&local1);
panda$core$String* $tmp4412 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4411.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4407, $tmp4408, $tmp4410, $tmp4412);
panda$collections$Array$add$panda$collections$Array$T($tmp4406, ((panda$core$Object*) $tmp4407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4412));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4407));
// unreffing REF($118:org.pandalanguage.pandac.ASTNode)
goto block6;
block6:;
// line 2086
goto block10;
block10:;
panda$core$Int64 $tmp4413 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4414 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4413);
org$pandalanguage$pandac$parser$Token$nullable $tmp4415 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4414);
panda$core$Bit $tmp4416 = panda$core$Bit$init$builtin_bit($tmp4415.nonnull);
bool $tmp4417 = $tmp4416.value;
if ($tmp4417) goto block11; else goto block12;
block11:;
// line 2087
panda$core$Int64 $tmp4418 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4419 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4418);
org$pandalanguage$pandac$parser$Token$nullable $tmp4420 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4419, &$s4421);
*(&local1) = $tmp4420;
// line 2088
org$pandalanguage$pandac$parser$Token$nullable $tmp4422 = *(&local1);
panda$core$Bit $tmp4423 = panda$core$Bit$init$builtin_bit(!$tmp4422.nonnull);
bool $tmp4424 = $tmp4423.value;
if ($tmp4424) goto block13; else goto block14;
block13:;
// line 2089
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4425 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4425));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block14:;
// line 2091
panda$core$Int64 $tmp4426 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4427 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4426);
org$pandalanguage$pandac$parser$Token$nullable $tmp4428 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4427);
panda$core$Bit $tmp4429 = panda$core$Bit$init$builtin_bit($tmp4428.nonnull);
bool $tmp4430 = $tmp4429.value;
if ($tmp4430) goto block15; else goto block17;
block15:;
// line 2092
org$pandalanguage$pandac$ASTNode* $tmp4431 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4432 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4432));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4431));
*(&local4) = $tmp4431;
// line 2093
org$pandalanguage$pandac$ASTNode* $tmp4433 = *(&local4);
panda$core$Bit $tmp4434 = panda$core$Bit$init$builtin_bit($tmp4433 == NULL);
bool $tmp4435 = $tmp4434.value;
if ($tmp4435) goto block18; else goto block19;
block18:;
// line 2094
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4436 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4436));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4431));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4437 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4437));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block19:;
// line 2096
panda$collections$Array* $tmp4438 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4439 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4440 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4441 = *(&local1);
org$pandalanguage$pandac$Position $tmp4442 = ((org$pandalanguage$pandac$parser$Token) $tmp4441.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4443 = *(&local1);
panda$core$String* $tmp4444 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4443.value));
org$pandalanguage$pandac$ASTNode* $tmp4445 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4439, $tmp4440, $tmp4442, $tmp4444, $tmp4445);
panda$collections$Array$add$panda$collections$Array$T($tmp4438, ((panda$core$Object*) $tmp4439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4444));
// unreffing REF($221:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4439));
// unreffing REF($214:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4446 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4446));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4431));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode?)
goto block16;
block17:;
// line 1
// line 2099
panda$collections$Array* $tmp4447 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4448 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4449 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4450 = *(&local1);
org$pandalanguage$pandac$Position $tmp4451 = ((org$pandalanguage$pandac$parser$Token) $tmp4450.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4452 = *(&local1);
panda$core$String* $tmp4453 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4452.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4448, $tmp4449, $tmp4451, $tmp4453);
panda$collections$Array$add$panda$collections$Array$T($tmp4447, ((panda$core$Object*) $tmp4448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4453));
// unreffing REF($252:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
// unreffing REF($245:org.pandalanguage.pandac.ASTNode)
goto block16;
block16:;
goto block10;
block12:;
// line 2102
panda$core$Int64 $tmp4454 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4455 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4454);
org$pandalanguage$pandac$parser$Token$nullable $tmp4456 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4455, &$s4457);
panda$core$Bit $tmp4458 = panda$core$Bit$init$builtin_bit(!$tmp4456.nonnull);
bool $tmp4459 = $tmp4458.value;
if ($tmp4459) goto block20; else goto block21;
block20:;
// line 2103
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4460 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4460));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block21:;
// line 2105
panda$collections$Array* $tmp4461 = *(&local2);
panda$collections$ImmutableArray* $tmp4462 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4461);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4462));
// unreffing REF($287:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$collections$Array* $tmp4463 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4463));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4462;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2112
panda$core$Int64 $tmp4464 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4465 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4464);
org$pandalanguage$pandac$parser$Token$nullable $tmp4466 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4465, &$s4467);
*(&local0) = $tmp4466;
// line 2113
org$pandalanguage$pandac$parser$Token$nullable $tmp4468 = *(&local0);
panda$core$Bit $tmp4469 = panda$core$Bit$init$builtin_bit(!$tmp4468.nonnull);
bool $tmp4470 = $tmp4469.value;
if ($tmp4470) goto block1; else goto block2;
block1:;
// line 2114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2116
panda$collections$Array* $tmp4471 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4471);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4472 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4472));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
*(&local1) = $tmp4471;
// line 2117
org$pandalanguage$pandac$ASTNode* $tmp4473 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4474 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4474));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4473));
*(&local2) = $tmp4473;
// line 2118
org$pandalanguage$pandac$ASTNode* $tmp4475 = *(&local2);
panda$core$Bit $tmp4476 = panda$core$Bit$init$builtin_bit($tmp4475 == NULL);
bool $tmp4477 = $tmp4476.value;
if ($tmp4477) goto block3; else goto block4;
block3:;
// line 2119
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4478 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4478));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4473));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4479 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4479));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2121
panda$collections$Array* $tmp4480 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4481 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4480, ((panda$core$Object*) $tmp4481));
// line 2122
goto block5;
block5:;
panda$core$Int64 $tmp4482 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4483 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4482);
org$pandalanguage$pandac$parser$Token$nullable $tmp4484 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4483);
panda$core$Bit $tmp4485 = panda$core$Bit$init$builtin_bit($tmp4484.nonnull);
bool $tmp4486 = $tmp4485.value;
if ($tmp4486) goto block6; else goto block7;
block6:;
// line 2123
org$pandalanguage$pandac$ASTNode* $tmp4487 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4488 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4488));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4487));
*(&local2) = $tmp4487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4487));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode?)
// line 2124
org$pandalanguage$pandac$ASTNode* $tmp4489 = *(&local2);
panda$core$Bit $tmp4490 = panda$core$Bit$init$builtin_bit($tmp4489 == NULL);
bool $tmp4491 = $tmp4490.value;
if ($tmp4491) goto block8; else goto block9;
block8:;
// line 2125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4492 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4492));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4473));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4493 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2127
panda$collections$Array* $tmp4494 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4495 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4494, ((panda$core$Object*) $tmp4495));
goto block5;
block7:;
// line 2129
panda$collections$Array* $tmp4496 = *(&local1);
panda$collections$ImmutableArray* $tmp4497 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4496);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
// unreffing REF($125:panda.collections.ImmutableArray<panda.collections.Array.T>)
org$pandalanguage$pandac$ASTNode* $tmp4498 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4498));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4473));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4499 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4499));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4497;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2136
panda$core$Int64 $tmp4500 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4501 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4500);
org$pandalanguage$pandac$parser$Token$nullable $tmp4502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4501, &$s4503);
*(&local0) = $tmp4502;
// line 2137
*(&local1) = ((panda$core$String*) NULL);
// line 2138
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4504 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4504));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2139
panda$core$Int64 $tmp4505 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4506 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4505);
org$pandalanguage$pandac$parser$Token$nullable $tmp4507 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4506);
*(&local3) = $tmp4507;
// line 2140
org$pandalanguage$pandac$parser$Token$nullable $tmp4508 = *(&local3);
panda$core$Bit $tmp4509 = panda$core$Bit$init$builtin_bit($tmp4508.nonnull);
bool $tmp4510 = $tmp4509.value;
if ($tmp4510) goto block1; else goto block2;
block1:;
// line 2141
org$pandalanguage$pandac$ASTNode* $tmp4511 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
*(&local2) = $tmp4511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
// line 2142
org$pandalanguage$pandac$ASTNode* $tmp4513 = *(&local2);
panda$core$Bit $tmp4514 = panda$core$Bit$init$builtin_bit($tmp4513 == NULL);
bool $tmp4515 = $tmp4514.value;
if ($tmp4515) goto block3; else goto block4;
block3:;
// line 2143
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4516 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4517 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2145
panda$core$Int64 $tmp4518 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4519 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4518);
org$pandalanguage$pandac$parser$Token$nullable $tmp4520 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4519, &$s4521);
*(&local4) = $tmp4520;
// line 2146
org$pandalanguage$pandac$parser$Token$nullable $tmp4522 = *(&local4);
panda$core$Bit $tmp4523 = panda$core$Bit$init$builtin_bit(!$tmp4522.nonnull);
bool $tmp4524 = $tmp4523.value;
if ($tmp4524) goto block5; else goto block6;
block5:;
// line 2147
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4525 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4525));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4526 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4526));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2149
panda$core$String** $tmp4527 = &param0->source;
panda$core$String* $tmp4528 = *$tmp4527;
panda$core$String** $tmp4529 = &param0->source;
panda$core$String* $tmp4530 = *$tmp4529;
org$pandalanguage$pandac$parser$Token$nullable $tmp4531 = *(&local3);
panda$core$String$Index $tmp4532 = ((org$pandalanguage$pandac$parser$Token) $tmp4531.value).start;
panda$core$String$Index $tmp4533 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4530, $tmp4532);
org$pandalanguage$pandac$parser$Token$nullable $tmp4534 = *(&local4);
panda$core$String$Index $tmp4535 = ((org$pandalanguage$pandac$parser$Token) $tmp4534.value).start;
panda$core$Bit $tmp4536 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4537 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4533, $tmp4535, $tmp4536);
panda$core$String* $tmp4538 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4528, $tmp4537);
panda$core$String* $tmp4539 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4538));
*(&local1) = $tmp4538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4538));
// unreffing REF($96:panda.core.String)
goto block2;
block2:;
// line 2151
org$pandalanguage$pandac$ASTNode* $tmp4540 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4541 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4542 = *(&local0);
org$pandalanguage$pandac$Position $tmp4543 = ((org$pandalanguage$pandac$parser$Token) $tmp4542.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4544 = *(&local0);
panda$core$String* $tmp4545 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4544.value));
panda$core$String* $tmp4546 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4547 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4540, $tmp4541, $tmp4543, $tmp4545, $tmp4546, $tmp4547);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4540));
// unreffing REF($109:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4548 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4548));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4549 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4540;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2158
panda$collections$Array* $tmp4550 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4550);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
*(&local0) = $tmp4550;
// line 2159
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4552 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4553 = $tmp4552.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4554;
$tmp4554 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4554->value = $tmp4553;
panda$core$Int64 $tmp4555 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4556 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4555);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4557;
$tmp4557 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4557->value = $tmp4556;
ITable* $tmp4558 = ((panda$core$Equatable*) $tmp4554)->$class->itable;
while ($tmp4558->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4558 = $tmp4558->next;
}
$fn4560 $tmp4559 = $tmp4558->methods[0];
panda$core$Bit $tmp4561 = $tmp4559(((panda$core$Equatable*) $tmp4554), ((panda$core$Equatable*) $tmp4557));
bool $tmp4562 = $tmp4561.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4557)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4554)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4562) goto block2; else goto block3;
block2:;
// line 2160
org$pandalanguage$pandac$ASTNode* $tmp4563 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4564 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4564));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
*(&local1) = $tmp4563;
// line 2161
org$pandalanguage$pandac$ASTNode* $tmp4565 = *(&local1);
panda$core$Bit $tmp4566 = panda$core$Bit$init$builtin_bit($tmp4565 == NULL);
bool $tmp4567 = $tmp4566.value;
if ($tmp4567) goto block4; else goto block5;
block4:;
// line 2162
org$pandalanguage$pandac$ASTNode* $tmp4568 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4568));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode?)
goto block3;
block5:;
// line 2164
panda$collections$Array* $tmp4569 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4570 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4569, ((panda$core$Object*) $tmp4570));
org$pandalanguage$pandac$ASTNode* $tmp4571 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4571));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode?)
goto block1;
block3:;
// line 2166
panda$collections$Array* $tmp4572 = *(&local0);
panda$collections$ImmutableArray* $tmp4573 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4573));
// unreffing REF($74:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$collections$Array* $tmp4574 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4574));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4573;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2170
panda$core$Int64 $tmp4575 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4576 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4575);
org$pandalanguage$pandac$parser$Token$nullable $tmp4577 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4576, &$s4578);
*(&local0) = $tmp4577;
// line 2171
org$pandalanguage$pandac$parser$Token$nullable $tmp4579 = *(&local0);
panda$core$Bit $tmp4580 = panda$core$Bit$init$builtin_bit(!$tmp4579.nonnull);
bool $tmp4581 = $tmp4580.value;
if ($tmp4581) goto block1; else goto block2;
block1:;
// line 2172
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2174
panda$core$MutableString* $tmp4582 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4582);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4583 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
*(&local1) = $tmp4582;
// line 2175
goto block3;
block3:;
// line 2176
org$pandalanguage$pandac$parser$Token $tmp4584 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4584;
// line 2177
org$pandalanguage$pandac$parser$Token $tmp4585 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4586 = $tmp4585.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4587;
$tmp4587 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4587->value = $tmp4586;
panda$core$Int64 $tmp4588 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4589 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4588);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4590;
$tmp4590 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4590->value = $tmp4589;
ITable* $tmp4591 = ((panda$core$Equatable*) $tmp4587)->$class->itable;
while ($tmp4591->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4591 = $tmp4591->next;
}
$fn4593 $tmp4592 = $tmp4591->methods[0];
panda$core$Bit $tmp4594 = $tmp4592(((panda$core$Equatable*) $tmp4587), ((panda$core$Equatable*) $tmp4590));
bool $tmp4595 = $tmp4594.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4590)));
// unreffing REF($37:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4587)));
// unreffing REF($33:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4595) goto block5; else goto block6;
block5:;
// line 2178
goto block4;
block6:;
// line 2180
org$pandalanguage$pandac$parser$Token $tmp4596 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4597 = $tmp4596.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4598;
$tmp4598 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4598->value = $tmp4597;
panda$core$Int64 $tmp4599 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4600 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4599);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4601;
$tmp4601 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4601->value = $tmp4600;
ITable* $tmp4602 = ((panda$core$Equatable*) $tmp4598)->$class->itable;
while ($tmp4602->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4602 = $tmp4602->next;
}
$fn4604 $tmp4603 = $tmp4602->methods[0];
panda$core$Bit $tmp4605 = $tmp4603(((panda$core$Equatable*) $tmp4598), ((panda$core$Equatable*) $tmp4601));
bool $tmp4606 = $tmp4605.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4601)));
// unreffing REF($57:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4598)));
// unreffing REF($53:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4606) goto block7; else goto block8;
block7:;
// line 2181
org$pandalanguage$pandac$parser$Token$nullable $tmp4607 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4607.value), &$s4608);
// line 2182
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
// unreffing REF($16:panda.core.MutableString)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2184
panda$core$MutableString* $tmp4610 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4611 = *(&local2);
panda$core$String* $tmp4612 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4611);
panda$core$MutableString$append$panda$core$String($tmp4610, $tmp4612);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
// unreffing REF($87:panda.core.String)
goto block3;
block4:;
// line 2186
org$pandalanguage$pandac$ASTNode* $tmp4613 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4614 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4615 = *(&local0);
org$pandalanguage$pandac$Position $tmp4616 = ((org$pandalanguage$pandac$parser$Token) $tmp4615.value).position;
panda$core$MutableString* $tmp4617 = *(&local1);
panda$core$String* $tmp4618 = panda$core$MutableString$finish$R$panda$core$String($tmp4617);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4613, $tmp4614, $tmp4616, $tmp4618);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4613));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4618));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4613));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4619 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
// unreffing REF($16:panda.core.MutableString)
return $tmp4613;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2193
panda$core$Int64 $tmp4620 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4621 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4620);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4621);
// line 2194
panda$core$Int64 $tmp4622 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4623 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4622);
org$pandalanguage$pandac$parser$Token$nullable $tmp4624 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4623, &$s4625);
*(&local0) = $tmp4624;
// line 2195
panda$core$Int64 $tmp4626 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4627 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4626);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4627);
// line 2196
org$pandalanguage$pandac$parser$Token$nullable $tmp4628 = *(&local0);
panda$core$Bit $tmp4629 = panda$core$Bit$init$builtin_bit(!$tmp4628.nonnull);
bool $tmp4630 = $tmp4629.value;
if ($tmp4630) goto block1; else goto block2;
block1:;
// line 2197
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2199
org$pandalanguage$pandac$ASTNode* $tmp4631 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4632 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4632));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4631));
*(&local1) = $tmp4631;
// line 2200
org$pandalanguage$pandac$ASTNode* $tmp4633 = *(&local1);
panda$core$Bit $tmp4634 = panda$core$Bit$init$builtin_bit($tmp4633 == NULL);
bool $tmp4635 = $tmp4634.value;
if ($tmp4635) goto block3; else goto block4;
block3:;
// line 2201
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4636 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4631));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2203
org$pandalanguage$pandac$ASTNode* $tmp4637 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4638 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp4639 = *(&local0);
org$pandalanguage$pandac$Position $tmp4640 = ((org$pandalanguage$pandac$parser$Token) $tmp4639.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4641 = *(&local0);
panda$core$String* $tmp4642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4641.value));
org$pandalanguage$pandac$ASTNode* $tmp4643 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4637, $tmp4638, $tmp4640, $tmp4642, $tmp4643);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4642));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
// unreffing REF($51:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4644 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4644));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4631));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
return $tmp4637;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2210
panda$core$Int64 $tmp4645 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4646 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4645);
org$pandalanguage$pandac$parser$Token$nullable $tmp4647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4646, &$s4648);
*(&local0) = $tmp4647;
// line 2211
org$pandalanguage$pandac$parser$Token$nullable $tmp4649 = *(&local0);
panda$core$Bit $tmp4650 = panda$core$Bit$init$builtin_bit(!$tmp4649.nonnull);
bool $tmp4651 = $tmp4650.value;
if ($tmp4651) goto block1; else goto block2;
block1:;
// line 2212
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2214
panda$collections$Array* $tmp4652 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4652);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4653 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4653));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
*(&local1) = $tmp4652;
// line 2215
panda$core$Int64 $tmp4654 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4655 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4654);
org$pandalanguage$pandac$parser$Token$nullable $tmp4656 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4655);
panda$core$Bit $tmp4657 = panda$core$Bit$init$builtin_bit(!$tmp4656.nonnull);
bool $tmp4658 = $tmp4657.value;
if ($tmp4658) goto block3; else goto block4;
block3:;
// line 2216
org$pandalanguage$pandac$ASTNode* $tmp4659 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4660 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
*(&local2) = $tmp4659;
// line 2217
org$pandalanguage$pandac$ASTNode* $tmp4661 = *(&local2);
panda$core$Bit $tmp4662 = panda$core$Bit$init$builtin_bit($tmp4661 == NULL);
bool $tmp4663 = $tmp4662.value;
if ($tmp4663) goto block5; else goto block6;
block5:;
// line 2218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4664 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4664));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4665 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block6:;
// line 2220
panda$collections$Array* $tmp4666 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4667 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4666, ((panda$core$Object*) $tmp4667));
// line 2221
goto block7;
block7:;
panda$core$Int64 $tmp4668 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4669 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4668);
org$pandalanguage$pandac$parser$Token$nullable $tmp4670 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4669);
panda$core$Bit $tmp4671 = panda$core$Bit$init$builtin_bit($tmp4670.nonnull);
bool $tmp4672 = $tmp4671.value;
if ($tmp4672) goto block8; else goto block9;
block8:;
// line 2222
org$pandalanguage$pandac$ASTNode* $tmp4673 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4674 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
*(&local2) = $tmp4673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2223
org$pandalanguage$pandac$ASTNode* $tmp4675 = *(&local2);
panda$core$Bit $tmp4676 = panda$core$Bit$init$builtin_bit($tmp4675 == NULL);
bool $tmp4677 = $tmp4676.value;
if ($tmp4677) goto block10; else goto block11;
block10:;
// line 2224
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4678 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4678));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4679 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4679));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block11:;
// line 2226
panda$collections$Array* $tmp4680 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4681 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4680, ((panda$core$Object*) $tmp4681));
goto block7;
block9:;
// line 2228
panda$core$Int64 $tmp4682 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4683 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4682);
org$pandalanguage$pandac$parser$Token$nullable $tmp4684 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4683, &$s4685);
panda$core$Bit $tmp4686 = panda$core$Bit$init$builtin_bit(!$tmp4684.nonnull);
bool $tmp4687 = $tmp4686.value;
if ($tmp4687) goto block12; else goto block13;
block12:;
// line 2229
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4688 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4689 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ImmutableArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4690 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4690));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing REF($35:org.pandalanguage.pandac.ASTNode?)
goto block4;
block4:;
// line 2232
panda$collections$Array* $tmp4691 = *(&local1);
panda$collections$ImmutableArray* $tmp4692 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4691);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4692));
// unreffing REF($170:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$collections$Array* $tmp4693 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4693));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4692;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
// line 2240
// line 2241
panda$core$Int64 $tmp4694 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4695 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4694);
org$pandalanguage$pandac$parser$Token$nullable $tmp4696 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4695);
*(&local1) = $tmp4696;
// line 2242
org$pandalanguage$pandac$parser$Token$nullable $tmp4697 = *(&local1);
panda$core$Bit $tmp4698 = panda$core$Bit$init$builtin_bit(!$tmp4697.nonnull);
bool $tmp4699 = $tmp4698.value;
if ($tmp4699) goto block1; else goto block3;
block1:;
// line 2243
panda$core$Int64 $tmp4700 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4701 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4700);
org$pandalanguage$pandac$parser$Token$nullable $tmp4702 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4701, &$s4703);
*(&local1) = $tmp4702;
// line 2244
org$pandalanguage$pandac$parser$Token$nullable $tmp4704 = *(&local1);
panda$core$Bit $tmp4705 = panda$core$Bit$init$builtin_bit(!$tmp4704.nonnull);
bool $tmp4706 = $tmp4705.value;
if ($tmp4706) goto block4; else goto block5;
block4:;
// line 2245
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2247
panda$core$Int64 $tmp4707 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4708 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4707);
*(&local0) = $tmp4708;
goto block2;
block3:;
// line 1
// line 2250
panda$core$Int64 $tmp4709 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4710 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4709);
*(&local0) = $tmp4710;
goto block2;
block2:;
// line 2252
panda$core$Int64 $tmp4711 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4712 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4711);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4712);
// line 2253
panda$core$String* $tmp4713 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4714 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4714));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
*(&local2) = $tmp4713;
// line 2254
panda$core$Int64 $tmp4715 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4716 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4715);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4716);
// line 2255
panda$core$String* $tmp4717 = *(&local2);
panda$core$Bit $tmp4718 = panda$core$Bit$init$builtin_bit($tmp4717 == NULL);
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block6; else goto block7;
block6:;
// line 2256
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4720 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4720));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($43:panda.core.String?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2258
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2259
org$pandalanguage$pandac$parser$Token $tmp4721 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4722 = $tmp4721.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4723;
$tmp4723 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4723->value = $tmp4722;
panda$core$Int64 $tmp4724 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4725 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4724);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4726;
$tmp4726 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4726->value = $tmp4725;
ITable* $tmp4727 = ((panda$core$Equatable*) $tmp4723)->$class->itable;
while ($tmp4727->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4727 = $tmp4727->next;
}
$fn4729 $tmp4728 = $tmp4727->methods[0];
panda$core$Bit $tmp4730 = $tmp4728(((panda$core$Equatable*) $tmp4723), ((panda$core$Equatable*) $tmp4726));
bool $tmp4731 = $tmp4730.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4726)));
// unreffing REF($82:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4723)));
// unreffing REF($78:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4731) goto block8; else goto block10;
block8:;
// line 2260
panda$collections$ImmutableArray* $tmp4732 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4733 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4733));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
*(&local3) = $tmp4732;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
// unreffing REF($94:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
goto block9;
block10:;
// line 1
// line 2263
panda$collections$ImmutableArray* $tmp4734 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block9:;
// line 2265
panda$collections$ImmutableArray* $tmp4735 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4736 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
*(&local4) = $tmp4735;
// line 2266
panda$collections$ImmutableArray* $tmp4737 = *(&local4);
panda$core$Bit $tmp4738 = panda$core$Bit$init$builtin_bit($tmp4737 == NULL);
bool $tmp4739 = $tmp4738.value;
if ($tmp4739) goto block11; else goto block12;
block11:;
// line 2267
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4740 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4740));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
// unreffing REF($115:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4741 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4741));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4742 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4742));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($43:panda.core.String?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2269
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2270
org$pandalanguage$pandac$parser$Token $tmp4743 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4744 = $tmp4743.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4745;
$tmp4745 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4745->value = $tmp4744;
panda$core$Int64 $tmp4746 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4747 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4746);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4748;
$tmp4748 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4748->value = $tmp4747;
ITable* $tmp4749 = ((panda$core$Equatable*) $tmp4745)->$class->itable;
while ($tmp4749->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4749 = $tmp4749->next;
}
$fn4751 $tmp4750 = $tmp4749->methods[0];
panda$core$Bit $tmp4752 = $tmp4750(((panda$core$Equatable*) $tmp4745), ((panda$core$Equatable*) $tmp4748));
bool $tmp4753 = $tmp4752.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4748)));
// unreffing REF($163:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4745)));
// unreffing REF($159:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4753) goto block13; else goto block15;
block13:;
// line 2271
org$pandalanguage$pandac$ASTNode* $tmp4754 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4755 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4754));
*(&local5) = $tmp4754;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4754));
// unreffing REF($175:org.pandalanguage.pandac.ASTNode?)
// line 2272
org$pandalanguage$pandac$ASTNode* $tmp4756 = *(&local5);
panda$core$Bit $tmp4757 = panda$core$Bit$init$builtin_bit($tmp4756 == NULL);
bool $tmp4758 = $tmp4757.value;
if ($tmp4758) goto block16; else goto block17;
block16:;
// line 2273
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4759 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4759));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4760 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
// unreffing REF($115:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4761 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4762 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4762));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($43:panda.core.String?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2277
org$pandalanguage$pandac$ASTNode* $tmp4763 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4763));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2279
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
// line 2280
org$pandalanguage$pandac$parser$Token $tmp4764 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4765 = $tmp4764.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4766;
$tmp4766 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4766->value = $tmp4765;
panda$core$Int64 $tmp4767 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4768 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4767);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4769;
$tmp4769 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4769->value = $tmp4768;
ITable* $tmp4770 = ((panda$core$Equatable*) $tmp4766)->$class->itable;
while ($tmp4770->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4770 = $tmp4770->next;
}
$fn4772 $tmp4771 = $tmp4770->methods[0];
panda$core$Bit $tmp4773 = $tmp4771(((panda$core$Equatable*) $tmp4766), ((panda$core$Equatable*) $tmp4769));
bool $tmp4774 = $tmp4773.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4769)));
// unreffing REF($240:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4766)));
// unreffing REF($236:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4774) goto block18; else goto block20;
block18:;
// line 2281
panda$collections$ImmutableArray* $tmp4775 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4776 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
*(&local6) = $tmp4775;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
// unreffing REF($252:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 2282
panda$collections$ImmutableArray* $tmp4777 = *(&local6);
panda$core$Bit $tmp4778 = panda$core$Bit$init$builtin_bit($tmp4777 == NULL);
bool $tmp4779 = $tmp4778.value;
if ($tmp4779) goto block21; else goto block22;
block21:;
// line 2283
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4780 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4780));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4781 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4782 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
// unreffing REF($115:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4783 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4783));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4784 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($43:panda.core.String?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2287
panda$collections$ImmutableArray* $tmp4785 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block19;
block19:;
// line 2289
org$pandalanguage$pandac$ASTNode* $tmp4786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4787 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4788 = *(&local1);
org$pandalanguage$pandac$Position $tmp4789 = ((org$pandalanguage$pandac$parser$Token) $tmp4788.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4790 = *(&local0);
panda$core$String* $tmp4791 = *(&local2);
panda$collections$ImmutableArray* $tmp4792 = *(&local3);
panda$collections$ImmutableArray* $tmp4793 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4794 = *(&local5);
panda$collections$ImmutableArray* $tmp4795 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4786, $tmp4787, $tmp4789, param1, param2, $tmp4790, $tmp4791, $tmp4792, $tmp4793, $tmp4794, $tmp4795);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4786));
// unreffing REF($314:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp4796 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4796));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4797 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4797));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4798 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4798));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
// unreffing REF($115:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4799 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4799));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4800 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($43:panda.core.String?)
return $tmp4786;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
// line 2297
// line 2298
panda$core$Int64 $tmp4801 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4802 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4801);
org$pandalanguage$pandac$parser$Token$nullable $tmp4803 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4802);
*(&local1) = $tmp4803;
// line 2299
org$pandalanguage$pandac$parser$Token$nullable $tmp4804 = *(&local1);
panda$core$Bit $tmp4805 = panda$core$Bit$init$builtin_bit(!$tmp4804.nonnull);
bool $tmp4806 = $tmp4805.value;
if ($tmp4806) goto block1; else goto block3;
block1:;
// line 2300
panda$core$Int64 $tmp4807 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4808 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4807);
org$pandalanguage$pandac$parser$Token$nullable $tmp4809 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4808, &$s4810);
*(&local1) = $tmp4809;
// line 2301
org$pandalanguage$pandac$parser$Token$nullable $tmp4811 = *(&local1);
panda$core$Bit $tmp4812 = panda$core$Bit$init$builtin_bit(!$tmp4811.nonnull);
bool $tmp4813 = $tmp4812.value;
if ($tmp4813) goto block4; else goto block5;
block4:;
// line 2302
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2304
panda$core$Int64 $tmp4814 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4815 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4814);
*(&local0) = $tmp4815;
goto block2;
block3:;
// line 1
// line 2307
panda$core$Int64 $tmp4816 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4817 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4816);
*(&local0) = $tmp4817;
goto block2;
block2:;
// line 2309
panda$collections$ImmutableArray* $tmp4818 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4819 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
*(&local2) = $tmp4818;
// line 2310
panda$collections$ImmutableArray* $tmp4820 = *(&local2);
panda$core$Bit $tmp4821 = panda$core$Bit$init$builtin_bit($tmp4820 == NULL);
bool $tmp4822 = $tmp4821.value;
if ($tmp4822) goto block6; else goto block7;
block6:;
// line 2311
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4823 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
// unreffing REF($39:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2313
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2314
org$pandalanguage$pandac$parser$Token $tmp4824 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4825 = $tmp4824.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4826;
$tmp4826 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4826->value = $tmp4825;
panda$core$Int64 $tmp4827 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4828 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4827);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4829;
$tmp4829 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4829->value = $tmp4828;
ITable* $tmp4830 = ((panda$core$Equatable*) $tmp4826)->$class->itable;
while ($tmp4830->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4830 = $tmp4830->next;
}
$fn4832 $tmp4831 = $tmp4830->methods[0];
panda$core$Bit $tmp4833 = $tmp4831(((panda$core$Equatable*) $tmp4826), ((panda$core$Equatable*) $tmp4829));
bool $tmp4834 = $tmp4833.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4829)));
// unreffing REF($74:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4826)));
// unreffing REF($70:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4834) goto block8; else goto block10;
block8:;
// line 2315
org$pandalanguage$pandac$ASTNode* $tmp4835 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4836 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4836));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
*(&local3) = $tmp4835;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2316
org$pandalanguage$pandac$ASTNode* $tmp4837 = *(&local3);
panda$core$Bit $tmp4838 = panda$core$Bit$init$builtin_bit($tmp4837 == NULL);
bool $tmp4839 = $tmp4838.value;
if ($tmp4839) goto block11; else goto block12;
block11:;
// line 2317
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4840 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4841 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
// unreffing REF($39:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2321
org$pandalanguage$pandac$ASTNode* $tmp4842 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4842));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2323
panda$collections$ImmutableArray* $tmp4843 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4844 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
*(&local4) = $tmp4843;
// line 2324
panda$collections$ImmutableArray* $tmp4845 = *(&local4);
panda$core$Bit $tmp4846 = panda$core$Bit$init$builtin_bit($tmp4845 == NULL);
bool $tmp4847 = $tmp4846.value;
if ($tmp4847) goto block13; else goto block14;
block13:;
// line 2325
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4848 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4848));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
// unreffing REF($130:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp4849 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4849));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4850 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4850));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
// unreffing REF($39:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2327
org$pandalanguage$pandac$ASTNode* $tmp4851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4852 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4853 = *(&local1);
org$pandalanguage$pandac$Position $tmp4854 = ((org$pandalanguage$pandac$parser$Token) $tmp4853.value).position;
panda$collections$ImmutableArray* $tmp4855 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4855);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4856 = *(&local0);
panda$collections$ImmutableArray* $tmp4857 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4858 = *(&local3);
panda$collections$ImmutableArray* $tmp4859 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4851, $tmp4852, $tmp4854, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4855, $tmp4856, &$s4860, ((panda$collections$ImmutableArray*) NULL), $tmp4857, $tmp4858, $tmp4859);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4855));
// unreffing REF($175:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
// unreffing REF($170:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp4861 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4861));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
// unreffing REF($130:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
org$pandalanguage$pandac$ASTNode* $tmp4862 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4862));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4863 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4863));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
// unreffing REF($39:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp4851;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2335
panda$core$Int64 $tmp4864 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4865 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4864);
org$pandalanguage$pandac$parser$Token$nullable $tmp4866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4865, &$s4867);
*(&local0) = $tmp4866;
// line 2336
org$pandalanguage$pandac$parser$Token$nullable $tmp4868 = *(&local0);
panda$core$Bit $tmp4869 = panda$core$Bit$init$builtin_bit(!$tmp4868.nonnull);
bool $tmp4870 = $tmp4869.value;
if ($tmp4870) goto block1; else goto block2;
block1:;
// line 2337
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2339
panda$collections$ImmutableArray* $tmp4871 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4872 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
*(&local1) = $tmp4871;
// line 2340
panda$collections$ImmutableArray* $tmp4873 = *(&local1);
panda$core$Bit $tmp4874 = panda$core$Bit$init$builtin_bit($tmp4873 == NULL);
bool $tmp4875 = $tmp4874.value;
if ($tmp4875) goto block3; else goto block4;
block3:;
// line 2341
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4876 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4876));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2343
panda$collections$ImmutableArray* $tmp4877 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4878 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4878));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4877));
*(&local2) = $tmp4877;
// line 2344
panda$collections$ImmutableArray* $tmp4879 = *(&local2);
panda$core$Bit $tmp4880 = panda$core$Bit$init$builtin_bit($tmp4879 == NULL);
bool $tmp4881 = $tmp4880.value;
if ($tmp4881) goto block5; else goto block6;
block5:;
// line 2345
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4882 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4882));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4877));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4883 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2347
org$pandalanguage$pandac$ASTNode* $tmp4884 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4885 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4886 = *(&local0);
org$pandalanguage$pandac$Position $tmp4887 = ((org$pandalanguage$pandac$parser$Token) $tmp4886.value).position;
panda$core$Int64 $tmp4888 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4889 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4888);
panda$collections$ImmutableArray* $tmp4890 = *(&local1);
panda$collections$ImmutableArray* $tmp4891 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4884, $tmp4885, $tmp4887, param1, param2, $tmp4889, &$s4892, ((panda$collections$ImmutableArray*) NULL), $tmp4890, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp4893 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4877));
// unreffing REF($43:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
panda$collections$ImmutableArray* $tmp4894 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4894));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
// unreffing REF($16:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
return $tmp4884;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2355
org$pandalanguage$pandac$ASTNode* $tmp4895 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4896 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4896));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4895));
*(&local0) = $tmp4895;
// line 2356
org$pandalanguage$pandac$ASTNode* $tmp4897 = *(&local0);
panda$core$Bit $tmp4898 = panda$core$Bit$init$builtin_bit($tmp4897 == NULL);
bool $tmp4899 = $tmp4898.value;
if ($tmp4899) goto block1; else goto block2;
block1:;
// line 2357
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4900 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4895));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2359
org$pandalanguage$pandac$ASTNode* $tmp4901 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4902 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp4903 = *(&local0);
$fn4905 $tmp4904 = ($fn4905) $tmp4903->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp4906 = $tmp4904($tmp4903);
org$pandalanguage$pandac$ASTNode* $tmp4907 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4901, $tmp4902, $tmp4906, param1, param2, $tmp4907);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4901));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4901));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4908 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4908));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4895));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
return $tmp4901;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2366
panda$core$Int64 $tmp4909 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4910 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4909);
org$pandalanguage$pandac$parser$Token$nullable $tmp4911 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4910, &$s4912);
*(&local0) = $tmp4911;
// line 2367
org$pandalanguage$pandac$parser$Token$nullable $tmp4913 = *(&local0);
panda$core$Bit $tmp4914 = panda$core$Bit$init$builtin_bit(!$tmp4913.nonnull);
bool $tmp4915 = $tmp4914.value;
if ($tmp4915) goto block1; else goto block2;
block1:;
// line 2368
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2370
panda$collections$Array* $tmp4916 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4916);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4917 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4917));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
*(&local1) = $tmp4916;
// line 2371
panda$core$Int64 $tmp4918 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4919 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4918);
org$pandalanguage$pandac$parser$Token$nullable $tmp4920 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4919);
panda$core$Bit $tmp4921 = panda$core$Bit$init$builtin_bit($tmp4920.nonnull);
bool $tmp4922 = $tmp4921.value;
if ($tmp4922) goto block3; else goto block4;
block3:;
// line 2372
org$pandalanguage$pandac$parser$Token $tmp4923 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4924 = $tmp4923.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4925;
$tmp4925 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4925->value = $tmp4924;
panda$core$Int64 $tmp4926 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4927 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4926);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4928;
$tmp4928 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4928->value = $tmp4927;
ITable* $tmp4929 = ((panda$core$Equatable*) $tmp4925)->$class->itable;
while ($tmp4929->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4929 = $tmp4929->next;
}
$fn4931 $tmp4930 = $tmp4929->methods[1];
panda$core$Bit $tmp4932 = $tmp4930(((panda$core$Equatable*) $tmp4925), ((panda$core$Equatable*) $tmp4928));
bool $tmp4933 = $tmp4932.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4928)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4925)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4933) goto block5; else goto block6;
block5:;
// line 2373
org$pandalanguage$pandac$ASTNode* $tmp4934 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4935 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
*(&local2) = $tmp4934;
// line 2374
org$pandalanguage$pandac$ASTNode* $tmp4936 = *(&local2);
panda$core$Bit $tmp4937 = panda$core$Bit$init$builtin_bit($tmp4936 == NULL);
bool $tmp4938 = $tmp4937.value;
if ($tmp4938) goto block7; else goto block8;
block7:;
// line 2375
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4939 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4939));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4940 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4940));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2377
panda$collections$Array* $tmp4941 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4942 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4941, ((panda$core$Object*) $tmp4942));
// line 2378
goto block9;
block9:;
panda$core$Int64 $tmp4943 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4944 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4943);
org$pandalanguage$pandac$parser$Token$nullable $tmp4945 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4944);
panda$core$Bit $tmp4946 = panda$core$Bit$init$builtin_bit($tmp4945.nonnull);
bool $tmp4947 = $tmp4946.value;
if ($tmp4947) goto block10; else goto block11;
block10:;
// line 2379
org$pandalanguage$pandac$ASTNode* $tmp4948 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4949 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4949));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4948));
*(&local2) = $tmp4948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4948));
// unreffing REF($104:org.pandalanguage.pandac.ASTNode?)
// line 2380
org$pandalanguage$pandac$ASTNode* $tmp4950 = *(&local2);
panda$core$Bit $tmp4951 = panda$core$Bit$init$builtin_bit($tmp4950 == NULL);
bool $tmp4952 = $tmp4951.value;
if ($tmp4952) goto block12; else goto block13;
block12:;
// line 2381
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4953 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4953));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp4954 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4954));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2383
panda$collections$Array* $tmp4955 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4956 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4955, ((panda$core$Object*) $tmp4956));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp4957 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4957));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
goto block6;
block6:;
// line 2386
panda$core$Int64 $tmp4958 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4959 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4958);
org$pandalanguage$pandac$parser$Token$nullable $tmp4960 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4959, &$s4961);
panda$core$Bit $tmp4962 = panda$core$Bit$init$builtin_bit(!$tmp4960.nonnull);
bool $tmp4963 = $tmp4962.value;
if ($tmp4963) goto block14; else goto block15;
block14:;
// line 2387
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp4964 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4964));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2390
org$pandalanguage$pandac$ASTNode* $tmp4965 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4966 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp4967 = *(&local0);
org$pandalanguage$pandac$Position $tmp4968 = ((org$pandalanguage$pandac$parser$Token) $tmp4967.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4969 = *(&local0);
panda$core$String* $tmp4970 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4969.value));
panda$collections$Array* $tmp4971 = *(&local1);
panda$collections$ImmutableArray* $tmp4972 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4971);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4965, $tmp4966, $tmp4968, param1, $tmp4970, $tmp4972);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4965));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4972));
// unreffing REF($189:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4970));
// unreffing REF($186:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4965));
// unreffing REF($179:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp4973 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4973));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp4965;

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
// line 2399
panda$core$Int64 $tmp4974 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp4975 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4974);
org$pandalanguage$pandac$parser$Token$nullable $tmp4976 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4975, &$s4977);
*(&local0) = $tmp4976;
// line 2400
org$pandalanguage$pandac$parser$Token$nullable $tmp4978 = *(&local0);
panda$core$Bit $tmp4979 = panda$core$Bit$init$builtin_bit(!$tmp4978.nonnull);
bool $tmp4980 = $tmp4979.value;
if ($tmp4980) goto block1; else goto block2;
block1:;
// line 2401
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2403
panda$core$Int64 $tmp4981 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4982 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4981);
org$pandalanguage$pandac$parser$Token$nullable $tmp4983 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4982, &$s4984);
*(&local1) = $tmp4983;
// line 2404
org$pandalanguage$pandac$parser$Token$nullable $tmp4985 = *(&local1);
panda$core$Bit $tmp4986 = panda$core$Bit$init$builtin_bit(!$tmp4985.nonnull);
bool $tmp4987 = $tmp4986.value;
if ($tmp4987) goto block3; else goto block4;
block3:;
// line 2405
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2407
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2408
org$pandalanguage$pandac$parser$Token $tmp4988 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4989 = $tmp4988.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4990;
$tmp4990 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4990->value = $tmp4989;
panda$core$Int64 $tmp4991 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4992 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4991);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4993;
$tmp4993 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4993->value = $tmp4992;
ITable* $tmp4994 = ((panda$core$Equatable*) $tmp4990)->$class->itable;
while ($tmp4994->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4994 = $tmp4994->next;
}
$fn4996 $tmp4995 = $tmp4994->methods[0];
panda$core$Bit $tmp4997 = $tmp4995(((panda$core$Equatable*) $tmp4990), ((panda$core$Equatable*) $tmp4993));
bool $tmp4998 = $tmp4997.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4993)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4990)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4998) goto block5; else goto block7;
block5:;
// line 2409
panda$collections$ImmutableArray* $tmp4999 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5000 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5000));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
*(&local2) = $tmp4999;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
// unreffing REF($51:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 2410
panda$collections$ImmutableArray* $tmp5001 = *(&local2);
panda$core$Bit $tmp5002 = panda$core$Bit$init$builtin_bit($tmp5001 == NULL);
bool $tmp5003 = $tmp5002.value;
if ($tmp5003) goto block8; else goto block9;
block8:;
// line 2411
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5004 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5004));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2415
panda$collections$ImmutableArray* $tmp5005 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5005));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2417
panda$core$Int64 $tmp5006 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5007 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5006);
org$pandalanguage$pandac$parser$Token$nullable $tmp5008 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5007, &$s5009);
panda$core$Bit $tmp5010 = panda$core$Bit$init$builtin_bit(!$tmp5008.nonnull);
bool $tmp5011 = $tmp5010.value;
if ($tmp5011) goto block10; else goto block11;
block10:;
// line 2418
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5012 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5012));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2420
panda$collections$Array* $tmp5013 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5013);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5014 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
*(&local3) = $tmp5013;
// line 2421
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5015 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5015));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2422
goto block12;
block12:;
// line 2423
org$pandalanguage$pandac$parser$Token $tmp5016 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5016;
// line 2424
org$pandalanguage$pandac$parser$Token $tmp5017 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5018 = $tmp5017.kind;
panda$core$Int64 $tmp5019 = $tmp5018.$rawValue;
panda$core$Int64 $tmp5020 = (panda$core$Int64) {18};
panda$core$Bit $tmp5021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5020);
bool $tmp5022 = $tmp5021.value;
if ($tmp5022) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5023 = (panda$core$Int64) {19};
panda$core$Bit $tmp5024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5023);
bool $tmp5025 = $tmp5024.value;
if ($tmp5025) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5026 = (panda$core$Int64) {20};
panda$core$Bit $tmp5027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5026);
bool $tmp5028 = $tmp5027.value;
if ($tmp5028) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5029 = (panda$core$Int64) {22};
panda$core$Bit $tmp5030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5029);
bool $tmp5031 = $tmp5030.value;
if ($tmp5031) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5032 = (panda$core$Int64) {21};
panda$core$Bit $tmp5033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5032);
bool $tmp5034 = $tmp5033.value;
if ($tmp5034) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5035 = (panda$core$Int64) {14};
panda$core$Bit $tmp5036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5035);
bool $tmp5037 = $tmp5036.value;
if ($tmp5037) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5038 = (panda$core$Int64) {24};
panda$core$Bit $tmp5039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5038);
bool $tmp5040 = $tmp5039.value;
if ($tmp5040) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5041 = (panda$core$Int64) {25};
panda$core$Bit $tmp5042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5041);
bool $tmp5043 = $tmp5042.value;
if ($tmp5043) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5044 = (panda$core$Int64) {26};
panda$core$Bit $tmp5045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5044);
bool $tmp5046 = $tmp5045.value;
if ($tmp5046) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5047 = (panda$core$Int64) {27};
panda$core$Bit $tmp5048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5047);
bool $tmp5049 = $tmp5048.value;
if ($tmp5049) goto block15; else goto block25;
block15:;
// line 2428
goto block13;
block25:;
panda$core$Int64 $tmp5050 = (panda$core$Int64) {12};
panda$core$Bit $tmp5051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5050);
bool $tmp5052 = $tmp5051.value;
if ($tmp5052) goto block26; else goto block27;
block26:;
// line 2431
org$pandalanguage$pandac$ASTNode* $tmp5053 = *(&local4);
panda$core$Bit $tmp5054 = panda$core$Bit$init$builtin_bit($tmp5053 != NULL);
bool $tmp5055 = $tmp5054.value;
if ($tmp5055) goto block28; else goto block29;
block28:;
// line 2432
org$pandalanguage$pandac$parser$Token $tmp5056 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5057 = *(&local5);
panda$core$String* $tmp5058 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5057);
panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5060, $tmp5058);
panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, &$s5062);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5056, $tmp5061);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5061));
// unreffing REF($188:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
// unreffing REF($187:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5058));
// unreffing REF($186:panda.core.String)
goto block29;
block29:;
// line 2434
org$pandalanguage$pandac$ASTNode* $tmp5063 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5064 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5064));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5063));
*(&local4) = $tmp5063;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5063));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
goto block14;
block27:;
panda$core$Int64 $tmp5065 = (panda$core$Int64) {49};
panda$core$Bit $tmp5066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5019, $tmp5065);
bool $tmp5067 = $tmp5066.value;
if ($tmp5067) goto block30; else goto block31;
block30:;
// line 2437
org$pandalanguage$pandac$ASTNode* $tmp5068 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5069 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5068);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5070 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5070));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5069));
*(&local6) = $tmp5069;
// line 2438
org$pandalanguage$pandac$ASTNode* $tmp5071 = *(&local6);
panda$core$Bit $tmp5072 = panda$core$Bit$init$builtin_bit($tmp5071 == NULL);
bool $tmp5073 = $tmp5072.value;
if ($tmp5073) goto block32; else goto block33;
block32:;
// line 2439
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5074 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5074));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5069));
// unreffing REF($218:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$ASTNode* $tmp5075 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5075));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5076 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5076));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5077 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5077));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2441
panda$collections$Array* $tmp5078 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5079 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5078, ((panda$core$Object*) $tmp5079));
// line 2442
org$pandalanguage$pandac$ASTNode* $tmp5080 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5080));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5081 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5081));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5069));
// unreffing REF($218:org.pandalanguage.pandac.ASTNode?)
goto block14;
block31:;
// line 2445
goto block13;
block14:;
goto block12;
block13:;
// line 2449
panda$collections$ImmutableArray* $tmp5082 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5082);
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5083 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5083));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
*(&local7) = $tmp5082;
// line 2450
goto block34;
block34:;
// line 2451
org$pandalanguage$pandac$parser$Token $tmp5084 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5084;
// line 2452
org$pandalanguage$pandac$parser$Token $tmp5085 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5086 = $tmp5085.kind;
panda$core$Int64 $tmp5087 = $tmp5086.$rawValue;
panda$core$Int64 $tmp5088 = (panda$core$Int64) {14};
panda$core$Bit $tmp5089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5088);
bool $tmp5090 = $tmp5089.value;
if ($tmp5090) goto block37; else goto block38;
block37:;
// line 2454
panda$collections$ImmutableArray* $tmp5091 = *(&local7);
ITable* $tmp5092 = ((panda$collections$CollectionView*) $tmp5091)->$class->itable;
while ($tmp5092->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5092 = $tmp5092->next;
}
$fn5094 $tmp5093 = $tmp5092->methods[0];
panda$core$Int64 $tmp5095 = $tmp5093(((panda$collections$CollectionView*) $tmp5091));
panda$core$Int64 $tmp5096 = (panda$core$Int64) {0};
int64_t $tmp5097 = $tmp5095.value;
int64_t $tmp5098 = $tmp5096.value;
bool $tmp5099 = $tmp5097 > $tmp5098;
panda$core$Bit $tmp5100 = (panda$core$Bit) {$tmp5099};
bool $tmp5101 = $tmp5100.value;
if ($tmp5101) goto block39; else goto block40;
block39:;
// line 2455
org$pandalanguage$pandac$parser$Token $tmp5102 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5103 = *(&local8);
panda$core$String* $tmp5104 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5103);
panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5106, $tmp5104);
panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, &$s5108);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5102, $tmp5107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5107));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5105));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5104));
// unreffing REF($327:panda.core.String)
// line 2456
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5109 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5110 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5110));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5111 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5111));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5112 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5112));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2458
panda$collections$ImmutableArray* $tmp5113 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$collections$ImmutableArray* $tmp5114 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
*(&local7) = $tmp5113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
// unreffing REF($371:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
goto block36;
block38:;
panda$core$Int64 $tmp5115 = (panda$core$Int64) {12};
panda$core$Bit $tmp5116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5115);
bool $tmp5117 = $tmp5116.value;
if ($tmp5117) goto block41; else goto block42;
block41:;
// line 2461
org$pandalanguage$pandac$ASTNode* $tmp5118 = *(&local4);
panda$core$Bit $tmp5119 = panda$core$Bit$init$builtin_bit($tmp5118 != NULL);
bool $tmp5120 = $tmp5119.value;
if ($tmp5120) goto block45; else goto block46;
block45:;
*(&local9) = $tmp5119;
goto block47;
block46:;
panda$collections$ImmutableArray* $tmp5121 = *(&local7);
ITable* $tmp5122 = ((panda$collections$CollectionView*) $tmp5121)->$class->itable;
while ($tmp5122->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5122 = $tmp5122->next;
}
$fn5124 $tmp5123 = $tmp5122->methods[0];
panda$core$Int64 $tmp5125 = $tmp5123(((panda$collections$CollectionView*) $tmp5121));
panda$core$Int64 $tmp5126 = (panda$core$Int64) {0};
int64_t $tmp5127 = $tmp5125.value;
int64_t $tmp5128 = $tmp5126.value;
bool $tmp5129 = $tmp5127 > $tmp5128;
panda$core$Bit $tmp5130 = (panda$core$Bit) {$tmp5129};
*(&local9) = $tmp5130;
goto block47;
block47:;
panda$core$Bit $tmp5131 = *(&local9);
bool $tmp5132 = $tmp5131.value;
if ($tmp5132) goto block43; else goto block44;
block43:;
// line 2462
org$pandalanguage$pandac$parser$Token $tmp5133 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5134 = *(&local8);
panda$core$String* $tmp5135 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5134);
panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5137, $tmp5135);
panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, &$s5139);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5133, $tmp5138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5138));
// unreffing REF($413:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
// unreffing REF($412:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5135));
// unreffing REF($411:panda.core.String)
// line 2463
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5140 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5140));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5141 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5142));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5143 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5143));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block44:;
// line 2465
org$pandalanguage$pandac$ASTNode* $tmp5144 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5145 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5144));
*(&local4) = $tmp5144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5144));
// unreffing REF($455:org.pandalanguage.pandac.ASTNode?)
goto block36;
block42:;
panda$core$Int64 $tmp5146 = (panda$core$Int64) {18};
panda$core$Bit $tmp5147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5146);
bool $tmp5148 = $tmp5147.value;
if ($tmp5148) goto block48; else goto block49;
block48:;
// line 2468
org$pandalanguage$pandac$ASTNode* $tmp5149 = *(&local4);
panda$collections$ImmutableArray* $tmp5150 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5151 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5149, $tmp5150);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5152 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
*(&local10) = $tmp5151;
// line 2469
org$pandalanguage$pandac$ASTNode* $tmp5153 = *(&local10);
panda$core$Bit $tmp5154 = panda$core$Bit$init$builtin_bit($tmp5153 == NULL);
bool $tmp5155 = $tmp5154.value;
if ($tmp5155) goto block50; else goto block51;
block50:;
// line 2470
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5156 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
// unreffing REF($473:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5157 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5157));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5158 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5158));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5159 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5159));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5160 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2472
panda$collections$Array* $tmp5161 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5162 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5161, ((panda$core$Object*) $tmp5162));
// line 2473
org$pandalanguage$pandac$ASTNode* $tmp5163 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2474
panda$collections$ImmutableArray* $tmp5164 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5164);
panda$collections$ImmutableArray* $tmp5165 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5165));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
*(&local7) = $tmp5164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
// unreffing REF($540:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5166 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5166));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
// unreffing REF($473:org.pandalanguage.pandac.ASTNode?)
goto block36;
block49:;
panda$core$Int64 $tmp5167 = (panda$core$Int64) {19};
panda$core$Bit $tmp5168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5167);
bool $tmp5169 = $tmp5168.value;
if ($tmp5169) goto block52; else goto block53;
block52:;
// line 2477
org$pandalanguage$pandac$ASTNode* $tmp5170 = *(&local4);
panda$collections$ImmutableArray* $tmp5171 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5172 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5170, $tmp5171);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5173 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5173));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
*(&local11) = $tmp5172;
// line 2478
org$pandalanguage$pandac$ASTNode* $tmp5174 = *(&local11);
panda$core$Bit $tmp5175 = panda$core$Bit$init$builtin_bit($tmp5174 == NULL);
bool $tmp5176 = $tmp5175.value;
if ($tmp5176) goto block54; else goto block55;
block54:;
// line 2479
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5177 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5177));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
// unreffing REF($568:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5178 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5178));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5179 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5179));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5180 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5180));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5181 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2481
panda$collections$Array* $tmp5182 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5183 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5182, ((panda$core$Object*) $tmp5183));
// line 2482
org$pandalanguage$pandac$ASTNode* $tmp5184 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5184));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2483
panda$collections$ImmutableArray* $tmp5185 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5185);
panda$collections$ImmutableArray* $tmp5186 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5186));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
*(&local7) = $tmp5185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
// unreffing REF($635:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5187 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5187));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
// unreffing REF($568:org.pandalanguage.pandac.ASTNode?)
goto block36;
block53:;
panda$core$Int64 $tmp5188 = (panda$core$Int64) {20};
panda$core$Bit $tmp5189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5188);
bool $tmp5190 = $tmp5189.value;
if ($tmp5190) goto block56; else goto block57;
block56:;
// line 2486
org$pandalanguage$pandac$ASTNode* $tmp5191 = *(&local4);
panda$collections$ImmutableArray* $tmp5192 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5193 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5191, $tmp5192);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5194 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
*(&local12) = $tmp5193;
// line 2487
org$pandalanguage$pandac$ASTNode* $tmp5195 = *(&local12);
panda$core$Bit $tmp5196 = panda$core$Bit$init$builtin_bit($tmp5195 == NULL);
bool $tmp5197 = $tmp5196.value;
if ($tmp5197) goto block58; else goto block59;
block58:;
// line 2488
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5198 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5198));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
// unreffing REF($663:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5199 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5200 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5201 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5201));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5202 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5202));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2490
panda$collections$Array* $tmp5203 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5204 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5203, ((panda$core$Object*) $tmp5204));
// line 2491
org$pandalanguage$pandac$ASTNode* $tmp5205 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5205));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2492
panda$collections$ImmutableArray* $tmp5206 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5206);
panda$collections$ImmutableArray* $tmp5207 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5207));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
*(&local7) = $tmp5206;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
// unreffing REF($730:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5208 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5208));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
// unreffing REF($663:org.pandalanguage.pandac.ASTNode?)
goto block36;
block57:;
panda$core$Int64 $tmp5209 = (panda$core$Int64) {22};
panda$core$Bit $tmp5210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5209);
bool $tmp5211 = $tmp5210.value;
if ($tmp5211) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5212 = (panda$core$Int64) {21};
panda$core$Bit $tmp5213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5212);
bool $tmp5214 = $tmp5213.value;
if ($tmp5214) goto block60; else goto block62;
block60:;
// line 2495
org$pandalanguage$pandac$ASTNode* $tmp5215 = *(&local4);
panda$collections$ImmutableArray* $tmp5216 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5217 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5215, $tmp5216);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5218 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5218));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
*(&local13) = $tmp5217;
// line 2496
org$pandalanguage$pandac$ASTNode* $tmp5219 = *(&local13);
panda$core$Bit $tmp5220 = panda$core$Bit$init$builtin_bit($tmp5219 == NULL);
bool $tmp5221 = $tmp5220.value;
if ($tmp5221) goto block63; else goto block64;
block63:;
// line 2497
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5222 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5222));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
// unreffing REF($762:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5223 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5224 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5224));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5225 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5226 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5226));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2499
panda$collections$Array* $tmp5227 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5228 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5227, ((panda$core$Object*) $tmp5228));
// line 2500
org$pandalanguage$pandac$ASTNode* $tmp5229 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2501
panda$collections$ImmutableArray* $tmp5230 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5230);
panda$collections$ImmutableArray* $tmp5231 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
*(&local7) = $tmp5230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
// unreffing REF($829:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5232 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5232));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
// unreffing REF($762:org.pandalanguage.pandac.ASTNode?)
goto block36;
block62:;
panda$core$Int64 $tmp5233 = (panda$core$Int64) {24};
panda$core$Bit $tmp5234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5233);
bool $tmp5235 = $tmp5234.value;
if ($tmp5235) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5236 = (panda$core$Int64) {25};
panda$core$Bit $tmp5237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5236);
bool $tmp5238 = $tmp5237.value;
if ($tmp5238) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5239 = (panda$core$Int64) {26};
panda$core$Bit $tmp5240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5239);
bool $tmp5241 = $tmp5240.value;
if ($tmp5241) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5242 = (panda$core$Int64) {27};
panda$core$Bit $tmp5243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5242);
bool $tmp5244 = $tmp5243.value;
if ($tmp5244) goto block65; else goto block69;
block65:;
// line 2504
org$pandalanguage$pandac$ASTNode* $tmp5245 = *(&local4);
panda$collections$ImmutableArray* $tmp5246 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5247 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5245, $tmp5246);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5248 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5248));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5247));
*(&local14) = $tmp5247;
// line 2505
org$pandalanguage$pandac$ASTNode* $tmp5249 = *(&local14);
panda$core$Bit $tmp5250 = panda$core$Bit$init$builtin_bit($tmp5249 == NULL);
bool $tmp5251 = $tmp5250.value;
if ($tmp5251) goto block70; else goto block71;
block70:;
// line 2506
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5252 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5247));
// unreffing REF($869:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5253 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5253));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5254 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5254));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5255 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5256 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5256));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2508
panda$collections$Array* $tmp5257 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5258 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5257, ((panda$core$Object*) $tmp5258));
// line 2509
org$pandalanguage$pandac$ASTNode* $tmp5259 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2510
panda$collections$ImmutableArray* $tmp5260 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5260);
panda$collections$ImmutableArray* $tmp5261 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
*(&local7) = $tmp5260;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
// unreffing REF($936:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5262 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5262));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5247));
// unreffing REF($869:org.pandalanguage.pandac.ASTNode?)
goto block36;
block69:;
panda$core$Int64 $tmp5263 = (panda$core$Int64) {101};
panda$core$Bit $tmp5264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5087, $tmp5263);
bool $tmp5265 = $tmp5264.value;
if ($tmp5265) goto block72; else goto block73;
block72:;
// line 2513
panda$core$Int64 $tmp5266 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5267 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5266);
org$pandalanguage$pandac$parser$Token$nullable $tmp5268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5267, &$s5269);
// line 2514
goto block35;
block73:;
// line 2517
org$pandalanguage$pandac$parser$Token $tmp5270 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5271 = *(&local8);
panda$core$String* $tmp5272 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5271);
panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5274, $tmp5272);
panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5276);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5270, $tmp5275);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
// unreffing REF($972:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5273));
// unreffing REF($971:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
// unreffing REF($970:panda.core.String)
// line 2518
org$pandalanguage$pandac$parser$Token $tmp5277 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2519
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5278 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5278));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5279 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5279));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5281 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5281));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2523
org$pandalanguage$pandac$ASTNode* $tmp5282 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5283 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5284 = *(&local0);
org$pandalanguage$pandac$Position $tmp5285 = ((org$pandalanguage$pandac$parser$Token) $tmp5284.value).position;
panda$core$Int64 $tmp5286 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5287 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5286);
org$pandalanguage$pandac$parser$Token$nullable $tmp5288 = *(&local1);
panda$core$String* $tmp5289 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5288.value));
panda$collections$ImmutableArray* $tmp5290 = *(&local2);
panda$collections$Array* $tmp5291 = *(&local3);
panda$collections$ImmutableArray* $tmp5292 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5291);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5282, $tmp5283, $tmp5285, param1, param2, $tmp5287, $tmp5289, $tmp5290, ((panda$collections$ImmutableArray*) NULL), $tmp5292);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
// unreffing REF($1030:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing REF($1026:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
// unreffing REF($1017:org.pandalanguage.pandac.ASTNode)
panda$collections$ImmutableArray* $tmp5293 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5293));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($289:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5294 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5294));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5295));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5296 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5282;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2532
org$pandalanguage$pandac$parser$Token $tmp5297 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5297;
// line 2533
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2534
org$pandalanguage$pandac$parser$Token $tmp5298 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5299 = $tmp5298.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5300;
$tmp5300 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5300->value = $tmp5299;
panda$core$Int64 $tmp5301 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5302 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5301);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5303;
$tmp5303 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5303->value = $tmp5302;
ITable* $tmp5304 = ((panda$core$Equatable*) $tmp5300)->$class->itable;
while ($tmp5304->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5304 = $tmp5304->next;
}
$fn5306 $tmp5305 = $tmp5304->methods[0];
panda$core$Bit $tmp5307 = $tmp5305(((panda$core$Equatable*) $tmp5300), ((panda$core$Equatable*) $tmp5303));
bool $tmp5308 = $tmp5307.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5303)));
// unreffing REF($12:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5300)));
// unreffing REF($8:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5308) goto block1; else goto block3;
block1:;
// line 2535
org$pandalanguage$pandac$ASTNode* $tmp5309 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
*(&local1) = $tmp5309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
// line 2536
org$pandalanguage$pandac$ASTNode* $tmp5311 = *(&local1);
panda$core$Bit $tmp5312 = panda$core$Bit$init$builtin_bit($tmp5311 == NULL);
bool $tmp5313 = $tmp5312.value;
if ($tmp5313) goto block4; else goto block5;
block4:;
// line 2537
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5314));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2541
org$pandalanguage$pandac$ASTNode* $tmp5315 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5315));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2543
panda$collections$ImmutableArray* $tmp5316 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5317 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
*(&local2) = $tmp5316;
// line 2544
panda$collections$ImmutableArray* $tmp5318 = *(&local2);
panda$core$Bit $tmp5319 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5320 = $tmp5319.value;
if ($tmp5320) goto block6; else goto block7;
block6:;
// line 2545
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5321 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5321));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5322 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5322));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2547
org$pandalanguage$pandac$parser$Token $tmp5323 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5324 = $tmp5323.kind;
panda$core$Int64 $tmp5325 = $tmp5324.$rawValue;
panda$core$Int64 $tmp5326 = (panda$core$Int64) {18};
panda$core$Bit $tmp5327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5326);
bool $tmp5328 = $tmp5327.value;
if ($tmp5328) goto block9; else goto block10;
block9:;
// line 2549
org$pandalanguage$pandac$ASTNode* $tmp5329 = *(&local1);
panda$collections$ImmutableArray* $tmp5330 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5331 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5329, $tmp5330);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5331));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5331));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5332 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5333 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5331;
block10:;
panda$core$Int64 $tmp5334 = (panda$core$Int64) {19};
panda$core$Bit $tmp5335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5334);
bool $tmp5336 = $tmp5335.value;
if ($tmp5336) goto block11; else goto block12;
block11:;
// line 2552
org$pandalanguage$pandac$ASTNode* $tmp5337 = *(&local1);
panda$collections$ImmutableArray* $tmp5338 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5339 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5337, $tmp5338);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5339));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5339));
// unreffing REF($128:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5340 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5341 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5339;
block12:;
panda$core$Int64 $tmp5342 = (panda$core$Int64) {20};
panda$core$Bit $tmp5343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5342);
bool $tmp5344 = $tmp5343.value;
if ($tmp5344) goto block13; else goto block14;
block13:;
// line 2555
org$pandalanguage$pandac$ASTNode* $tmp5345 = *(&local1);
panda$collections$ImmutableArray* $tmp5346 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5347 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5345, $tmp5346);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
// unreffing REF($155:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5348 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5349 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5347;
block14:;
panda$core$Int64 $tmp5350 = (panda$core$Int64) {22};
panda$core$Bit $tmp5351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5350);
bool $tmp5352 = $tmp5351.value;
if ($tmp5352) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5353 = (panda$core$Int64) {21};
panda$core$Bit $tmp5354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5353);
bool $tmp5355 = $tmp5354.value;
if ($tmp5355) goto block15; else goto block17;
block15:;
// line 2558
org$pandalanguage$pandac$ASTNode* $tmp5356 = *(&local1);
panda$collections$ImmutableArray* $tmp5357 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5358 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5356, $tmp5357);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5358));
// unreffing REF($186:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5359 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5359));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5360 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5358;
block17:;
panda$core$Int64 $tmp5361 = (panda$core$Int64) {23};
panda$core$Bit $tmp5362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5361);
bool $tmp5363 = $tmp5362.value;
if ($tmp5363) goto block18; else goto block19;
block18:;
// line 2561
org$pandalanguage$pandac$ASTNode* $tmp5364 = *(&local1);
panda$collections$ImmutableArray* $tmp5365 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5366 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5364, $tmp5365);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
// unreffing REF($213:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5367 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5367));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5368 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5368));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5366;
block19:;
panda$core$Int64 $tmp5369 = (panda$core$Int64) {24};
panda$core$Bit $tmp5370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5369);
bool $tmp5371 = $tmp5370.value;
if ($tmp5371) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5372 = (panda$core$Int64) {25};
panda$core$Bit $tmp5373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5372);
bool $tmp5374 = $tmp5373.value;
if ($tmp5374) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5375 = (panda$core$Int64) {26};
panda$core$Bit $tmp5376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5375);
bool $tmp5377 = $tmp5376.value;
if ($tmp5377) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5378 = (panda$core$Int64) {27};
panda$core$Bit $tmp5379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5325, $tmp5378);
bool $tmp5380 = $tmp5379.value;
if ($tmp5380) goto block20; else goto block24;
block20:;
// line 2564
org$pandalanguage$pandac$ASTNode* $tmp5381 = *(&local1);
panda$collections$ImmutableArray* $tmp5382 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5383 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5381, $tmp5382);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5383));
// unreffing REF($252:org.pandalanguage.pandac.ASTNode?)
panda$collections$ImmutableArray* $tmp5384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5384));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5385 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5385));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5383;
block24:;
// line 2568
panda$core$Int64 $tmp5386 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5387 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5386);
org$pandalanguage$pandac$parser$Token$nullable $tmp5388 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5387, &$s5389);
// line 2569
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5390 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5390));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing REF($60:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5391 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5391));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5392 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5393 = $tmp5392.value;
if ($tmp5393) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5394 = (panda$core$Int64) {2531};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5395, $tmp5394, &$s5396);
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
// line 2578
panda$core$Int64 $tmp5397 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5398 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5397);
org$pandalanguage$pandac$parser$Token$nullable $tmp5399 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5398, &$s5400);
*(&local0) = $tmp5399;
// line 2579
org$pandalanguage$pandac$parser$Token$nullable $tmp5401 = *(&local0);
panda$core$Bit $tmp5402 = panda$core$Bit$init$builtin_bit(!$tmp5401.nonnull);
bool $tmp5403 = $tmp5402.value;
if ($tmp5403) goto block1; else goto block2;
block1:;
// line 2580
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2582
panda$core$Int64 $tmp5404 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5405 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5404);
org$pandalanguage$pandac$parser$Token$nullable $tmp5406 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5405, &$s5407);
*(&local1) = $tmp5406;
// line 2583
org$pandalanguage$pandac$parser$Token$nullable $tmp5408 = *(&local1);
panda$core$Bit $tmp5409 = panda$core$Bit$init$builtin_bit(!$tmp5408.nonnull);
bool $tmp5410 = $tmp5409.value;
if ($tmp5410) goto block3; else goto block4;
block3:;
// line 2584
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2586
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2587
org$pandalanguage$pandac$parser$Token $tmp5411 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5412 = $tmp5411.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5413;
$tmp5413 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5413->value = $tmp5412;
panda$core$Int64 $tmp5414 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5415 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5414);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5416;
$tmp5416 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5416->value = $tmp5415;
ITable* $tmp5417 = ((panda$core$Equatable*) $tmp5413)->$class->itable;
while ($tmp5417->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5417 = $tmp5417->next;
}
$fn5419 $tmp5418 = $tmp5417->methods[0];
panda$core$Bit $tmp5420 = $tmp5418(((panda$core$Equatable*) $tmp5413), ((panda$core$Equatable*) $tmp5416));
bool $tmp5421 = $tmp5420.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5416)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5413)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5421) goto block5; else goto block7;
block5:;
// line 2588
panda$collections$ImmutableArray* $tmp5422 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5423 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5422));
*(&local2) = $tmp5422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5422));
// unreffing REF($51:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 2589
panda$collections$ImmutableArray* $tmp5424 = *(&local2);
panda$core$Bit $tmp5425 = panda$core$Bit$init$builtin_bit($tmp5424 == NULL);
bool $tmp5426 = $tmp5425.value;
if ($tmp5426) goto block8; else goto block9;
block8:;
// line 2590
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5427 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5427));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2594
panda$collections$ImmutableArray* $tmp5428 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2596
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2597
org$pandalanguage$pandac$parser$Token $tmp5429 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5430 = $tmp5429.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5431;
$tmp5431 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5431->value = $tmp5430;
panda$core$Int64 $tmp5432 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5433 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5432);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5434;
$tmp5434 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5434->value = $tmp5433;
ITable* $tmp5435 = ((panda$core$Equatable*) $tmp5431)->$class->itable;
while ($tmp5435->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5435 = $tmp5435->next;
}
$fn5437 $tmp5436 = $tmp5435->methods[0];
panda$core$Bit $tmp5438 = $tmp5436(((panda$core$Equatable*) $tmp5431), ((panda$core$Equatable*) $tmp5434));
bool $tmp5439 = $tmp5438.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5434)));
// unreffing REF($95:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5431)));
// unreffing REF($91:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5439) goto block10; else goto block12;
block10:;
// line 2598
panda$collections$ImmutableArray* $tmp5440 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5441 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
*(&local3) = $tmp5440;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
// unreffing REF($107:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 2599
panda$collections$ImmutableArray* $tmp5442 = *(&local3);
panda$core$Bit $tmp5443 = panda$core$Bit$init$builtin_bit($tmp5442 == NULL);
bool $tmp5444 = $tmp5443.value;
if ($tmp5444) goto block13; else goto block14;
block13:;
// line 2600
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5445 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5445));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5446 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5446));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2604
panda$collections$ImmutableArray* $tmp5447 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5447));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block11;
block11:;
// line 2606
panda$core$Int64 $tmp5448 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5449 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5448);
org$pandalanguage$pandac$parser$Token$nullable $tmp5450 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5449, &$s5451);
panda$core$Bit $tmp5452 = panda$core$Bit$init$builtin_bit(!$tmp5450.nonnull);
bool $tmp5453 = $tmp5452.value;
if ($tmp5453) goto block15; else goto block16;
block15:;
// line 2607
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5454 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5454));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5455 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2609
panda$collections$Array* $tmp5456 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5456);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5457 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5457));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5456));
*(&local4) = $tmp5456;
// line 2610
goto block17;
block17:;
panda$core$Int64 $tmp5458 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5459 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5458);
org$pandalanguage$pandac$parser$Token$nullable $tmp5460 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5459);
panda$core$Bit $tmp5461 = panda$core$Bit$init$builtin_bit(!$tmp5460.nonnull);
bool $tmp5462 = $tmp5461.value;
if ($tmp5462) goto block18; else goto block19;
block18:;
// line 2611
org$pandalanguage$pandac$ASTNode* $tmp5463 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5464 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5464));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
*(&local5) = $tmp5463;
// line 2612
org$pandalanguage$pandac$ASTNode* $tmp5465 = *(&local5);
panda$core$Bit $tmp5466 = panda$core$Bit$init$builtin_bit($tmp5465 == NULL);
bool $tmp5467 = $tmp5466.value;
if ($tmp5467) goto block20; else goto block21;
block20:;
// line 2613
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5468 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5468));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
// unreffing REF($190:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp5469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5469));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5456));
// unreffing REF($170:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5470 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2615
panda$collections$Array* $tmp5472 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5473 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5472, ((panda$core$Object*) $tmp5473));
org$pandalanguage$pandac$ASTNode* $tmp5474 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5474));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
// unreffing REF($190:org.pandalanguage.pandac.ASTNode?)
goto block17;
block19:;
// line 2617
org$pandalanguage$pandac$ASTNode* $tmp5475 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5476 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5477 = *(&local0);
org$pandalanguage$pandac$Position $tmp5478 = ((org$pandalanguage$pandac$parser$Token) $tmp5477.value).position;
panda$core$Int64 $tmp5479 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5480 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5479);
org$pandalanguage$pandac$parser$Token$nullable $tmp5481 = *(&local1);
panda$core$String* $tmp5482 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5481.value));
panda$collections$ImmutableArray* $tmp5483 = *(&local2);
panda$collections$ImmutableArray* $tmp5484 = *(&local3);
panda$collections$Array* $tmp5485 = *(&local4);
panda$collections$ImmutableArray* $tmp5486 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5485);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5475, $tmp5476, $tmp5478, param1, param2, $tmp5480, $tmp5482, $tmp5483, $tmp5484, $tmp5486);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5475));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5486));
// unreffing REF($265:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5482));
// unreffing REF($260:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5475));
// unreffing REF($251:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5487 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5487));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5456));
// unreffing REF($170:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5488 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5488));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5489 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5489));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5475;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2626
panda$core$Int64 $tmp5490 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5491 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5490);
org$pandalanguage$pandac$parser$Token$nullable $tmp5492 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5491, &$s5493);
*(&local0) = $tmp5492;
// line 2627
org$pandalanguage$pandac$parser$Token$nullable $tmp5494 = *(&local0);
panda$core$Bit $tmp5495 = panda$core$Bit$init$builtin_bit(!$tmp5494.nonnull);
bool $tmp5496 = $tmp5495.value;
if ($tmp5496) goto block1; else goto block2;
block1:;
// line 2628
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2630
panda$core$Int64 $tmp5497 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5498 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5497);
org$pandalanguage$pandac$parser$Token$nullable $tmp5499 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5498, &$s5500);
*(&local1) = $tmp5499;
// line 2631
org$pandalanguage$pandac$parser$Token$nullable $tmp5501 = *(&local1);
panda$core$Bit $tmp5502 = panda$core$Bit$init$builtin_bit(!$tmp5501.nonnull);
bool $tmp5503 = $tmp5502.value;
if ($tmp5503) goto block3; else goto block4;
block3:;
// line 2632
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2634
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2635
org$pandalanguage$pandac$parser$Token $tmp5504 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5505 = $tmp5504.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5506;
$tmp5506 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5506->value = $tmp5505;
panda$core$Int64 $tmp5507 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5508 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5507);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5509;
$tmp5509 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5509->value = $tmp5508;
ITable* $tmp5510 = ((panda$core$Equatable*) $tmp5506)->$class->itable;
while ($tmp5510->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5510 = $tmp5510->next;
}
$fn5512 $tmp5511 = $tmp5510->methods[0];
panda$core$Bit $tmp5513 = $tmp5511(((panda$core$Equatable*) $tmp5506), ((panda$core$Equatable*) $tmp5509));
bool $tmp5514 = $tmp5513.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5509)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5506)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5514) goto block5; else goto block7;
block5:;
// line 2636
panda$collections$ImmutableArray* $tmp5515 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5516 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
*(&local2) = $tmp5515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
// unreffing REF($51:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>?)
// line 2637
panda$collections$ImmutableArray* $tmp5517 = *(&local2);
panda$core$Bit $tmp5518 = panda$core$Bit$init$builtin_bit($tmp5517 == NULL);
bool $tmp5519 = $tmp5518.value;
if ($tmp5519) goto block8; else goto block9;
block8:;
// line 2638
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5520 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5520));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2642
panda$collections$ImmutableArray* $tmp5521 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5521);
panda$collections$ImmutableArray* $tmp5522 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5522));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5521));
*(&local2) = $tmp5521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5521));
// unreffing REF($79:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
goto block6;
block6:;
// line 2644
panda$collections$Array* $tmp5523 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5523);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5524 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
*(&local3) = $tmp5523;
// line 2645
panda$core$Int64 $tmp5525 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5526 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5525);
org$pandalanguage$pandac$parser$Token$nullable $tmp5527 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5526);
panda$core$Bit $tmp5528 = panda$core$Bit$init$builtin_bit($tmp5527.nonnull);
bool $tmp5529 = $tmp5528.value;
if ($tmp5529) goto block10; else goto block11;
block10:;
// line 2646
org$pandalanguage$pandac$ASTNode* $tmp5530 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5531 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
*(&local4) = $tmp5530;
// line 2647
org$pandalanguage$pandac$ASTNode* $tmp5532 = *(&local4);
panda$core$Bit $tmp5533 = panda$core$Bit$init$builtin_bit($tmp5532 == NULL);
bool $tmp5534 = $tmp5533.value;
if ($tmp5534) goto block12; else goto block13;
block12:;
// line 2648
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5535 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5535));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
// unreffing REF($113:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp5536 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5537 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5537));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2650
panda$collections$Array* $tmp5538 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5539 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5538, ((panda$core$Object*) $tmp5539));
// line 2651
goto block14;
block14:;
panda$core$Int64 $tmp5540 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5541 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5540);
org$pandalanguage$pandac$parser$Token$nullable $tmp5542 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5541);
panda$core$Bit $tmp5543 = panda$core$Bit$init$builtin_bit($tmp5542.nonnull);
bool $tmp5544 = $tmp5543.value;
if ($tmp5544) goto block15; else goto block16;
block15:;
// line 2652
org$pandalanguage$pandac$ASTNode* $tmp5545 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5546 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5545));
*(&local4) = $tmp5545;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5545));
// unreffing REF($169:org.pandalanguage.pandac.ASTNode?)
// line 2653
org$pandalanguage$pandac$ASTNode* $tmp5547 = *(&local4);
panda$core$Bit $tmp5548 = panda$core$Bit$init$builtin_bit($tmp5547 == NULL);
bool $tmp5549 = $tmp5548.value;
if ($tmp5549) goto block17; else goto block18;
block17:;
// line 2654
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5550 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5550));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
// unreffing REF($113:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp5551 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5551));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5552 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5552));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2656
panda$collections$Array* $tmp5553 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5554 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5553, ((panda$core$Object*) $tmp5554));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5555 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5555));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
// unreffing REF($113:org.pandalanguage.pandac.ASTNode?)
goto block11;
block11:;
// line 2659
panda$core$Int64 $tmp5556 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5557 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5556);
org$pandalanguage$pandac$parser$Token$nullable $tmp5558 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5557, &$s5559);
panda$core$Bit $tmp5560 = panda$core$Bit$init$builtin_bit(!$tmp5558.nonnull);
bool $tmp5561 = $tmp5560.value;
if ($tmp5561) goto block19; else goto block20;
block19:;
// line 2660
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5562 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5562));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5563 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5563));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2662
panda$collections$Array* $tmp5564 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5564);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5565 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5565));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
*(&local5) = $tmp5564;
// line 2663
goto block21;
block21:;
panda$core$Int64 $tmp5566 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5567 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5566);
org$pandalanguage$pandac$parser$Token$nullable $tmp5568 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5567);
panda$core$Bit $tmp5569 = panda$core$Bit$init$builtin_bit(!$tmp5568.nonnull);
bool $tmp5570 = $tmp5569.value;
if ($tmp5570) goto block22; else goto block23;
block22:;
// line 2664
org$pandalanguage$pandac$ASTNode* $tmp5571 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5572 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5572));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
*(&local6) = $tmp5571;
// line 2665
org$pandalanguage$pandac$ASTNode* $tmp5573 = *(&local6);
panda$core$Bit $tmp5574 = panda$core$Bit$init$builtin_bit($tmp5573 == NULL);
bool $tmp5575 = $tmp5574.value;
if ($tmp5575) goto block24; else goto block25;
block24:;
// line 2666
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5576 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5576));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
// unreffing REF($273:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp5577 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5577));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
// unreffing REF($253:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp5578 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5578));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5579 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5579));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2668
panda$collections$Array* $tmp5580 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5581 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5580, ((panda$core$Object*) $tmp5581));
org$pandalanguage$pandac$ASTNode* $tmp5582 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5582));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
// unreffing REF($273:org.pandalanguage.pandac.ASTNode?)
goto block21;
block23:;
// line 2670
org$pandalanguage$pandac$ASTNode* $tmp5583 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5584 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5585 = *(&local0);
org$pandalanguage$pandac$Position $tmp5586 = ((org$pandalanguage$pandac$parser$Token) $tmp5585.value).position;
panda$core$Int64 $tmp5587 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5588 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5587);
org$pandalanguage$pandac$parser$Token$nullable $tmp5589 = *(&local1);
panda$core$String* $tmp5590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5589.value));
panda$collections$ImmutableArray* $tmp5591 = *(&local2);
panda$collections$Array* $tmp5592 = *(&local3);
panda$collections$ImmutableArray* $tmp5593 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5592);
panda$collections$Array* $tmp5594 = *(&local5);
panda$collections$ImmutableArray* $tmp5595 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5594);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5583, $tmp5584, $tmp5586, param1, param2, $tmp5588, $tmp5590, $tmp5591, $tmp5593, $tmp5595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5583));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5595));
// unreffing REF($355:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
// unreffing REF($350:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5590));
// unreffing REF($346:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5583));
// unreffing REF($337:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5596 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5596));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
// unreffing REF($253:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$Array* $tmp5597 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5597));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$collections$ImmutableArray* $tmp5598 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5598));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5583;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2678
org$pandalanguage$pandac$parser$Token $tmp5599 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5600 = $tmp5599.kind;
panda$core$Int64 $tmp5601 = $tmp5600.$rawValue;
panda$core$Int64 $tmp5602 = (panda$core$Int64) {16};
panda$core$Bit $tmp5603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5601, $tmp5602);
bool $tmp5604 = $tmp5603.value;
if ($tmp5604) goto block2; else goto block3;
block2:;
// line 2680
org$pandalanguage$pandac$ASTNode* $tmp5605 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5605));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp5605;
block3:;
// line 2683
org$pandalanguage$pandac$ASTNode* $tmp5606 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5606));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5606));
// unreffing REF($17:org.pandalanguage.pandac.ASTNode?)
return $tmp5606;
block1:;
panda$core$Bit $tmp5607 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5608 = $tmp5607.value;
if ($tmp5608) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5609 = (panda$core$Int64) {2677};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5610, $tmp5609, &$s5611);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2692
panda$collections$Array* $tmp5612 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5612);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5613 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5613));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5612));
*(&local0) = $tmp5612;
// line 2693
org$pandalanguage$pandac$parser$Token $tmp5614 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5615 = $tmp5614.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5616;
$tmp5616 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5616->value = $tmp5615;
panda$core$Int64 $tmp5617 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5618 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5617);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5619;
$tmp5619 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5619->value = $tmp5618;
ITable* $tmp5620 = ((panda$core$Equatable*) $tmp5616)->$class->itable;
while ($tmp5620->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5620 = $tmp5620->next;
}
$fn5622 $tmp5621 = $tmp5620->methods[0];
panda$core$Bit $tmp5623 = $tmp5621(((panda$core$Equatable*) $tmp5616), ((panda$core$Equatable*) $tmp5619));
bool $tmp5624 = $tmp5623.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5619)));
// unreffing REF($18:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5616)));
// unreffing REF($14:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5624) goto block1; else goto block2;
block1:;
// line 2694
org$pandalanguage$pandac$ASTNode* $tmp5625 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5626 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5625));
*(&local1) = $tmp5625;
// line 2695
org$pandalanguage$pandac$ASTNode* $tmp5627 = *(&local1);
panda$core$Bit $tmp5628 = panda$core$Bit$init$builtin_bit($tmp5627 != NULL);
bool $tmp5629 = $tmp5628.value;
if ($tmp5629) goto block3; else goto block4;
block3:;
// line 2696
panda$collections$Array* $tmp5630 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5631 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5630, ((panda$core$Object*) $tmp5631));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5632 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5632));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5625));
// unreffing REF($30:org.pandalanguage.pandac.ASTNode?)
goto block2;
block2:;
// line 2699
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5633 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5634 = $tmp5633.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5635;
$tmp5635 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5635->value = $tmp5634;
panda$core$Int64 $tmp5636 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5637 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5636);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5638;
$tmp5638 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5638->value = $tmp5637;
ITable* $tmp5639 = ((panda$core$Equatable*) $tmp5635)->$class->itable;
while ($tmp5639->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5639 = $tmp5639->next;
}
$fn5641 $tmp5640 = $tmp5639->methods[1];
panda$core$Bit $tmp5642 = $tmp5640(((panda$core$Equatable*) $tmp5635), ((panda$core$Equatable*) $tmp5638));
bool $tmp5643 = $tmp5642.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5638)));
// unreffing REF($69:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5635)));
// unreffing REF($65:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5643) goto block6; else goto block7;
block6:;
// line 2700
org$pandalanguage$pandac$ASTNode* $tmp5644 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5645 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5645));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
*(&local2) = $tmp5644;
// line 2701
org$pandalanguage$pandac$ASTNode* $tmp5646 = *(&local2);
panda$core$Bit $tmp5647 = panda$core$Bit$init$builtin_bit($tmp5646 == NULL);
bool $tmp5648 = $tmp5647.value;
if ($tmp5648) goto block8; else goto block9;
block8:;
// line 2702
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5649 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5649));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
panda$collections$Array* $tmp5650 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5650));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5612));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2704
panda$core$Bit* $tmp5651 = &param0->inSpeculative;
panda$core$Bit $tmp5652 = *$tmp5651;
panda$core$Bit $tmp5653 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5652);
bool $tmp5654 = $tmp5653.value;
if ($tmp5654) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5655 = (panda$core$Int64) {2704};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5656, $tmp5655);
abort(); // unreachable
block10:;
// line 2705
panda$collections$Array* $tmp5657 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5658 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5657, ((panda$core$Object*) $tmp5658));
org$pandalanguage$pandac$ASTNode* $tmp5659 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5659));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
goto block5;
block7:;
// line 2707
org$pandalanguage$pandac$ASTNode* $tmp5660 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5661 = (panda$core$Int64) {17};
panda$collections$Array* $tmp5662 = *(&local0);
panda$collections$ImmutableArray* $tmp5663 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5662);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5660, $tmp5661, $tmp5663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5663));
// unreffing REF($145:panda.collections.ImmutableArray<panda.collections.Array.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
// unreffing REF($141:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5664 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5664));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5612));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return $tmp5660;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$parser$Lexer** $tmp5665 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5666 = *$tmp5665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5666));
org$pandalanguage$regex$RegexParser** $tmp5667 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5668 = *$tmp5667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5668));
panda$threads$MessageQueue** $tmp5669 = &param0->errors;
panda$threads$MessageQueue* $tmp5670 = *$tmp5669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$io$File** $tmp5671 = &param0->path;
panda$io$File* $tmp5672 = *$tmp5671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5672));
panda$core$String** $tmp5673 = &param0->source;
panda$core$String* $tmp5674 = *$tmp5673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5674));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5675 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5676 = *$tmp5675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5676));
panda$collections$Stack** $tmp5677 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5678 = *$tmp5677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5679 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5680 = *$tmp5679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5680));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5681 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5682 = *$tmp5681;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5682));
return;

}

