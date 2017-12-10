#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/Array.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/io/LineNumberInputStream.h"
#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef org$pandalanguage$pandac$parser$Token (*$fn21)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn26)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn28)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn35)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn38)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn41)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn43)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn48)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn51)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn53)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn60)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn65)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn67)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn71)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$UInt8$nullable (*$fn130)(panda$io$LineNumberInputStream*);
typedef org$pandalanguage$pandac$parser$Token (*$fn152)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn160)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn165)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn173)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn177)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn182)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn184)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn186)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn190)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn192)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn198)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn223)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn226)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn231)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn233)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn236)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn241)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn246)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn253)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn265)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn292)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn296)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn300)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn304)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn310)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn313)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn319)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn331)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn332)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn335)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn338)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn341)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn346)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn354)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn356)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn359)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn363)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn366)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn368)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn373)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn378)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn379)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn383)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn388)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn392)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn396)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn399)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn405)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn409)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn410)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn415)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn417)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn420)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn422)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn424)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn427)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn429)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn434)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn435)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn443)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn448)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn453)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn456)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn460)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn462)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn465)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn473)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn476)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn481)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn484)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn492)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn499)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn506)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn507)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn514)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn516)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn519)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn521)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn523)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn526)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn528)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn532)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn534)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn538)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn539)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn541)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn546)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn549)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn557)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn560)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn567)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn568)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn571)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn576)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn579)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn587)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn591)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn598)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn599)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn600)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn602)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn607)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn610)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn617)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn619)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn624)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn627)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn630)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn642)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn648)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn650)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn662)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn664)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn669)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn672)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn679)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn681)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn686)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn689)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn696)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn698)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn703)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn706)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn715)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn718)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn724)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn726)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn728)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn732)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn735)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn740)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn742)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn746)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn748)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn752)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn759)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn763)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn767)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn770)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn773)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn776)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn779)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn788)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn791)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn794)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn803)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn806)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn809)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn812)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn821)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn824)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn833)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn836)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn841)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn844)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn850)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn856)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn860)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn862)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn870)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn874)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn877)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn880)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn886)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn892)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn895)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn900)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn903)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn906)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn909)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn916)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn919)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn922)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn926)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn929)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn935)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn937)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn943)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn950)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn952)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn957)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn960)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn965)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn967)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn970)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn973)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn980)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn983)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn985)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn988)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn999)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1001)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1004)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1006)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1009)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1012)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1014)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1019)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1023)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1028)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1032)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1035)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1041)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1044)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1051)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1053)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1056)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1060)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1062)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1065)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1071)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1074)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1078)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1084)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1087)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1091)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1097)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1099)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1107)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1111)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1113)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1115)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1117)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1119)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1121)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1123)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1125)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1127)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1130)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1131)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1133)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1135)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1137)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1139)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1141)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1143)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1145)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1147)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1150)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1152)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1154)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1156)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1158)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1159)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1161)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1163)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1165)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1168)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1171)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1175)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1180)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1184)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1188)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1190)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1197)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1201)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1206)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1210)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1214)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1216)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1223)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1227)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1235)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1238)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1242)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1246)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1249)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1251)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1254)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1258)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1261)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1267)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1273)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1277)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1279)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1289)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1293)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1300)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1308)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1313)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1314)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1321)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1324)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1331)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1335)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1340)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1343)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1347)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1349)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1352)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1358)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1361)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1364)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1370)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1372)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1376)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1381)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1385)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1391)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1394)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1408)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1417)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1423)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1426)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1429)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1432)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1446)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1454)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1462)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1466)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1472)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1474)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1476)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1478)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1480)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1482)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1484)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1487)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1493)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1497)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1499)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1503)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1512)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1518)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1525)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1528)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1534)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1541)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1545)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1547)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1551)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1559)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1562)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1566)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1568)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1573)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1580)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1583)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1589)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1591)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1593)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1595)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1597)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1599)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1606)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1610)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, 1 };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 1 };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, 1 };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 1 };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, 1 };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 1 };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 1 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp1);
    self->lexer = $tmp1;
    panda$collections$Array* $tmp3 = (panda$collections$Array*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3->refCount.value = 1;
    panda$collections$Array$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->commaSeparatedExpressionContext = $tmp5;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$Array* $tmp7 = (panda$collections$Array*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp7->refCount.value = 1;
    panda$collections$Array$init($tmp7);
    self->speculativeBuffer = $tmp7;
    self->errors = p_errors;
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    self->path = p_path;
    self->source = p_source;
    panda$collections$Array$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx11;
    org$pandalanguage$pandac$parser$Token result14;
    org$pandalanguage$pandac$parser$Token result16;
    panda$core$Int64 $tmp9 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp9, ((panda$core$Int64) { 0 }));
    if ($tmp10.value) {
    {
        panda$core$Int64 $tmp12 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp12, ((panda$core$Int64) { 1 }));
        idx11 = $tmp13;
        panda$core$Object* $tmp15 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, idx11);
        result14 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp15)->value;
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, idx11);
        return result14;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp17 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result16 = $tmp17;
    if (self->inSpeculative.value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(self->speculativeBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(result16)));
    }
    }
    return result16;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result20;
    org$pandalanguage$pandac$parser$Token next25;
    org$pandalanguage$pandac$parser$Token next34;
    $l18:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = (($fn21) self->$class->vtable[3])(self);
        result20 = $tmp22;
        switch (result20.kind.value) {
            case 12:
            {
                goto $l18;
            }
            break;
            case 8:
            {
                $l23:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp27 = (($fn26) self->$class->vtable[3])(self);
                    next25 = $tmp27;
                    switch (next25.kind.value) {
                        case 12:
                        {
                            panda$core$String* $tmp29 = (($fn28) self->$class->vtable[14])(self, next25);
                            panda$core$Bit $tmp31 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp29, &$s30);
                            if ($tmp31.value) {
                            {
                                goto $l18;
                            }
                            }
                        }
                        break;
                        case 0:
                        {
                            return next25;
                        }
                        break;
                    }
                }
                }
                $l24:;
            }
            break;
            case 9:
            {
                $l32:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp36 = (($fn35) self->$class->vtable[4])(self);
                    next34 = $tmp36;
                    switch (next34.kind.value) {
                        case 10:
                        {
                            goto $l18;
                        }
                        break;
                        case 0:
                        {
                            (($fn38) self->$class->vtable[9])(self, result20, &$s37);
                            return next34;
                        }
                        break;
                    }
                }
                }
                $l33:;
            }
            break;
            default:
            {
                return result20;
            }
        }
    }
    }
    $l19:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(p_token)));
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp39 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp39, ((panda$core$Int64) { 0 }));
    if ($tmp40.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp42 = (($fn41) self->$class->vtable[4])(self);
        (($fn43) self->$class->vtable[5])(self, $tmp42);
    }
    }
    panda$core$Int64 $tmp44 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp45 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp44, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp46 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp45);
    return ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp46)->value;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind) {
    org$pandalanguage$pandac$parser$Token result47;
    org$pandalanguage$pandac$parser$Token $tmp49 = (($fn48) self->$class->vtable[4])(self);
    result47 = $tmp49;
    panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result47.kind, p_kind);
    if ($tmp50.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result47, true });
    }
    }
    (($fn51) self->$class->vtable[5])(self, result47);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result52;
    org$pandalanguage$pandac$parser$Token $tmp54 = (($fn53) self->$class->vtable[4])(self);
    result52 = $tmp54;
    panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result52.kind, p_kind);
    if ($tmp55.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result52, true });
    }
    }
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s56, p_expected);
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
    panda$core$String* $tmp61 = (($fn60) self->$class->vtable[14])(self, result52);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, $tmp61);
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
    (($fn65) self->$class->vtable[9])(self, result52, $tmp64);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp66.value) {
    {
        org$pandalanguage$pandac$Position $tmp68 = (($fn67) self->$class->vtable[13])(self, p_token);
        ITable* $tmp69 = self->errors->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        $tmp70(self->errors, self->path, $tmp68, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp72.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$Array$clear(self->speculativeBuffer);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp73;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp74 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp75 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp74, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, $tmp75, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp77 = $tmp73.start.value;
    panda$core$Int64 i76 = { $tmp77 };
    int64_t $tmp79 = $tmp73.end.value;
    int64_t $tmp80 = $tmp73.step.value;
    bool $tmp81 = $tmp73.inclusive.value;
    bool $tmp88 = $tmp80 > 0;
    if ($tmp88) goto $l86; else goto $l87;
    $l86:;
    if ($tmp81) goto $l89; else goto $l90;
    $l89:;
    if ($tmp77 <= $tmp79) goto $l82; else goto $l84;
    $l90:;
    if ($tmp77 < $tmp79) goto $l82; else goto $l84;
    $l87:;
    if ($tmp81) goto $l91; else goto $l92;
    $l91:;
    if ($tmp77 >= $tmp79) goto $l82; else goto $l84;
    $l92:;
    if ($tmp77 > $tmp79) goto $l82; else goto $l84;
    $l82:;
    {
        panda$core$Object* $tmp94 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->speculativeBuffer, i76);
        panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp94)->value)));
    }
    $l85:;
    if ($tmp88) goto $l96; else goto $l97;
    $l96:;
    int64_t $tmp98 = $tmp79 - i76.value;
    if ($tmp81) goto $l99; else goto $l100;
    $l99:;
    if ($tmp98 >= $tmp80) goto $l95; else goto $l84;
    $l100:;
    if ($tmp98 > $tmp80) goto $l95; else goto $l84;
    $l97:;
    int64_t $tmp102 = i76.value - $tmp79;
    if ($tmp81) goto $l103; else goto $l104;
    $l103:;
    if ($tmp102 >= -$tmp80) goto $l95; else goto $l84;
    $l104:;
    if ($tmp102 > -$tmp80) goto $l95; else goto $l84;
    $l95:;
    i76.value += $tmp80;
    goto $l82;
    $l84:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$io$LineNumberInputStream* input106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    panda$core$UInt8$nullable c129;
    org$pandalanguage$pandac$Position $tmp143;
    panda$io$LineNumberInputStream* $tmp107 = (panda$io$LineNumberInputStream*) malloc(40);
    $tmp107->$class = (panda$core$Class*) &panda$io$LineNumberInputStream$class;
    $tmp107->refCount.value = 1;
    panda$io$MemoryInputStream* $tmp109 = (panda$io$MemoryInputStream*) malloc(32);
    $tmp109->$class = (panda$core$Class*) &panda$io$MemoryInputStream$class;
    $tmp109->refCount.value = 1;
    panda$io$MemoryInputStream$init$panda$core$String($tmp109, self->source);
    panda$io$LineNumberInputStream$init$panda$io$InputStream($tmp107, ((panda$io$InputStream*) $tmp109));
    input106 = $tmp107;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp111, ((panda$core$Int64) { 0 }), p_token.offset, ((panda$core$Bit) { false }));
    int64_t $tmp113 = $tmp111.min.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp111.max.value;
    bool $tmp116 = $tmp111.inclusive.value;
    bool $tmp123 = 1 > 0;
    if ($tmp123) goto $l121; else goto $l122;
    $l121:;
    if ($tmp116) goto $l124; else goto $l125;
    $l124:;
    if ($tmp113 <= $tmp115) goto $l117; else goto $l119;
    $l125:;
    if ($tmp113 < $tmp115) goto $l117; else goto $l119;
    $l122:;
    if ($tmp116) goto $l126; else goto $l127;
    $l126:;
    if ($tmp113 >= $tmp115) goto $l117; else goto $l119;
    $l127:;
    if ($tmp113 > $tmp115) goto $l117; else goto $l119;
    $l117:;
    {
        panda$core$UInt8$nullable $tmp131 = (($fn130) input106->$class->vtable[2])(input106);
        c129 = $tmp131;
    }
    $l120:;
    if ($tmp123) goto $l133; else goto $l134;
    $l133:;
    int64_t $tmp135 = $tmp115 - i112.value;
    if ($tmp116) goto $l136; else goto $l137;
    $l136:;
    if ($tmp135 >= 1) goto $l132; else goto $l119;
    $l137:;
    if ($tmp135 > 1) goto $l132; else goto $l119;
    $l134:;
    int64_t $tmp139 = i112.value - $tmp115;
    if ($tmp116) goto $l140; else goto $l141;
    $l140:;
    if ($tmp139 >= -1) goto $l132; else goto $l119;
    $l141:;
    if ($tmp139 > -1) goto $l132; else goto $l119;
    $l132:;
    i112.value += 1;
    goto $l117;
    $l119:;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp143, input106->line, input106->column);
    return $tmp143;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp144 = (panda$core$String*) malloc(33);
    $tmp144->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp144->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp144, (self->source->data + p_token.offset.value), p_token.length, ((panda$core$Bit) { false }));
    return $tmp144;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children146;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp147 = (panda$collections$Array*) malloc(40);
    $tmp147->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp147->refCount.value = 1;
    panda$collections$Array$init($tmp147);
    children146 = $tmp147;
    panda$collections$Array$add$panda$collections$Array$T(children146, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children146, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp149 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp149->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp149->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp149, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children146));
    return $tmp149;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start151;
    org$pandalanguage$pandac$ASTNode* result166;
    panda$core$MutableString* chunk167;
    org$pandalanguage$pandac$parser$Token token172;
    panda$core$String* str176;
    org$pandalanguage$pandac$parser$Token escape185;
    panda$core$String* escapeText191;
    panda$core$Char8 c194;
    panda$core$String* $match$193_21200;
    org$pandalanguage$pandac$ASTNode* expr222;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp237;
    org$pandalanguage$pandac$parser$Token $tmp153 = (($fn152) self->$class->vtable[4])(self);
    start151 = $tmp153;
    panda$core$Bit $tmp155 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start151.kind, ((panda$core$Int64) { 7 }));
    bool $tmp154 = $tmp155.value;
    if (!$tmp154) goto $l156;
    panda$core$Bit $tmp157 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start151.kind, ((panda$core$Int64) { 6 }));
    $tmp154 = $tmp157.value;
    $l156:;
    panda$core$Bit $tmp158 = { $tmp154 };
    if ($tmp158.value) {
    {
        panda$core$String* $tmp161 = (($fn160) self->$class->vtable[14])(self, start151);
        panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s159, $tmp161);
        panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
        (($fn165) self->$class->vtable[9])(self, start151, $tmp164);
        return NULL;
    }
    }
    result166 = NULL;
    panda$core$MutableString* $tmp168 = (panda$core$MutableString*) malloc(40);
    $tmp168->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp168->refCount.value = 1;
    panda$core$MutableString$init($tmp168);
    chunk167 = $tmp168;
    $l170:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp174 = (($fn173) self->$class->vtable[3])(self);
        token172 = $tmp174;
        panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token172.kind, start151.kind);
        if ($tmp175.value) {
        {
            goto $l171;
        }
        }
        switch (token172.kind.value) {
            case 12:
            {
                panda$core$String* $tmp178 = (($fn177) self->$class->vtable[14])(self, token172);
                str176 = $tmp178;
                panda$core$Bit $tmp180 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str176, &$s179);
                if ($tmp180.value) {
                {
                    (($fn182) self->$class->vtable[9])(self, start151, &$s181);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk167, str176);
            }
            break;
            case 0:
            {
                (($fn184) self->$class->vtable[9])(self, start151, &$s183);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp187 = (($fn186) self->$class->vtable[3])(self);
                escape185 = $tmp187;
                panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape185.kind, ((panda$core$Int64) { 0 }));
                if ($tmp188.value) {
                {
                    (($fn190) self->$class->vtable[9])(self, start151, &$s189);
                    return NULL;
                }
                }
                panda$core$String* $tmp193 = (($fn192) self->$class->vtable[14])(self, escape185);
                escapeText191 = $tmp193;
                panda$collections$ListView* $tmp195 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText191);
                ITable* $tmp196 = $tmp195->$class->itable;
                while ($tmp196->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp196 = $tmp196->next;
                }
                $fn198 $tmp197 = $tmp196->methods[0];
                panda$core$Object* $tmp199 = $tmp197($tmp195, ((panda$core$Int64) { 0 }));
                c194 = ((panda$core$Char8$wrapper*) $tmp199)->value;
                {
                    panda$core$String* $tmp201 = panda$core$Char8$convert$R$panda$core$String(c194);
                    $match$193_21200 = $tmp201;
                    panda$core$Bit $tmp203 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s202);
                    if ($tmp203.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s204);
                    }
                    }
                    else {
                    panda$core$Bit $tmp206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s205);
                    if ($tmp206.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s207);
                    }
                    }
                    else {
                    panda$core$Bit $tmp209 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s208);
                    if ($tmp209.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s210);
                    }
                    }
                    else {
                    panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s211);
                    if ($tmp212.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s213);
                    }
                    }
                    else {
                    panda$core$Bit $tmp215 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s214);
                    if ($tmp215.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s216);
                    }
                    }
                    else {
                    panda$core$Bit $tmp218 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s217);
                    if ($tmp218.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk167, &$s219);
                    }
                    }
                    else {
                    panda$core$Bit $tmp221 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21200, &$s220);
                    if ($tmp221.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp224 = (($fn223) self->$class->vtable[30])(self);
                            expr222 = $tmp224;
                            if (((panda$core$Bit) { expr222 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp227 = (($fn226) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s225);
                            if (((panda$core$Bit) { !$tmp227.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp228 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                            $tmp228->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp228->refCount.value = 1;
                            panda$core$String* $tmp230 = panda$core$MutableString$convert$R$panda$core$String(chunk167);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp228, ((panda$core$Int64) { 113 }), start151.position, $tmp230);
                            org$pandalanguage$pandac$ASTNode* $tmp232 = (($fn231) self->$class->vtable[15])(self, result166, $tmp228);
                            result166 = $tmp232;
                            panda$core$MutableString$clear(chunk167);
                            org$pandalanguage$pandac$ASTNode* $tmp234 = (($fn233) self->$class->vtable[15])(self, result166, expr222);
                            result166 = $tmp234;
                        }
                    }
                    }
                    else {
                    {
                        (($fn236) self->$class->vtable[9])(self, token172, &$s235);
                        return NULL;
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String$Index $tmp238 = panda$core$String$start$R$panda$core$String$Index(escapeText191);
                panda$core$String$Index $tmp239 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText191, $tmp238);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp237, ((panda$core$String$Index$nullable) { $tmp239, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp240 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText191, $tmp237);
                panda$core$MutableString$append$panda$core$String(chunk167, $tmp240);
            }
            break;
            default:
            {
                panda$core$String* $tmp242 = (($fn241) self->$class->vtable[14])(self, token172);
                panda$core$MutableString$append$panda$core$String(chunk167, $tmp242);
            }
        }
    }
    }
    $l171:;
    org$pandalanguage$pandac$ASTNode* $tmp243 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp243->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp243->refCount.value = 1;
    panda$core$String* $tmp245 = panda$core$MutableString$convert$R$panda$core$String(chunk167);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp243, ((panda$core$Int64) { 113 }), start151.position, $tmp245);
    org$pandalanguage$pandac$ASTNode* $tmp247 = (($fn246) self->$class->vtable[15])(self, result166, $tmp243);
    return $tmp247;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result248;
    panda$collections$Iterator* c$Iter249;
    panda$core$Char8 c262;
    panda$core$UInt64 i268;
    result248 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp250 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp251 = ((panda$collections$Iterable*) $tmp250)->$class->itable;
        while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp251 = $tmp251->next;
        }
        $fn253 $tmp252 = $tmp251->methods[0];
        panda$collections$Iterator* $tmp254 = $tmp252(((panda$collections$Iterable*) $tmp250));
        c$Iter249 = $tmp254;
        $l255:;
        ITable* $tmp257 = c$Iter249->$class->itable;
        while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp257 = $tmp257->next;
        }
        $fn259 $tmp258 = $tmp257->methods[0];
        panda$core$Bit $tmp260 = $tmp258(c$Iter249);
        panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
        if (!$tmp261.value) goto $l256;
        {
            ITable* $tmp263 = c$Iter249->$class->itable;
            while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp263 = $tmp263->next;
            }
            $fn265 $tmp264 = $tmp263->methods[1];
            panda$core$Object* $tmp266 = $tmp264(c$Iter249);
            c262 = ((panda$core$Char8$wrapper*) $tmp266)->value;
            panda$core$UInt64 $tmp267 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result248, p_base);
            result248 = $tmp267;
            panda$core$UInt64 $tmp269 = panda$core$Char8$convert$R$panda$core$UInt64(c262);
            i268 = $tmp269;
            panda$core$Bit $tmp271 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 48 }));
            bool $tmp270 = $tmp271.value;
            if (!$tmp270) goto $l272;
            panda$core$Bit $tmp273 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 57 }));
            $tmp270 = $tmp273.value;
            $l272:;
            panda$core$Bit $tmp274 = { $tmp270 };
            if ($tmp274.value) {
            {
                panda$core$UInt64 $tmp275 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i268, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp276 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result248, $tmp275);
                result248 = $tmp276;
            }
            }
            else {
            panda$core$Bit $tmp278 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 65 }));
            bool $tmp277 = $tmp278.value;
            if (!$tmp277) goto $l279;
            panda$core$Bit $tmp280 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 70 }));
            $tmp277 = $tmp280.value;
            $l279:;
            panda$core$Bit $tmp281 = { $tmp277 };
            if ($tmp281.value) {
            {
                panda$core$UInt64 $tmp282 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i268, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp283 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result248, $tmp282);
                result248 = $tmp283;
            }
            }
            else {
            {
                panda$core$Bit $tmp285 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 97 }));
                bool $tmp284 = $tmp285.value;
                if (!$tmp284) goto $l286;
                panda$core$Bit $tmp287 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i268, ((panda$core$UInt64) { 102 }));
                $tmp284 = $tmp287.value;
                $l286:;
                panda$core$Bit $tmp288 = { $tmp284 };
                PANDA_ASSERT($tmp288.value);
                panda$core$UInt64 $tmp289 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i268, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp290 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result248, $tmp289);
                result248 = $tmp290;
            }
            }
            }
        }
        goto $l255;
        $l256:;
    }
    return result248;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t291;
    panda$core$String* s303;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp308;
    panda$core$String* s312;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp317;
    org$pandalanguage$pandac$ASTNode* result334;
    org$pandalanguage$pandac$parser$Token $tmp293 = (($fn292) self->$class->vtable[4])(self);
    t291 = $tmp293;
    switch (t291.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp294 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp294->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp294->refCount.value = 1;
            panda$core$String* $tmp297 = (($fn296) self->$class->vtable[14])(self, t291);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp294, ((panda$core$Int64) { 106 }), t291.position, $tmp297);
            return $tmp294;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp298 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp298->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp298->refCount.value = 1;
            panda$core$String* $tmp301 = (($fn300) self->$class->vtable[14])(self, t291);
            panda$core$UInt64$nullable $tmp302 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp301);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp298, ((panda$core$Int64) { 102 }), t291.position, ((panda$core$UInt64) $tmp302.value));
            return $tmp298;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp305 = (($fn304) self->$class->vtable[14])(self, t291);
            s303 = $tmp305;
            org$pandalanguage$pandac$ASTNode* $tmp306 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp306->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp306->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp308, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp309 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s303, $tmp308);
            panda$core$UInt64 $tmp311 = (($fn310) self->$class->vtable[17])(self, $tmp309, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp306, ((panda$core$Int64) { 102 }), t291.position, $tmp311);
            return $tmp306;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp314 = (($fn313) self->$class->vtable[14])(self, t291);
            s312 = $tmp314;
            org$pandalanguage$pandac$ASTNode* $tmp315 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp315->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp315->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp317, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp318 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s312, $tmp317);
            panda$core$UInt64 $tmp320 = (($fn319) self->$class->vtable[17])(self, $tmp318, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp315, ((panda$core$Int64) { 102 }), t291.position, $tmp320);
            return $tmp315;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp321 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp321->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp321->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp321, ((panda$core$Int64) { 114 }), t291.position);
            return $tmp321;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp323 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp323->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp323->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp323, ((panda$core$Int64) { 115 }), t291.position);
            return $tmp323;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp325 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp325->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp325, ((panda$core$Int64) { 117 }), t291.position);
            return $tmp325;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp327 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp327->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp327->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp327, ((panda$core$Int64) { 116 }), t291.position, ((panda$core$Bit) { true }));
            return $tmp327;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp329 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp329->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp329->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp329, ((panda$core$Int64) { 116 }), t291.position, ((panda$core$Bit) { false }));
            return $tmp329;
        }
        break;
        case 7:
        case 6:
        {
            (($fn331) self->$class->vtable[5])(self, t291);
            org$pandalanguage$pandac$ASTNode* $tmp333 = (($fn332) self->$class->vtable[16])(self);
            return $tmp333;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp336 = (($fn335) self->$class->vtable[30])(self);
            result334 = $tmp336;
            if (((panda$core$Bit) { result334 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp339 = (($fn338) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s337);
            if (((panda$core$Bit) { !$tmp339.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result334;
        }
        break;
        default:
        {
            panda$core$String* $tmp342 = (($fn341) self->$class->vtable[14])(self, t291);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, $tmp342);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s344);
            (($fn346) self->$class->vtable[9])(self, t291, $tmp345);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result347;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp349 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp348));
            result347 = $tmp349;
            if (((panda$core$Bit) { result347 != NULL }).value) {
            {
                panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s350, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result347, $tmp351);
                result347 = $tmp352;
            }
            }
            return result347;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name353;
    org$pandalanguage$pandac$parser$Token token358;
    org$pandalanguage$pandac$parser$Token $tmp355 = (($fn354) self->$class->vtable[4])(self);
    name353 = $tmp355;
    switch (name353.kind.value) {
        case 48:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 57:
        case 58:
        case 59:
        case 62:
        case 65:
        case 64:
        case 56:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 49:
        case 50:
        case 72:
        {
            panda$core$String* $tmp357 = (($fn356) self->$class->vtable[14])(self, name353);
            return $tmp357;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp360 = (($fn359) self->$class->vtable[3])(self);
            token358 = $tmp360;
            panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token358.kind, ((panda$core$Int64) { 63 }));
            if ($tmp361.value) {
            {
                return &$s362;
            }
            }
            else {
            {
                (($fn363) self->$class->vtable[5])(self, token358);
                return &$s364;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp367 = (($fn366) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s365);
            if (((panda$core$Bit) { !$tmp367.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp369 = (($fn368) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp369.nonnull }).value) {
            {
                return &$s370;
            }
            }
            return &$s371;
        }
        break;
        default:
        {
            panda$core$String* $tmp374 = (($fn373) self->$class->vtable[14])(self, name353);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s372, $tmp374);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
            (($fn378) self->$class->vtable[9])(self, name353, $tmp377);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp380 = (($fn379) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp380;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start381;
    panda$core$MutableString* name385;
    org$pandalanguage$pandac$parser$Token$nullable id394;
    org$pandalanguage$pandac$ASTNode* result401;
    panda$collections$Array* children411;
    org$pandalanguage$pandac$ASTNode* t414;
    panda$collections$Array* children437;
    org$pandalanguage$pandac$parser$Token$nullable $tmp384 = (($fn383) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s382);
    start381 = $tmp384;
    if (((panda$core$Bit) { !start381.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp386 = (panda$core$MutableString*) malloc(40);
    $tmp386->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp386->refCount.value = 1;
    panda$core$String* $tmp389 = (($fn388) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start381.value));
    panda$core$MutableString$init$panda$core$String($tmp386, $tmp389);
    name385 = $tmp386;
    $l390:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp393 = (($fn392) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp393.nonnull }).value) goto $l391;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp397 = (($fn396) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s395);
        id394 = $tmp397;
        if (((panda$core$Bit) { !id394.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name385, &$s398);
        panda$core$String* $tmp400 = (($fn399) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id394.value));
        panda$core$MutableString$append$panda$core$String(name385, $tmp400);
    }
    goto $l390;
    $l391:;
    org$pandalanguage$pandac$ASTNode* $tmp402 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp402->refCount.value = 1;
    panda$core$String* $tmp404 = panda$core$MutableString$convert$R$panda$core$String(name385);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp402, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start381.value).position, $tmp404);
    result401 = $tmp402;
    org$pandalanguage$pandac$parser$Token $tmp406 = (($fn405) self->$class->vtable[6])(self);
    panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp406.kind, ((panda$core$Int64) { 62 }));
    if ($tmp407.value) {
    {
        panda$core$MutableString$append$panda$core$String(name385, &$s408);
        if (p_needSpeculativeParse.value) {
        {
            (($fn409) self->$class->vtable[10])(self);
        }
        }
        (($fn410) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp412 = (panda$collections$Array*) malloc(40);
        $tmp412->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp412->refCount.value = 1;
        panda$collections$Array$init($tmp412);
        children411 = $tmp412;
        panda$collections$Array$add$panda$collections$Array$T(children411, ((panda$core$Object*) result401));
        org$pandalanguage$pandac$ASTNode* $tmp416 = (($fn415) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t414 = $tmp416;
        if (((panda$core$Bit) { t414 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn417) self->$class->vtable[12])(self);
                return result401;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children411, ((panda$core$Object*) t414));
        panda$core$MutableString$append$panda$core$Object(name385, ((panda$core$Object*) t414));
        $l418:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp421 = (($fn420) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp421.nonnull }).value) goto $l419;
        {
            org$pandalanguage$pandac$ASTNode* $tmp423 = (($fn422) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t414 = $tmp423;
            if (((panda$core$Bit) { t414 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn424) self->$class->vtable[12])(self);
                    return result401;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children411, ((panda$core$Object*) t414));
            panda$core$MutableString$append$panda$core$String(name385, &$s425);
            panda$core$MutableString$append$panda$core$Object(name385, ((panda$core$Object*) t414));
        }
        goto $l418;
        $l419:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp428 = (($fn427) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s426);
        if (((panda$core$Bit) { !$tmp428.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn429) self->$class->vtable[12])(self);
                return result401;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name385, &$s430);
        org$pandalanguage$pandac$ASTNode* $tmp431 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp431->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp431->refCount.value = 1;
        panda$core$String* $tmp433 = panda$core$MutableString$convert$R$panda$core$String(name385);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp431, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start381.value).position, ((panda$core$Object*) $tmp433), ((panda$collections$ListView*) children411));
        result401 = $tmp431;
        (($fn434) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp436 = (($fn435) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp436.nonnull }).value) {
    {
        panda$collections$Array* $tmp438 = (panda$collections$Array*) malloc(40);
        $tmp438->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp438->refCount.value = 1;
        panda$collections$Array$init($tmp438);
        children437 = $tmp438;
        panda$collections$Array$add$panda$collections$Array$T(children437, ((panda$core$Object*) result401));
        org$pandalanguage$pandac$ASTNode* $tmp440 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp440->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp440->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp440, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start381.value).position, ((panda$collections$ListView*) children437));
        result401 = $tmp440;
    }
    }
    return result401;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result442;
    org$pandalanguage$pandac$parser$Token token447;
    panda$collections$Array* children450;
    org$pandalanguage$pandac$ASTNode* expr455;
    panda$collections$Array* children469;
    org$pandalanguage$pandac$ASTNode* expr472;
    panda$core$String* name480;
    panda$collections$Array* children486;
    org$pandalanguage$pandac$ASTNode* target491;
    panda$collections$Array* children494;
    panda$core$String* name500;
    panda$core$MutableString* finalName502;
    panda$collections$Array* types508;
    org$pandalanguage$pandac$ASTNode* t513;
    panda$core$Bit shouldAccept530;
    org$pandalanguage$pandac$ASTNode* $tmp444 = (($fn443) self->$class->vtable[18])(self);
    result442 = $tmp444;
    if (((panda$core$Bit) { result442 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l445:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp449 = (($fn448) self->$class->vtable[4])(self);
        token447 = $tmp449;
        switch (token447.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp451 = (panda$collections$Array*) malloc(40);
                $tmp451->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp451->refCount.value = 1;
                panda$collections$Array$init($tmp451);
                children450 = $tmp451;
                panda$collections$Array$add$panda$collections$Array$T(children450, ((panda$core$Object*) result442));
                org$pandalanguage$pandac$parser$Token$nullable $tmp454 = (($fn453) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp454.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp457 = (($fn456) self->$class->vtable[30])(self);
                    expr455 = $tmp457;
                    if (((panda$core$Bit) { expr455 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children450, ((panda$core$Object*) expr455));
                    $l458:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp461 = (($fn460) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp461.nonnull }).value) goto $l459;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp463 = (($fn462) self->$class->vtable[30])(self);
                        expr455 = $tmp463;
                        if (((panda$core$Bit) { expr455 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children450, ((panda$core$Object*) expr455));
                    }
                    goto $l458;
                    $l459:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp466 = (($fn465) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s464);
                    if (((panda$core$Bit) { !$tmp466.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp467 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp467->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp467->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp467, ((panda$core$Int64) { 107 }), token447.position, ((panda$collections$ListView*) children450));
                result442 = $tmp467;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp470 = (panda$collections$Array*) malloc(40);
                $tmp470->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp470->refCount.value = 1;
                panda$collections$Array$init($tmp470);
                children469 = $tmp470;
                panda$collections$Array$add$panda$collections$Array$T(children469, ((panda$core$Object*) result442));
                org$pandalanguage$pandac$ASTNode* $tmp474 = (($fn473) self->$class->vtable[30])(self);
                expr472 = $tmp474;
                if (((panda$core$Bit) { expr472 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children469, ((panda$core$Object*) expr472));
                org$pandalanguage$pandac$parser$Token$nullable $tmp477 = (($fn476) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s475);
                if (((panda$core$Bit) { !$tmp477.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp478 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp478->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp478->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp478, ((panda$core$Int64) { 103 }), token447.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children469));
                result442 = $tmp478;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp482 = (($fn481) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp482.nonnull }).value) {
                {
                    name480 = &$s483;
                }
                }
                else {
                {
                    panda$core$String* $tmp485 = (($fn484) self->$class->vtable[19])(self);
                    name480 = $tmp485;
                    if (((panda$core$Bit) { name480 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp487 = (panda$collections$Array*) malloc(40);
                $tmp487->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp487->refCount.value = 1;
                panda$collections$Array$init($tmp487);
                children486 = $tmp487;
                panda$collections$Array$add$panda$collections$Array$T(children486, ((panda$core$Object*) result442));
                org$pandalanguage$pandac$ASTNode* $tmp489 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp489->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp489->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp489, ((panda$core$Int64) { 108 }), token447.position, ((panda$core$Object*) name480), ((panda$collections$ListView*) children486));
                result442 = $tmp489;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp493 = (($fn492) self->$class->vtable[20])(self);
                target491 = $tmp493;
                if (((panda$core$Bit) { target491 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp495 = (panda$collections$Array*) malloc(40);
                $tmp495->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp495->refCount.value = 1;
                panda$collections$Array$init($tmp495);
                children494 = $tmp495;
                panda$collections$Array$add$panda$collections$Array$T(children494, ((panda$core$Object*) result442));
                panda$collections$Array$add$panda$collections$Array$T(children494, ((panda$core$Object*) target491));
                org$pandalanguage$pandac$ASTNode* $tmp497 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp497->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp497->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp497, ((panda$core$Int64) { 111 }), token447.position, ((panda$collections$ListView*) children494));
                result442 = $tmp497;
            }
            break;
            case 62:
            {
                (($fn499) self->$class->vtable[5])(self, token447);
                panda$core$String* $tmp501 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result442);
                name500 = $tmp501;
                if (((panda$core$Bit) { name500 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp503 = (panda$core$MutableString*) malloc(40);
                    $tmp503->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp503->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp503, name500);
                    finalName502 = $tmp503;
                    panda$core$MutableString$append$panda$core$String(finalName502, &$s505);
                    (($fn506) self->$class->vtable[10])(self);
                    (($fn507) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp509 = (panda$collections$Array*) malloc(40);
                    $tmp509->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp509->refCount.value = 1;
                    panda$collections$Array$init($tmp509);
                    types508 = $tmp509;
                    org$pandalanguage$pandac$ASTNode* $tmp511 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp511->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp511->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp511, ((panda$core$Int64) { 109 }), result442->position, name500);
                    panda$collections$Array$add$panda$collections$Array$T(types508, ((panda$core$Object*) $tmp511));
                    org$pandalanguage$pandac$ASTNode* $tmp515 = (($fn514) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t513 = $tmp515;
                    if (((panda$core$Bit) { t513 == NULL }).value) {
                    {
                        (($fn516) self->$class->vtable[12])(self);
                        return result442;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types508, ((panda$core$Object*) t513));
                    panda$core$MutableString$append$panda$core$Object(finalName502, ((panda$core$Object*) t513));
                    $l517:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp520 = (($fn519) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp520.nonnull }).value) goto $l518;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp522 = (($fn521) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t513 = $tmp522;
                        if (((panda$core$Bit) { t513 == NULL }).value) {
                        {
                            (($fn523) self->$class->vtable[12])(self);
                            return result442;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types508, ((panda$core$Object*) t513));
                        panda$core$MutableString$append$panda$core$String(finalName502, &$s524);
                        panda$core$MutableString$append$panda$core$Object(finalName502, ((panda$core$Object*) t513));
                    }
                    goto $l517;
                    $l518:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp527 = (($fn526) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s525);
                    if (((panda$core$Bit) { !$tmp527.nonnull }).value) {
                    {
                        (($fn528) self->$class->vtable[12])(self);
                        return result442;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName502, &$s529);
                    panda$core$Object* $tmp531 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp531)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp533 = (($fn532) self->$class->vtable[6])(self);
                        switch ($tmp533.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept530 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept530 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept530 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept530.value) {
                    {
                        (($fn534) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp535 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp535->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp535->refCount.value = 1;
                        panda$core$String* $tmp537 = panda$core$MutableString$convert$R$panda$core$String(finalName502);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp535, ((panda$core$Int64) { 154 }), result442->position, ((panda$core$Object*) $tmp537), ((panda$collections$ListView*) types508));
                        result442 = $tmp535;
                        goto $l445;
                    }
                    }
                    else {
                    {
                        (($fn538) self->$class->vtable[12])(self);
                        return result442;
                    }
                    }
                }
                }
                return result442;
            }
            break;
            default:
            {
                (($fn539) self->$class->vtable[5])(self, token447);
                return result442;
            }
        }
    }
    }
    $l446:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result540;
    org$pandalanguage$pandac$parser$Token$nullable op545;
    org$pandalanguage$pandac$ASTNode* next548;
    panda$collections$Array* children551;
    org$pandalanguage$pandac$ASTNode* $tmp542 = (($fn541) self->$class->vtable[22])(self);
    result540 = $tmp542;
    if (((panda$core$Bit) { result540 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l543:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp547 = (($fn546) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op545 = $tmp547;
        if (((panda$core$Bit) { !op545.nonnull }).value) {
        {
            goto $l544;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp550 = (($fn549) self->$class->vtable[22])(self);
        next548 = $tmp550;
        if (((panda$core$Bit) { next548 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp552 = (panda$collections$Array*) malloc(40);
        $tmp552->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp552->refCount.value = 1;
        panda$collections$Array$init($tmp552);
        children551 = $tmp552;
        panda$collections$Array$add$panda$collections$Array$T(children551, ((panda$core$Object*) result540));
        panda$collections$Array$add$panda$collections$Array$T(children551, ((panda$core$Object*) next548));
        org$pandalanguage$pandac$ASTNode* $tmp554 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp554->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp554->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp554, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op545.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op545.value).kind)), ((panda$collections$ListView*) children551));
        result540 = $tmp554;
    }
    }
    $l544:;
    return result540;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op556;
    org$pandalanguage$pandac$ASTNode* base559;
    panda$collections$Array* children562;
    org$pandalanguage$pandac$parser$Token $tmp558 = (($fn557) self->$class->vtable[4])(self);
    op556 = $tmp558;
    switch (op556.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp561 = (($fn560) self->$class->vtable[23])(self);
            base559 = $tmp561;
            if (((panda$core$Bit) { base559 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp563 = (panda$collections$Array*) malloc(40);
            $tmp563->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp563->refCount.value = 1;
            panda$collections$Array$init($tmp563);
            children562 = $tmp563;
            panda$collections$Array$add$panda$collections$Array$T(children562, ((panda$core$Object*) base559));
            org$pandalanguage$pandac$ASTNode* $tmp565 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp565->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp565->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp565, ((panda$core$Int64) { 112 }), op556.position, ((panda$core$Object*) wrap_panda$core$Int64(op556.kind)), ((panda$collections$ListView*) children562));
            return $tmp565;
        }
        break;
        default:
        {
            (($fn567) self->$class->vtable[5])(self, op556);
            org$pandalanguage$pandac$ASTNode* $tmp569 = (($fn568) self->$class->vtable[23])(self);
            return $tmp569;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result570;
    org$pandalanguage$pandac$parser$Token op575;
    org$pandalanguage$pandac$ASTNode* next578;
    panda$collections$Array* children581;
    org$pandalanguage$pandac$parser$Token nextToken586;
    org$pandalanguage$pandac$ASTNode* next590;
    panda$collections$Array* children593;
    org$pandalanguage$pandac$ASTNode* $tmp572 = (($fn571) self->$class->vtable[24])(self);
    result570 = $tmp572;
    if (((panda$core$Bit) { result570 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l573:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp577 = (($fn576) self->$class->vtable[4])(self);
        op575 = $tmp577;
        switch (op575.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp580 = (($fn579) self->$class->vtable[24])(self);
                next578 = $tmp580;
                if (((panda$core$Bit) { next578 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp582 = (panda$collections$Array*) malloc(40);
                $tmp582->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp582->refCount.value = 1;
                panda$collections$Array$init($tmp582);
                children581 = $tmp582;
                panda$collections$Array$add$panda$collections$Array$T(children581, ((panda$core$Object*) result570));
                panda$collections$Array$add$panda$collections$Array$T(children581, ((panda$core$Object*) next578));
                org$pandalanguage$pandac$ASTNode* $tmp584 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp584->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp584->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp584, ((panda$core$Int64) { 103 }), op575.position, ((panda$core$Object*) wrap_panda$core$Int64(op575.kind)), ((panda$collections$ListView*) children581));
                result570 = $tmp584;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp588 = (($fn587) self->$class->vtable[3])(self);
                nextToken586 = $tmp588;
                panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken586.kind, ((panda$core$Int64) { 63 }));
                if ($tmp589.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp592 = (($fn591) self->$class->vtable[24])(self);
                    next590 = $tmp592;
                    if (((panda$core$Bit) { next590 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp594 = (panda$collections$Array*) malloc(40);
                    $tmp594->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp594->refCount.value = 1;
                    panda$collections$Array$init($tmp594);
                    children593 = $tmp594;
                    panda$collections$Array$add$panda$collections$Array$T(children593, ((panda$core$Object*) result570));
                    panda$collections$Array$add$panda$collections$Array$T(children593, ((panda$core$Object*) next590));
                    org$pandalanguage$pandac$ASTNode* $tmp596 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp596->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp596->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp596, ((panda$core$Int64) { 103 }), op575.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children593));
                    result570 = $tmp596;
                }
                }
                else {
                {
                    (($fn598) self->$class->vtable[5])(self, nextToken586);
                    (($fn599) self->$class->vtable[5])(self, op575);
                    return result570;
                }
                }
            }
            break;
            default:
            {
                (($fn600) self->$class->vtable[5])(self, op575);
                return result570;
            }
        }
    }
    }
    $l574:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result601;
    org$pandalanguage$pandac$parser$Token op606;
    org$pandalanguage$pandac$ASTNode* next609;
    panda$collections$Array* children612;
    org$pandalanguage$pandac$ASTNode* $tmp603 = (($fn602) self->$class->vtable[25])(self);
    result601 = $tmp603;
    if (((panda$core$Bit) { result601 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l604:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp608 = (($fn607) self->$class->vtable[4])(self);
        op606 = $tmp608;
        switch (op606.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp611 = (($fn610) self->$class->vtable[25])(self);
                next609 = $tmp611;
                if (((panda$core$Bit) { next609 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp613 = (panda$collections$Array*) malloc(40);
                $tmp613->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp613->refCount.value = 1;
                panda$collections$Array$init($tmp613);
                children612 = $tmp613;
                panda$collections$Array$add$panda$collections$Array$T(children612, ((panda$core$Object*) result601));
                panda$collections$Array$add$panda$collections$Array$T(children612, ((panda$core$Object*) next609));
                org$pandalanguage$pandac$ASTNode* $tmp615 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp615->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp615->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp615, ((panda$core$Int64) { 103 }), op606.position, ((panda$core$Object*) wrap_panda$core$Int64(op606.kind)), ((panda$collections$ListView*) children612));
                result601 = $tmp615;
            }
            break;
            default:
            {
                (($fn617) self->$class->vtable[5])(self, op606);
                return result601;
            }
        }
    }
    }
    $l605:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result618;
    org$pandalanguage$pandac$Position $tmp623;
    org$pandalanguage$pandac$parser$Token op626;
    org$pandalanguage$pandac$parser$Token next629;
    org$pandalanguage$pandac$ASTNode* right632;
    org$pandalanguage$pandac$Position $tmp646;
    org$pandalanguage$pandac$ASTNode* step647;
    org$pandalanguage$pandac$Position $tmp654;
    panda$collections$Array* children655;
    panda$core$Int64 kind658;
    org$pandalanguage$pandac$parser$Token $tmp620 = (($fn619) self->$class->vtable[6])(self);
    switch ($tmp620.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp621 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp621->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp621->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp623);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp621, ((panda$core$Int64) { 138 }), $tmp623);
            result618 = $tmp621;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp625 = (($fn624) self->$class->vtable[26])(self);
            result618 = $tmp625;
            if (((panda$core$Bit) { result618 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp628 = (($fn627) self->$class->vtable[4])(self);
    op626 = $tmp628;
    switch (op626.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp631 = (($fn630) self->$class->vtable[6])(self);
            next629 = $tmp631;
            panda$core$Bit $tmp635 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 102 }));
            bool $tmp634 = $tmp635.value;
            if (!$tmp634) goto $l636;
            panda$core$Bit $tmp637 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 104 }));
            $tmp634 = $tmp637.value;
            $l636:;
            panda$core$Bit $tmp638 = { $tmp634 };
            bool $tmp633 = $tmp638.value;
            if (!$tmp633) goto $l639;
            panda$core$Bit $tmp640 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 33 }));
            $tmp633 = $tmp640.value;
            $l639:;
            panda$core$Bit $tmp641 = { $tmp633 };
            if ($tmp641.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp643 = (($fn642) self->$class->vtable[26])(self);
                right632 = $tmp643;
                if (((panda$core$Bit) { right632 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp644 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp644->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp644->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp646);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp644, ((panda$core$Int64) { 138 }), $tmp646);
                right632 = $tmp644;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp649 = (($fn648) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp649.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp651 = (($fn650) self->$class->vtable[26])(self);
                step647 = $tmp651;
                if (((panda$core$Bit) { step647 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp652 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp652->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp652->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp654);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp652, ((panda$core$Int64) { 138 }), $tmp654);
                step647 = $tmp652;
            }
            }
            panda$collections$Array* $tmp656 = (panda$collections$Array*) malloc(40);
            $tmp656->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp656->refCount.value = 1;
            panda$collections$Array$init($tmp656);
            children655 = $tmp656;
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) result618));
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) right632));
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) step647));
            panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op626.kind, ((panda$core$Int64) { 97 }));
            if ($tmp659.value) {
            {
                kind658 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind658 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp660 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp660->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp660->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp660, kind658, op626.position, ((panda$collections$ListView*) children655));
            return $tmp660;
        }
        break;
        default:
        {
            (($fn662) self->$class->vtable[5])(self, op626);
            return result618;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result663;
    org$pandalanguage$pandac$parser$Token op668;
    org$pandalanguage$pandac$ASTNode* next671;
    panda$collections$Array* children674;
    org$pandalanguage$pandac$ASTNode* $tmp665 = (($fn664) self->$class->vtable[27])(self);
    result663 = $tmp665;
    if (((panda$core$Bit) { result663 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l666:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp670 = (($fn669) self->$class->vtable[4])(self);
        op668 = $tmp670;
        switch (op668.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp673 = (($fn672) self->$class->vtable[27])(self);
                next671 = $tmp673;
                if (((panda$core$Bit) { next671 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp675 = (panda$collections$Array*) malloc(40);
                $tmp675->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp675->refCount.value = 1;
                panda$collections$Array$init($tmp675);
                children674 = $tmp675;
                panda$collections$Array$add$panda$collections$Array$T(children674, ((panda$core$Object*) result663));
                panda$collections$Array$add$panda$collections$Array$T(children674, ((panda$core$Object*) next671));
                org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp677->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp677->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp677, ((panda$core$Int64) { 103 }), op668.position, ((panda$core$Object*) wrap_panda$core$Int64(op668.kind)), ((panda$collections$ListView*) children674));
                result663 = $tmp677;
            }
            break;
            default:
            {
                (($fn679) self->$class->vtable[5])(self, op668);
                return result663;
            }
        }
    }
    }
    $l667:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result680;
    org$pandalanguage$pandac$parser$Token op685;
    org$pandalanguage$pandac$ASTNode* next688;
    panda$collections$Array* children691;
    org$pandalanguage$pandac$ASTNode* $tmp682 = (($fn681) self->$class->vtable[28])(self);
    result680 = $tmp682;
    if (((panda$core$Bit) { result680 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l683:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp687 = (($fn686) self->$class->vtable[4])(self);
        op685 = $tmp687;
        switch (op685.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp690 = (($fn689) self->$class->vtable[28])(self);
                next688 = $tmp690;
                if (((panda$core$Bit) { next688 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp692 = (panda$collections$Array*) malloc(40);
                $tmp692->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp692->refCount.value = 1;
                panda$collections$Array$init($tmp692);
                children691 = $tmp692;
                panda$collections$Array$add$panda$collections$Array$T(children691, ((panda$core$Object*) result680));
                panda$collections$Array$add$panda$collections$Array$T(children691, ((panda$core$Object*) next688));
                org$pandalanguage$pandac$ASTNode* $tmp694 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp694->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp694->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp694, ((panda$core$Int64) { 103 }), op685.position, ((panda$core$Object*) wrap_panda$core$Int64(op685.kind)), ((panda$collections$ListView*) children691));
                result680 = $tmp694;
            }
            break;
            default:
            {
                (($fn696) self->$class->vtable[5])(self, op685);
                return result680;
            }
        }
    }
    }
    $l684:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result697;
    org$pandalanguage$pandac$parser$Token$nullable op702;
    org$pandalanguage$pandac$ASTNode* next705;
    panda$collections$Array* children708;
    org$pandalanguage$pandac$ASTNode* $tmp699 = (($fn698) self->$class->vtable[29])(self);
    result697 = $tmp699;
    if (((panda$core$Bit) { result697 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l700:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp704 = (($fn703) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op702 = $tmp704;
        if (((panda$core$Bit) { !op702.nonnull }).value) {
        {
            goto $l701;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp707 = (($fn706) self->$class->vtable[29])(self);
        next705 = $tmp707;
        if (((panda$core$Bit) { next705 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp709 = (panda$collections$Array*) malloc(40);
        $tmp709->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp709->refCount.value = 1;
        panda$collections$Array$init($tmp709);
        children708 = $tmp709;
        panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) result697));
        panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) next705));
        org$pandalanguage$pandac$ASTNode* $tmp711 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp711->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp711->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp711, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op702.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op702.value).kind)), ((panda$collections$ListView*) children708));
        result697 = $tmp711;
    }
    }
    $l701:;
    return result697;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start713;
    org$pandalanguage$pandac$ASTNode* test717;
    panda$collections$Array* children720;
    org$pandalanguage$pandac$ASTNode* ifTrue723;
    org$pandalanguage$pandac$ASTNode* ifFalse731;
    org$pandalanguage$pandac$ASTNode* ifFalse734;
    org$pandalanguage$pandac$parser$Token$nullable $tmp716 = (($fn715) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s714);
    start713 = $tmp716;
    if (((panda$core$Bit) { !start713.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp719 = (($fn718) self->$class->vtable[30])(self);
    test717 = $tmp719;
    if (((panda$core$Bit) { test717 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp721 = (panda$collections$Array*) malloc(40);
    $tmp721->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp721->refCount.value = 1;
    panda$collections$Array$init($tmp721);
    children720 = $tmp721;
    panda$collections$Array$add$panda$collections$Array$T(children720, ((panda$core$Object*) test717));
    org$pandalanguage$pandac$ASTNode* $tmp725 = (($fn724) self->$class->vtable[41])(self);
    ifTrue723 = $tmp725;
    if (((panda$core$Bit) { ifTrue723 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children720, ((panda$core$Object*) ifTrue723));
    org$pandalanguage$pandac$parser$Token$nullable $tmp727 = (($fn726) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp727.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp729 = (($fn728) self->$class->vtable[6])(self);
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp729.kind, ((panda$core$Int64) { 36 }));
        if ($tmp730.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp733 = (($fn732) self->$class->vtable[31])(self);
            ifFalse731 = $tmp733;
            if (((panda$core$Bit) { ifFalse731 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children720, ((panda$core$Object*) ifFalse731));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp736 = (($fn735) self->$class->vtable[41])(self);
            ifFalse734 = $tmp736;
            if (((panda$core$Bit) { ifFalse734 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children720, ((panda$core$Object*) ifFalse734));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp737 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp737->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp737->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp737, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start713.value).position, ((panda$collections$ListView*) children720));
    return $tmp737;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp741 = (($fn740) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s739);
    if (((panda$core$Bit) { !$tmp741.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp743 = (($fn742) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id744;
    org$pandalanguage$pandac$ASTNode* type751;
    panda$collections$Array* children754;
    org$pandalanguage$pandac$parser$Token$nullable $tmp747 = (($fn746) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s745);
    id744 = $tmp747;
    if (((panda$core$Bit) { !id744.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp749 = (($fn748) self->$class->vtable[6])(self);
    panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp749.kind, ((panda$core$Int64) { 95 }));
    if ($tmp750.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp753 = (($fn752) self->$class->vtable[32])(self);
        type751 = $tmp753;
        if (((panda$core$Bit) { type751 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp755 = (panda$collections$Array*) malloc(40);
        $tmp755->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp755->refCount.value = 1;
        panda$collections$Array$init($tmp755);
        children754 = $tmp755;
        panda$collections$Array$add$panda$collections$Array$T(children754, ((panda$core$Object*) type751));
        org$pandalanguage$pandac$ASTNode* $tmp757 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp757->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp757->refCount.value = 1;
        panda$core$String* $tmp760 = (($fn759) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id744.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp757, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id744.value).position, ((panda$core$Object*) $tmp760), ((panda$collections$ListView*) children754));
        return $tmp757;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp761 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp761->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp761->refCount.value = 1;
    panda$core$String* $tmp764 = (($fn763) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id744.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp761, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id744.value).position, $tmp764);
    return $tmp761;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start765;
    org$pandalanguage$pandac$ASTNode* t769;
    org$pandalanguage$pandac$ASTNode* list775;
    org$pandalanguage$pandac$ASTNode* block778;
    panda$collections$Array* children781;
    org$pandalanguage$pandac$parser$Token$nullable $tmp768 = (($fn767) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s766);
    start765 = $tmp768;
    if (((panda$core$Bit) { !start765.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp771 = (($fn770) self->$class->vtable[33])(self);
    t769 = $tmp771;
    if (((panda$core$Bit) { t769 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp774 = (($fn773) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s772);
    if (((panda$core$Bit) { !$tmp774.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp777 = (($fn776) self->$class->vtable[30])(self);
    list775 = $tmp777;
    if (((panda$core$Bit) { list775 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp780 = (($fn779) self->$class->vtable[41])(self);
    block778 = $tmp780;
    if (((panda$core$Bit) { block778 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp782 = (panda$collections$Array*) malloc(40);
    $tmp782->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp782->refCount.value = 1;
    panda$collections$Array$init($tmp782);
    children781 = $tmp782;
    panda$collections$Array$add$panda$collections$Array$T(children781, ((panda$core$Object*) t769));
    panda$collections$Array$add$panda$collections$Array$T(children781, ((panda$core$Object*) list775));
    panda$collections$Array$add$panda$collections$Array$T(children781, ((panda$core$Object*) block778));
    org$pandalanguage$pandac$ASTNode* $tmp784 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp784->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp784->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp784, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start765.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children781));
    return $tmp784;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start786;
    org$pandalanguage$pandac$ASTNode* test790;
    org$pandalanguage$pandac$ASTNode* body793;
    panda$collections$Array* children796;
    org$pandalanguage$pandac$parser$Token$nullable $tmp789 = (($fn788) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s787);
    start786 = $tmp789;
    if (((panda$core$Bit) { !start786.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp792 = (($fn791) self->$class->vtable[30])(self);
    test790 = $tmp792;
    if (((panda$core$Bit) { test790 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp795 = (($fn794) self->$class->vtable[41])(self);
    body793 = $tmp795;
    if (((panda$core$Bit) { body793 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp797 = (panda$collections$Array*) malloc(40);
    $tmp797->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp797->refCount.value = 1;
    panda$collections$Array$init($tmp797);
    children796 = $tmp797;
    panda$collections$Array$add$panda$collections$Array$T(children796, ((panda$core$Object*) test790));
    panda$collections$Array$add$panda$collections$Array$T(children796, ((panda$core$Object*) body793));
    org$pandalanguage$pandac$ASTNode* $tmp799 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp799->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp799->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp799, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start786.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children796));
    return $tmp799;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start801;
    org$pandalanguage$pandac$ASTNode* body805;
    org$pandalanguage$pandac$ASTNode* test811;
    panda$collections$Array* children814;
    org$pandalanguage$pandac$parser$Token$nullable $tmp804 = (($fn803) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s802);
    start801 = $tmp804;
    if (((panda$core$Bit) { !start801.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp807 = (($fn806) self->$class->vtable[41])(self);
    body805 = $tmp807;
    if (((panda$core$Bit) { body805 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp810 = (($fn809) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s808);
    if (((panda$core$Bit) { !$tmp810.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp813 = (($fn812) self->$class->vtable[30])(self);
    test811 = $tmp813;
    if (((panda$core$Bit) { test811 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp815 = (panda$collections$Array*) malloc(40);
    $tmp815->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp815->refCount.value = 1;
    panda$collections$Array$init($tmp815);
    children814 = $tmp815;
    panda$collections$Array$add$panda$collections$Array$T(children814, ((panda$core$Object*) body805));
    panda$collections$Array$add$panda$collections$Array$T(children814, ((panda$core$Object*) test811));
    org$pandalanguage$pandac$ASTNode* $tmp817 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp817->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp817, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start801.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children814));
    return $tmp817;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start819;
    org$pandalanguage$pandac$ASTNode* body823;
    panda$collections$Array* children826;
    org$pandalanguage$pandac$parser$Token$nullable $tmp822 = (($fn821) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s820);
    start819 = $tmp822;
    if (((panda$core$Bit) { !start819.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp825 = (($fn824) self->$class->vtable[41])(self);
    body823 = $tmp825;
    if (((panda$core$Bit) { body823 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp827 = (panda$collections$Array*) malloc(40);
    $tmp827->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp827->refCount.value = 1;
    panda$collections$Array$init($tmp827);
    children826 = $tmp827;
    panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) body823));
    org$pandalanguage$pandac$ASTNode* $tmp829 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp829->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp829->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp829, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start819.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children826));
    return $tmp829;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start831;
    org$pandalanguage$pandac$ASTNode* expr835;
    panda$collections$Array* children838;
    org$pandalanguage$pandac$ASTNode* message843;
    org$pandalanguage$pandac$parser$Token$nullable $tmp834 = (($fn833) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s832);
    start831 = $tmp834;
    if (((panda$core$Bit) { !start831.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp837 = (($fn836) self->$class->vtable[30])(self);
    expr835 = $tmp837;
    if (((panda$core$Bit) { expr835 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp839 = (panda$collections$Array*) malloc(40);
    $tmp839->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp839->refCount.value = 1;
    panda$collections$Array$init($tmp839);
    children838 = $tmp839;
    panda$collections$Array$add$panda$collections$Array$T(children838, ((panda$core$Object*) expr835));
    org$pandalanguage$pandac$parser$Token$nullable $tmp842 = (($fn841) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp842.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp845 = (($fn844) self->$class->vtable[30])(self);
        message843 = $tmp845;
        if (((panda$core$Bit) { message843 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children838, ((panda$core$Object*) message843));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp846 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp846->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp846->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp846, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start831.value).position, ((panda$collections$ListView*) children838));
    return $tmp846;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start848;
    panda$collections$Array* expressions852;
    org$pandalanguage$pandac$ASTNode* expr855;
    panda$collections$Array* children864;
    org$pandalanguage$pandac$ASTNode* stmt876;
    org$pandalanguage$pandac$ASTNode* stmt879;
    org$pandalanguage$pandac$parser$Token$nullable $tmp851 = (($fn850) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s849);
    start848 = $tmp851;
    if (((panda$core$Bit) { !start848.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp853 = (panda$collections$Array*) malloc(40);
    $tmp853->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp853->refCount.value = 1;
    panda$collections$Array$init($tmp853);
    expressions852 = $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp857 = (($fn856) self->$class->vtable[30])(self);
    expr855 = $tmp857;
    if (((panda$core$Bit) { expr855 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions852, ((panda$core$Object*) expr855));
    $l858:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp861 = (($fn860) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp861.nonnull }).value) goto $l859;
    {
        org$pandalanguage$pandac$ASTNode* $tmp863 = (($fn862) self->$class->vtable[30])(self);
        expr855 = $tmp863;
        if (((panda$core$Bit) { expr855 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions852, ((panda$core$Object*) expr855));
    }
    goto $l858;
    $l859:;
    panda$collections$Array* $tmp865 = (panda$collections$Array*) malloc(40);
    $tmp865->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp865->refCount.value = 1;
    panda$collections$Array$init($tmp865);
    children864 = $tmp865;
    org$pandalanguage$pandac$ASTNode* $tmp867 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp867->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp867->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp867, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start848.value).position, ((panda$collections$ListView*) expressions852));
    panda$collections$Array$add$panda$collections$Array$T(children864, ((panda$core$Object*) $tmp867));
    org$pandalanguage$pandac$parser$Token$nullable $tmp871 = (($fn870) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s869);
    if (((panda$core$Bit) { !$tmp871.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l872:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp875 = (($fn874) self->$class->vtable[6])(self);
        switch ($tmp875.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l873;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp878 = (($fn877) self->$class->vtable[49])(self);
                stmt876 = $tmp878;
                if (((panda$core$Bit) { stmt876 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children864, ((panda$core$Object*) stmt876));
                goto $l873;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp881 = (($fn880) self->$class->vtable[51])(self);
                    stmt879 = $tmp881;
                    if (((panda$core$Bit) { stmt879 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children864, ((panda$core$Object*) stmt879));
                }
            }
        }
    }
    }
    $l873:;
    org$pandalanguage$pandac$ASTNode* $tmp882 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp882->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp882->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp882, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start848.value).position, ((panda$collections$ListView*) children864));
    return $tmp882;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start884;
    panda$collections$Array* children888;
    org$pandalanguage$pandac$ASTNode* expr891;
    org$pandalanguage$pandac$parser$Token token899;
    org$pandalanguage$pandac$ASTNode* w902;
    org$pandalanguage$pandac$parser$Token o905;
    panda$collections$Array* statements911;
    org$pandalanguage$pandac$ASTNode* stmt918;
    org$pandalanguage$pandac$ASTNode* stmt921;
    org$pandalanguage$pandac$parser$Token$nullable $tmp887 = (($fn886) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s885);
    start884 = $tmp887;
    if (((panda$core$Bit) { !start884.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp889 = (panda$collections$Array*) malloc(40);
    $tmp889->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp889->refCount.value = 1;
    panda$collections$Array$init($tmp889);
    children888 = $tmp889;
    org$pandalanguage$pandac$ASTNode* $tmp893 = (($fn892) self->$class->vtable[30])(self);
    expr891 = $tmp893;
    if (((panda$core$Bit) { expr891 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children888, ((panda$core$Object*) expr891));
    org$pandalanguage$pandac$parser$Token$nullable $tmp896 = (($fn895) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s894);
    if (((panda$core$Bit) { !$tmp896.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l897:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp901 = (($fn900) self->$class->vtable[6])(self);
        token899 = $tmp901;
        switch (token899.kind.value) {
            case 100:
            {
                goto $l898;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp904 = (($fn903) self->$class->vtable[39])(self);
                w902 = $tmp904;
                if (((panda$core$Bit) { w902 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children888, ((panda$core$Object*) w902));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp907 = (($fn906) self->$class->vtable[4])(self);
                o905 = $tmp907;
                org$pandalanguage$pandac$parser$Token$nullable $tmp910 = (($fn909) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s908);
                if (((panda$core$Bit) { !$tmp910.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp912 = (panda$collections$Array*) malloc(40);
                $tmp912->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp912->refCount.value = 1;
                panda$collections$Array$init($tmp912);
                statements911 = $tmp912;
                $l914:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp917 = (($fn916) self->$class->vtable[6])(self);
                    switch ($tmp917.kind.value) {
                        case 100:
                        {
                            goto $l915;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp920 = (($fn919) self->$class->vtable[49])(self);
                            stmt918 = $tmp920;
                            if (((panda$core$Bit) { stmt918 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements911, ((panda$core$Object*) stmt918));
                            goto $l915;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp923 = (($fn922) self->$class->vtable[51])(self);
                            stmt921 = $tmp923;
                            if (((panda$core$Bit) { stmt921 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements911, ((panda$core$Object*) stmt921));
                        }
                    }
                }
                }
                $l915:;
                org$pandalanguage$pandac$ASTNode* $tmp924 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp924->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp924->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp924, ((panda$core$Int64) { 127 }), o905.position, ((panda$collections$ListView*) statements911));
                panda$collections$Array$add$panda$collections$Array$T(children888, ((panda$core$Object*) $tmp924));
                goto $l898;
            }
            break;
            default:
            {
                (($fn926) self->$class->vtable[4])(self);
                panda$core$String* $tmp930 = (($fn929) self->$class->vtable[14])(self, token899);
                panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s928, $tmp930);
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
                panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s927, $tmp933);
                (($fn935) self->$class->vtable[9])(self, token899, $tmp934);
            }
        }
    }
    }
    $l898:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp938 = (($fn937) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s936);
    if (((panda$core$Bit) { !$tmp938.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp939 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp939->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp939->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp939, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start884.value).position, ((panda$collections$ListView*) children888));
    return $tmp939;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start941;
    panda$collections$Array* children945;
    org$pandalanguage$pandac$ASTNode* stmt953;
    org$pandalanguage$pandac$ASTNode* stmt959;
    org$pandalanguage$pandac$parser$Token$nullable $tmp944 = (($fn943) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s942);
    start941 = $tmp944;
    if (((panda$core$Bit) { !start941.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp946 = (panda$collections$Array*) malloc(40);
    $tmp946->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp946->refCount.value = 1;
    panda$collections$Array$init($tmp946);
    children945 = $tmp946;
    $l948:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp951 = (($fn950) self->$class->vtable[6])(self);
        switch ($tmp951.kind.value) {
            case 100:
            {
                (($fn952) self->$class->vtable[4])(self);
                goto $l949;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp955 = (($fn954) self->$class->vtable[49])(self);
                stmt953 = $tmp955;
                if (((panda$core$Bit) { stmt953 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp958 = (($fn957) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s956);
                if (((panda$core$Bit) { !$tmp958.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children945, ((panda$core$Object*) stmt953));
                goto $l949;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp961 = (($fn960) self->$class->vtable[51])(self);
                stmt959 = $tmp961;
                if (((panda$core$Bit) { stmt959 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children945, ((panda$core$Object*) stmt959));
            }
        }
    }
    }
    $l949:;
    org$pandalanguage$pandac$ASTNode* $tmp962 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp962->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp962->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp962, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start941.value).position, ((panda$collections$ListView*) children945));
    return $tmp962;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start964;
    org$pandalanguage$pandac$parser$Token op969;
    org$pandalanguage$pandac$ASTNode* rvalue972;
    panda$collections$Array* children975;
    org$pandalanguage$pandac$parser$Token op984;
    org$pandalanguage$pandac$ASTNode* rvalue987;
    panda$collections$Array* children990;
    org$pandalanguage$pandac$ASTNode* $tmp966 = (($fn965) self->$class->vtable[30])(self);
    start964 = $tmp966;
    if (((panda$core$Bit) { start964 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp968 = (($fn967) self->$class->vtable[6])(self);
    switch ($tmp968.kind.value) {
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        {
            org$pandalanguage$pandac$parser$Token $tmp971 = (($fn970) self->$class->vtable[4])(self);
            op969 = $tmp971;
            org$pandalanguage$pandac$ASTNode* $tmp974 = (($fn973) self->$class->vtable[30])(self);
            rvalue972 = $tmp974;
            if (((panda$core$Bit) { rvalue972 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp976 = (panda$collections$Array*) malloc(40);
            $tmp976->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp976->refCount.value = 1;
            panda$collections$Array$init($tmp976);
            children975 = $tmp976;
            panda$collections$Array$add$panda$collections$Array$T(children975, ((panda$core$Object*) start964));
            panda$collections$Array$add$panda$collections$Array$T(children975, ((panda$core$Object*) rvalue972));
            org$pandalanguage$pandac$ASTNode* $tmp978 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp978->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp978->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp978, ((panda$core$Int64) { 103 }), start964->position, ((panda$core$Object*) wrap_panda$core$Int64(op969.kind)), ((panda$collections$ListView*) children975));
            return $tmp978;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp981 = (($fn980) self->$class->vtable[6])(self);
            (($fn983) self->$class->vtable[9])(self, $tmp981, &$s982);
            org$pandalanguage$pandac$parser$Token $tmp986 = (($fn985) self->$class->vtable[4])(self);
            op984 = $tmp986;
            org$pandalanguage$pandac$ASTNode* $tmp989 = (($fn988) self->$class->vtable[30])(self);
            rvalue987 = $tmp989;
            if (((panda$core$Bit) { rvalue987 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp991 = (panda$collections$Array*) malloc(40);
            $tmp991->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp991->refCount.value = 1;
            panda$collections$Array$init($tmp991);
            children990 = $tmp991;
            panda$collections$Array$add$panda$collections$Array$T(children990, ((panda$core$Object*) start964));
            panda$collections$Array$add$panda$collections$Array$T(children990, ((panda$core$Object*) rvalue987));
            org$pandalanguage$pandac$ASTNode* $tmp993 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp993->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp993->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp993, ((panda$core$Int64) { 103 }), start964->position, ((panda$core$Object*) wrap_panda$core$Int64(op984.kind)), ((panda$collections$ListView*) children990));
            return $tmp993;
        }
        break;
        default:
        {
            return start964;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children995;
    org$pandalanguage$pandac$ASTNode* t998;
    org$pandalanguage$pandac$ASTNode* value1003;
    org$pandalanguage$pandac$ASTNode* value1013;
    panda$collections$Array* $tmp996 = (panda$collections$Array*) malloc(40);
    $tmp996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp996->refCount.value = 1;
    panda$collections$Array$init($tmp996);
    children995 = $tmp996;
    org$pandalanguage$pandac$ASTNode* $tmp1000 = (($fn999) self->$class->vtable[33])(self);
    t998 = $tmp1000;
    if (((panda$core$Bit) { t998 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) t998));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1002 = (($fn1001) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1002.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1005 = (($fn1004) self->$class->vtable[30])(self);
        value1003 = $tmp1005;
        if (((panda$core$Bit) { value1003 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) value1003));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1007 = (($fn1006) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1007.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1008.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1010 = (($fn1009) self->$class->vtable[4])(self);
        (($fn1012) self->$class->vtable[9])(self, $tmp1010, &$s1011);
        org$pandalanguage$pandac$ASTNode* $tmp1015 = (($fn1014) self->$class->vtable[30])(self);
        value1013 = $tmp1015;
        if (((panda$core$Bit) { value1013 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) value1013));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1016 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1016->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1016->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1016, ((panda$core$Int64) { 129 }), t998->position, ((panda$collections$ListView*) children995));
    return $tmp1016;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1018;
    panda$core$Int64 kind1021;
    panda$collections$Array* children1024;
    org$pandalanguage$pandac$ASTNode* child1027;
    org$pandalanguage$pandac$ASTNode* child1034;
    org$pandalanguage$pandac$parser$Token $tmp1020 = (($fn1019) self->$class->vtable[4])(self);
    start1018 = $tmp1020;
    switch (start1018.kind.value) {
        case 23:
        {
            kind1021 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1021 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1021 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1021 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1023) self->$class->vtable[9])(self, start1018, &$s1022);
        }
    }
    panda$collections$Array* $tmp1025 = (panda$collections$Array*) malloc(40);
    $tmp1025->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1025->refCount.value = 1;
    panda$collections$Array$init($tmp1025);
    children1024 = $tmp1025;
    org$pandalanguage$pandac$ASTNode* $tmp1029 = (($fn1028) self->$class->vtable[43])(self);
    child1027 = $tmp1029;
    if (((panda$core$Bit) { child1027 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1024, ((panda$core$Object*) child1027));
    $l1030:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1033 = (($fn1032) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1033.nonnull }).value) goto $l1031;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1036 = (($fn1035) self->$class->vtable[43])(self);
        child1034 = $tmp1036;
        if (((panda$core$Bit) { child1034 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1024, ((panda$core$Object*) child1034));
    }
    goto $l1030;
    $l1031:;
    org$pandalanguage$pandac$ASTNode* $tmp1037 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1037->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1037->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1037, kind1021, start1018.position, ((panda$collections$ListView*) children1024));
    return $tmp1037;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1039;
    panda$collections$Array* children1046;
    org$pandalanguage$pandac$ASTNode* expr1055;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1042 = (($fn1041) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1040);
    start1039 = $tmp1042;
    if (((panda$core$Bit) { !start1039.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1045 = (($fn1044) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1043);
    if (((panda$core$Bit) { !$tmp1045.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1047 = (panda$collections$Array*) malloc(40);
    $tmp1047->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1047->refCount.value = 1;
    panda$collections$Array$init($tmp1047);
    children1046 = $tmp1047;
    org$pandalanguage$pandac$ASTNode* $tmp1049 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1049->refCount.value = 1;
    panda$core$String* $tmp1052 = (($fn1051) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1039.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1049, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1039.value).position, $tmp1052);
    panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) $tmp1049));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1054 = (($fn1053) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1054.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1057 = (($fn1056) self->$class->vtable[30])(self);
        expr1055 = $tmp1057;
        if (((panda$core$Bit) { expr1055 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) expr1055));
        $l1058:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1061 = (($fn1060) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1061.nonnull }).value) goto $l1059;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1063 = (($fn1062) self->$class->vtable[30])(self);
            expr1055 = $tmp1063;
            if (((panda$core$Bit) { expr1055 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) expr1055));
        }
        goto $l1058;
        $l1059:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1066 = (($fn1065) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1064);
        if (((panda$core$Bit) { !$tmp1066.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1067 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1067->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1067->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1067, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1039.value).position, ((panda$collections$ListView*) children1046));
    return $tmp1067;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1069;
    org$pandalanguage$pandac$parser$Token$nullable label1073;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = (($fn1071) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1070);
    start1069 = $tmp1072;
    if (((panda$core$Bit) { !start1069.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1075 = (($fn1074) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1073 = $tmp1075;
    if (((panda$core$Bit) { label1073.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1076 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1076->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1076->refCount.value = 1;
        panda$core$String* $tmp1079 = (($fn1078) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1073.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1076, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position, $tmp1079);
        return $tmp1076;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1080 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1080->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1080->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1080, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position);
    return $tmp1080;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1082;
    org$pandalanguage$pandac$parser$Token$nullable label1086;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1085 = (($fn1084) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1083);
    start1082 = $tmp1085;
    if (((panda$core$Bit) { !start1082.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1088 = (($fn1087) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1086 = $tmp1088;
    if (((panda$core$Bit) { label1086.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1089 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1089->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1089->refCount.value = 1;
        panda$core$String* $tmp1092 = (($fn1091) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1086.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1089, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1082.value).position, $tmp1092);
        return $tmp1089;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1093->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1093->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1093, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1082.value).position);
    return $tmp1093;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1095;
    panda$collections$Array* children1103;
    org$pandalanguage$pandac$ASTNode* expr1106;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1098 = (($fn1097) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1096);
    start1095 = $tmp1098;
    if (((panda$core$Bit) { !start1095.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1100 = (($fn1099) self->$class->vtable[6])(self);
    switch ($tmp1100.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1101 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1101->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1101->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1101, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1095.value).position);
            return $tmp1101;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1104 = (panda$collections$Array*) malloc(40);
            $tmp1104->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1104->refCount.value = 1;
            panda$collections$Array$init($tmp1104);
            children1103 = $tmp1104;
            org$pandalanguage$pandac$ASTNode* $tmp1108 = (($fn1107) self->$class->vtable[30])(self);
            expr1106 = $tmp1108;
            if (((panda$core$Bit) { expr1106 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1103, ((panda$core$Object*) expr1106));
            org$pandalanguage$pandac$ASTNode* $tmp1109 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1109->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1109->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1109, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1095.value).position, ((panda$collections$ListView*) children1103));
            return $tmp1109;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1112 = (($fn1111) self->$class->vtable[6])(self);
    switch ($tmp1112.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1114 = (($fn1113) self->$class->vtable[46])(self);
            return $tmp1114;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1116 = (($fn1115) self->$class->vtable[47])(self);
            return $tmp1116;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1118 = (($fn1117) self->$class->vtable[48])(self);
            return $tmp1118;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1120 = (($fn1119) self->$class->vtable[6])(self);
    switch ($tmp1120.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (($fn1121) self->$class->vtable[36])(self, p_label);
            return $tmp1122;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1124 = (($fn1123) self->$class->vtable[34])(self, p_label);
            return $tmp1124;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1126 = (($fn1125) self->$class->vtable[37])(self, p_label);
            return $tmp1126;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1128 = (($fn1127) self->$class->vtable[35])(self, p_label);
            return $tmp1128;
        }
        break;
        default:
        {
            (($fn1130) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1129);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1149;
    org$pandalanguage$pandac$parser$Token $tmp1132 = (($fn1131) self->$class->vtable[6])(self);
    switch ($tmp1132.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1134 = (($fn1133) self->$class->vtable[31])(self);
            return $tmp1134;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1136 = (($fn1135) self->$class->vtable[34])(self, NULL);
            return $tmp1136;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1138 = (($fn1137) self->$class->vtable[35])(self, NULL);
            return $tmp1138;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1140 = (($fn1139) self->$class->vtable[36])(self, NULL);
            return $tmp1140;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1142 = (($fn1141) self->$class->vtable[37])(self, NULL);
            return $tmp1142;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1144 = (($fn1143) self->$class->vtable[38])(self);
            return $tmp1144;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1146 = (($fn1145) self->$class->vtable[40])(self);
            return $tmp1146;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1148 = (($fn1147) self->$class->vtable[41])(self);
            return $tmp1148;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1151 = (($fn1150) self->$class->vtable[4])(self);
            id1149 = $tmp1151;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1153 = (($fn1152) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1153.nonnull }).value) {
            {
                panda$core$String* $tmp1155 = (($fn1154) self->$class->vtable[14])(self, id1149);
                org$pandalanguage$pandac$ASTNode* $tmp1157 = (($fn1156) self->$class->vtable[50])(self, $tmp1155);
                return $tmp1157;
            }
            }
            (($fn1158) self->$class->vtable[5])(self, id1149);
            org$pandalanguage$pandac$ASTNode* $tmp1160 = (($fn1159) self->$class->vtable[42])(self);
            return $tmp1160;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1162 = (($fn1161) self->$class->vtable[42])(self);
            return $tmp1162;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1164 = (($fn1163) self->$class->vtable[44])(self);
            return $tmp1164;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1166 = (($fn1165) self->$class->vtable[45])(self);
            return $tmp1166;
        }
        break;
        default:
        {
            (($fn1168) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1167);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1169;
    org$pandalanguage$pandac$parser$Token$nullable next1173;
    panda$core$MutableString* name1177;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = (($fn1171) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1170);
    start1169 = $tmp1172;
    if (((panda$core$Bit) { !start1169.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1176 = (($fn1175) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1174);
    next1173 = $tmp1176;
    if (((panda$core$Bit) { !next1173.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1178 = (panda$core$MutableString*) malloc(40);
    $tmp1178->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1178->refCount.value = 1;
    panda$core$String* $tmp1181 = (($fn1180) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1173.value));
    panda$core$MutableString$init$panda$core$String($tmp1178, $tmp1181);
    name1177 = $tmp1178;
    $l1182:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1185 = (($fn1184) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1173 = $tmp1185;
        if (((panda$core$Bit) { !next1173.nonnull }).value) {
        {
            goto $l1183;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1177, &$s1186);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1189 = (($fn1188) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1187);
        next1173 = $tmp1189;
        if (((panda$core$Bit) { !next1173.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1191 = (($fn1190) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1173.value));
        panda$core$MutableString$append$panda$core$String(name1177, $tmp1191);
    }
    }
    $l1183:;
    org$pandalanguage$pandac$ASTNode* $tmp1192 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1192->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1192->refCount.value = 1;
    panda$core$String* $tmp1194 = panda$core$MutableString$convert$R$panda$core$String(name1177);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1192, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1169.value).position, $tmp1194);
    return $tmp1192;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1195;
    org$pandalanguage$pandac$parser$Token$nullable next1199;
    panda$core$MutableString* name1203;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1198 = (($fn1197) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1196);
    start1195 = $tmp1198;
    if (((panda$core$Bit) { !start1195.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1202 = (($fn1201) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1200);
    next1199 = $tmp1202;
    if (((panda$core$Bit) { !next1199.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1204 = (panda$core$MutableString*) malloc(40);
    $tmp1204->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1204->refCount.value = 1;
    panda$core$String* $tmp1207 = (($fn1206) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1199.value));
    panda$core$MutableString$init$panda$core$String($tmp1204, $tmp1207);
    name1203 = $tmp1204;
    $l1208:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1211 = (($fn1210) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1199 = $tmp1211;
        if (((panda$core$Bit) { !next1199.nonnull }).value) {
        {
            goto $l1209;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1203, &$s1212);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1215 = (($fn1214) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1213);
        next1199 = $tmp1215;
        if (((panda$core$Bit) { !next1199.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1217 = (($fn1216) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1199.value));
        panda$core$MutableString$append$panda$core$String(name1203, $tmp1217);
    }
    }
    $l1209:;
    org$pandalanguage$pandac$ASTNode* $tmp1218 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1218->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1218->refCount.value = 1;
    panda$core$String* $tmp1220 = panda$core$MutableString$convert$R$panda$core$String(name1203);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1218, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1195.value).position, $tmp1220);
    return $tmp1218;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1221;
    org$pandalanguage$pandac$parser$Token$nullable id1225;
    panda$collections$Array* children1229;
    panda$collections$Array* idChildren1232;
    org$pandalanguage$pandac$ASTNode* t1237;
    org$pandalanguage$pandac$ASTNode* t1253;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1224 = (($fn1223) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1222);
    start1221 = $tmp1224;
    if (((panda$core$Bit) { !start1221.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1228 = (($fn1227) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1226);
    id1225 = $tmp1228;
    if (((panda$core$Bit) { !id1225.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1230 = (panda$collections$Array*) malloc(40);
    $tmp1230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1230->refCount.value = 1;
    panda$collections$Array$init($tmp1230);
    children1229 = $tmp1230;
    panda$collections$Array* $tmp1233 = (panda$collections$Array*) malloc(40);
    $tmp1233->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1233->refCount.value = 1;
    panda$collections$Array$init($tmp1233);
    idChildren1232 = $tmp1233;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1236 = (($fn1235) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1236.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1239 = (($fn1238) self->$class->vtable[20])(self);
        t1237 = $tmp1239;
        if (((panda$core$Bit) { t1237 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1232, ((panda$core$Object*) t1237));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1240 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1240->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1240->refCount.value = 1;
    panda$core$String* $tmp1243 = (($fn1242) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1225.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1240, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1225.value).position, ((panda$core$Object*) $tmp1243), ((panda$collections$ListView*) idChildren1232));
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) $tmp1240));
    $l1244:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1247 = (($fn1246) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1247.nonnull }).value) goto $l1245;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = (($fn1249) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1248);
        id1225 = $tmp1250;
        if (((panda$core$Bit) { !id1225.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1232);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1252 = (($fn1251) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1252.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1255 = (($fn1254) self->$class->vtable[20])(self);
            t1253 = $tmp1255;
            if (((panda$core$Bit) { t1253 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1232, ((panda$core$Object*) t1253));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1256 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1256->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1256->refCount.value = 1;
        panda$core$String* $tmp1259 = (($fn1258) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1225.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1256, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1225.value).position, ((panda$core$Object*) $tmp1259), ((panda$collections$ListView*) idChildren1232));
        panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) $tmp1256));
    }
    goto $l1244;
    $l1245:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1262 = (($fn1261) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1260);
    if (((panda$core$Bit) { !$tmp1262.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1263 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1263->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1263, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1221.value).position, ((panda$collections$ListView*) children1229));
    return $tmp1263;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1265;
    panda$collections$Array* children1269;
    org$pandalanguage$pandac$ASTNode* t1272;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1268 = (($fn1267) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1266);
    start1265 = $tmp1268;
    if (((panda$core$Bit) { !start1265.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1270 = (panda$collections$Array*) malloc(40);
    $tmp1270->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1270->refCount.value = 1;
    panda$collections$Array$init($tmp1270);
    children1269 = $tmp1270;
    org$pandalanguage$pandac$ASTNode* $tmp1274 = (($fn1273) self->$class->vtable[20])(self);
    t1272 = $tmp1274;
    if (((panda$core$Bit) { t1272 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1269, ((panda$core$Object*) t1272));
    $l1275:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1278 = (($fn1277) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1278.nonnull }).value) goto $l1276;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1280 = (($fn1279) self->$class->vtable[20])(self);
        t1272 = $tmp1280;
        if (((panda$core$Bit) { t1272 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1269, ((panda$core$Object*) t1272));
    }
    goto $l1275;
    $l1276:;
    org$pandalanguage$pandac$ASTNode* $tmp1281 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1281->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1281->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1281, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1265.value).position, ((panda$collections$ListView*) children1269));
    return $tmp1281;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1283;
    org$pandalanguage$pandac$parser$Token$nullable next1288;
    org$pandalanguage$pandac$Position $tmp1297;
    panda$collections$Array* $tmp1284 = (panda$collections$Array*) malloc(40);
    $tmp1284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1284->refCount.value = 1;
    panda$collections$Array$init($tmp1284);
    children1283 = $tmp1284;
    $l1286:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1290 = (($fn1289) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1288 = $tmp1290;
        if (((panda$core$Bit) { !next1288.nonnull }).value) {
        {
            goto $l1287;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1291 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1291->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1291->refCount.value = 1;
        panda$core$String* $tmp1294 = (($fn1293) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1288.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1291, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1288.value).position, $tmp1294);
        panda$collections$Array$add$panda$collections$Array$T(children1283, ((panda$core$Object*) $tmp1291));
    }
    }
    $l1287:;
    org$pandalanguage$pandac$ASTNode* $tmp1295 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1295->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1295->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1297);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1295, ((panda$core$Int64) { 144 }), $tmp1297, ((panda$collections$ListView*) children1283));
    return $tmp1295;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1298;
    panda$core$MutableString* result1302;
    org$pandalanguage$pandac$parser$Token next1307;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1301 = (($fn1300) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1299);
    start1298 = $tmp1301;
    if (((panda$core$Bit) { !start1298.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1303 = (panda$core$MutableString*) malloc(40);
    $tmp1303->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1303->refCount.value = 1;
    panda$core$MutableString$init($tmp1303);
    result1302 = $tmp1303;
    $l1305:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1309 = (($fn1308) self->$class->vtable[3])(self);
        next1307 = $tmp1309;
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1307.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1310.value) {
        {
            goto $l1306;
        }
        }
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1307.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1311.value) {
        {
            (($fn1313) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1298.value), &$s1312);
            return NULL;
        }
        }
        panda$core$String* $tmp1315 = (($fn1314) self->$class->vtable[14])(self, next1307);
        panda$core$MutableString$append$panda$core$String(result1302, $tmp1315);
    }
    }
    $l1306:;
    org$pandalanguage$pandac$ASTNode* $tmp1316 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1316->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1316->refCount.value = 1;
    panda$core$String* $tmp1318 = panda$core$MutableString$convert$R$panda$core$String(result1302);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1316, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1298.value).position, $tmp1318);
    return $tmp1316;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1319;
    org$pandalanguage$pandac$ASTNode* t1323;
    panda$collections$Array* children1326;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1322 = (($fn1321) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1320);
    id1319 = $tmp1322;
    if (((panda$core$Bit) { !id1319.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1325 = (($fn1324) self->$class->vtable[32])(self);
    t1323 = $tmp1325;
    if (((panda$core$Bit) { t1323 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1327 = (panda$collections$Array*) malloc(40);
    $tmp1327->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1327->refCount.value = 1;
    panda$collections$Array$init($tmp1327);
    children1326 = $tmp1327;
    panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) t1323));
    org$pandalanguage$pandac$ASTNode* $tmp1329 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1329->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1329->refCount.value = 1;
    panda$core$String* $tmp1332 = (($fn1331) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1319.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1329, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1319.value).position, ((panda$core$Object*) $tmp1332), ((panda$collections$ListView*) children1326));
    return $tmp1329;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1333;
    panda$collections$Array* children1337;
    org$pandalanguage$pandac$ASTNode* param1342;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1336 = (($fn1335) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1334);
    start1333 = $tmp1336;
    if (((panda$core$Bit) { !start1333.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1338 = (panda$collections$Array*) malloc(40);
    $tmp1338->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1338->refCount.value = 1;
    panda$collections$Array$init($tmp1338);
    children1337 = $tmp1338;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1341 = (($fn1340) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1341.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1344 = (($fn1343) self->$class->vtable[58])(self);
        param1342 = $tmp1344;
        if (((panda$core$Bit) { param1342 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1337, ((panda$core$Object*) param1342));
        $l1345:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1348 = (($fn1347) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1348.nonnull }).value) goto $l1346;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1350 = (($fn1349) self->$class->vtable[58])(self);
            param1342 = $tmp1350;
            if (((panda$core$Bit) { param1342 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1337, ((panda$core$Object*) param1342));
        }
        goto $l1345;
        $l1346:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1353 = (($fn1352) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1351);
        if (((panda$core$Bit) { !$tmp1353.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1354 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1354->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1354->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1354, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1333.value).position, ((panda$collections$ListView*) children1337));
    return $tmp1354;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1356;
    org$pandalanguage$pandac$parser$Token$nullable start1357;
    panda$core$String* name1363;
    panda$collections$Array* children1366;
    org$pandalanguage$pandac$ASTNode* params1369;
    org$pandalanguage$pandac$ASTNode* returnType1375;
    org$pandalanguage$pandac$Position $tmp1380;
    org$pandalanguage$pandac$ASTNode* b1384;
    org$pandalanguage$pandac$Position $tmp1389;
    org$pandalanguage$pandac$parser$Token token1390;
    panda$core$String* tokenText1393;
    org$pandalanguage$pandac$ASTNode* post1407;
    org$pandalanguage$pandac$Position $tmp1412;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = (($fn1358) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1357 = $tmp1359;
    if (((panda$core$Bit) { !start1357.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1362 = (($fn1361) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1360);
        start1357 = $tmp1362;
        if (((panda$core$Bit) { !start1357.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1356 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1356 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1365 = (($fn1364) self->$class->vtable[19])(self);
    name1363 = $tmp1365;
    if (((panda$core$Bit) { name1363 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1367 = (panda$collections$Array*) malloc(40);
    $tmp1367->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1367->refCount.value = 1;
    panda$collections$Array$init($tmp1367);
    children1366 = $tmp1367;
    panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1371 = (($fn1370) self->$class->vtable[59])(self);
    params1369 = $tmp1371;
    if (((panda$core$Bit) { params1369 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) params1369));
    org$pandalanguage$pandac$parser$Token $tmp1373 = (($fn1372) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1373.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1374.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1377 = (($fn1376) self->$class->vtable[32])(self);
        returnType1375 = $tmp1377;
        if (((panda$core$Bit) { returnType1375 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) returnType1375));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1378 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1378->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1378->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1380);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1378, ((panda$core$Int64) { 138 }), $tmp1380);
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) $tmp1378));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1382 = (($fn1381) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1382.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1383.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1386 = (($fn1385) self->$class->vtable[41])(self);
        b1384 = $tmp1386;
        if (((panda$core$Bit) { b1384 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) b1384));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1387 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1387->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1387->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1389);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1387, ((panda$core$Int64) { 138 }), $tmp1389);
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) $tmp1387));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1392 = (($fn1391) self->$class->vtable[6])(self);
    token1390 = $tmp1392;
    panda$core$String* $tmp1395 = (($fn1394) self->$class->vtable[14])(self, token1390);
    tokenText1393 = $tmp1395;
    panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1390.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1396 = $tmp1397.value;
    if (!$tmp1396) goto $l1398;
    panda$core$Bit $tmp1401 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1393, &$s1400);
    bool $tmp1399 = $tmp1401.value;
    if ($tmp1399) goto $l1402;
    panda$core$Bit $tmp1404 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1393, &$s1403);
    $tmp1399 = $tmp1404.value;
    $l1402:;
    panda$core$Bit $tmp1405 = { $tmp1399 };
    $tmp1396 = $tmp1405.value;
    $l1398:;
    panda$core$Bit $tmp1406 = { $tmp1396 };
    if ($tmp1406.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1409 = (($fn1408) self->$class->vtable[60])(self);
        post1407 = $tmp1409;
        if (((panda$core$Bit) { post1407 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) post1407));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1410 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1410->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1410->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1412);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1410, ((panda$core$Int64) { 138 }), $tmp1412);
        panda$collections$Array$add$panda$collections$Array$T(children1366, ((panda$core$Object*) $tmp1410));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1413 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1413->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1413->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1413, kind1356, ((org$pandalanguage$pandac$parser$Token) start1357.value).position, ((panda$core$Object*) name1363), ((panda$collections$ListView*) children1366));
    return $tmp1413;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1415;
    panda$collections$Array* children1419;
    org$pandalanguage$pandac$ASTNode* params1422;
    org$pandalanguage$pandac$ASTNode* b1425;
    org$pandalanguage$pandac$parser$Token token1428;
    panda$core$String* tokenText1431;
    org$pandalanguage$pandac$ASTNode* post1445;
    org$pandalanguage$pandac$Position $tmp1450;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1418 = (($fn1417) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1416);
    start1415 = $tmp1418;
    if (((panda$core$Bit) { !start1415.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1420 = (panda$collections$Array*) malloc(40);
    $tmp1420->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1420->refCount.value = 1;
    panda$collections$Array$init($tmp1420);
    children1419 = $tmp1420;
    panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1424 = (($fn1423) self->$class->vtable[59])(self);
    params1422 = $tmp1424;
    if (((panda$core$Bit) { params1422 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) params1422));
    org$pandalanguage$pandac$ASTNode* $tmp1427 = (($fn1426) self->$class->vtable[41])(self);
    b1425 = $tmp1427;
    if (((panda$core$Bit) { b1425 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) b1425));
    org$pandalanguage$pandac$parser$Token $tmp1430 = (($fn1429) self->$class->vtable[6])(self);
    token1428 = $tmp1430;
    panda$core$String* $tmp1433 = (($fn1432) self->$class->vtable[14])(self, token1428);
    tokenText1431 = $tmp1433;
    panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1428.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1434 = $tmp1435.value;
    if (!$tmp1434) goto $l1436;
    panda$core$Bit $tmp1439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1431, &$s1438);
    bool $tmp1437 = $tmp1439.value;
    if ($tmp1437) goto $l1440;
    panda$core$Bit $tmp1442 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1431, &$s1441);
    $tmp1437 = $tmp1442.value;
    $l1440:;
    panda$core$Bit $tmp1443 = { $tmp1437 };
    $tmp1434 = $tmp1443.value;
    $l1436:;
    panda$core$Bit $tmp1444 = { $tmp1434 };
    if ($tmp1444.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1447 = (($fn1446) self->$class->vtable[60])(self);
        post1445 = $tmp1447;
        if (((panda$core$Bit) { post1445 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) post1445));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1448 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1448->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1448->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1450);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1448, ((panda$core$Int64) { 138 }), $tmp1450);
        panda$collections$Array$add$panda$collections$Array$T(children1419, ((panda$core$Object*) $tmp1448));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1451 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1451->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1451->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1451, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1415.value).position, ((panda$collections$ListView*) children1419));
    return $tmp1451;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1453;
    panda$collections$Array* children1456;
    org$pandalanguage$pandac$ASTNode* $tmp1455 = (($fn1454) self->$class->vtable[44])(self);
    decl1453 = $tmp1455;
    if (((panda$core$Bit) { decl1453 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1457 = (panda$collections$Array*) malloc(40);
    $tmp1457->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1457->refCount.value = 1;
    panda$collections$Array$init($tmp1457);
    children1456 = $tmp1457;
    panda$collections$Array$add$panda$collections$Array$T(children1456, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1456, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1456, ((panda$core$Object*) decl1453));
    org$pandalanguage$pandac$ASTNode* $tmp1459 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1459->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1459->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1459, ((panda$core$Int64) { 148 }), decl1453->position, ((panda$collections$ListView*) children1456));
    return $tmp1459;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1461;
    org$pandalanguage$pandac$ASTNode* dc1464;
    org$pandalanguage$pandac$Position $tmp1470;
    org$pandalanguage$pandac$ASTNode* a1471;
    org$pandalanguage$pandac$parser$Token $tmp1463 = (($fn1462) self->$class->vtable[6])(self);
    start1461 = $tmp1463;
    panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1461.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1465.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1467 = (($fn1466) self->$class->vtable[57])(self);
        dc1464 = $tmp1467;
        if (((panda$core$Bit) { dc1464 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1468 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1468->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1468->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1470);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1468, ((panda$core$Int64) { 138 }), $tmp1470);
        dc1464 = $tmp1468;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1473 = (($fn1472) self->$class->vtable[56])(self);
    a1471 = $tmp1473;
    if (((panda$core$Bit) { a1471 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1475 = (($fn1474) self->$class->vtable[6])(self);
    switch ($tmp1475.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1477 = (($fn1476) self->$class->vtable[65])(self, dc1464, a1471);
            return $tmp1477;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1479 = (($fn1478) self->$class->vtable[66])(self, dc1464, a1471);
            return $tmp1479;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1481 = (($fn1480) self->$class->vtable[61])(self, dc1464, a1471);
            return $tmp1481;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1483 = (($fn1482) self->$class->vtable[62])(self, dc1464, a1471);
            return $tmp1483;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1485 = (($fn1484) self->$class->vtable[63])(self, dc1464, a1471);
            return $tmp1485;
        }
        break;
        default:
        {
            (($fn1487) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1486);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1488;
    org$pandalanguage$pandac$parser$Token$nullable start1491;
    org$pandalanguage$pandac$parser$Token$nullable name1495;
    org$pandalanguage$pandac$ASTNode* generics1502;
    org$pandalanguage$pandac$Position $tmp1507;
    org$pandalanguage$pandac$ASTNode* stypes1511;
    org$pandalanguage$pandac$Position $tmp1516;
    panda$collections$Array* members1520;
    org$pandalanguage$pandac$ASTNode* member1527;
    panda$collections$Array* $tmp1489 = (panda$collections$Array*) malloc(40);
    $tmp1489->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1489->refCount.value = 1;
    panda$collections$Array$init($tmp1489);
    children1488 = $tmp1489;
    panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1494 = (($fn1493) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1492);
    start1491 = $tmp1494;
    if (((panda$core$Bit) { !start1491.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1498 = (($fn1497) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1496);
    name1495 = $tmp1498;
    if (((panda$core$Bit) { !name1495.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1500 = (($fn1499) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1500.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1501.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1504 = (($fn1503) self->$class->vtable[54])(self);
        generics1502 = $tmp1504;
        if (((panda$core$Bit) { generics1502 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) generics1502));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1505 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1505->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1505->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1507);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1505, ((panda$core$Int64) { 138 }), $tmp1507);
        panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) $tmp1505));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1509 = (($fn1508) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1509.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1510.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1513 = (($fn1512) self->$class->vtable[55])(self);
        stypes1511 = $tmp1513;
        if (((panda$core$Bit) { stypes1511 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) stypes1511));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1514 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1514->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1514->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1516);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1514, ((panda$core$Int64) { 139 }), $tmp1516);
        panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) $tmp1514));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1519 = (($fn1518) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1517);
    if (((panda$core$Bit) { !$tmp1519.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1521 = (panda$collections$Array*) malloc(40);
    $tmp1521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1521->refCount.value = 1;
    panda$collections$Array$init($tmp1521);
    members1520 = $tmp1521;
    $l1523:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1526 = (($fn1525) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1526.nonnull }).value) goto $l1524;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1529 = (($fn1528) self->$class->vtable[64])(self);
        member1527 = $tmp1529;
        if (((panda$core$Bit) { member1527 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1520, ((panda$core$Object*) member1527));
    }
    goto $l1523;
    $l1524:;
    org$pandalanguage$pandac$ASTNode* $tmp1530 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1530->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1530->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1530, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1491.value).position, ((panda$collections$ListView*) members1520));
    panda$collections$Array$add$panda$collections$Array$T(children1488, ((panda$core$Object*) $tmp1530));
    org$pandalanguage$pandac$ASTNode* $tmp1532 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1532->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1532->refCount.value = 1;
    panda$core$String* $tmp1535 = (($fn1534) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1495.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1532, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1491.value).position, ((panda$core$Object*) $tmp1535), ((panda$collections$ListView*) children1488));
    return $tmp1532;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1536;
    org$pandalanguage$pandac$parser$Token$nullable start1539;
    org$pandalanguage$pandac$parser$Token$nullable name1543;
    org$pandalanguage$pandac$ASTNode* generics1550;
    org$pandalanguage$pandac$Position $tmp1555;
    panda$collections$Array* intfs1556;
    org$pandalanguage$pandac$ASTNode* t1561;
    panda$collections$Array* members1575;
    org$pandalanguage$pandac$ASTNode* member1582;
    panda$collections$Array* $tmp1537 = (panda$collections$Array*) malloc(40);
    $tmp1537->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1537->refCount.value = 1;
    panda$collections$Array$init($tmp1537);
    children1536 = $tmp1537;
    panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1542 = (($fn1541) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1540);
    start1539 = $tmp1542;
    if (((panda$core$Bit) { !start1539.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1546 = (($fn1545) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1544);
    name1543 = $tmp1546;
    if (((panda$core$Bit) { !name1543.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1548 = (($fn1547) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1548.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1549.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1552 = (($fn1551) self->$class->vtable[54])(self);
        generics1550 = $tmp1552;
        if (((panda$core$Bit) { generics1550 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) generics1550));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1553 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1553->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1553->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1555);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1553, ((panda$core$Int64) { 138 }), $tmp1555);
        panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) $tmp1553));
    }
    }
    panda$collections$Array* $tmp1557 = (panda$collections$Array*) malloc(40);
    $tmp1557->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1557->refCount.value = 1;
    panda$collections$Array$init($tmp1557);
    intfs1556 = $tmp1557;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1560 = (($fn1559) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1560.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1563 = (($fn1562) self->$class->vtable[20])(self);
        t1561 = $tmp1563;
        if (((panda$core$Bit) { t1561 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1556, ((panda$core$Object*) t1561));
        $l1564:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1567 = (($fn1566) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1567.nonnull }).value) goto $l1565;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1569 = (($fn1568) self->$class->vtable[20])(self);
            t1561 = $tmp1569;
            if (((panda$core$Bit) { t1561 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1556, ((panda$core$Object*) t1561));
        }
        goto $l1564;
        $l1565:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1570 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1570->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1570->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1570, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1539.value).position, ((panda$collections$ListView*) intfs1556));
    panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) $tmp1570));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1574 = (($fn1573) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1572);
    if (((panda$core$Bit) { !$tmp1574.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1576 = (panda$collections$Array*) malloc(40);
    $tmp1576->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1576->refCount.value = 1;
    panda$collections$Array$init($tmp1576);
    members1575 = $tmp1576;
    $l1578:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1581 = (($fn1580) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1581.nonnull }).value) goto $l1579;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1584 = (($fn1583) self->$class->vtable[64])(self);
        member1582 = $tmp1584;
        if (((panda$core$Bit) { member1582 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1575, ((panda$core$Object*) member1582));
    }
    goto $l1578;
    $l1579:;
    org$pandalanguage$pandac$ASTNode* $tmp1585 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1585->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1585->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1585, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1539.value).position, ((panda$collections$ListView*) members1575));
    panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) $tmp1585));
    org$pandalanguage$pandac$ASTNode* $tmp1587 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1587->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1587->refCount.value = 1;
    panda$core$String* $tmp1590 = (($fn1589) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1543.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1587, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1539.value).position, ((panda$core$Object*) $tmp1590), ((panda$collections$ListView*) children1536));
    return $tmp1587;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1592 = (($fn1591) self->$class->vtable[6])(self);
    switch ($tmp1592.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1594 = (($fn1593) self->$class->vtable[53])(self);
            return $tmp1594;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1596 = (($fn1595) self->$class->vtable[52])(self);
            return $tmp1596;
        }
        break;
        case 17:
        case 18:
        case 19:
        case 21:
        case 20:
        case 13:
        case 11:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1598 = (($fn1597) self->$class->vtable[64])(self);
            return $tmp1598;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1600 = (($fn1599) self->$class->vtable[51])(self);
            return $tmp1600;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1601;
    org$pandalanguage$pandac$ASTNode* entry1609;
    org$pandalanguage$pandac$Position $tmp1615;
    panda$collections$Array* $tmp1602 = (panda$collections$Array*) malloc(40);
    $tmp1602->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1602->refCount.value = 1;
    panda$collections$Array$init($tmp1602);
    entries1601 = $tmp1602;
    $l1604:;
    org$pandalanguage$pandac$parser$Token $tmp1607 = (($fn1606) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1608 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1607.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1608.value) goto $l1605;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1611 = (($fn1610) self->$class->vtable[67])(self);
        entry1609 = $tmp1611;
        if (((panda$core$Bit) { entry1609 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1612 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1612.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1601, ((panda$core$Object*) entry1609));
    }
    goto $l1604;
    $l1605:;
    org$pandalanguage$pandac$ASTNode* $tmp1613 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1613->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1613->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1615, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1613, ((panda$core$Int64) { 152 }), $tmp1615, ((panda$collections$ListView*) entries1601));
    return $tmp1613;
}

