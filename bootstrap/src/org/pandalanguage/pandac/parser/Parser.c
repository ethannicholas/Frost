#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/Array.h"
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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef void (*$fn69)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn112)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn120)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn125)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn133)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn137)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn142)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn144)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn146)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn150)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn152)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn158)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn183)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn186)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn199)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn201)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn225)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn230)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn235)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn254)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn281)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn285)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn289)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn293)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn299)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn302)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn308)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn320)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn321)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn324)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn327)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn330)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn335)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn343)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn345)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn348)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn352)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn355)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn357)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn362)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn367)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn368)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn372)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn377)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn381)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn385)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn388)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn394)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn398)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn399)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn404)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn406)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn409)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn411)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn413)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn416)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn418)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn423)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn424)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn432)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn437)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn442)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn445)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn449)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn451)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn454)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn462)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn465)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn470)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn473)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn481)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn488)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn495)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn496)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn503)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn505)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn508)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn510)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn512)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn515)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn517)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn521)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn523)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn527)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn528)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn530)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn535)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn538)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn546)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn549)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn556)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn557)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn560)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn565)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn568)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn576)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn580)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn587)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn588)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn589)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn591)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn596)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn599)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn606)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn608)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn613)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn616)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn619)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn631)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn637)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn639)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn651)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn653)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn658)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn661)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn668)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn670)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn675)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn678)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn685)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn687)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn692)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn695)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn704)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn707)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn713)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn715)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn717)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn721)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn724)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn729)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn731)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn735)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn737)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn741)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn748)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn752)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn756)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn759)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn762)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn765)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn768)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn777)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn780)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn783)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn792)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn795)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn798)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn801)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn810)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn813)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn822)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn825)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn830)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn833)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn839)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn845)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn849)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn851)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn859)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn863)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn866)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn869)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn875)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn881)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn884)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn889)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn892)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn895)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn898)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn905)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn908)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn911)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn915)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn918)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn924)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn926)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn932)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn939)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn941)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn943)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn946)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn949)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn956)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn959)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn962)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn969)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn972)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn974)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn977)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn988)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn990)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn993)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn995)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn998)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1001)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1003)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1008)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1012)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1017)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1021)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1024)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1030)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1033)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1040)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1042)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1045)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1049)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1051)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1054)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1060)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1063)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1067)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1073)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1076)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1080)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1086)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1088)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1096)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1100)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1102)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1104)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1106)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1108)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1110)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1112)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1116)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1119)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1120)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1122)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1124)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1126)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1128)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1130)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1132)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1134)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1136)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1139)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1141)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1143)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1145)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1147)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1148)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1150)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1152)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1154)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1157)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1160)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1164)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1169)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1173)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1177)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1179)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1186)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1190)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1195)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1199)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1203)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1205)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1212)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1216)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1224)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1227)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1231)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1235)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1238)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1240)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1243)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1247)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1250)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1256)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1262)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1266)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1268)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1278)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1282)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1289)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1297)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1302)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1303)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1310)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1313)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1320)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1324)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1329)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1332)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1336)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1338)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1341)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1347)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1350)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1353)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1359)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1361)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1365)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1370)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1374)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1380)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1383)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1397)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1406)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1412)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1415)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1418)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1421)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1435)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1443)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1451)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1455)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1461)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1463)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1465)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1467)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1469)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1471)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1473)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1476)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1482)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1486)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1488)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1492)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1497)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1501)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1507)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1514)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1517)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1523)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1530)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1534)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1536)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1540)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1548)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1551)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1555)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1557)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1562)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1569)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1572)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1578)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1580)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1582)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1584)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1586)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1588)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1595)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1599)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 211, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 215, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 114, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 217, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 193, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 193, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 145324394, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 145273490, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1483905450613, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 149654778879696, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, -2376482472870228684, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1434239, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 8609604847663634804, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp1);
    self->lexer = $tmp1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp3 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp3->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->commaSeparatedExpressionContext = $tmp5;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp7->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    self->speculativeBuffer = $tmp7;
    self->errors = p_errors;
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    self->path = p_path;
    self->source = p_source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx11;
    org$pandalanguage$pandac$parser$Token result14;
    org$pandalanguage$pandac$parser$Token result16;
    panda$core$Int64 $tmp9 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp9, ((panda$core$Int64) { 0 }));
    if ($tmp10.value) {
    {
        panda$core$Int64 $tmp12 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp12, ((panda$core$Int64) { 1 }));
        idx11 = $tmp13;
        org$pandalanguage$pandac$parser$Token $tmp15 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx11);
        result14 = $tmp15;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx11);
        return result14;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp17 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result16 = $tmp17;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result16);
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
                            panda$core$String* $tmp29 = (($fn28) self->$class->vtable[13])(self, next25);
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp39 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp39, ((panda$core$Int64) { 0 }));
    if ($tmp40.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp42 = (($fn41) self->$class->vtable[4])(self);
        (($fn43) self->$class->vtable[5])(self, $tmp42);
    }
    }
    panda$core$Int64 $tmp44 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp45 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp44, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp45);
    return $tmp46;
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
    panda$core$String* $tmp61 = (($fn60) self->$class->vtable[13])(self, result52);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, $tmp61);
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
    (($fn65) self->$class->vtable[9])(self, result52, $tmp64);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp66.value) {
    {
        ITable* $tmp67 = self->errors->$class->itable;
        while ($tmp67->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp67 = $tmp67->next;
        }
        $fn69 $tmp68 = $tmp67->methods[0];
        $tmp68(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp70.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp71;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp72 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp71, $tmp73, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp75 = $tmp71.start.value;
    panda$core$Int64 i74 = { $tmp75 };
    int64_t $tmp77 = $tmp71.end.value;
    int64_t $tmp78 = $tmp71.step.value;
    bool $tmp79 = $tmp71.inclusive.value;
    bool $tmp86 = $tmp78 > 0;
    if ($tmp86) goto $l84; else goto $l85;
    $l84:;
    if ($tmp79) goto $l87; else goto $l88;
    $l87:;
    if ($tmp75 <= $tmp77) goto $l80; else goto $l82;
    $l88:;
    if ($tmp75 < $tmp77) goto $l80; else goto $l82;
    $l85:;
    if ($tmp79) goto $l89; else goto $l90;
    $l89:;
    if ($tmp75 >= $tmp77) goto $l80; else goto $l82;
    $l90:;
    if ($tmp75 > $tmp77) goto $l80; else goto $l82;
    $l80:;
    {
        org$pandalanguage$pandac$parser$Token $tmp92 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i74);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp92);
    }
    $l83:;
    if ($tmp86) goto $l94; else goto $l95;
    $l94:;
    int64_t $tmp96 = $tmp77 - i74.value;
    if ($tmp79) goto $l97; else goto $l98;
    $l97:;
    if ($tmp96 >= $tmp78) goto $l93; else goto $l82;
    $l98:;
    if ($tmp96 > $tmp78) goto $l93; else goto $l82;
    $l95:;
    int64_t $tmp100 = i74.value - $tmp77;
    if ($tmp79) goto $l101; else goto $l102;
    $l101:;
    if ($tmp100 >= -$tmp78) goto $l93; else goto $l82;
    $l102:;
    if ($tmp100 > -$tmp78) goto $l93; else goto $l82;
    $l93:;
    i74.value += $tmp78;
    goto $l80;
    $l82:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp104;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp104, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp105 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp104);
    return $tmp105;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children106;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp107 = (panda$collections$Array*) malloc(40);
    $tmp107->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp107->refCount.value = 1;
    panda$collections$Array$init($tmp107);
    children106 = $tmp107;
    panda$collections$Array$add$panda$collections$Array$T(children106, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children106, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp109 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp109->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp109, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children106));
    return $tmp109;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start111;
    org$pandalanguage$pandac$ASTNode* result126;
    panda$core$MutableString* chunk127;
    org$pandalanguage$pandac$parser$Token token132;
    panda$core$String* str136;
    org$pandalanguage$pandac$parser$Token escape145;
    panda$core$String* escapeText151;
    panda$core$Char8 c154;
    panda$core$String* $match$184_21160;
    org$pandalanguage$pandac$ASTNode* expr182;
    panda$core$String* text188;
    panda$collections$Array* dotChildren203;
    org$pandalanguage$pandac$ASTNode* dot206;
    panda$collections$Array* callChildren210;
    org$pandalanguage$pandac$ASTNode* call213;
    panda$collections$Array* castChildren216;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp226;
    org$pandalanguage$pandac$parser$Token $tmp113 = (($fn112) self->$class->vtable[4])(self);
    start111 = $tmp113;
    panda$core$Bit $tmp115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start111.kind, ((panda$core$Int64) { 7 }));
    bool $tmp114 = $tmp115.value;
    if (!$tmp114) goto $l116;
    panda$core$Bit $tmp117 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start111.kind, ((panda$core$Int64) { 6 }));
    $tmp114 = $tmp117.value;
    $l116:;
    panda$core$Bit $tmp118 = { $tmp114 };
    if ($tmp118.value) {
    {
        panda$core$String* $tmp121 = (($fn120) self->$class->vtable[13])(self, start111);
        panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s119, $tmp121);
        panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
        (($fn125) self->$class->vtable[9])(self, start111, $tmp124);
        return NULL;
    }
    }
    result126 = NULL;
    panda$core$MutableString* $tmp128 = (panda$core$MutableString*) malloc(48);
    $tmp128->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp128->refCount.value = 1;
    panda$core$MutableString$init($tmp128);
    chunk127 = $tmp128;
    $l130:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp134 = (($fn133) self->$class->vtable[3])(self);
        token132 = $tmp134;
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token132.kind, start111.kind);
        if ($tmp135.value) {
        {
            goto $l131;
        }
        }
        switch (token132.kind.value) {
            case 12:
            {
                panda$core$String* $tmp138 = (($fn137) self->$class->vtable[13])(self, token132);
                str136 = $tmp138;
                panda$core$Bit $tmp140 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str136, &$s139);
                if ($tmp140.value) {
                {
                    (($fn142) self->$class->vtable[9])(self, start111, &$s141);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk127, str136);
            }
            break;
            case 0:
            {
                (($fn144) self->$class->vtable[9])(self, start111, &$s143);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp147 = (($fn146) self->$class->vtable[3])(self);
                escape145 = $tmp147;
                panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape145.kind, ((panda$core$Int64) { 0 }));
                if ($tmp148.value) {
                {
                    (($fn150) self->$class->vtable[9])(self, start111, &$s149);
                    return NULL;
                }
                }
                panda$core$String* $tmp153 = (($fn152) self->$class->vtable[13])(self, escape145);
                escapeText151 = $tmp153;
                panda$collections$ListView* $tmp155 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText151);
                ITable* $tmp156 = $tmp155->$class->itable;
                while ($tmp156->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp156 = $tmp156->next;
                }
                $fn158 $tmp157 = $tmp156->methods[0];
                panda$core$Object* $tmp159 = $tmp157($tmp155, ((panda$core$Int64) { 0 }));
                c154 = ((panda$core$Char8$wrapper*) $tmp159)->value;
                {
                    panda$core$String* $tmp161 = panda$core$Char8$convert$R$panda$core$String(c154);
                    $match$184_21160 = $tmp161;
                    panda$core$Bit $tmp163 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s162);
                    if ($tmp163.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s164);
                    }
                    }
                    else {
                    panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s165);
                    if ($tmp166.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s167);
                    }
                    }
                    else {
                    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s168);
                    if ($tmp169.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s170);
                    }
                    }
                    else {
                    panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s171);
                    if ($tmp172.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s173);
                    }
                    }
                    else {
                    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s174);
                    if ($tmp175.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s176);
                    }
                    }
                    else {
                    panda$core$Bit $tmp178 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s177);
                    if ($tmp178.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk127, &$s179);
                    }
                    }
                    else {
                    panda$core$Bit $tmp181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184_21160, &$s180);
                    if ($tmp181.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp184 = (($fn183) self->$class->vtable[29])(self);
                            expr182 = $tmp184;
                            if (((panda$core$Bit) { expr182 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp187 = (($fn186) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s185);
                            if (((panda$core$Bit) { !$tmp187.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$core$String* $tmp189 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
                            text188 = $tmp189;
                            panda$core$MutableString* $tmp190 = (panda$core$MutableString*) malloc(48);
                            $tmp190->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp190->refCount.value = 1;
                            panda$core$MutableString$init($tmp190);
                            chunk127 = $tmp190;
                            panda$core$Bit $tmp194 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text188, &$s193);
                            bool $tmp192 = $tmp194.value;
                            if ($tmp192) goto $l195;
                            $tmp192 = ((panda$core$Bit) { result126 != NULL }).value;
                            $l195:;
                            panda$core$Bit $tmp196 = { $tmp192 };
                            if ($tmp196.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp197 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp197->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp197->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp197, ((panda$core$Int64) { 113 }), start111.position, text188);
                                org$pandalanguage$pandac$ASTNode* $tmp200 = (($fn199) self->$class->vtable[14])(self, result126, $tmp197);
                                result126 = $tmp200;
                                org$pandalanguage$pandac$ASTNode* $tmp202 = (($fn201) self->$class->vtable[14])(self, result126, expr182);
                                result126 = $tmp202;
                            }
                            }
                            else {
                            {
                                panda$collections$Array* $tmp204 = (panda$collections$Array*) malloc(40);
                                $tmp204->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp204->refCount.value = 1;
                                panda$collections$Array$init($tmp204);
                                dotChildren203 = $tmp204;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren203, ((panda$core$Object*) expr182));
                                org$pandalanguage$pandac$ASTNode* $tmp207 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp207->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp207->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp207, ((panda$core$Int64) { 108 }), expr182->position, ((panda$core$Object*) &$s209), ((panda$collections$ListView*) dotChildren203));
                                dot206 = $tmp207;
                                panda$collections$Array* $tmp211 = (panda$collections$Array*) malloc(40);
                                $tmp211->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp211->refCount.value = 1;
                                panda$collections$Array$init($tmp211);
                                callChildren210 = $tmp211;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren210, ((panda$core$Object*) dot206));
                                org$pandalanguage$pandac$ASTNode* $tmp214 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp214->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp214->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp214, ((panda$core$Int64) { 107 }), expr182->position, ((panda$collections$ListView*) callChildren210));
                                call213 = $tmp214;
                                panda$collections$Array* $tmp217 = (panda$collections$Array*) malloc(40);
                                $tmp217->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp217->refCount.value = 1;
                                panda$collections$Array$init($tmp217);
                                castChildren216 = $tmp217;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren216, ((panda$core$Object*) call213));
                                org$pandalanguage$pandac$ASTNode* $tmp219 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp219->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp219->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp219, ((panda$core$Int64) { 109 }), expr182->position, &$s221);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren216, ((panda$core$Object*) $tmp219));
                                org$pandalanguage$pandac$ASTNode* $tmp222 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp222->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp222->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp222, ((panda$core$Int64) { 111 }), expr182->position, ((panda$collections$ListView*) castChildren216));
                                result126 = $tmp222;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        (($fn225) self->$class->vtable[9])(self, token132, &$s224);
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
                panda$core$String$Index $tmp227 = panda$core$String$start$R$panda$core$String$Index(escapeText151);
                panda$core$String$Index $tmp228 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText151, $tmp227);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp226, ((panda$core$String$Index$nullable) { $tmp228, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp229 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText151, $tmp226);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp229);
            }
            break;
            default:
            {
                panda$core$String* $tmp231 = (($fn230) self->$class->vtable[13])(self, token132);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp231);
            }
        }
    }
    }
    $l131:;
    org$pandalanguage$pandac$ASTNode* $tmp232 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp232->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp232->refCount.value = 1;
    panda$core$String* $tmp234 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp232, ((panda$core$Int64) { 113 }), start111.position, $tmp234);
    org$pandalanguage$pandac$ASTNode* $tmp236 = (($fn235) self->$class->vtable[14])(self, result126, $tmp232);
    return $tmp236;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result237;
    panda$collections$Iterator* c$Iter238;
    panda$core$Char8 c251;
    panda$core$UInt64 i257;
    result237 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp239 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp240 = ((panda$collections$Iterable*) $tmp239)->$class->itable;
        while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp240 = $tmp240->next;
        }
        $fn242 $tmp241 = $tmp240->methods[0];
        panda$collections$Iterator* $tmp243 = $tmp241(((panda$collections$Iterable*) $tmp239));
        c$Iter238 = $tmp243;
        $l244:;
        ITable* $tmp246 = c$Iter238->$class->itable;
        while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp246 = $tmp246->next;
        }
        $fn248 $tmp247 = $tmp246->methods[0];
        panda$core$Bit $tmp249 = $tmp247(c$Iter238);
        panda$core$Bit $tmp250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp249);
        if (!$tmp250.value) goto $l245;
        {
            ITable* $tmp252 = c$Iter238->$class->itable;
            while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp252 = $tmp252->next;
            }
            $fn254 $tmp253 = $tmp252->methods[1];
            panda$core$Object* $tmp255 = $tmp253(c$Iter238);
            c251 = ((panda$core$Char8$wrapper*) $tmp255)->value;
            panda$core$UInt64 $tmp256 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result237, p_base);
            result237 = $tmp256;
            panda$core$UInt64 $tmp258 = panda$core$Char8$convert$R$panda$core$UInt64(c251);
            i257 = $tmp258;
            panda$core$Bit $tmp260 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 48 }));
            bool $tmp259 = $tmp260.value;
            if (!$tmp259) goto $l261;
            panda$core$Bit $tmp262 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 57 }));
            $tmp259 = $tmp262.value;
            $l261:;
            panda$core$Bit $tmp263 = { $tmp259 };
            if ($tmp263.value) {
            {
                panda$core$UInt64 $tmp264 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i257, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp265 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result237, $tmp264);
                result237 = $tmp265;
            }
            }
            else {
            panda$core$Bit $tmp267 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 65 }));
            bool $tmp266 = $tmp267.value;
            if (!$tmp266) goto $l268;
            panda$core$Bit $tmp269 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 70 }));
            $tmp266 = $tmp269.value;
            $l268:;
            panda$core$Bit $tmp270 = { $tmp266 };
            if ($tmp270.value) {
            {
                panda$core$UInt64 $tmp271 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i257, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp272 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result237, $tmp271);
                result237 = $tmp272;
            }
            }
            else {
            {
                panda$core$Bit $tmp274 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 97 }));
                bool $tmp273 = $tmp274.value;
                if (!$tmp273) goto $l275;
                panda$core$Bit $tmp276 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i257, ((panda$core$UInt64) { 102 }));
                $tmp273 = $tmp276.value;
                $l275:;
                panda$core$Bit $tmp277 = { $tmp273 };
                PANDA_ASSERT($tmp277.value);
                panda$core$UInt64 $tmp278 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i257, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp279 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result237, $tmp278);
                result237 = $tmp279;
            }
            }
            }
        }
        goto $l244;
        $l245:;
    }
    return result237;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t280;
    panda$core$String* s292;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp297;
    panda$core$String* s301;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp306;
    org$pandalanguage$pandac$ASTNode* result323;
    org$pandalanguage$pandac$parser$Token $tmp282 = (($fn281) self->$class->vtable[4])(self);
    t280 = $tmp282;
    switch (t280.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp283 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp283->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp283->refCount.value = 1;
            panda$core$String* $tmp286 = (($fn285) self->$class->vtable[13])(self, t280);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp283, ((panda$core$Int64) { 106 }), t280.position, $tmp286);
            return $tmp283;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp287 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp287->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp287->refCount.value = 1;
            panda$core$String* $tmp290 = (($fn289) self->$class->vtable[13])(self, t280);
            panda$core$UInt64$nullable $tmp291 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp290);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp287, ((panda$core$Int64) { 102 }), t280.position, ((panda$core$UInt64) $tmp291.value));
            return $tmp287;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp294 = (($fn293) self->$class->vtable[13])(self, t280);
            s292 = $tmp294;
            org$pandalanguage$pandac$ASTNode* $tmp295 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp295->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp295->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp297, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp298 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s292, $tmp297);
            panda$core$UInt64 $tmp300 = (($fn299) self->$class->vtable[16])(self, $tmp298, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp295, ((panda$core$Int64) { 102 }), t280.position, $tmp300);
            return $tmp295;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp303 = (($fn302) self->$class->vtable[13])(self, t280);
            s301 = $tmp303;
            org$pandalanguage$pandac$ASTNode* $tmp304 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp304->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp304->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp306, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp307 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s301, $tmp306);
            panda$core$UInt64 $tmp309 = (($fn308) self->$class->vtable[16])(self, $tmp307, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp304, ((panda$core$Int64) { 102 }), t280.position, $tmp309);
            return $tmp304;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp310 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp310->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp310->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp310, ((panda$core$Int64) { 114 }), t280.position);
            return $tmp310;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp312 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp312->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp312->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp312, ((panda$core$Int64) { 115 }), t280.position);
            return $tmp312;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp314 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp314->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp314->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp314, ((panda$core$Int64) { 117 }), t280.position);
            return $tmp314;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp316 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp316->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp316->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp316, ((panda$core$Int64) { 116 }), t280.position, ((panda$core$Bit) { true }));
            return $tmp316;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp318 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp318->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp318->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp318, ((panda$core$Int64) { 116 }), t280.position, ((panda$core$Bit) { false }));
            return $tmp318;
        }
        break;
        case 7:
        case 6:
        {
            (($fn320) self->$class->vtable[5])(self, t280);
            org$pandalanguage$pandac$ASTNode* $tmp322 = (($fn321) self->$class->vtable[15])(self);
            return $tmp322;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp325 = (($fn324) self->$class->vtable[29])(self);
            result323 = $tmp325;
            if (((panda$core$Bit) { result323 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp328 = (($fn327) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s326);
            if (((panda$core$Bit) { !$tmp328.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result323;
        }
        break;
        default:
        {
            panda$core$String* $tmp331 = (($fn330) self->$class->vtable[13])(self, t280);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s329, $tmp331);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
            (($fn335) self->$class->vtable[9])(self, t280, $tmp334);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result336;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp338 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp337));
            result336 = $tmp338;
            if (((panda$core$Bit) { result336 != NULL }).value) {
            {
                panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s339, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result336, $tmp340);
                result336 = $tmp341;
            }
            }
            return result336;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name342;
    org$pandalanguage$pandac$parser$Token token347;
    org$pandalanguage$pandac$parser$Token $tmp344 = (($fn343) self->$class->vtable[4])(self);
    name342 = $tmp344;
    switch (name342.kind.value) {
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
            panda$core$String* $tmp346 = (($fn345) self->$class->vtable[13])(self, name342);
            return $tmp346;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp349 = (($fn348) self->$class->vtable[3])(self);
            token347 = $tmp349;
            panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token347.kind, ((panda$core$Int64) { 63 }));
            if ($tmp350.value) {
            {
                return &$s351;
            }
            }
            else {
            {
                (($fn352) self->$class->vtable[5])(self, token347);
                return &$s353;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp356 = (($fn355) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s354);
            if (((panda$core$Bit) { !$tmp356.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp358 = (($fn357) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp358.nonnull }).value) {
            {
                return &$s359;
            }
            }
            return &$s360;
        }
        break;
        default:
        {
            panda$core$String* $tmp363 = (($fn362) self->$class->vtable[13])(self, name342);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, $tmp363);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            (($fn367) self->$class->vtable[9])(self, name342, $tmp366);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp369 = (($fn368) self->$class->vtable[20])(self, ((panda$core$Bit) { true }));
    return $tmp369;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start370;
    panda$core$MutableString* name374;
    org$pandalanguage$pandac$parser$Token$nullable id383;
    org$pandalanguage$pandac$ASTNode* result390;
    panda$collections$Array* children400;
    org$pandalanguage$pandac$ASTNode* t403;
    panda$collections$Array* children426;
    org$pandalanguage$pandac$parser$Token$nullable $tmp373 = (($fn372) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s371);
    start370 = $tmp373;
    if (((panda$core$Bit) { !start370.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp375 = (panda$core$MutableString*) malloc(48);
    $tmp375->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp375->refCount.value = 1;
    panda$core$String* $tmp378 = (($fn377) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start370.value));
    panda$core$MutableString$init$panda$core$String($tmp375, $tmp378);
    name374 = $tmp375;
    $l379:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp382 = (($fn381) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp382.nonnull }).value) goto $l380;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp386 = (($fn385) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s384);
        id383 = $tmp386;
        if (((panda$core$Bit) { !id383.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name374, &$s387);
        panda$core$String* $tmp389 = (($fn388) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id383.value));
        panda$core$MutableString$append$panda$core$String(name374, $tmp389);
    }
    goto $l379;
    $l380:;
    org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp391->refCount.value = 1;
    panda$core$String* $tmp393 = panda$core$MutableString$convert$R$panda$core$String(name374);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp391, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start370.value).position, $tmp393);
    result390 = $tmp391;
    org$pandalanguage$pandac$parser$Token $tmp395 = (($fn394) self->$class->vtable[6])(self);
    panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp395.kind, ((panda$core$Int64) { 62 }));
    if ($tmp396.value) {
    {
        panda$core$MutableString$append$panda$core$String(name374, &$s397);
        if (p_needSpeculativeParse.value) {
        {
            (($fn398) self->$class->vtable[10])(self);
        }
        }
        (($fn399) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp401 = (panda$collections$Array*) malloc(40);
        $tmp401->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp401->refCount.value = 1;
        panda$collections$Array$init($tmp401);
        children400 = $tmp401;
        panda$collections$Array$add$panda$collections$Array$T(children400, ((panda$core$Object*) result390));
        org$pandalanguage$pandac$ASTNode* $tmp405 = (($fn404) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
        t403 = $tmp405;
        if (((panda$core$Bit) { t403 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn406) self->$class->vtable[12])(self);
                return result390;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children400, ((panda$core$Object*) t403));
        panda$core$MutableString$append$panda$core$Object(name374, ((panda$core$Object*) t403));
        $l407:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp410 = (($fn409) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp410.nonnull }).value) goto $l408;
        {
            org$pandalanguage$pandac$ASTNode* $tmp412 = (($fn411) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
            t403 = $tmp412;
            if (((panda$core$Bit) { t403 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn413) self->$class->vtable[12])(self);
                    return result390;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children400, ((panda$core$Object*) t403));
            panda$core$MutableString$append$panda$core$String(name374, &$s414);
            panda$core$MutableString$append$panda$core$Object(name374, ((panda$core$Object*) t403));
        }
        goto $l407;
        $l408:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp417 = (($fn416) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s415);
        if (((panda$core$Bit) { !$tmp417.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn418) self->$class->vtable[12])(self);
                return result390;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name374, &$s419);
        org$pandalanguage$pandac$ASTNode* $tmp420 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp420->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp420->refCount.value = 1;
        panda$core$String* $tmp422 = panda$core$MutableString$finish$R$panda$core$String(name374);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp420, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start370.value).position, ((panda$core$Object*) $tmp422), ((panda$collections$ListView*) children400));
        result390 = $tmp420;
        (($fn423) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp425 = (($fn424) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp425.nonnull }).value) {
    {
        panda$collections$Array* $tmp427 = (panda$collections$Array*) malloc(40);
        $tmp427->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp427->refCount.value = 1;
        panda$collections$Array$init($tmp427);
        children426 = $tmp427;
        panda$collections$Array$add$panda$collections$Array$T(children426, ((panda$core$Object*) result390));
        org$pandalanguage$pandac$ASTNode* $tmp429 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp429->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp429->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp429, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start370.value).position, ((panda$collections$ListView*) children426));
        result390 = $tmp429;
    }
    }
    return result390;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result431;
    org$pandalanguage$pandac$parser$Token token436;
    panda$collections$Array* children439;
    org$pandalanguage$pandac$ASTNode* expr444;
    panda$collections$Array* children458;
    org$pandalanguage$pandac$ASTNode* expr461;
    panda$core$String* name469;
    panda$collections$Array* children475;
    org$pandalanguage$pandac$ASTNode* target480;
    panda$collections$Array* children483;
    panda$core$String* name489;
    panda$core$MutableString* finalName491;
    panda$collections$Array* types497;
    org$pandalanguage$pandac$ASTNode* t502;
    panda$core$Bit shouldAccept519;
    org$pandalanguage$pandac$ASTNode* $tmp433 = (($fn432) self->$class->vtable[17])(self);
    result431 = $tmp433;
    if (((panda$core$Bit) { result431 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l434:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp438 = (($fn437) self->$class->vtable[4])(self);
        token436 = $tmp438;
        switch (token436.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp440 = (panda$collections$Array*) malloc(40);
                $tmp440->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp440->refCount.value = 1;
                panda$collections$Array$init($tmp440);
                children439 = $tmp440;
                panda$collections$Array$add$panda$collections$Array$T(children439, ((panda$core$Object*) result431));
                org$pandalanguage$pandac$parser$Token$nullable $tmp443 = (($fn442) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp443.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp446 = (($fn445) self->$class->vtable[29])(self);
                    expr444 = $tmp446;
                    if (((panda$core$Bit) { expr444 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children439, ((panda$core$Object*) expr444));
                    $l447:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp450 = (($fn449) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp450.nonnull }).value) goto $l448;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp452 = (($fn451) self->$class->vtable[29])(self);
                        expr444 = $tmp452;
                        if (((panda$core$Bit) { expr444 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children439, ((panda$core$Object*) expr444));
                    }
                    goto $l447;
                    $l448:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp455 = (($fn454) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s453);
                    if (((panda$core$Bit) { !$tmp455.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp456 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp456->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp456->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp456, ((panda$core$Int64) { 107 }), token436.position, ((panda$collections$ListView*) children439));
                result431 = $tmp456;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp459 = (panda$collections$Array*) malloc(40);
                $tmp459->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp459->refCount.value = 1;
                panda$collections$Array$init($tmp459);
                children458 = $tmp459;
                panda$collections$Array$add$panda$collections$Array$T(children458, ((panda$core$Object*) result431));
                org$pandalanguage$pandac$ASTNode* $tmp463 = (($fn462) self->$class->vtable[29])(self);
                expr461 = $tmp463;
                if (((panda$core$Bit) { expr461 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children458, ((panda$core$Object*) expr461));
                org$pandalanguage$pandac$parser$Token$nullable $tmp466 = (($fn465) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s464);
                if (((panda$core$Bit) { !$tmp466.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp467 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp467->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp467->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp467, ((panda$core$Int64) { 103 }), token436.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children458));
                result431 = $tmp467;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp471 = (($fn470) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp471.nonnull }).value) {
                {
                    name469 = &$s472;
                }
                }
                else {
                {
                    panda$core$String* $tmp474 = (($fn473) self->$class->vtable[18])(self);
                    name469 = $tmp474;
                    if (((panda$core$Bit) { name469 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp476 = (panda$collections$Array*) malloc(40);
                $tmp476->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp476->refCount.value = 1;
                panda$collections$Array$init($tmp476);
                children475 = $tmp476;
                panda$collections$Array$add$panda$collections$Array$T(children475, ((panda$core$Object*) result431));
                org$pandalanguage$pandac$ASTNode* $tmp478 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp478->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp478->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp478, ((panda$core$Int64) { 108 }), token436.position, ((panda$core$Object*) name469), ((panda$collections$ListView*) children475));
                result431 = $tmp478;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp482 = (($fn481) self->$class->vtable[19])(self);
                target480 = $tmp482;
                if (((panda$core$Bit) { target480 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp484 = (panda$collections$Array*) malloc(40);
                $tmp484->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp484->refCount.value = 1;
                panda$collections$Array$init($tmp484);
                children483 = $tmp484;
                panda$collections$Array$add$panda$collections$Array$T(children483, ((panda$core$Object*) result431));
                panda$collections$Array$add$panda$collections$Array$T(children483, ((panda$core$Object*) target480));
                org$pandalanguage$pandac$ASTNode* $tmp486 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp486->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp486->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp486, ((panda$core$Int64) { 111 }), token436.position, ((panda$collections$ListView*) children483));
                result431 = $tmp486;
            }
            break;
            case 62:
            {
                (($fn488) self->$class->vtable[5])(self, token436);
                panda$core$String* $tmp490 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result431);
                name489 = $tmp490;
                if (((panda$core$Bit) { name489 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp492 = (panda$core$MutableString*) malloc(48);
                    $tmp492->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp492->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp492, name489);
                    finalName491 = $tmp492;
                    panda$core$MutableString$append$panda$core$String(finalName491, &$s494);
                    (($fn495) self->$class->vtable[10])(self);
                    (($fn496) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp498 = (panda$collections$Array*) malloc(40);
                    $tmp498->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp498->refCount.value = 1;
                    panda$collections$Array$init($tmp498);
                    types497 = $tmp498;
                    org$pandalanguage$pandac$ASTNode* $tmp500 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp500->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp500->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp500, ((panda$core$Int64) { 109 }), result431->position, name489);
                    panda$collections$Array$add$panda$collections$Array$T(types497, ((panda$core$Object*) $tmp500));
                    org$pandalanguage$pandac$ASTNode* $tmp504 = (($fn503) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                    t502 = $tmp504;
                    if (((panda$core$Bit) { t502 == NULL }).value) {
                    {
                        (($fn505) self->$class->vtable[12])(self);
                        return result431;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types497, ((panda$core$Object*) t502));
                    panda$core$MutableString$append$panda$core$Object(finalName491, ((panda$core$Object*) t502));
                    $l506:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp509 = (($fn508) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp509.nonnull }).value) goto $l507;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp511 = (($fn510) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                        t502 = $tmp511;
                        if (((panda$core$Bit) { t502 == NULL }).value) {
                        {
                            (($fn512) self->$class->vtable[12])(self);
                            return result431;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types497, ((panda$core$Object*) t502));
                        panda$core$MutableString$append$panda$core$String(finalName491, &$s513);
                        panda$core$MutableString$append$panda$core$Object(finalName491, ((panda$core$Object*) t502));
                    }
                    goto $l506;
                    $l507:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp516 = (($fn515) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s514);
                    if (((panda$core$Bit) { !$tmp516.nonnull }).value) {
                    {
                        (($fn517) self->$class->vtable[12])(self);
                        return result431;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName491, &$s518);
                    panda$core$Object* $tmp520 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp520)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp522 = (($fn521) self->$class->vtable[6])(self);
                        switch ($tmp522.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept519 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept519 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept519 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept519.value) {
                    {
                        (($fn523) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp524 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp524->refCount.value = 1;
                        panda$core$String* $tmp526 = panda$core$MutableString$convert$R$panda$core$String(finalName491);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp524, ((panda$core$Int64) { 154 }), result431->position, ((panda$core$Object*) $tmp526), ((panda$collections$ListView*) types497));
                        result431 = $tmp524;
                        goto $l434;
                    }
                    }
                    else {
                    {
                        (($fn527) self->$class->vtable[12])(self);
                        return result431;
                    }
                    }
                }
                }
                return result431;
            }
            break;
            default:
            {
                (($fn528) self->$class->vtable[5])(self, token436);
                return result431;
            }
        }
    }
    }
    $l435:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result529;
    org$pandalanguage$pandac$parser$Token$nullable op534;
    org$pandalanguage$pandac$ASTNode* next537;
    panda$collections$Array* children540;
    org$pandalanguage$pandac$ASTNode* $tmp531 = (($fn530) self->$class->vtable[21])(self);
    result529 = $tmp531;
    if (((panda$core$Bit) { result529 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l532:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp536 = (($fn535) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op534 = $tmp536;
        if (((panda$core$Bit) { !op534.nonnull }).value) {
        {
            goto $l533;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp539 = (($fn538) self->$class->vtable[21])(self);
        next537 = $tmp539;
        if (((panda$core$Bit) { next537 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp541 = (panda$collections$Array*) malloc(40);
        $tmp541->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp541->refCount.value = 1;
        panda$collections$Array$init($tmp541);
        children540 = $tmp541;
        panda$collections$Array$add$panda$collections$Array$T(children540, ((panda$core$Object*) result529));
        panda$collections$Array$add$panda$collections$Array$T(children540, ((panda$core$Object*) next537));
        org$pandalanguage$pandac$ASTNode* $tmp543 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp543->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp543->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp543, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op534.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op534.value).kind)), ((panda$collections$ListView*) children540));
        result529 = $tmp543;
    }
    }
    $l533:;
    return result529;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op545;
    org$pandalanguage$pandac$ASTNode* base548;
    panda$collections$Array* children551;
    org$pandalanguage$pandac$parser$Token $tmp547 = (($fn546) self->$class->vtable[4])(self);
    op545 = $tmp547;
    switch (op545.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp550 = (($fn549) self->$class->vtable[22])(self);
            base548 = $tmp550;
            if (((panda$core$Bit) { base548 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp552 = (panda$collections$Array*) malloc(40);
            $tmp552->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp552->refCount.value = 1;
            panda$collections$Array$init($tmp552);
            children551 = $tmp552;
            panda$collections$Array$add$panda$collections$Array$T(children551, ((panda$core$Object*) base548));
            org$pandalanguage$pandac$ASTNode* $tmp554 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp554->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp554->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp554, ((panda$core$Int64) { 112 }), op545.position, ((panda$core$Object*) wrap_panda$core$Int64(op545.kind)), ((panda$collections$ListView*) children551));
            return $tmp554;
        }
        break;
        default:
        {
            (($fn556) self->$class->vtable[5])(self, op545);
            org$pandalanguage$pandac$ASTNode* $tmp558 = (($fn557) self->$class->vtable[22])(self);
            return $tmp558;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result559;
    org$pandalanguage$pandac$parser$Token op564;
    org$pandalanguage$pandac$ASTNode* next567;
    panda$collections$Array* children570;
    org$pandalanguage$pandac$parser$Token nextToken575;
    org$pandalanguage$pandac$ASTNode* next579;
    panda$collections$Array* children582;
    org$pandalanguage$pandac$ASTNode* $tmp561 = (($fn560) self->$class->vtable[23])(self);
    result559 = $tmp561;
    if (((panda$core$Bit) { result559 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l562:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp566 = (($fn565) self->$class->vtable[4])(self);
        op564 = $tmp566;
        switch (op564.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp569 = (($fn568) self->$class->vtable[23])(self);
                next567 = $tmp569;
                if (((panda$core$Bit) { next567 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp571 = (panda$collections$Array*) malloc(40);
                $tmp571->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp571->refCount.value = 1;
                panda$collections$Array$init($tmp571);
                children570 = $tmp571;
                panda$collections$Array$add$panda$collections$Array$T(children570, ((panda$core$Object*) result559));
                panda$collections$Array$add$panda$collections$Array$T(children570, ((panda$core$Object*) next567));
                org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp573->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp573->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp573, ((panda$core$Int64) { 103 }), op564.position, ((panda$core$Object*) wrap_panda$core$Int64(op564.kind)), ((panda$collections$ListView*) children570));
                result559 = $tmp573;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp577 = (($fn576) self->$class->vtable[3])(self);
                nextToken575 = $tmp577;
                panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken575.kind, ((panda$core$Int64) { 63 }));
                if ($tmp578.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp581 = (($fn580) self->$class->vtable[23])(self);
                    next579 = $tmp581;
                    if (((panda$core$Bit) { next579 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp583 = (panda$collections$Array*) malloc(40);
                    $tmp583->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp583->refCount.value = 1;
                    panda$collections$Array$init($tmp583);
                    children582 = $tmp583;
                    panda$collections$Array$add$panda$collections$Array$T(children582, ((panda$core$Object*) result559));
                    panda$collections$Array$add$panda$collections$Array$T(children582, ((panda$core$Object*) next579));
                    org$pandalanguage$pandac$ASTNode* $tmp585 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp585->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp585->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp585, ((panda$core$Int64) { 103 }), op564.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children582));
                    result559 = $tmp585;
                }
                }
                else {
                {
                    (($fn587) self->$class->vtable[5])(self, nextToken575);
                    (($fn588) self->$class->vtable[5])(self, op564);
                    return result559;
                }
                }
            }
            break;
            default:
            {
                (($fn589) self->$class->vtable[5])(self, op564);
                return result559;
            }
        }
    }
    }
    $l563:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result590;
    org$pandalanguage$pandac$parser$Token op595;
    org$pandalanguage$pandac$ASTNode* next598;
    panda$collections$Array* children601;
    org$pandalanguage$pandac$ASTNode* $tmp592 = (($fn591) self->$class->vtable[24])(self);
    result590 = $tmp592;
    if (((panda$core$Bit) { result590 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l593:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp597 = (($fn596) self->$class->vtable[4])(self);
        op595 = $tmp597;
        switch (op595.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp600 = (($fn599) self->$class->vtable[24])(self);
                next598 = $tmp600;
                if (((panda$core$Bit) { next598 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp602 = (panda$collections$Array*) malloc(40);
                $tmp602->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp602->refCount.value = 1;
                panda$collections$Array$init($tmp602);
                children601 = $tmp602;
                panda$collections$Array$add$panda$collections$Array$T(children601, ((panda$core$Object*) result590));
                panda$collections$Array$add$panda$collections$Array$T(children601, ((panda$core$Object*) next598));
                org$pandalanguage$pandac$ASTNode* $tmp604 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp604->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp604->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp604, ((panda$core$Int64) { 103 }), op595.position, ((panda$core$Object*) wrap_panda$core$Int64(op595.kind)), ((panda$collections$ListView*) children601));
                result590 = $tmp604;
            }
            break;
            default:
            {
                (($fn606) self->$class->vtable[5])(self, op595);
                return result590;
            }
        }
    }
    }
    $l594:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result607;
    org$pandalanguage$pandac$Position $tmp612;
    org$pandalanguage$pandac$parser$Token op615;
    org$pandalanguage$pandac$parser$Token next618;
    org$pandalanguage$pandac$ASTNode* right621;
    org$pandalanguage$pandac$Position $tmp635;
    org$pandalanguage$pandac$ASTNode* step636;
    org$pandalanguage$pandac$Position $tmp643;
    panda$collections$Array* children644;
    panda$core$Int64 kind647;
    org$pandalanguage$pandac$parser$Token $tmp609 = (($fn608) self->$class->vtable[6])(self);
    switch ($tmp609.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp610 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp610->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp610->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp612);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp610, ((panda$core$Int64) { 138 }), $tmp612);
            result607 = $tmp610;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp614 = (($fn613) self->$class->vtable[25])(self);
            result607 = $tmp614;
            if (((panda$core$Bit) { result607 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp617 = (($fn616) self->$class->vtable[4])(self);
    op615 = $tmp617;
    switch (op615.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp620 = (($fn619) self->$class->vtable[6])(self);
            next618 = $tmp620;
            panda$core$Bit $tmp624 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next618.kind, ((panda$core$Int64) { 102 }));
            bool $tmp623 = $tmp624.value;
            if (!$tmp623) goto $l625;
            panda$core$Bit $tmp626 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next618.kind, ((panda$core$Int64) { 104 }));
            $tmp623 = $tmp626.value;
            $l625:;
            panda$core$Bit $tmp627 = { $tmp623 };
            bool $tmp622 = $tmp627.value;
            if (!$tmp622) goto $l628;
            panda$core$Bit $tmp629 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next618.kind, ((panda$core$Int64) { 33 }));
            $tmp622 = $tmp629.value;
            $l628:;
            panda$core$Bit $tmp630 = { $tmp622 };
            if ($tmp630.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp632 = (($fn631) self->$class->vtable[25])(self);
                right621 = $tmp632;
                if (((panda$core$Bit) { right621 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp633 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp633->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp633->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp635);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp633, ((panda$core$Int64) { 138 }), $tmp635);
                right621 = $tmp633;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp638 = (($fn637) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp638.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp640 = (($fn639) self->$class->vtable[25])(self);
                step636 = $tmp640;
                if (((panda$core$Bit) { step636 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp641 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp641->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp641->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp643);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp641, ((panda$core$Int64) { 138 }), $tmp643);
                step636 = $tmp641;
            }
            }
            panda$collections$Array* $tmp645 = (panda$collections$Array*) malloc(40);
            $tmp645->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp645->refCount.value = 1;
            panda$collections$Array$init($tmp645);
            children644 = $tmp645;
            panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) result607));
            panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) right621));
            panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) step636));
            panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op615.kind, ((panda$core$Int64) { 97 }));
            if ($tmp648.value) {
            {
                kind647 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind647 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp649 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp649->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp649->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp649, kind647, op615.position, ((panda$collections$ListView*) children644));
            return $tmp649;
        }
        break;
        default:
        {
            (($fn651) self->$class->vtable[5])(self, op615);
            return result607;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result652;
    org$pandalanguage$pandac$parser$Token op657;
    org$pandalanguage$pandac$ASTNode* next660;
    panda$collections$Array* children663;
    org$pandalanguage$pandac$ASTNode* $tmp654 = (($fn653) self->$class->vtable[26])(self);
    result652 = $tmp654;
    if (((panda$core$Bit) { result652 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l655:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp659 = (($fn658) self->$class->vtable[4])(self);
        op657 = $tmp659;
        switch (op657.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp662 = (($fn661) self->$class->vtable[26])(self);
                next660 = $tmp662;
                if (((panda$core$Bit) { next660 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp664 = (panda$collections$Array*) malloc(40);
                $tmp664->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp664->refCount.value = 1;
                panda$collections$Array$init($tmp664);
                children663 = $tmp664;
                panda$collections$Array$add$panda$collections$Array$T(children663, ((panda$core$Object*) result652));
                panda$collections$Array$add$panda$collections$Array$T(children663, ((panda$core$Object*) next660));
                org$pandalanguage$pandac$ASTNode* $tmp666 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp666->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp666->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp666, ((panda$core$Int64) { 103 }), op657.position, ((panda$core$Object*) wrap_panda$core$Int64(op657.kind)), ((panda$collections$ListView*) children663));
                result652 = $tmp666;
            }
            break;
            default:
            {
                (($fn668) self->$class->vtable[5])(self, op657);
                return result652;
            }
        }
    }
    }
    $l656:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result669;
    org$pandalanguage$pandac$parser$Token op674;
    org$pandalanguage$pandac$ASTNode* next677;
    panda$collections$Array* children680;
    org$pandalanguage$pandac$ASTNode* $tmp671 = (($fn670) self->$class->vtable[27])(self);
    result669 = $tmp671;
    if (((panda$core$Bit) { result669 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l672:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp676 = (($fn675) self->$class->vtable[4])(self);
        op674 = $tmp676;
        switch (op674.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp679 = (($fn678) self->$class->vtable[27])(self);
                next677 = $tmp679;
                if (((panda$core$Bit) { next677 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp681 = (panda$collections$Array*) malloc(40);
                $tmp681->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp681->refCount.value = 1;
                panda$collections$Array$init($tmp681);
                children680 = $tmp681;
                panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) result669));
                panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) next677));
                org$pandalanguage$pandac$ASTNode* $tmp683 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp683->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp683->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp683, ((panda$core$Int64) { 103 }), op674.position, ((panda$core$Object*) wrap_panda$core$Int64(op674.kind)), ((panda$collections$ListView*) children680));
                result669 = $tmp683;
            }
            break;
            default:
            {
                (($fn685) self->$class->vtable[5])(self, op674);
                return result669;
            }
        }
    }
    }
    $l673:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result686;
    org$pandalanguage$pandac$parser$Token$nullable op691;
    org$pandalanguage$pandac$ASTNode* next694;
    panda$collections$Array* children697;
    org$pandalanguage$pandac$ASTNode* $tmp688 = (($fn687) self->$class->vtable[28])(self);
    result686 = $tmp688;
    if (((panda$core$Bit) { result686 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l689:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp693 = (($fn692) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op691 = $tmp693;
        if (((panda$core$Bit) { !op691.nonnull }).value) {
        {
            goto $l690;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp696 = (($fn695) self->$class->vtable[28])(self);
        next694 = $tmp696;
        if (((panda$core$Bit) { next694 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp698 = (panda$collections$Array*) malloc(40);
        $tmp698->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp698->refCount.value = 1;
        panda$collections$Array$init($tmp698);
        children697 = $tmp698;
        panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) result686));
        panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) next694));
        org$pandalanguage$pandac$ASTNode* $tmp700 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp700->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp700->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp700, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op691.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op691.value).kind)), ((panda$collections$ListView*) children697));
        result686 = $tmp700;
    }
    }
    $l690:;
    return result686;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start702;
    org$pandalanguage$pandac$ASTNode* test706;
    panda$collections$Array* children709;
    org$pandalanguage$pandac$ASTNode* ifTrue712;
    org$pandalanguage$pandac$ASTNode* ifFalse720;
    org$pandalanguage$pandac$ASTNode* ifFalse723;
    org$pandalanguage$pandac$parser$Token$nullable $tmp705 = (($fn704) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s703);
    start702 = $tmp705;
    if (((panda$core$Bit) { !start702.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp708 = (($fn707) self->$class->vtable[29])(self);
    test706 = $tmp708;
    if (((panda$core$Bit) { test706 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp710 = (panda$collections$Array*) malloc(40);
    $tmp710->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp710->refCount.value = 1;
    panda$collections$Array$init($tmp710);
    children709 = $tmp710;
    panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) test706));
    org$pandalanguage$pandac$ASTNode* $tmp714 = (($fn713) self->$class->vtable[40])(self);
    ifTrue712 = $tmp714;
    if (((panda$core$Bit) { ifTrue712 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) ifTrue712));
    org$pandalanguage$pandac$parser$Token$nullable $tmp716 = (($fn715) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp716.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp718 = (($fn717) self->$class->vtable[6])(self);
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp718.kind, ((panda$core$Int64) { 36 }));
        if ($tmp719.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp722 = (($fn721) self->$class->vtable[30])(self);
            ifFalse720 = $tmp722;
            if (((panda$core$Bit) { ifFalse720 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) ifFalse720));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp725 = (($fn724) self->$class->vtable[40])(self);
            ifFalse723 = $tmp725;
            if (((panda$core$Bit) { ifFalse723 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) ifFalse723));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp726 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp726->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp726->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp726, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start702.value).position, ((panda$collections$ListView*) children709));
    return $tmp726;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp730 = (($fn729) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s728);
    if (((panda$core$Bit) { !$tmp730.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp732 = (($fn731) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
    return $tmp732;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id733;
    org$pandalanguage$pandac$ASTNode* type740;
    panda$collections$Array* children743;
    org$pandalanguage$pandac$parser$Token$nullable $tmp736 = (($fn735) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s734);
    id733 = $tmp736;
    if (((panda$core$Bit) { !id733.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp738 = (($fn737) self->$class->vtable[6])(self);
    panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp738.kind, ((panda$core$Int64) { 95 }));
    if ($tmp739.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp742 = (($fn741) self->$class->vtable[31])(self);
        type740 = $tmp742;
        if (((panda$core$Bit) { type740 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp744 = (panda$collections$Array*) malloc(40);
        $tmp744->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp744->refCount.value = 1;
        panda$collections$Array$init($tmp744);
        children743 = $tmp744;
        panda$collections$Array$add$panda$collections$Array$T(children743, ((panda$core$Object*) type740));
        org$pandalanguage$pandac$ASTNode* $tmp746 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp746->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp746->refCount.value = 1;
        panda$core$String* $tmp749 = (($fn748) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id733.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp746, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id733.value).position, ((panda$core$Object*) $tmp749), ((panda$collections$ListView*) children743));
        return $tmp746;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp750 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp750->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp750->refCount.value = 1;
    panda$core$String* $tmp753 = (($fn752) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id733.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp750, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id733.value).position, $tmp753);
    return $tmp750;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start754;
    org$pandalanguage$pandac$ASTNode* t758;
    org$pandalanguage$pandac$ASTNode* list764;
    org$pandalanguage$pandac$ASTNode* block767;
    panda$collections$Array* children770;
    org$pandalanguage$pandac$parser$Token$nullable $tmp757 = (($fn756) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s755);
    start754 = $tmp757;
    if (((panda$core$Bit) { !start754.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp760 = (($fn759) self->$class->vtable[32])(self);
    t758 = $tmp760;
    if (((panda$core$Bit) { t758 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp763 = (($fn762) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s761);
    if (((panda$core$Bit) { !$tmp763.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp766 = (($fn765) self->$class->vtable[29])(self);
    list764 = $tmp766;
    if (((panda$core$Bit) { list764 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp769 = (($fn768) self->$class->vtable[40])(self);
    block767 = $tmp769;
    if (((panda$core$Bit) { block767 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp771 = (panda$collections$Array*) malloc(40);
    $tmp771->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp771->refCount.value = 1;
    panda$collections$Array$init($tmp771);
    children770 = $tmp771;
    panda$collections$Array$add$panda$collections$Array$T(children770, ((panda$core$Object*) t758));
    panda$collections$Array$add$panda$collections$Array$T(children770, ((panda$core$Object*) list764));
    panda$collections$Array$add$panda$collections$Array$T(children770, ((panda$core$Object*) block767));
    org$pandalanguage$pandac$ASTNode* $tmp773 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp773->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp773->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp773, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start754.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children770));
    return $tmp773;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start775;
    org$pandalanguage$pandac$ASTNode* test779;
    org$pandalanguage$pandac$ASTNode* body782;
    panda$collections$Array* children785;
    org$pandalanguage$pandac$parser$Token$nullable $tmp778 = (($fn777) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s776);
    start775 = $tmp778;
    if (((panda$core$Bit) { !start775.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp781 = (($fn780) self->$class->vtable[29])(self);
    test779 = $tmp781;
    if (((panda$core$Bit) { test779 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp784 = (($fn783) self->$class->vtable[40])(self);
    body782 = $tmp784;
    if (((panda$core$Bit) { body782 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp786 = (panda$collections$Array*) malloc(40);
    $tmp786->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp786->refCount.value = 1;
    panda$collections$Array$init($tmp786);
    children785 = $tmp786;
    panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) test779));
    panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) body782));
    org$pandalanguage$pandac$ASTNode* $tmp788 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp788->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp788->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp788, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start775.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children785));
    return $tmp788;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start790;
    org$pandalanguage$pandac$ASTNode* body794;
    org$pandalanguage$pandac$ASTNode* test800;
    panda$collections$Array* children803;
    org$pandalanguage$pandac$parser$Token$nullable $tmp793 = (($fn792) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s791);
    start790 = $tmp793;
    if (((panda$core$Bit) { !start790.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp796 = (($fn795) self->$class->vtable[40])(self);
    body794 = $tmp796;
    if (((panda$core$Bit) { body794 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp799 = (($fn798) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s797);
    if (((panda$core$Bit) { !$tmp799.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp802 = (($fn801) self->$class->vtable[29])(self);
    test800 = $tmp802;
    if (((panda$core$Bit) { test800 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp804 = (panda$collections$Array*) malloc(40);
    $tmp804->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp804->refCount.value = 1;
    panda$collections$Array$init($tmp804);
    children803 = $tmp804;
    panda$collections$Array$add$panda$collections$Array$T(children803, ((panda$core$Object*) body794));
    panda$collections$Array$add$panda$collections$Array$T(children803, ((panda$core$Object*) test800));
    org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp806->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp806->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp806, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start790.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children803));
    return $tmp806;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start808;
    org$pandalanguage$pandac$ASTNode* body812;
    panda$collections$Array* children815;
    org$pandalanguage$pandac$parser$Token$nullable $tmp811 = (($fn810) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s809);
    start808 = $tmp811;
    if (((panda$core$Bit) { !start808.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp814 = (($fn813) self->$class->vtable[40])(self);
    body812 = $tmp814;
    if (((panda$core$Bit) { body812 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp816 = (panda$collections$Array*) malloc(40);
    $tmp816->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp816->refCount.value = 1;
    panda$collections$Array$init($tmp816);
    children815 = $tmp816;
    panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) body812));
    org$pandalanguage$pandac$ASTNode* $tmp818 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp818->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp818, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start808.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children815));
    return $tmp818;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start820;
    org$pandalanguage$pandac$ASTNode* expr824;
    panda$collections$Array* children827;
    org$pandalanguage$pandac$ASTNode* message832;
    org$pandalanguage$pandac$parser$Token$nullable $tmp823 = (($fn822) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s821);
    start820 = $tmp823;
    if (((panda$core$Bit) { !start820.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp826 = (($fn825) self->$class->vtable[29])(self);
    expr824 = $tmp826;
    if (((panda$core$Bit) { expr824 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp828 = (panda$collections$Array*) malloc(40);
    $tmp828->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp828->refCount.value = 1;
    panda$collections$Array$init($tmp828);
    children827 = $tmp828;
    panda$collections$Array$add$panda$collections$Array$T(children827, ((panda$core$Object*) expr824));
    org$pandalanguage$pandac$parser$Token$nullable $tmp831 = (($fn830) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp831.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp834 = (($fn833) self->$class->vtable[29])(self);
        message832 = $tmp834;
        if (((panda$core$Bit) { message832 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children827, ((panda$core$Object*) message832));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp835 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp835->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp835->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp835, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start820.value).position, ((panda$collections$ListView*) children827));
    return $tmp835;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start837;
    panda$collections$Array* expressions841;
    org$pandalanguage$pandac$ASTNode* expr844;
    panda$collections$Array* children853;
    org$pandalanguage$pandac$ASTNode* stmt865;
    org$pandalanguage$pandac$ASTNode* stmt868;
    org$pandalanguage$pandac$parser$Token$nullable $tmp840 = (($fn839) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s838);
    start837 = $tmp840;
    if (((panda$core$Bit) { !start837.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp842 = (panda$collections$Array*) malloc(40);
    $tmp842->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp842->refCount.value = 1;
    panda$collections$Array$init($tmp842);
    expressions841 = $tmp842;
    org$pandalanguage$pandac$ASTNode* $tmp846 = (($fn845) self->$class->vtable[29])(self);
    expr844 = $tmp846;
    if (((panda$core$Bit) { expr844 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions841, ((panda$core$Object*) expr844));
    $l847:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp850 = (($fn849) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp850.nonnull }).value) goto $l848;
    {
        org$pandalanguage$pandac$ASTNode* $tmp852 = (($fn851) self->$class->vtable[29])(self);
        expr844 = $tmp852;
        if (((panda$core$Bit) { expr844 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions841, ((panda$core$Object*) expr844));
    }
    goto $l847;
    $l848:;
    panda$collections$Array* $tmp854 = (panda$collections$Array*) malloc(40);
    $tmp854->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp854->refCount.value = 1;
    panda$collections$Array$init($tmp854);
    children853 = $tmp854;
    org$pandalanguage$pandac$ASTNode* $tmp856 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp856->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp856->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp856, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start837.value).position, ((panda$collections$ListView*) expressions841));
    panda$collections$Array$add$panda$collections$Array$T(children853, ((panda$core$Object*) $tmp856));
    org$pandalanguage$pandac$parser$Token$nullable $tmp860 = (($fn859) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s858);
    if (((panda$core$Bit) { !$tmp860.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l861:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp864 = (($fn863) self->$class->vtable[6])(self);
        switch ($tmp864.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l862;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp867 = (($fn866) self->$class->vtable[48])(self);
                stmt865 = $tmp867;
                if (((panda$core$Bit) { stmt865 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children853, ((panda$core$Object*) stmt865));
                goto $l862;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp870 = (($fn869) self->$class->vtable[50])(self);
                    stmt868 = $tmp870;
                    if (((panda$core$Bit) { stmt868 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children853, ((panda$core$Object*) stmt868));
                }
            }
        }
    }
    }
    $l862:;
    org$pandalanguage$pandac$ASTNode* $tmp871 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp871->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp871->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp871, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start837.value).position, ((panda$collections$ListView*) children853));
    return $tmp871;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start873;
    panda$collections$Array* children877;
    org$pandalanguage$pandac$ASTNode* expr880;
    org$pandalanguage$pandac$parser$Token token888;
    org$pandalanguage$pandac$ASTNode* w891;
    org$pandalanguage$pandac$parser$Token o894;
    panda$collections$Array* statements900;
    org$pandalanguage$pandac$ASTNode* stmt907;
    org$pandalanguage$pandac$ASTNode* stmt910;
    org$pandalanguage$pandac$parser$Token$nullable $tmp876 = (($fn875) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s874);
    start873 = $tmp876;
    if (((panda$core$Bit) { !start873.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp878 = (panda$collections$Array*) malloc(40);
    $tmp878->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp878->refCount.value = 1;
    panda$collections$Array$init($tmp878);
    children877 = $tmp878;
    org$pandalanguage$pandac$ASTNode* $tmp882 = (($fn881) self->$class->vtable[29])(self);
    expr880 = $tmp882;
    if (((panda$core$Bit) { expr880 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) expr880));
    org$pandalanguage$pandac$parser$Token$nullable $tmp885 = (($fn884) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s883);
    if (((panda$core$Bit) { !$tmp885.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l886:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp890 = (($fn889) self->$class->vtable[6])(self);
        token888 = $tmp890;
        switch (token888.kind.value) {
            case 100:
            {
                goto $l887;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp893 = (($fn892) self->$class->vtable[38])(self);
                w891 = $tmp893;
                if (((panda$core$Bit) { w891 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) w891));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp896 = (($fn895) self->$class->vtable[4])(self);
                o894 = $tmp896;
                org$pandalanguage$pandac$parser$Token$nullable $tmp899 = (($fn898) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s897);
                if (((panda$core$Bit) { !$tmp899.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp901 = (panda$collections$Array*) malloc(40);
                $tmp901->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp901->refCount.value = 1;
                panda$collections$Array$init($tmp901);
                statements900 = $tmp901;
                $l903:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp906 = (($fn905) self->$class->vtable[6])(self);
                    switch ($tmp906.kind.value) {
                        case 100:
                        {
                            goto $l904;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp909 = (($fn908) self->$class->vtable[48])(self);
                            stmt907 = $tmp909;
                            if (((panda$core$Bit) { stmt907 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements900, ((panda$core$Object*) stmt907));
                            goto $l904;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp912 = (($fn911) self->$class->vtable[50])(self);
                            stmt910 = $tmp912;
                            if (((panda$core$Bit) { stmt910 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements900, ((panda$core$Object*) stmt910));
                        }
                    }
                }
                }
                $l904:;
                org$pandalanguage$pandac$ASTNode* $tmp913 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp913->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp913->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp913, ((panda$core$Int64) { 127 }), o894.position, ((panda$collections$ListView*) statements900));
                panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) $tmp913));
                goto $l887;
            }
            break;
            default:
            {
                (($fn915) self->$class->vtable[4])(self);
                panda$core$String* $tmp919 = (($fn918) self->$class->vtable[13])(self, token888);
                panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s917, $tmp919);
                panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, &$s921);
                panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s916, $tmp922);
                (($fn924) self->$class->vtable[9])(self, token888, $tmp923);
            }
        }
    }
    }
    $l887:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp927 = (($fn926) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s925);
    if (((panda$core$Bit) { !$tmp927.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp928 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp928->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp928->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp928, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start873.value).position, ((panda$collections$ListView*) children877));
    return $tmp928;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start930;
    panda$collections$Array* children934;
    org$pandalanguage$pandac$ASTNode* stmt942;
    org$pandalanguage$pandac$ASTNode* stmt948;
    org$pandalanguage$pandac$parser$Token$nullable $tmp933 = (($fn932) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s931);
    start930 = $tmp933;
    if (((panda$core$Bit) { !start930.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp935 = (panda$collections$Array*) malloc(40);
    $tmp935->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp935->refCount.value = 1;
    panda$collections$Array$init($tmp935);
    children934 = $tmp935;
    $l937:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp940 = (($fn939) self->$class->vtable[6])(self);
        switch ($tmp940.kind.value) {
            case 100:
            {
                (($fn941) self->$class->vtable[4])(self);
                goto $l938;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp944 = (($fn943) self->$class->vtable[48])(self);
                stmt942 = $tmp944;
                if (((panda$core$Bit) { stmt942 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp947 = (($fn946) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s945);
                if (((panda$core$Bit) { !$tmp947.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children934, ((panda$core$Object*) stmt942));
                goto $l938;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp950 = (($fn949) self->$class->vtable[50])(self);
                stmt948 = $tmp950;
                if (((panda$core$Bit) { stmt948 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children934, ((panda$core$Object*) stmt948));
            }
        }
    }
    }
    $l938:;
    org$pandalanguage$pandac$ASTNode* $tmp951 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp951->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp951->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp951, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start930.value).position, ((panda$collections$ListView*) children934));
    return $tmp951;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start953;
    org$pandalanguage$pandac$parser$Token op958;
    org$pandalanguage$pandac$ASTNode* rvalue961;
    panda$collections$Array* children964;
    org$pandalanguage$pandac$parser$Token op973;
    org$pandalanguage$pandac$ASTNode* rvalue976;
    panda$collections$Array* children979;
    org$pandalanguage$pandac$ASTNode* $tmp955 = (($fn954) self->$class->vtable[29])(self);
    start953 = $tmp955;
    if (((panda$core$Bit) { start953 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp957 = (($fn956) self->$class->vtable[6])(self);
    switch ($tmp957.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp960 = (($fn959) self->$class->vtable[4])(self);
            op958 = $tmp960;
            org$pandalanguage$pandac$ASTNode* $tmp963 = (($fn962) self->$class->vtable[29])(self);
            rvalue961 = $tmp963;
            if (((panda$core$Bit) { rvalue961 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp965 = (panda$collections$Array*) malloc(40);
            $tmp965->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp965->refCount.value = 1;
            panda$collections$Array$init($tmp965);
            children964 = $tmp965;
            panda$collections$Array$add$panda$collections$Array$T(children964, ((panda$core$Object*) start953));
            panda$collections$Array$add$panda$collections$Array$T(children964, ((panda$core$Object*) rvalue961));
            org$pandalanguage$pandac$ASTNode* $tmp967 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp967->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp967->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp967, ((panda$core$Int64) { 103 }), start953->position, ((panda$core$Object*) wrap_panda$core$Int64(op958.kind)), ((panda$collections$ListView*) children964));
            return $tmp967;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp970 = (($fn969) self->$class->vtable[6])(self);
            (($fn972) self->$class->vtable[9])(self, $tmp970, &$s971);
            org$pandalanguage$pandac$parser$Token $tmp975 = (($fn974) self->$class->vtable[4])(self);
            op973 = $tmp975;
            org$pandalanguage$pandac$ASTNode* $tmp978 = (($fn977) self->$class->vtable[29])(self);
            rvalue976 = $tmp978;
            if (((panda$core$Bit) { rvalue976 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp980 = (panda$collections$Array*) malloc(40);
            $tmp980->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp980->refCount.value = 1;
            panda$collections$Array$init($tmp980);
            children979 = $tmp980;
            panda$collections$Array$add$panda$collections$Array$T(children979, ((panda$core$Object*) start953));
            panda$collections$Array$add$panda$collections$Array$T(children979, ((panda$core$Object*) rvalue976));
            org$pandalanguage$pandac$ASTNode* $tmp982 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp982->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp982->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp982, ((panda$core$Int64) { 103 }), start953->position, ((panda$core$Object*) wrap_panda$core$Int64(op973.kind)), ((panda$collections$ListView*) children979));
            return $tmp982;
        }
        break;
        default:
        {
            return start953;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children984;
    org$pandalanguage$pandac$ASTNode* t987;
    org$pandalanguage$pandac$ASTNode* value992;
    org$pandalanguage$pandac$ASTNode* value1002;
    panda$collections$Array* $tmp985 = (panda$collections$Array*) malloc(40);
    $tmp985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp985->refCount.value = 1;
    panda$collections$Array$init($tmp985);
    children984 = $tmp985;
    org$pandalanguage$pandac$ASTNode* $tmp989 = (($fn988) self->$class->vtable[32])(self);
    t987 = $tmp989;
    if (((panda$core$Bit) { t987 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children984, ((panda$core$Object*) t987));
    org$pandalanguage$pandac$parser$Token$nullable $tmp991 = (($fn990) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp991.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp994 = (($fn993) self->$class->vtable[29])(self);
        value992 = $tmp994;
        if (((panda$core$Bit) { value992 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children984, ((panda$core$Object*) value992));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp996 = (($fn995) self->$class->vtable[6])(self);
    panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp996.kind, ((panda$core$Int64) { 58 }));
    if ($tmp997.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp999 = (($fn998) self->$class->vtable[4])(self);
        (($fn1001) self->$class->vtable[9])(self, $tmp999, &$s1000);
        org$pandalanguage$pandac$ASTNode* $tmp1004 = (($fn1003) self->$class->vtable[29])(self);
        value1002 = $tmp1004;
        if (((panda$core$Bit) { value1002 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children984, ((panda$core$Object*) value1002));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1005 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1005->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1005->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1005, ((panda$core$Int64) { 129 }), t987->position, ((panda$collections$ListView*) children984));
    return $tmp1005;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1007;
    panda$core$Int64 kind1010;
    panda$collections$Array* children1013;
    org$pandalanguage$pandac$ASTNode* child1016;
    org$pandalanguage$pandac$ASTNode* child1023;
    org$pandalanguage$pandac$parser$Token $tmp1009 = (($fn1008) self->$class->vtable[4])(self);
    start1007 = $tmp1009;
    switch (start1007.kind.value) {
        case 23:
        {
            kind1010 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1010 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1010 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1010 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1012) self->$class->vtable[9])(self, start1007, &$s1011);
        }
    }
    panda$collections$Array* $tmp1014 = (panda$collections$Array*) malloc(40);
    $tmp1014->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1014->refCount.value = 1;
    panda$collections$Array$init($tmp1014);
    children1013 = $tmp1014;
    org$pandalanguage$pandac$ASTNode* $tmp1018 = (($fn1017) self->$class->vtable[42])(self);
    child1016 = $tmp1018;
    if (((panda$core$Bit) { child1016 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1013, ((panda$core$Object*) child1016));
    $l1019:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1022 = (($fn1021) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1022.nonnull }).value) goto $l1020;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1025 = (($fn1024) self->$class->vtable[42])(self);
        child1023 = $tmp1025;
        if (((panda$core$Bit) { child1023 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1013, ((panda$core$Object*) child1023));
    }
    goto $l1019;
    $l1020:;
    org$pandalanguage$pandac$ASTNode* $tmp1026 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1026->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1026->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1026, kind1010, start1007.position, ((panda$collections$ListView*) children1013));
    return $tmp1026;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1028;
    panda$collections$Array* children1035;
    org$pandalanguage$pandac$ASTNode* expr1044;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1031 = (($fn1030) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1029);
    start1028 = $tmp1031;
    if (((panda$core$Bit) { !start1028.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1034 = (($fn1033) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1032);
    if (((panda$core$Bit) { !$tmp1034.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1036 = (panda$collections$Array*) malloc(40);
    $tmp1036->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1036->refCount.value = 1;
    panda$collections$Array$init($tmp1036);
    children1035 = $tmp1036;
    org$pandalanguage$pandac$ASTNode* $tmp1038 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1038->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1038->refCount.value = 1;
    panda$core$String* $tmp1041 = (($fn1040) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start1028.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1038, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1028.value).position, $tmp1041);
    panda$collections$Array$add$panda$collections$Array$T(children1035, ((panda$core$Object*) $tmp1038));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1043 = (($fn1042) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1043.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1046 = (($fn1045) self->$class->vtable[29])(self);
        expr1044 = $tmp1046;
        if (((panda$core$Bit) { expr1044 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1035, ((panda$core$Object*) expr1044));
        $l1047:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1050 = (($fn1049) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1050.nonnull }).value) goto $l1048;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1052 = (($fn1051) self->$class->vtable[29])(self);
            expr1044 = $tmp1052;
            if (((panda$core$Bit) { expr1044 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1035, ((panda$core$Object*) expr1044));
        }
        goto $l1047;
        $l1048:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = (($fn1054) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1053);
        if (((panda$core$Bit) { !$tmp1055.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1056 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1056->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1056->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1056, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1028.value).position, ((panda$collections$ListView*) children1035));
    return $tmp1056;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1058;
    org$pandalanguage$pandac$parser$Token$nullable label1062;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1061 = (($fn1060) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1059);
    start1058 = $tmp1061;
    if (((panda$core$Bit) { !start1058.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1064 = (($fn1063) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1062 = $tmp1064;
    if (((panda$core$Bit) { label1062.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1065 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1065->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1065->refCount.value = 1;
        panda$core$String* $tmp1068 = (($fn1067) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1062.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1065, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1058.value).position, $tmp1068);
        return $tmp1065;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1069 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1069->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1069->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1069, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1058.value).position);
    return $tmp1069;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1071;
    org$pandalanguage$pandac$parser$Token$nullable label1075;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1074 = (($fn1073) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1072);
    start1071 = $tmp1074;
    if (((panda$core$Bit) { !start1071.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1077 = (($fn1076) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1075 = $tmp1077;
    if (((panda$core$Bit) { label1075.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1078 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1078->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1078->refCount.value = 1;
        panda$core$String* $tmp1081 = (($fn1080) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1075.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1078, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1071.value).position, $tmp1081);
        return $tmp1078;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1082 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1082->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1082->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1082, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1071.value).position);
    return $tmp1082;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1084;
    panda$collections$Array* children1092;
    org$pandalanguage$pandac$ASTNode* expr1095;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = (($fn1086) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1085);
    start1084 = $tmp1087;
    if (((panda$core$Bit) { !start1084.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1089 = (($fn1088) self->$class->vtable[6])(self);
    switch ($tmp1089.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1090 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1090->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1090->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1090, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1084.value).position);
            return $tmp1090;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1093 = (panda$collections$Array*) malloc(40);
            $tmp1093->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1093->refCount.value = 1;
            panda$collections$Array$init($tmp1093);
            children1092 = $tmp1093;
            org$pandalanguage$pandac$ASTNode* $tmp1097 = (($fn1096) self->$class->vtable[29])(self);
            expr1095 = $tmp1097;
            if (((panda$core$Bit) { expr1095 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1092, ((panda$core$Object*) expr1095));
            org$pandalanguage$pandac$ASTNode* $tmp1098 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1098->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1098->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1098, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1084.value).position, ((panda$collections$ListView*) children1092));
            return $tmp1098;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1101 = (($fn1100) self->$class->vtable[6])(self);
    switch ($tmp1101.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1103 = (($fn1102) self->$class->vtable[45])(self);
            return $tmp1103;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1105 = (($fn1104) self->$class->vtable[46])(self);
            return $tmp1105;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1107 = (($fn1106) self->$class->vtable[47])(self);
            return $tmp1107;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1109 = (($fn1108) self->$class->vtable[6])(self);
    switch ($tmp1109.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1111 = (($fn1110) self->$class->vtable[35])(self, p_label);
            return $tmp1111;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1113 = (($fn1112) self->$class->vtable[33])(self, p_label);
            return $tmp1113;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1115 = (($fn1114) self->$class->vtable[36])(self, p_label);
            return $tmp1115;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1117 = (($fn1116) self->$class->vtable[34])(self, p_label);
            return $tmp1117;
        }
        break;
        default:
        {
            (($fn1119) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1118);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1138;
    org$pandalanguage$pandac$parser$Token $tmp1121 = (($fn1120) self->$class->vtable[6])(self);
    switch ($tmp1121.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1123 = (($fn1122) self->$class->vtable[30])(self);
            return $tmp1123;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1125 = (($fn1124) self->$class->vtable[33])(self, NULL);
            return $tmp1125;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (($fn1126) self->$class->vtable[34])(self, NULL);
            return $tmp1127;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1129 = (($fn1128) self->$class->vtable[35])(self, NULL);
            return $tmp1129;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1131 = (($fn1130) self->$class->vtable[36])(self, NULL);
            return $tmp1131;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1133 = (($fn1132) self->$class->vtable[37])(self);
            return $tmp1133;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1135 = (($fn1134) self->$class->vtable[39])(self);
            return $tmp1135;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1137 = (($fn1136) self->$class->vtable[40])(self);
            return $tmp1137;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1140 = (($fn1139) self->$class->vtable[4])(self);
            id1138 = $tmp1140;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1142 = (($fn1141) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1142.nonnull }).value) {
            {
                panda$core$String* $tmp1144 = (($fn1143) self->$class->vtable[13])(self, id1138);
                org$pandalanguage$pandac$ASTNode* $tmp1146 = (($fn1145) self->$class->vtable[49])(self, $tmp1144);
                return $tmp1146;
            }
            }
            (($fn1147) self->$class->vtable[5])(self, id1138);
            org$pandalanguage$pandac$ASTNode* $tmp1149 = (($fn1148) self->$class->vtable[41])(self);
            return $tmp1149;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1151 = (($fn1150) self->$class->vtable[41])(self);
            return $tmp1151;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1153 = (($fn1152) self->$class->vtable[43])(self);
            return $tmp1153;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1155 = (($fn1154) self->$class->vtable[44])(self);
            return $tmp1155;
        }
        break;
        default:
        {
            (($fn1157) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1156);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1158;
    org$pandalanguage$pandac$parser$Token$nullable next1162;
    panda$core$MutableString* name1166;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1161 = (($fn1160) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1159);
    start1158 = $tmp1161;
    if (((panda$core$Bit) { !start1158.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1165 = (($fn1164) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1163);
    next1162 = $tmp1165;
    if (((panda$core$Bit) { !next1162.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1167 = (panda$core$MutableString*) malloc(48);
    $tmp1167->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1167->refCount.value = 1;
    panda$core$String* $tmp1170 = (($fn1169) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1162.value));
    panda$core$MutableString$init$panda$core$String($tmp1167, $tmp1170);
    name1166 = $tmp1167;
    $l1171:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1174 = (($fn1173) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1162 = $tmp1174;
        if (((panda$core$Bit) { !next1162.nonnull }).value) {
        {
            goto $l1172;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1166, &$s1175);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1178 = (($fn1177) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1176);
        next1162 = $tmp1178;
        if (((panda$core$Bit) { !next1162.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1180 = (($fn1179) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1162.value));
        panda$core$MutableString$append$panda$core$String(name1166, $tmp1180);
    }
    }
    $l1172:;
    org$pandalanguage$pandac$ASTNode* $tmp1181 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1181->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1181->refCount.value = 1;
    panda$core$String* $tmp1183 = panda$core$MutableString$finish$R$panda$core$String(name1166);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1181, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1158.value).position, $tmp1183);
    return $tmp1181;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1184;
    org$pandalanguage$pandac$parser$Token$nullable next1188;
    panda$core$MutableString* name1192;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1187 = (($fn1186) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1185);
    start1184 = $tmp1187;
    if (((panda$core$Bit) { !start1184.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1191 = (($fn1190) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1189);
    next1188 = $tmp1191;
    if (((panda$core$Bit) { !next1188.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1193 = (panda$core$MutableString*) malloc(48);
    $tmp1193->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1193->refCount.value = 1;
    panda$core$String* $tmp1196 = (($fn1195) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1188.value));
    panda$core$MutableString$init$panda$core$String($tmp1193, $tmp1196);
    name1192 = $tmp1193;
    $l1197:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1200 = (($fn1199) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1188 = $tmp1200;
        if (((panda$core$Bit) { !next1188.nonnull }).value) {
        {
            goto $l1198;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1192, &$s1201);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1204 = (($fn1203) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1202);
        next1188 = $tmp1204;
        if (((panda$core$Bit) { !next1188.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1206 = (($fn1205) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1188.value));
        panda$core$MutableString$append$panda$core$String(name1192, $tmp1206);
    }
    }
    $l1198:;
    org$pandalanguage$pandac$ASTNode* $tmp1207 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1207->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1207->refCount.value = 1;
    panda$core$String* $tmp1209 = panda$core$MutableString$finish$R$panda$core$String(name1192);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1207, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1184.value).position, $tmp1209);
    return $tmp1207;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1210;
    org$pandalanguage$pandac$parser$Token$nullable id1214;
    panda$collections$Array* children1218;
    panda$collections$Array* idChildren1221;
    org$pandalanguage$pandac$ASTNode* t1226;
    org$pandalanguage$pandac$ASTNode* t1242;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1213 = (($fn1212) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1211);
    start1210 = $tmp1213;
    if (((panda$core$Bit) { !start1210.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1217 = (($fn1216) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1215);
    id1214 = $tmp1217;
    if (((panda$core$Bit) { !id1214.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1219 = (panda$collections$Array*) malloc(40);
    $tmp1219->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1219->refCount.value = 1;
    panda$collections$Array$init($tmp1219);
    children1218 = $tmp1219;
    panda$collections$Array* $tmp1222 = (panda$collections$Array*) malloc(40);
    $tmp1222->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1222->refCount.value = 1;
    panda$collections$Array$init($tmp1222);
    idChildren1221 = $tmp1222;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1225 = (($fn1224) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1225.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1228 = (($fn1227) self->$class->vtable[19])(self);
        t1226 = $tmp1228;
        if (((panda$core$Bit) { t1226 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1221, ((panda$core$Object*) t1226));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1229 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1229->refCount.value = 1;
    panda$core$String* $tmp1232 = (($fn1231) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1214.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1229, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1214.value).position, ((panda$core$Object*) $tmp1232), ((panda$collections$ListView*) idChildren1221));
    panda$collections$Array$add$panda$collections$Array$T(children1218, ((panda$core$Object*) $tmp1229));
    $l1233:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1236 = (($fn1235) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1236.nonnull }).value) goto $l1234;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1239 = (($fn1238) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1237);
        id1214 = $tmp1239;
        if (((panda$core$Bit) { !id1214.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1221);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1241 = (($fn1240) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1241.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1244 = (($fn1243) self->$class->vtable[19])(self);
            t1242 = $tmp1244;
            if (((panda$core$Bit) { t1242 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1221, ((panda$core$Object*) t1242));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1245 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1245->refCount.value = 1;
        panda$core$String* $tmp1248 = (($fn1247) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1214.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1245, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1214.value).position, ((panda$core$Object*) $tmp1248), ((panda$collections$ListView*) idChildren1221));
        panda$collections$Array$add$panda$collections$Array$T(children1218, ((panda$core$Object*) $tmp1245));
    }
    goto $l1233;
    $l1234:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1251 = (($fn1250) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1249);
    if (((panda$core$Bit) { !$tmp1251.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1252 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1252->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1252, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1210.value).position, ((panda$collections$ListView*) children1218));
    return $tmp1252;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1254;
    panda$collections$Array* children1258;
    org$pandalanguage$pandac$ASTNode* t1261;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1257 = (($fn1256) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1255);
    start1254 = $tmp1257;
    if (((panda$core$Bit) { !start1254.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1259 = (panda$collections$Array*) malloc(40);
    $tmp1259->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1259->refCount.value = 1;
    panda$collections$Array$init($tmp1259);
    children1258 = $tmp1259;
    org$pandalanguage$pandac$ASTNode* $tmp1263 = (($fn1262) self->$class->vtable[19])(self);
    t1261 = $tmp1263;
    if (((panda$core$Bit) { t1261 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1258, ((panda$core$Object*) t1261));
    $l1264:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1267 = (($fn1266) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1267.nonnull }).value) goto $l1265;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1269 = (($fn1268) self->$class->vtable[19])(self);
        t1261 = $tmp1269;
        if (((panda$core$Bit) { t1261 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1258, ((panda$core$Object*) t1261));
    }
    goto $l1264;
    $l1265:;
    org$pandalanguage$pandac$ASTNode* $tmp1270 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1270->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1270->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1270, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1254.value).position, ((panda$collections$ListView*) children1258));
    return $tmp1270;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1272;
    org$pandalanguage$pandac$parser$Token$nullable next1277;
    org$pandalanguage$pandac$Position $tmp1286;
    panda$collections$Array* $tmp1273 = (panda$collections$Array*) malloc(40);
    $tmp1273->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1273->refCount.value = 1;
    panda$collections$Array$init($tmp1273);
    children1272 = $tmp1273;
    $l1275:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1279 = (($fn1278) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1277 = $tmp1279;
        if (((panda$core$Bit) { !next1277.nonnull }).value) {
        {
            goto $l1276;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1280 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1280->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1280->refCount.value = 1;
        panda$core$String* $tmp1283 = (($fn1282) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1277.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1280, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1277.value).position, $tmp1283);
        panda$collections$Array$add$panda$collections$Array$T(children1272, ((panda$core$Object*) $tmp1280));
    }
    }
    $l1276:;
    org$pandalanguage$pandac$ASTNode* $tmp1284 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1284->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1284->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1286);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1284, ((panda$core$Int64) { 144 }), $tmp1286, ((panda$collections$ListView*) children1272));
    return $tmp1284;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1287;
    panda$core$MutableString* result1291;
    org$pandalanguage$pandac$parser$Token next1296;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1290 = (($fn1289) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1288);
    start1287 = $tmp1290;
    if (((panda$core$Bit) { !start1287.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1292 = (panda$core$MutableString*) malloc(48);
    $tmp1292->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1292->refCount.value = 1;
    panda$core$MutableString$init($tmp1292);
    result1291 = $tmp1292;
    $l1294:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1298 = (($fn1297) self->$class->vtable[3])(self);
        next1296 = $tmp1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1296.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1299.value) {
        {
            goto $l1295;
        }
        }
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1296.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1300.value) {
        {
            (($fn1302) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1287.value), &$s1301);
            return NULL;
        }
        }
        panda$core$String* $tmp1304 = (($fn1303) self->$class->vtable[13])(self, next1296);
        panda$core$MutableString$append$panda$core$String(result1291, $tmp1304);
    }
    }
    $l1295:;
    org$pandalanguage$pandac$ASTNode* $tmp1305 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1305->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1305->refCount.value = 1;
    panda$core$String* $tmp1307 = panda$core$MutableString$finish$R$panda$core$String(result1291);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1305, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1287.value).position, $tmp1307);
    return $tmp1305;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1308;
    org$pandalanguage$pandac$ASTNode* t1312;
    panda$collections$Array* children1315;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1311 = (($fn1310) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1309);
    id1308 = $tmp1311;
    if (((panda$core$Bit) { !id1308.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1314 = (($fn1313) self->$class->vtable[31])(self);
    t1312 = $tmp1314;
    if (((panda$core$Bit) { t1312 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1316 = (panda$collections$Array*) malloc(40);
    $tmp1316->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1316->refCount.value = 1;
    panda$collections$Array$init($tmp1316);
    children1315 = $tmp1316;
    panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) t1312));
    org$pandalanguage$pandac$ASTNode* $tmp1318 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1318->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1318->refCount.value = 1;
    panda$core$String* $tmp1321 = (($fn1320) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1308.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1318, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1308.value).position, ((panda$core$Object*) $tmp1321), ((panda$collections$ListView*) children1315));
    return $tmp1318;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1322;
    panda$collections$Array* children1326;
    org$pandalanguage$pandac$ASTNode* param1331;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1325 = (($fn1324) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1323);
    start1322 = $tmp1325;
    if (((panda$core$Bit) { !start1322.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1327 = (panda$collections$Array*) malloc(40);
    $tmp1327->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1327->refCount.value = 1;
    panda$collections$Array$init($tmp1327);
    children1326 = $tmp1327;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1330 = (($fn1329) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1330.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1333 = (($fn1332) self->$class->vtable[57])(self);
        param1331 = $tmp1333;
        if (((panda$core$Bit) { param1331 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) param1331));
        $l1334:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1337 = (($fn1336) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1337.nonnull }).value) goto $l1335;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1339 = (($fn1338) self->$class->vtable[57])(self);
            param1331 = $tmp1339;
            if (((panda$core$Bit) { param1331 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) param1331));
        }
        goto $l1334;
        $l1335:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1342 = (($fn1341) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1340);
        if (((panda$core$Bit) { !$tmp1342.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1343 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1343->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1343->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1343, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1322.value).position, ((panda$collections$ListView*) children1326));
    return $tmp1343;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1345;
    org$pandalanguage$pandac$parser$Token$nullable start1346;
    panda$core$String* name1352;
    panda$collections$Array* children1355;
    org$pandalanguage$pandac$ASTNode* params1358;
    org$pandalanguage$pandac$ASTNode* returnType1364;
    org$pandalanguage$pandac$Position $tmp1369;
    org$pandalanguage$pandac$ASTNode* b1373;
    org$pandalanguage$pandac$Position $tmp1378;
    org$pandalanguage$pandac$parser$Token token1379;
    panda$core$String* tokenText1382;
    org$pandalanguage$pandac$ASTNode* post1396;
    org$pandalanguage$pandac$Position $tmp1401;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1348 = (($fn1347) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1346 = $tmp1348;
    if (((panda$core$Bit) { !start1346.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1351 = (($fn1350) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1349);
        start1346 = $tmp1351;
        if (((panda$core$Bit) { !start1346.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1345 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1345 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1354 = (($fn1353) self->$class->vtable[18])(self);
    name1352 = $tmp1354;
    if (((panda$core$Bit) { name1352 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1356 = (panda$collections$Array*) malloc(40);
    $tmp1356->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1356->refCount.value = 1;
    panda$collections$Array$init($tmp1356);
    children1355 = $tmp1356;
    panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1360 = (($fn1359) self->$class->vtable[58])(self);
    params1358 = $tmp1360;
    if (((panda$core$Bit) { params1358 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) params1358));
    org$pandalanguage$pandac$parser$Token $tmp1362 = (($fn1361) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1362.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1363.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1366 = (($fn1365) self->$class->vtable[31])(self);
        returnType1364 = $tmp1366;
        if (((panda$core$Bit) { returnType1364 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) returnType1364));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1367 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1367->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1367->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1369);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1367, ((panda$core$Int64) { 138 }), $tmp1369);
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) $tmp1367));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1371 = (($fn1370) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1371.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1372.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = (($fn1374) self->$class->vtable[40])(self);
        b1373 = $tmp1375;
        if (((panda$core$Bit) { b1373 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) b1373));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1376 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1376->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1376->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1378);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1376, ((panda$core$Int64) { 138 }), $tmp1378);
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) $tmp1376));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1381 = (($fn1380) self->$class->vtable[6])(self);
    token1379 = $tmp1381;
    panda$core$String* $tmp1384 = (($fn1383) self->$class->vtable[13])(self, token1379);
    tokenText1382 = $tmp1384;
    panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1379.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1385 = $tmp1386.value;
    if (!$tmp1385) goto $l1387;
    panda$core$Bit $tmp1390 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1382, &$s1389);
    bool $tmp1388 = $tmp1390.value;
    if ($tmp1388) goto $l1391;
    panda$core$Bit $tmp1393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1382, &$s1392);
    $tmp1388 = $tmp1393.value;
    $l1391:;
    panda$core$Bit $tmp1394 = { $tmp1388 };
    $tmp1385 = $tmp1394.value;
    $l1387:;
    panda$core$Bit $tmp1395 = { $tmp1385 };
    if ($tmp1395.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1398 = (($fn1397) self->$class->vtable[59])(self);
        post1396 = $tmp1398;
        if (((panda$core$Bit) { post1396 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) post1396));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1399 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1399->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1399->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1401);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1399, ((panda$core$Int64) { 138 }), $tmp1401);
        panda$collections$Array$add$panda$collections$Array$T(children1355, ((panda$core$Object*) $tmp1399));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1402 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1402->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1402, kind1345, ((org$pandalanguage$pandac$parser$Token) start1346.value).position, ((panda$core$Object*) name1352), ((panda$collections$ListView*) children1355));
    return $tmp1402;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1404;
    panda$collections$Array* children1408;
    org$pandalanguage$pandac$ASTNode* params1411;
    org$pandalanguage$pandac$ASTNode* b1414;
    org$pandalanguage$pandac$parser$Token token1417;
    panda$core$String* tokenText1420;
    org$pandalanguage$pandac$ASTNode* post1434;
    org$pandalanguage$pandac$Position $tmp1439;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1407 = (($fn1406) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1405);
    start1404 = $tmp1407;
    if (((panda$core$Bit) { !start1404.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1409 = (panda$collections$Array*) malloc(40);
    $tmp1409->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1409->refCount.value = 1;
    panda$collections$Array$init($tmp1409);
    children1408 = $tmp1409;
    panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1413 = (($fn1412) self->$class->vtable[58])(self);
    params1411 = $tmp1413;
    if (((panda$core$Bit) { params1411 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) params1411));
    org$pandalanguage$pandac$ASTNode* $tmp1416 = (($fn1415) self->$class->vtable[40])(self);
    b1414 = $tmp1416;
    if (((panda$core$Bit) { b1414 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) b1414));
    org$pandalanguage$pandac$parser$Token $tmp1419 = (($fn1418) self->$class->vtable[6])(self);
    token1417 = $tmp1419;
    panda$core$String* $tmp1422 = (($fn1421) self->$class->vtable[13])(self, token1417);
    tokenText1420 = $tmp1422;
    panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1417.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1423 = $tmp1424.value;
    if (!$tmp1423) goto $l1425;
    panda$core$Bit $tmp1428 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1420, &$s1427);
    bool $tmp1426 = $tmp1428.value;
    if ($tmp1426) goto $l1429;
    panda$core$Bit $tmp1431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1420, &$s1430);
    $tmp1426 = $tmp1431.value;
    $l1429:;
    panda$core$Bit $tmp1432 = { $tmp1426 };
    $tmp1423 = $tmp1432.value;
    $l1425:;
    panda$core$Bit $tmp1433 = { $tmp1423 };
    if ($tmp1433.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1436 = (($fn1435) self->$class->vtable[59])(self);
        post1434 = $tmp1436;
        if (((panda$core$Bit) { post1434 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) post1434));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1437 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1437->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1437->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1439);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1437, ((panda$core$Int64) { 138 }), $tmp1439);
        panda$collections$Array$add$panda$collections$Array$T(children1408, ((panda$core$Object*) $tmp1437));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1440 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1440->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1440->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1440, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1404.value).position, ((panda$collections$ListView*) children1408));
    return $tmp1440;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1442;
    panda$collections$Array* children1445;
    org$pandalanguage$pandac$ASTNode* $tmp1444 = (($fn1443) self->$class->vtable[43])(self);
    decl1442 = $tmp1444;
    if (((panda$core$Bit) { decl1442 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1446 = (panda$collections$Array*) malloc(40);
    $tmp1446->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1446->refCount.value = 1;
    panda$collections$Array$init($tmp1446);
    children1445 = $tmp1446;
    panda$collections$Array$add$panda$collections$Array$T(children1445, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1445, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1445, ((panda$core$Object*) decl1442));
    org$pandalanguage$pandac$ASTNode* $tmp1448 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1448->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1448->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1448, ((panda$core$Int64) { 148 }), decl1442->position, ((panda$collections$ListView*) children1445));
    return $tmp1448;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1450;
    org$pandalanguage$pandac$ASTNode* dc1453;
    org$pandalanguage$pandac$Position $tmp1459;
    org$pandalanguage$pandac$ASTNode* a1460;
    org$pandalanguage$pandac$parser$Token $tmp1452 = (($fn1451) self->$class->vtable[6])(self);
    start1450 = $tmp1452;
    panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1450.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1454.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1456 = (($fn1455) self->$class->vtable[56])(self);
        dc1453 = $tmp1456;
        if (((panda$core$Bit) { dc1453 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1457 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1457->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1457->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1459);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1457, ((panda$core$Int64) { 138 }), $tmp1459);
        dc1453 = $tmp1457;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1462 = (($fn1461) self->$class->vtable[55])(self);
    a1460 = $tmp1462;
    if (((panda$core$Bit) { a1460 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1464 = (($fn1463) self->$class->vtable[6])(self);
    switch ($tmp1464.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1466 = (($fn1465) self->$class->vtable[64])(self, dc1453, a1460);
            return $tmp1466;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1468 = (($fn1467) self->$class->vtable[65])(self, dc1453, a1460);
            return $tmp1468;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1470 = (($fn1469) self->$class->vtable[60])(self, dc1453, a1460);
            return $tmp1470;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1472 = (($fn1471) self->$class->vtable[61])(self, dc1453, a1460);
            return $tmp1472;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1474 = (($fn1473) self->$class->vtable[62])(self, dc1453, a1460);
            return $tmp1474;
        }
        break;
        default:
        {
            (($fn1476) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1475);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1477;
    org$pandalanguage$pandac$parser$Token$nullable start1480;
    org$pandalanguage$pandac$parser$Token$nullable name1484;
    org$pandalanguage$pandac$ASTNode* generics1491;
    org$pandalanguage$pandac$Position $tmp1496;
    org$pandalanguage$pandac$ASTNode* stypes1500;
    org$pandalanguage$pandac$Position $tmp1505;
    panda$collections$Array* members1509;
    org$pandalanguage$pandac$ASTNode* member1516;
    panda$collections$Array* $tmp1478 = (panda$collections$Array*) malloc(40);
    $tmp1478->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1478->refCount.value = 1;
    panda$collections$Array$init($tmp1478);
    children1477 = $tmp1478;
    panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1483 = (($fn1482) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1481);
    start1480 = $tmp1483;
    if (((panda$core$Bit) { !start1480.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1487 = (($fn1486) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1485);
    name1484 = $tmp1487;
    if (((panda$core$Bit) { !name1484.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1489 = (($fn1488) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1490.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1493 = (($fn1492) self->$class->vtable[53])(self);
        generics1491 = $tmp1493;
        if (((panda$core$Bit) { generics1491 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) generics1491));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1494 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1494->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1494->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1496);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1494, ((panda$core$Int64) { 138 }), $tmp1496);
        panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) $tmp1494));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1498 = (($fn1497) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1498.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1499.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1502 = (($fn1501) self->$class->vtable[54])(self);
        stypes1500 = $tmp1502;
        if (((panda$core$Bit) { stypes1500 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) stypes1500));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1503 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1503->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1503->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1505);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1503, ((panda$core$Int64) { 139 }), $tmp1505);
        panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) $tmp1503));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1508 = (($fn1507) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1506);
    if (((panda$core$Bit) { !$tmp1508.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1510 = (panda$collections$Array*) malloc(40);
    $tmp1510->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1510->refCount.value = 1;
    panda$collections$Array$init($tmp1510);
    members1509 = $tmp1510;
    $l1512:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1515 = (($fn1514) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1515.nonnull }).value) goto $l1513;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1518 = (($fn1517) self->$class->vtable[63])(self);
        member1516 = $tmp1518;
        if (((panda$core$Bit) { member1516 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1509, ((panda$core$Object*) member1516));
    }
    goto $l1512;
    $l1513:;
    org$pandalanguage$pandac$ASTNode* $tmp1519 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1519->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1519->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1519, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1480.value).position, ((panda$collections$ListView*) members1509));
    panda$collections$Array$add$panda$collections$Array$T(children1477, ((panda$core$Object*) $tmp1519));
    org$pandalanguage$pandac$ASTNode* $tmp1521 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1521->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1521->refCount.value = 1;
    panda$core$String* $tmp1524 = (($fn1523) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1484.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1521, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1480.value).position, ((panda$core$Object*) $tmp1524), ((panda$collections$ListView*) children1477));
    return $tmp1521;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1525;
    org$pandalanguage$pandac$parser$Token$nullable start1528;
    org$pandalanguage$pandac$parser$Token$nullable name1532;
    org$pandalanguage$pandac$ASTNode* generics1539;
    org$pandalanguage$pandac$Position $tmp1544;
    panda$collections$Array* intfs1545;
    org$pandalanguage$pandac$ASTNode* t1550;
    panda$collections$Array* members1564;
    org$pandalanguage$pandac$ASTNode* member1571;
    panda$collections$Array* $tmp1526 = (panda$collections$Array*) malloc(40);
    $tmp1526->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1526->refCount.value = 1;
    panda$collections$Array$init($tmp1526);
    children1525 = $tmp1526;
    panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1531 = (($fn1530) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1529);
    start1528 = $tmp1531;
    if (((panda$core$Bit) { !start1528.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1535 = (($fn1534) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1533);
    name1532 = $tmp1535;
    if (((panda$core$Bit) { !name1532.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1537 = (($fn1536) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1537.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1538.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1541 = (($fn1540) self->$class->vtable[53])(self);
        generics1539 = $tmp1541;
        if (((panda$core$Bit) { generics1539 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) generics1539));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1542 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1542->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1542->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1544);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1542, ((panda$core$Int64) { 138 }), $tmp1544);
        panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) $tmp1542));
    }
    }
    panda$collections$Array* $tmp1546 = (panda$collections$Array*) malloc(40);
    $tmp1546->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1546->refCount.value = 1;
    panda$collections$Array$init($tmp1546);
    intfs1545 = $tmp1546;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1549 = (($fn1548) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1549.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1552 = (($fn1551) self->$class->vtable[19])(self);
        t1550 = $tmp1552;
        if (((panda$core$Bit) { t1550 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1545, ((panda$core$Object*) t1550));
        $l1553:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1556 = (($fn1555) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1556.nonnull }).value) goto $l1554;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1558 = (($fn1557) self->$class->vtable[19])(self);
            t1550 = $tmp1558;
            if (((panda$core$Bit) { t1550 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1545, ((panda$core$Object*) t1550));
        }
        goto $l1553;
        $l1554:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1559 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1559->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1559->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1559, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1528.value).position, ((panda$collections$ListView*) intfs1545));
    panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) $tmp1559));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1563 = (($fn1562) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1561);
    if (((panda$core$Bit) { !$tmp1563.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1565 = (panda$collections$Array*) malloc(40);
    $tmp1565->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1565->refCount.value = 1;
    panda$collections$Array$init($tmp1565);
    members1564 = $tmp1565;
    $l1567:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1570 = (($fn1569) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1570.nonnull }).value) goto $l1568;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1573 = (($fn1572) self->$class->vtable[63])(self);
        member1571 = $tmp1573;
        if (((panda$core$Bit) { member1571 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1564, ((panda$core$Object*) member1571));
    }
    goto $l1567;
    $l1568:;
    org$pandalanguage$pandac$ASTNode* $tmp1574 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1574->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1574->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1574, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1528.value).position, ((panda$collections$ListView*) members1564));
    panda$collections$Array$add$panda$collections$Array$T(children1525, ((panda$core$Object*) $tmp1574));
    org$pandalanguage$pandac$ASTNode* $tmp1576 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1576->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1576->refCount.value = 1;
    panda$core$String* $tmp1579 = (($fn1578) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1532.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1576, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1528.value).position, ((panda$core$Object*) $tmp1579), ((panda$collections$ListView*) children1525));
    return $tmp1576;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1581 = (($fn1580) self->$class->vtable[6])(self);
    switch ($tmp1581.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1583 = (($fn1582) self->$class->vtable[52])(self);
            return $tmp1583;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1585 = (($fn1584) self->$class->vtable[51])(self);
            return $tmp1585;
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
            org$pandalanguage$pandac$ASTNode* $tmp1587 = (($fn1586) self->$class->vtable[63])(self);
            return $tmp1587;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1589 = (($fn1588) self->$class->vtable[50])(self);
            return $tmp1589;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1590;
    org$pandalanguage$pandac$ASTNode* entry1598;
    org$pandalanguage$pandac$Position $tmp1604;
    panda$collections$Array* $tmp1591 = (panda$collections$Array*) malloc(40);
    $tmp1591->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1591->refCount.value = 1;
    panda$collections$Array$init($tmp1591);
    entries1590 = $tmp1591;
    $l1593:;
    org$pandalanguage$pandac$parser$Token $tmp1596 = (($fn1595) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1597 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1596.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1597.value) goto $l1594;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1600 = (($fn1599) self->$class->vtable[66])(self);
        entry1598 = $tmp1600;
        if (((panda$core$Bit) { entry1598 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1601 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1601.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1590, ((panda$core$Object*) entry1598));
    }
    goto $l1593;
    $l1594:;
    org$pandalanguage$pandac$ASTNode* $tmp1602 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1602->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1602->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1604, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1602, ((panda$core$Int64) { 152 }), $tmp1604, ((panda$collections$ListView*) entries1590));
    return $tmp1602;
}

