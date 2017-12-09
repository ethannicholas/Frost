#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/Array.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/LineNumberInputStream.h"
#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef org$pandalanguage$pandac$Position* (*$fn67)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn71)(org$pandalanguage$pandac$ErrorReporter*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$UInt8$nullable (*$fn131)(panda$io$LineNumberInputStream*);
typedef org$pandalanguage$pandac$parser$Token (*$fn154)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn162)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn167)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn175)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn179)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn184)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn186)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn188)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn192)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn194)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn200)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn225)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn228)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn233)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn235)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn238)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn243)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn248)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn267)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn294)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn298)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn302)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn306)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn312)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn315)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn321)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn333)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn334)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn337)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn340)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn343)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn348)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn356)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn358)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn361)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn365)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn368)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn370)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn375)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn380)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn381)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn385)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn390)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn394)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn398)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn401)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn407)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn411)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn412)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn417)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn419)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn422)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn424)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn426)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn429)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn431)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn436)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn437)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn445)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn450)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn455)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn458)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn462)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn464)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn467)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn475)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn478)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn483)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn486)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn494)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn501)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn509)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn516)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn518)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn521)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn523)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn525)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn528)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn530)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn534)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn536)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn540)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn541)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn543)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn548)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn551)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn559)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn562)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn569)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn570)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn573)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn578)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn581)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn589)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn593)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn600)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn601)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn602)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn604)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn609)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn612)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn619)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn621)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn625)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn628)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn631)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn643)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn648)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn650)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn661)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn663)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn668)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn671)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn678)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn680)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn685)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn688)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn695)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn697)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn702)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn705)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn714)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn717)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn723)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn725)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn727)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn731)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn734)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn739)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn741)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn745)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn747)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn751)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn758)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn762)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn766)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn769)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn772)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn775)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn778)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn787)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn790)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn793)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn802)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn805)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn808)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn811)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn820)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn823)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn832)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn835)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn840)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn843)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn849)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn855)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn859)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn861)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn869)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn873)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn876)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn879)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn885)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn891)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn894)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn899)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn902)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn905)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn908)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn915)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn918)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn921)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn925)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn928)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn934)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn936)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn942)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn949)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn951)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn953)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn956)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn959)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn964)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn969)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn972)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn979)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn982)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn984)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn987)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn998)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1000)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1003)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1005)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1008)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1011)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1013)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1018)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1022)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1027)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1031)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1034)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1040)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1043)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1050)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1052)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1055)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1059)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1061)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1064)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1070)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1073)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1077)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1083)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1086)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1090)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1096)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1098)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1106)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1110)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1112)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1116)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1118)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1120)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1122)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1124)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1126)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1129)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1130)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1132)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1134)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1136)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1138)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1140)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1142)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1144)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1146)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1149)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1151)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1153)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1155)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1157)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1158)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1160)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1162)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1164)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1167)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1170)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1174)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1179)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1183)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1187)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1189)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1196)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1200)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1205)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1209)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1213)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1215)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1222)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1226)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1234)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1237)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1241)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1245)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1248)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1250)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1253)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1257)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1260)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1266)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1272)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1276)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1278)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1288)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1292)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1298)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1306)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1311)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1312)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1319)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1322)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1329)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1333)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1338)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1341)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1345)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1347)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1350)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1356)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1359)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1362)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1368)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1370)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1374)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1378)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1382)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1387)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1390)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1404)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1412)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1418)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1421)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1424)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1427)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1441)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1448)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1456)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1460)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1465)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1467)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1469)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1471)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1473)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1475)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1477)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1480)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1486)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1490)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1492)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1496)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1500)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1504)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1509)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1516)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1519)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1525)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1532)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1536)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1538)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1542)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1549)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1552)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1556)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1558)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1563)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1570)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1573)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1579)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1581)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1583)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1585)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1587)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1589)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1596)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1600)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 1 };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 1 };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, 1 };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 1 };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, 1 };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 1 };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, 1 };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 1 };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 1 };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

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
void org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_filename, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    self->filename = p_filename;
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
        org$pandalanguage$pandac$Position* $tmp68 = (($fn67) self->$class->vtable[13])(self, p_token);
        ITable* $tmp69 = self->errors->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        $tmp70(self->errors, $tmp68, p_msg);
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp73;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp74 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp75 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp74, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp73, $tmp75, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
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
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$io$LineNumberInputStream* input106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    panda$core$UInt8$nullable c130;
    panda$io$LineNumberInputStream* $tmp107 = (panda$io$LineNumberInputStream*) malloc(40);
    $tmp107->$class = (panda$core$Class*) &panda$io$LineNumberInputStream$class;
    $tmp107->refCount.value = 1;
    panda$io$MemoryInputStream* $tmp109 = (panda$io$MemoryInputStream*) malloc(32);
    $tmp109->$class = (panda$core$Class*) &panda$io$MemoryInputStream$class;
    $tmp109->refCount.value = 1;
    panda$io$MemoryInputStream$init$panda$core$String($tmp109, self->source);
    panda$io$LineNumberInputStream$init$panda$io$InputStream($tmp107, ((panda$io$InputStream*) $tmp109));
    input106 = $tmp107;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp111, ((panda$core$Int64) { 0 }), p_token.offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp113 = $tmp111.start.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp111.end.value;
    int64_t $tmp116 = $tmp111.step.value;
    bool $tmp117 = $tmp111.inclusive.value;
    bool $tmp124 = $tmp116 > 0;
    if ($tmp124) goto $l122; else goto $l123;
    $l122:;
    if ($tmp117) goto $l125; else goto $l126;
    $l125:;
    if ($tmp113 <= $tmp115) goto $l118; else goto $l120;
    $l126:;
    if ($tmp113 < $tmp115) goto $l118; else goto $l120;
    $l123:;
    if ($tmp117) goto $l127; else goto $l128;
    $l127:;
    if ($tmp113 >= $tmp115) goto $l118; else goto $l120;
    $l128:;
    if ($tmp113 > $tmp115) goto $l118; else goto $l120;
    $l118:;
    {
        panda$core$UInt8$nullable $tmp132 = (($fn131) input106->$class->vtable[2])(input106);
        c130 = $tmp132;
    }
    $l121:;
    if ($tmp124) goto $l134; else goto $l135;
    $l134:;
    int64_t $tmp136 = $tmp115 - i112.value;
    if ($tmp117) goto $l137; else goto $l138;
    $l137:;
    if ($tmp136 >= $tmp116) goto $l133; else goto $l120;
    $l138:;
    if ($tmp136 > $tmp116) goto $l133; else goto $l120;
    $l135:;
    int64_t $tmp140 = i112.value - $tmp115;
    if ($tmp117) goto $l141; else goto $l142;
    $l141:;
    if ($tmp140 >= -$tmp116) goto $l133; else goto $l120;
    $l142:;
    if ($tmp140 > -$tmp116) goto $l133; else goto $l120;
    $l133:;
    i112.value += $tmp116;
    goto $l118;
    $l120:;
    org$pandalanguage$pandac$Position* $tmp144 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp144->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp144->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp144, self->filename, input106->line, input106->column);
    return $tmp144;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp146 = (panda$core$String*) malloc(33);
    $tmp146->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp146->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp146, (self->source->data + p_token.offset.value), p_token.length, ((panda$core$Bit) { false }));
    return $tmp146;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children148;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp149 = (panda$collections$Array*) malloc(40);
    $tmp149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp149->refCount.value = 1;
    panda$collections$Array$init($tmp149);
    children148 = $tmp149;
    panda$collections$Array$add$panda$collections$Array$T(children148, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children148, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp151 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp151->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp151->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp151, ((panda$core$Int64) { 103 }), p_string->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children148));
    return $tmp151;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start153;
    org$pandalanguage$pandac$ASTNode* result168;
    panda$core$MutableString* chunk169;
    org$pandalanguage$pandac$parser$Token token174;
    panda$core$String* str178;
    org$pandalanguage$pandac$parser$Token escape187;
    panda$core$String* escapeText193;
    panda$core$Char8 c196;
    panda$core$String* $match$5748202;
    org$pandalanguage$pandac$ASTNode* expr224;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp239;
    org$pandalanguage$pandac$parser$Token $tmp155 = (($fn154) self->$class->vtable[4])(self);
    start153 = $tmp155;
    panda$core$Bit $tmp157 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start153.kind, ((panda$core$Int64) { 7 }));
    bool $tmp156 = $tmp157.value;
    if (!$tmp156) goto $l158;
    panda$core$Bit $tmp159 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start153.kind, ((panda$core$Int64) { 6 }));
    $tmp156 = $tmp159.value;
    $l158:;
    panda$core$Bit $tmp160 = { $tmp156 };
    if ($tmp160.value) {
    {
        panda$core$String* $tmp163 = (($fn162) self->$class->vtable[14])(self, start153);
        panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s161, $tmp163);
        panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s165);
        (($fn167) self->$class->vtable[9])(self, start153, $tmp166);
        return NULL;
    }
    }
    result168 = NULL;
    panda$core$MutableString* $tmp170 = (panda$core$MutableString*) malloc(40);
    $tmp170->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp170->refCount.value = 1;
    panda$core$MutableString$init($tmp170);
    chunk169 = $tmp170;
    $l172:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp176 = (($fn175) self->$class->vtable[3])(self);
        token174 = $tmp176;
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token174.kind, start153.kind);
        if ($tmp177.value) {
        {
            goto $l173;
        }
        }
        switch (token174.kind.value) {
            case 12:
            {
                panda$core$String* $tmp180 = (($fn179) self->$class->vtable[14])(self, token174);
                str178 = $tmp180;
                panda$core$Bit $tmp182 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str178, &$s181);
                if ($tmp182.value) {
                {
                    (($fn184) self->$class->vtable[9])(self, start153, &$s183);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk169, str178);
            }
            break;
            case 0:
            {
                (($fn186) self->$class->vtable[9])(self, start153, &$s185);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp189 = (($fn188) self->$class->vtable[3])(self);
                escape187 = $tmp189;
                panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape187.kind, ((panda$core$Int64) { 0 }));
                if ($tmp190.value) {
                {
                    (($fn192) self->$class->vtable[9])(self, start153, &$s191);
                    return NULL;
                }
                }
                panda$core$String* $tmp195 = (($fn194) self->$class->vtable[14])(self, escape187);
                escapeText193 = $tmp195;
                panda$collections$ListView* $tmp197 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText193);
                ITable* $tmp198 = $tmp197->$class->itable;
                while ($tmp198->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp198 = $tmp198->next;
                }
                $fn200 $tmp199 = $tmp198->methods[0];
                panda$core$Object* $tmp201 = $tmp199($tmp197, ((panda$core$Int64) { 0 }));
                c196 = ((panda$core$Char8$wrapper*) $tmp201)->value;
                {
                    panda$core$String* $tmp203 = panda$core$Char8$convert$R$panda$core$String(c196);
                    $match$5748202 = $tmp203;
                    panda$core$Bit $tmp205 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s204);
                    if ($tmp205.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s206);
                    }
                    }
                    else {
                    panda$core$Bit $tmp208 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s207);
                    if ($tmp208.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s209);
                    }
                    }
                    else {
                    panda$core$Bit $tmp211 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s210);
                    if ($tmp211.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s212);
                    }
                    }
                    else {
                    panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s213);
                    if ($tmp214.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s215);
                    }
                    }
                    else {
                    panda$core$Bit $tmp217 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s216);
                    if ($tmp217.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s218);
                    }
                    }
                    else {
                    panda$core$Bit $tmp220 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s219);
                    if ($tmp220.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk169, &$s221);
                    }
                    }
                    else {
                    panda$core$Bit $tmp223 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748202, &$s222);
                    if ($tmp223.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp226 = (($fn225) self->$class->vtable[30])(self);
                            expr224 = $tmp226;
                            if (((panda$core$Bit) { expr224 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp229 = (($fn228) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s227);
                            if (((panda$core$Bit) { !$tmp229.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp230 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                            $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp230->refCount.value = 1;
                            panda$core$String* $tmp232 = panda$core$MutableString$convert$R$panda$core$String(chunk169);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp230, ((panda$core$Int64) { 113 }), start153.offset, $tmp232);
                            org$pandalanguage$pandac$ASTNode* $tmp234 = (($fn233) self->$class->vtable[15])(self, result168, $tmp230);
                            result168 = $tmp234;
                            panda$core$MutableString$clear(chunk169);
                            org$pandalanguage$pandac$ASTNode* $tmp236 = (($fn235) self->$class->vtable[15])(self, result168, expr224);
                            result168 = $tmp236;
                        }
                    }
                    }
                    else {
                    {
                        (($fn238) self->$class->vtable[9])(self, token174, &$s237);
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
                panda$core$String$Index $tmp240 = panda$core$String$start$R$panda$core$String$Index(escapeText193);
                panda$core$String$Index $tmp241 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText193, $tmp240);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp239, ((panda$core$String$Index$nullable) { $tmp241, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp242 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText193, $tmp239);
                panda$core$MutableString$append$panda$core$String(chunk169, $tmp242);
            }
            break;
            default:
            {
                panda$core$String* $tmp244 = (($fn243) self->$class->vtable[14])(self, token174);
                panda$core$MutableString$append$panda$core$String(chunk169, $tmp244);
            }
        }
    }
    }
    $l173:;
    org$pandalanguage$pandac$ASTNode* $tmp245 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp245->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp245->refCount.value = 1;
    panda$core$String* $tmp247 = panda$core$MutableString$convert$R$panda$core$String(chunk169);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp245, ((panda$core$Int64) { 113 }), start153.offset, $tmp247);
    org$pandalanguage$pandac$ASTNode* $tmp249 = (($fn248) self->$class->vtable[15])(self, result168, $tmp245);
    return $tmp249;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result250;
    panda$collections$Iterator* c$Iter251;
    panda$core$Char8 c264;
    panda$core$UInt64 i270;
    result250 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp252 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp253 = ((panda$collections$Iterable*) $tmp252)->$class->itable;
        while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp253 = $tmp253->next;
        }
        $fn255 $tmp254 = $tmp253->methods[0];
        panda$collections$Iterator* $tmp256 = $tmp254(((panda$collections$Iterable*) $tmp252));
        c$Iter251 = $tmp256;
        $l257:;
        ITable* $tmp259 = c$Iter251->$class->itable;
        while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp259 = $tmp259->next;
        }
        $fn261 $tmp260 = $tmp259->methods[0];
        panda$core$Bit $tmp262 = $tmp260(c$Iter251);
        panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
        if (!$tmp263.value) goto $l258;
        {
            ITable* $tmp265 = c$Iter251->$class->itable;
            while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp265 = $tmp265->next;
            }
            $fn267 $tmp266 = $tmp265->methods[1];
            panda$core$Object* $tmp268 = $tmp266(c$Iter251);
            c264 = ((panda$core$Char8$wrapper*) $tmp268)->value;
            panda$core$UInt64 $tmp269 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result250, p_base);
            result250 = $tmp269;
            panda$core$UInt64 $tmp271 = panda$core$Char8$convert$R$panda$core$UInt64(c264);
            i270 = $tmp271;
            panda$core$Bit $tmp273 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 48 }));
            bool $tmp272 = $tmp273.value;
            if (!$tmp272) goto $l274;
            panda$core$Bit $tmp275 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 57 }));
            $tmp272 = $tmp275.value;
            $l274:;
            panda$core$Bit $tmp276 = { $tmp272 };
            if ($tmp276.value) {
            {
                panda$core$UInt64 $tmp277 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i270, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp278 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result250, $tmp277);
                result250 = $tmp278;
            }
            }
            else {
            panda$core$Bit $tmp280 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 65 }));
            bool $tmp279 = $tmp280.value;
            if (!$tmp279) goto $l281;
            panda$core$Bit $tmp282 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 70 }));
            $tmp279 = $tmp282.value;
            $l281:;
            panda$core$Bit $tmp283 = { $tmp279 };
            if ($tmp283.value) {
            {
                panda$core$UInt64 $tmp284 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i270, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp285 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result250, $tmp284);
                result250 = $tmp285;
            }
            }
            else {
            {
                panda$core$Bit $tmp287 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 97 }));
                bool $tmp286 = $tmp287.value;
                if (!$tmp286) goto $l288;
                panda$core$Bit $tmp289 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i270, ((panda$core$UInt64) { 102 }));
                $tmp286 = $tmp289.value;
                $l288:;
                panda$core$Bit $tmp290 = { $tmp286 };
                PANDA_ASSERT($tmp290.value);
                panda$core$UInt64 $tmp291 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i270, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp292 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result250, $tmp291);
                result250 = $tmp292;
            }
            }
            }
        }
        goto $l257;
        $l258:;
    }
    return result250;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t293;
    panda$core$String* s305;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp310;
    panda$core$String* s314;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp319;
    org$pandalanguage$pandac$ASTNode* result336;
    org$pandalanguage$pandac$parser$Token $tmp295 = (($fn294) self->$class->vtable[4])(self);
    t293 = $tmp295;
    switch (t293.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp296 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp296->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp296->refCount.value = 1;
            panda$core$String* $tmp299 = (($fn298) self->$class->vtable[14])(self, t293);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp296, ((panda$core$Int64) { 106 }), t293.offset, $tmp299);
            return $tmp296;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp300 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp300->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp300->refCount.value = 1;
            panda$core$String* $tmp303 = (($fn302) self->$class->vtable[14])(self, t293);
            panda$core$UInt64$nullable $tmp304 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp303);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp300, ((panda$core$Int64) { 102 }), t293.offset, ((panda$core$UInt64) $tmp304.value));
            return $tmp300;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp307 = (($fn306) self->$class->vtable[14])(self, t293);
            s305 = $tmp307;
            org$pandalanguage$pandac$ASTNode* $tmp308 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp308->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp308->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp310, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp311 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s305, $tmp310);
            panda$core$UInt64 $tmp313 = (($fn312) self->$class->vtable[17])(self, $tmp311, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp308, ((panda$core$Int64) { 102 }), t293.offset, $tmp313);
            return $tmp308;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp316 = (($fn315) self->$class->vtable[14])(self, t293);
            s314 = $tmp316;
            org$pandalanguage$pandac$ASTNode* $tmp317 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp317->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp317->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp319, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp320 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s314, $tmp319);
            panda$core$UInt64 $tmp322 = (($fn321) self->$class->vtable[17])(self, $tmp320, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp317, ((panda$core$Int64) { 102 }), t293.offset, $tmp322);
            return $tmp317;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp323 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp323->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp323->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp323, ((panda$core$Int64) { 114 }), t293.offset);
            return $tmp323;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp325 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp325->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp325, ((panda$core$Int64) { 115 }), t293.offset);
            return $tmp325;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp327 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp327->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp327->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp327, ((panda$core$Int64) { 117 }), t293.offset);
            return $tmp327;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp329 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp329->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp329->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp329, ((panda$core$Int64) { 116 }), t293.offset, ((panda$core$Bit) { true }));
            return $tmp329;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp331 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp331->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp331->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp331, ((panda$core$Int64) { 116 }), t293.offset, ((panda$core$Bit) { false }));
            return $tmp331;
        }
        break;
        case 7:
        case 6:
        {
            (($fn333) self->$class->vtable[5])(self, t293);
            org$pandalanguage$pandac$ASTNode* $tmp335 = (($fn334) self->$class->vtable[16])(self);
            return $tmp335;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp338 = (($fn337) self->$class->vtable[30])(self);
            result336 = $tmp338;
            if (((panda$core$Bit) { result336 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp341 = (($fn340) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s339);
            if (((panda$core$Bit) { !$tmp341.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result336;
        }
        break;
        default:
        {
            panda$core$String* $tmp344 = (($fn343) self->$class->vtable[14])(self, t293);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s342, $tmp344);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s346);
            (($fn348) self->$class->vtable[9])(self, t293, $tmp347);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result349;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp350 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp351 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp350));
            result349 = $tmp351;
            if (((panda$core$Bit) { result349 != NULL }).value) {
            {
                panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s352, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result349, $tmp353);
                result349 = $tmp354;
            }
            }
            return result349;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name355;
    org$pandalanguage$pandac$parser$Token token360;
    org$pandalanguage$pandac$parser$Token $tmp357 = (($fn356) self->$class->vtable[4])(self);
    name355 = $tmp357;
    switch (name355.kind.value) {
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
            panda$core$String* $tmp359 = (($fn358) self->$class->vtable[14])(self, name355);
            return $tmp359;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp362 = (($fn361) self->$class->vtable[3])(self);
            token360 = $tmp362;
            panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token360.kind, ((panda$core$Int64) { 63 }));
            if ($tmp363.value) {
            {
                return &$s364;
            }
            }
            else {
            {
                (($fn365) self->$class->vtable[5])(self, token360);
                return &$s366;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp369 = (($fn368) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s367);
            if (((panda$core$Bit) { !$tmp369.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp371 = (($fn370) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp371.nonnull }).value) {
            {
                return &$s372;
            }
            }
            return &$s373;
        }
        break;
        default:
        {
            panda$core$String* $tmp376 = (($fn375) self->$class->vtable[14])(self, name355);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s374, $tmp376);
            panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
            (($fn380) self->$class->vtable[9])(self, name355, $tmp379);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp382 = (($fn381) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp382;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start383;
    panda$core$MutableString* name387;
    org$pandalanguage$pandac$parser$Token$nullable id396;
    org$pandalanguage$pandac$ASTNode* result403;
    panda$collections$Array* children413;
    org$pandalanguage$pandac$ASTNode* t416;
    panda$collections$Array* children439;
    org$pandalanguage$pandac$parser$Token$nullable $tmp386 = (($fn385) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s384);
    start383 = $tmp386;
    if (((panda$core$Bit) { !start383.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp388 = (panda$core$MutableString*) malloc(40);
    $tmp388->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp388->refCount.value = 1;
    panda$core$String* $tmp391 = (($fn390) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start383.value));
    panda$core$MutableString$init$panda$core$String($tmp388, $tmp391);
    name387 = $tmp388;
    $l392:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp395 = (($fn394) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp395.nonnull }).value) goto $l393;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp399 = (($fn398) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s397);
        id396 = $tmp399;
        if (((panda$core$Bit) { !id396.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name387, &$s400);
        panda$core$String* $tmp402 = (($fn401) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id396.value));
        panda$core$MutableString$append$panda$core$String(name387, $tmp402);
    }
    goto $l392;
    $l393:;
    org$pandalanguage$pandac$ASTNode* $tmp404 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp404->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp404->refCount.value = 1;
    panda$core$String* $tmp406 = panda$core$MutableString$convert$R$panda$core$String(name387);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp404, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start383.value).offset, $tmp406);
    result403 = $tmp404;
    org$pandalanguage$pandac$parser$Token $tmp408 = (($fn407) self->$class->vtable[6])(self);
    panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp408.kind, ((panda$core$Int64) { 62 }));
    if ($tmp409.value) {
    {
        panda$core$MutableString$append$panda$core$String(name387, &$s410);
        if (p_needSpeculativeParse.value) {
        {
            (($fn411) self->$class->vtable[10])(self);
        }
        }
        (($fn412) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp414 = (panda$collections$Array*) malloc(40);
        $tmp414->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp414->refCount.value = 1;
        panda$collections$Array$init($tmp414);
        children413 = $tmp414;
        panda$collections$Array$add$panda$collections$Array$T(children413, ((panda$core$Object*) result403));
        org$pandalanguage$pandac$ASTNode* $tmp418 = (($fn417) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t416 = $tmp418;
        if (((panda$core$Bit) { t416 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn419) self->$class->vtable[12])(self);
                return result403;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children413, ((panda$core$Object*) t416));
        panda$core$MutableString$append$panda$core$Object(name387, ((panda$core$Object*) t416));
        $l420:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp423 = (($fn422) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp423.nonnull }).value) goto $l421;
        {
            org$pandalanguage$pandac$ASTNode* $tmp425 = (($fn424) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t416 = $tmp425;
            if (((panda$core$Bit) { t416 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn426) self->$class->vtable[12])(self);
                    return result403;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children413, ((panda$core$Object*) t416));
            panda$core$MutableString$append$panda$core$String(name387, &$s427);
            panda$core$MutableString$append$panda$core$Object(name387, ((panda$core$Object*) t416));
        }
        goto $l420;
        $l421:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp430 = (($fn429) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s428);
        if (((panda$core$Bit) { !$tmp430.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn431) self->$class->vtable[12])(self);
                return result403;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name387, &$s432);
        org$pandalanguage$pandac$ASTNode* $tmp433 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp433->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp433->refCount.value = 1;
        panda$core$String* $tmp435 = panda$core$MutableString$convert$R$panda$core$String(name387);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp433, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start383.value).offset, ((panda$core$Object*) $tmp435), ((panda$collections$ListView*) children413));
        result403 = $tmp433;
        (($fn436) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp438 = (($fn437) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp438.nonnull }).value) {
    {
        panda$collections$Array* $tmp440 = (panda$collections$Array*) malloc(40);
        $tmp440->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp440->refCount.value = 1;
        panda$collections$Array$init($tmp440);
        children439 = $tmp440;
        panda$collections$Array$add$panda$collections$Array$T(children439, ((panda$core$Object*) result403));
        org$pandalanguage$pandac$ASTNode* $tmp442 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp442->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp442->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp442, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start383.value).offset, ((panda$collections$ListView*) children439));
        result403 = $tmp442;
    }
    }
    return result403;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result444;
    org$pandalanguage$pandac$parser$Token token449;
    panda$collections$Array* children452;
    org$pandalanguage$pandac$ASTNode* expr457;
    panda$collections$Array* children471;
    org$pandalanguage$pandac$ASTNode* expr474;
    panda$core$String* name482;
    panda$collections$Array* children488;
    org$pandalanguage$pandac$ASTNode* target493;
    panda$collections$Array* children496;
    panda$core$String* name502;
    panda$core$MutableString* finalName504;
    panda$collections$Array* types510;
    org$pandalanguage$pandac$ASTNode* t515;
    panda$core$Bit shouldAccept532;
    org$pandalanguage$pandac$ASTNode* $tmp446 = (($fn445) self->$class->vtable[18])(self);
    result444 = $tmp446;
    if (((panda$core$Bit) { result444 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l447:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp451 = (($fn450) self->$class->vtable[4])(self);
        token449 = $tmp451;
        switch (token449.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp453 = (panda$collections$Array*) malloc(40);
                $tmp453->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp453->refCount.value = 1;
                panda$collections$Array$init($tmp453);
                children452 = $tmp453;
                panda$collections$Array$add$panda$collections$Array$T(children452, ((panda$core$Object*) result444));
                org$pandalanguage$pandac$parser$Token$nullable $tmp456 = (($fn455) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp456.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp459 = (($fn458) self->$class->vtable[30])(self);
                    expr457 = $tmp459;
                    if (((panda$core$Bit) { expr457 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children452, ((panda$core$Object*) expr457));
                    $l460:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp463 = (($fn462) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp463.nonnull }).value) goto $l461;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp465 = (($fn464) self->$class->vtable[30])(self);
                        expr457 = $tmp465;
                        if (((panda$core$Bit) { expr457 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children452, ((panda$core$Object*) expr457));
                    }
                    goto $l460;
                    $l461:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp468 = (($fn467) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s466);
                    if (((panda$core$Bit) { !$tmp468.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp469 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp469->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp469->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp469, ((panda$core$Int64) { 107 }), token449.offset, ((panda$collections$ListView*) children452));
                result444 = $tmp469;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp472 = (panda$collections$Array*) malloc(40);
                $tmp472->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp472->refCount.value = 1;
                panda$collections$Array$init($tmp472);
                children471 = $tmp472;
                panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) result444));
                org$pandalanguage$pandac$ASTNode* $tmp476 = (($fn475) self->$class->vtable[30])(self);
                expr474 = $tmp476;
                if (((panda$core$Bit) { expr474 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children471, ((panda$core$Object*) expr474));
                org$pandalanguage$pandac$parser$Token$nullable $tmp479 = (($fn478) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s477);
                if (((panda$core$Bit) { !$tmp479.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp480 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp480->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp480, ((panda$core$Int64) { 103 }), token449.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children471));
                result444 = $tmp480;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp484 = (($fn483) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp484.nonnull }).value) {
                {
                    name482 = &$s485;
                }
                }
                else {
                {
                    panda$core$String* $tmp487 = (($fn486) self->$class->vtable[19])(self);
                    name482 = $tmp487;
                    if (((panda$core$Bit) { name482 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp489 = (panda$collections$Array*) malloc(40);
                $tmp489->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp489->refCount.value = 1;
                panda$collections$Array$init($tmp489);
                children488 = $tmp489;
                panda$collections$Array$add$panda$collections$Array$T(children488, ((panda$core$Object*) result444));
                org$pandalanguage$pandac$ASTNode* $tmp491 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp491->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp491->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp491, ((panda$core$Int64) { 108 }), token449.offset, ((panda$core$Object*) name482), ((panda$collections$ListView*) children488));
                result444 = $tmp491;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp495 = (($fn494) self->$class->vtable[20])(self);
                target493 = $tmp495;
                if (((panda$core$Bit) { target493 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp497 = (panda$collections$Array*) malloc(40);
                $tmp497->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp497->refCount.value = 1;
                panda$collections$Array$init($tmp497);
                children496 = $tmp497;
                panda$collections$Array$add$panda$collections$Array$T(children496, ((panda$core$Object*) result444));
                panda$collections$Array$add$panda$collections$Array$T(children496, ((panda$core$Object*) target493));
                org$pandalanguage$pandac$ASTNode* $tmp499 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp499->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp499->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp499, ((panda$core$Int64) { 111 }), token449.offset, ((panda$collections$ListView*) children496));
                result444 = $tmp499;
            }
            break;
            case 62:
            {
                (($fn501) self->$class->vtable[5])(self, token449);
                panda$core$String* $tmp503 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result444);
                name502 = $tmp503;
                if (((panda$core$Bit) { name502 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp505 = (panda$core$MutableString*) malloc(40);
                    $tmp505->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp505->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp505, name502);
                    finalName504 = $tmp505;
                    panda$core$MutableString$append$panda$core$String(finalName504, &$s507);
                    (($fn508) self->$class->vtable[10])(self);
                    (($fn509) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp511 = (panda$collections$Array*) malloc(40);
                    $tmp511->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp511->refCount.value = 1;
                    panda$collections$Array$init($tmp511);
                    types510 = $tmp511;
                    org$pandalanguage$pandac$ASTNode* $tmp513 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp513->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp513->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp513, ((panda$core$Int64) { 109 }), result444->offset, name502);
                    panda$collections$Array$add$panda$collections$Array$T(types510, ((panda$core$Object*) $tmp513));
                    org$pandalanguage$pandac$ASTNode* $tmp517 = (($fn516) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t515 = $tmp517;
                    if (((panda$core$Bit) { t515 == NULL }).value) {
                    {
                        (($fn518) self->$class->vtable[12])(self);
                        return result444;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types510, ((panda$core$Object*) t515));
                    panda$core$MutableString$append$panda$core$Object(finalName504, ((panda$core$Object*) t515));
                    $l519:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp522 = (($fn521) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp522.nonnull }).value) goto $l520;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp524 = (($fn523) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t515 = $tmp524;
                        if (((panda$core$Bit) { t515 == NULL }).value) {
                        {
                            (($fn525) self->$class->vtable[12])(self);
                            return result444;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types510, ((panda$core$Object*) t515));
                        panda$core$MutableString$append$panda$core$String(finalName504, &$s526);
                        panda$core$MutableString$append$panda$core$Object(finalName504, ((panda$core$Object*) t515));
                    }
                    goto $l519;
                    $l520:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp529 = (($fn528) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s527);
                    if (((panda$core$Bit) { !$tmp529.nonnull }).value) {
                    {
                        (($fn530) self->$class->vtable[12])(self);
                        return result444;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName504, &$s531);
                    panda$core$Object* $tmp533 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp533)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp535 = (($fn534) self->$class->vtable[6])(self);
                        switch ($tmp535.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept532 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept532 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept532 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept532.value) {
                    {
                        (($fn536) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp537 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                        $tmp537->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp537->refCount.value = 1;
                        panda$core$String* $tmp539 = panda$core$MutableString$convert$R$panda$core$String(finalName504);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp537, ((panda$core$Int64) { 154 }), result444->offset, ((panda$core$Object*) $tmp539), ((panda$collections$ListView*) types510));
                        result444 = $tmp537;
                        goto $l447;
                    }
                    }
                    else {
                    {
                        (($fn540) self->$class->vtable[12])(self);
                        return result444;
                    }
                    }
                }
                }
                return result444;
            }
            break;
            default:
            {
                (($fn541) self->$class->vtable[5])(self, token449);
                return result444;
            }
        }
    }
    }
    $l448:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result542;
    org$pandalanguage$pandac$parser$Token$nullable op547;
    org$pandalanguage$pandac$ASTNode* next550;
    panda$collections$Array* children553;
    org$pandalanguage$pandac$ASTNode* $tmp544 = (($fn543) self->$class->vtable[22])(self);
    result542 = $tmp544;
    if (((panda$core$Bit) { result542 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l545:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp549 = (($fn548) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op547 = $tmp549;
        if (((panda$core$Bit) { !op547.nonnull }).value) {
        {
            goto $l546;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp552 = (($fn551) self->$class->vtable[22])(self);
        next550 = $tmp552;
        if (((panda$core$Bit) { next550 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp554 = (panda$collections$Array*) malloc(40);
        $tmp554->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp554->refCount.value = 1;
        panda$collections$Array$init($tmp554);
        children553 = $tmp554;
        panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) result542));
        panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) next550));
        org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp556->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp556->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp556, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op547.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op547.value).kind)), ((panda$collections$ListView*) children553));
        result542 = $tmp556;
    }
    }
    $l546:;
    return result542;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op558;
    org$pandalanguage$pandac$ASTNode* base561;
    panda$collections$Array* children564;
    org$pandalanguage$pandac$parser$Token $tmp560 = (($fn559) self->$class->vtable[4])(self);
    op558 = $tmp560;
    switch (op558.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp563 = (($fn562) self->$class->vtable[23])(self);
            base561 = $tmp563;
            if (((panda$core$Bit) { base561 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp565 = (panda$collections$Array*) malloc(40);
            $tmp565->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp565->refCount.value = 1;
            panda$collections$Array$init($tmp565);
            children564 = $tmp565;
            panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) base561));
            org$pandalanguage$pandac$ASTNode* $tmp567 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp567->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp567->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp567, ((panda$core$Int64) { 112 }), op558.offset, ((panda$core$Object*) wrap_panda$core$Int64(op558.kind)), ((panda$collections$ListView*) children564));
            return $tmp567;
        }
        break;
        default:
        {
            (($fn569) self->$class->vtable[5])(self, op558);
            org$pandalanguage$pandac$ASTNode* $tmp571 = (($fn570) self->$class->vtable[23])(self);
            return $tmp571;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result572;
    org$pandalanguage$pandac$parser$Token op577;
    org$pandalanguage$pandac$ASTNode* next580;
    panda$collections$Array* children583;
    org$pandalanguage$pandac$parser$Token nextToken588;
    org$pandalanguage$pandac$ASTNode* next592;
    panda$collections$Array* children595;
    org$pandalanguage$pandac$ASTNode* $tmp574 = (($fn573) self->$class->vtable[24])(self);
    result572 = $tmp574;
    if (((panda$core$Bit) { result572 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l575:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp579 = (($fn578) self->$class->vtable[4])(self);
        op577 = $tmp579;
        switch (op577.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp582 = (($fn581) self->$class->vtable[24])(self);
                next580 = $tmp582;
                if (((panda$core$Bit) { next580 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp584 = (panda$collections$Array*) malloc(40);
                $tmp584->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp584->refCount.value = 1;
                panda$collections$Array$init($tmp584);
                children583 = $tmp584;
                panda$collections$Array$add$panda$collections$Array$T(children583, ((panda$core$Object*) result572));
                panda$collections$Array$add$panda$collections$Array$T(children583, ((panda$core$Object*) next580));
                org$pandalanguage$pandac$ASTNode* $tmp586 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp586->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp586->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp586, ((panda$core$Int64) { 103 }), op577.offset, ((panda$core$Object*) wrap_panda$core$Int64(op577.kind)), ((panda$collections$ListView*) children583));
                result572 = $tmp586;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp590 = (($fn589) self->$class->vtable[3])(self);
                nextToken588 = $tmp590;
                panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken588.kind, ((panda$core$Int64) { 63 }));
                if ($tmp591.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp594 = (($fn593) self->$class->vtable[24])(self);
                    next592 = $tmp594;
                    if (((panda$core$Bit) { next592 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp596 = (panda$collections$Array*) malloc(40);
                    $tmp596->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp596->refCount.value = 1;
                    panda$collections$Array$init($tmp596);
                    children595 = $tmp596;
                    panda$collections$Array$add$panda$collections$Array$T(children595, ((panda$core$Object*) result572));
                    panda$collections$Array$add$panda$collections$Array$T(children595, ((panda$core$Object*) next592));
                    org$pandalanguage$pandac$ASTNode* $tmp598 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp598->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp598->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp598, ((panda$core$Int64) { 103 }), op577.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children595));
                    result572 = $tmp598;
                }
                }
                else {
                {
                    (($fn600) self->$class->vtable[5])(self, nextToken588);
                    (($fn601) self->$class->vtable[5])(self, op577);
                    return result572;
                }
                }
            }
            break;
            default:
            {
                (($fn602) self->$class->vtable[5])(self, op577);
                return result572;
            }
        }
    }
    }
    $l576:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result603;
    org$pandalanguage$pandac$parser$Token op608;
    org$pandalanguage$pandac$ASTNode* next611;
    panda$collections$Array* children614;
    org$pandalanguage$pandac$ASTNode* $tmp605 = (($fn604) self->$class->vtable[25])(self);
    result603 = $tmp605;
    if (((panda$core$Bit) { result603 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l606:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp610 = (($fn609) self->$class->vtable[4])(self);
        op608 = $tmp610;
        switch (op608.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp613 = (($fn612) self->$class->vtable[25])(self);
                next611 = $tmp613;
                if (((panda$core$Bit) { next611 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp615 = (panda$collections$Array*) malloc(40);
                $tmp615->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp615->refCount.value = 1;
                panda$collections$Array$init($tmp615);
                children614 = $tmp615;
                panda$collections$Array$add$panda$collections$Array$T(children614, ((panda$core$Object*) result603));
                panda$collections$Array$add$panda$collections$Array$T(children614, ((panda$core$Object*) next611));
                org$pandalanguage$pandac$ASTNode* $tmp617 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp617->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp617->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp617, ((panda$core$Int64) { 103 }), op608.offset, ((panda$core$Object*) wrap_panda$core$Int64(op608.kind)), ((panda$collections$ListView*) children614));
                result603 = $tmp617;
            }
            break;
            default:
            {
                (($fn619) self->$class->vtable[5])(self, op608);
                return result603;
            }
        }
    }
    }
    $l607:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result620;
    org$pandalanguage$pandac$parser$Token op627;
    org$pandalanguage$pandac$parser$Token next630;
    org$pandalanguage$pandac$ASTNode* right633;
    org$pandalanguage$pandac$ASTNode* step647;
    panda$collections$Array* children654;
    panda$core$Int64 kind657;
    org$pandalanguage$pandac$parser$Token $tmp622 = (($fn621) self->$class->vtable[6])(self);
    switch ($tmp622.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp623 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp623->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp623->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp623, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
            result620 = $tmp623;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp626 = (($fn625) self->$class->vtable[26])(self);
            result620 = $tmp626;
            if (((panda$core$Bit) { result620 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp629 = (($fn628) self->$class->vtable[4])(self);
    op627 = $tmp629;
    switch (op627.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp632 = (($fn631) self->$class->vtable[6])(self);
            next630 = $tmp632;
            panda$core$Bit $tmp636 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next630.kind, ((panda$core$Int64) { 102 }));
            bool $tmp635 = $tmp636.value;
            if (!$tmp635) goto $l637;
            panda$core$Bit $tmp638 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next630.kind, ((panda$core$Int64) { 104 }));
            $tmp635 = $tmp638.value;
            $l637:;
            panda$core$Bit $tmp639 = { $tmp635 };
            bool $tmp634 = $tmp639.value;
            if (!$tmp634) goto $l640;
            panda$core$Bit $tmp641 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next630.kind, ((panda$core$Int64) { 33 }));
            $tmp634 = $tmp641.value;
            $l640:;
            panda$core$Bit $tmp642 = { $tmp634 };
            if ($tmp642.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp644 = (($fn643) self->$class->vtable[26])(self);
                right633 = $tmp644;
                if (((panda$core$Bit) { right633 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp645 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp645->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp645->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp645, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                right633 = $tmp645;
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
                org$pandalanguage$pandac$ASTNode* $tmp652 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp652->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp652->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp652, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                step647 = $tmp652;
            }
            }
            panda$collections$Array* $tmp655 = (panda$collections$Array*) malloc(40);
            $tmp655->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp655->refCount.value = 1;
            panda$collections$Array$init($tmp655);
            children654 = $tmp655;
            panda$collections$Array$add$panda$collections$Array$T(children654, ((panda$core$Object*) result620));
            panda$collections$Array$add$panda$collections$Array$T(children654, ((panda$core$Object*) right633));
            panda$collections$Array$add$panda$collections$Array$T(children654, ((panda$core$Object*) step647));
            panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op627.kind, ((panda$core$Int64) { 97 }));
            if ($tmp658.value) {
            {
                kind657 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind657 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp659 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp659->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp659->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp659, kind657, op627.offset, ((panda$collections$ListView*) children654));
            return $tmp659;
        }
        break;
        default:
        {
            (($fn661) self->$class->vtable[5])(self, op627);
            return result620;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result662;
    org$pandalanguage$pandac$parser$Token op667;
    org$pandalanguage$pandac$ASTNode* next670;
    panda$collections$Array* children673;
    org$pandalanguage$pandac$ASTNode* $tmp664 = (($fn663) self->$class->vtable[27])(self);
    result662 = $tmp664;
    if (((panda$core$Bit) { result662 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l665:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp669 = (($fn668) self->$class->vtable[4])(self);
        op667 = $tmp669;
        switch (op667.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp672 = (($fn671) self->$class->vtable[27])(self);
                next670 = $tmp672;
                if (((panda$core$Bit) { next670 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp674 = (panda$collections$Array*) malloc(40);
                $tmp674->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp674->refCount.value = 1;
                panda$collections$Array$init($tmp674);
                children673 = $tmp674;
                panda$collections$Array$add$panda$collections$Array$T(children673, ((panda$core$Object*) result662));
                panda$collections$Array$add$panda$collections$Array$T(children673, ((panda$core$Object*) next670));
                org$pandalanguage$pandac$ASTNode* $tmp676 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp676->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp676->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp676, ((panda$core$Int64) { 103 }), op667.offset, ((panda$core$Object*) wrap_panda$core$Int64(op667.kind)), ((panda$collections$ListView*) children673));
                result662 = $tmp676;
            }
            break;
            default:
            {
                (($fn678) self->$class->vtable[5])(self, op667);
                return result662;
            }
        }
    }
    }
    $l666:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result679;
    org$pandalanguage$pandac$parser$Token op684;
    org$pandalanguage$pandac$ASTNode* next687;
    panda$collections$Array* children690;
    org$pandalanguage$pandac$ASTNode* $tmp681 = (($fn680) self->$class->vtable[28])(self);
    result679 = $tmp681;
    if (((panda$core$Bit) { result679 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l682:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp686 = (($fn685) self->$class->vtable[4])(self);
        op684 = $tmp686;
        switch (op684.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp689 = (($fn688) self->$class->vtable[28])(self);
                next687 = $tmp689;
                if (((panda$core$Bit) { next687 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp691 = (panda$collections$Array*) malloc(40);
                $tmp691->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp691->refCount.value = 1;
                panda$collections$Array$init($tmp691);
                children690 = $tmp691;
                panda$collections$Array$add$panda$collections$Array$T(children690, ((panda$core$Object*) result679));
                panda$collections$Array$add$panda$collections$Array$T(children690, ((panda$core$Object*) next687));
                org$pandalanguage$pandac$ASTNode* $tmp693 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp693->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp693->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp693, ((panda$core$Int64) { 103 }), op684.offset, ((panda$core$Object*) wrap_panda$core$Int64(op684.kind)), ((panda$collections$ListView*) children690));
                result679 = $tmp693;
            }
            break;
            default:
            {
                (($fn695) self->$class->vtable[5])(self, op684);
                return result679;
            }
        }
    }
    }
    $l683:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result696;
    org$pandalanguage$pandac$parser$Token$nullable op701;
    org$pandalanguage$pandac$ASTNode* next704;
    panda$collections$Array* children707;
    org$pandalanguage$pandac$ASTNode* $tmp698 = (($fn697) self->$class->vtable[29])(self);
    result696 = $tmp698;
    if (((panda$core$Bit) { result696 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l699:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp703 = (($fn702) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op701 = $tmp703;
        if (((panda$core$Bit) { !op701.nonnull }).value) {
        {
            goto $l700;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp706 = (($fn705) self->$class->vtable[29])(self);
        next704 = $tmp706;
        if (((panda$core$Bit) { next704 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp708 = (panda$collections$Array*) malloc(40);
        $tmp708->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp708->refCount.value = 1;
        panda$collections$Array$init($tmp708);
        children707 = $tmp708;
        panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) result696));
        panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) next704));
        org$pandalanguage$pandac$ASTNode* $tmp710 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp710->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp710->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp710, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op701.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op701.value).kind)), ((panda$collections$ListView*) children707));
        result696 = $tmp710;
    }
    }
    $l700:;
    return result696;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start712;
    org$pandalanguage$pandac$ASTNode* test716;
    panda$collections$Array* children719;
    org$pandalanguage$pandac$ASTNode* ifTrue722;
    org$pandalanguage$pandac$ASTNode* ifFalse730;
    org$pandalanguage$pandac$ASTNode* ifFalse733;
    org$pandalanguage$pandac$parser$Token$nullable $tmp715 = (($fn714) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s713);
    start712 = $tmp715;
    if (((panda$core$Bit) { !start712.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp718 = (($fn717) self->$class->vtable[30])(self);
    test716 = $tmp718;
    if (((panda$core$Bit) { test716 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp720 = (panda$collections$Array*) malloc(40);
    $tmp720->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp720->refCount.value = 1;
    panda$collections$Array$init($tmp720);
    children719 = $tmp720;
    panda$collections$Array$add$panda$collections$Array$T(children719, ((panda$core$Object*) test716));
    org$pandalanguage$pandac$ASTNode* $tmp724 = (($fn723) self->$class->vtable[41])(self);
    ifTrue722 = $tmp724;
    if (((panda$core$Bit) { ifTrue722 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children719, ((panda$core$Object*) ifTrue722));
    org$pandalanguage$pandac$parser$Token$nullable $tmp726 = (($fn725) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp726.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp728 = (($fn727) self->$class->vtable[6])(self);
        panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp728.kind, ((panda$core$Int64) { 36 }));
        if ($tmp729.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp732 = (($fn731) self->$class->vtable[31])(self);
            ifFalse730 = $tmp732;
            if (((panda$core$Bit) { ifFalse730 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children719, ((panda$core$Object*) ifFalse730));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp735 = (($fn734) self->$class->vtable[41])(self);
            ifFalse733 = $tmp735;
            if (((panda$core$Bit) { ifFalse733 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children719, ((panda$core$Object*) ifFalse733));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp736 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp736->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp736->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp736, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start712.value).offset, ((panda$collections$ListView*) children719));
    return $tmp736;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp740 = (($fn739) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s738);
    if (((panda$core$Bit) { !$tmp740.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp742 = (($fn741) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp742;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id743;
    org$pandalanguage$pandac$ASTNode* type750;
    panda$collections$Array* children753;
    org$pandalanguage$pandac$parser$Token$nullable $tmp746 = (($fn745) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s744);
    id743 = $tmp746;
    if (((panda$core$Bit) { !id743.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp748 = (($fn747) self->$class->vtable[6])(self);
    panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp748.kind, ((panda$core$Int64) { 95 }));
    if ($tmp749.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp752 = (($fn751) self->$class->vtable[32])(self);
        type750 = $tmp752;
        if (((panda$core$Bit) { type750 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp754 = (panda$collections$Array*) malloc(40);
        $tmp754->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp754->refCount.value = 1;
        panda$collections$Array$init($tmp754);
        children753 = $tmp754;
        panda$collections$Array$add$panda$collections$Array$T(children753, ((panda$core$Object*) type750));
        org$pandalanguage$pandac$ASTNode* $tmp756 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp756->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp756->refCount.value = 1;
        panda$core$String* $tmp759 = (($fn758) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id743.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp756, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id743.value).offset, ((panda$core$Object*) $tmp759), ((panda$collections$ListView*) children753));
        return $tmp756;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp760 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp760->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp760->refCount.value = 1;
    panda$core$String* $tmp763 = (($fn762) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id743.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp760, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id743.value).offset, $tmp763);
    return $tmp760;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start764;
    org$pandalanguage$pandac$ASTNode* t768;
    org$pandalanguage$pandac$ASTNode* list774;
    org$pandalanguage$pandac$ASTNode* block777;
    panda$collections$Array* children780;
    org$pandalanguage$pandac$parser$Token$nullable $tmp767 = (($fn766) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s765);
    start764 = $tmp767;
    if (((panda$core$Bit) { !start764.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp770 = (($fn769) self->$class->vtable[33])(self);
    t768 = $tmp770;
    if (((panda$core$Bit) { t768 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp773 = (($fn772) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s771);
    if (((panda$core$Bit) { !$tmp773.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp776 = (($fn775) self->$class->vtable[30])(self);
    list774 = $tmp776;
    if (((panda$core$Bit) { list774 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp779 = (($fn778) self->$class->vtable[41])(self);
    block777 = $tmp779;
    if (((panda$core$Bit) { block777 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp781 = (panda$collections$Array*) malloc(40);
    $tmp781->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp781->refCount.value = 1;
    panda$collections$Array$init($tmp781);
    children780 = $tmp781;
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) t768));
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) list774));
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) block777));
    org$pandalanguage$pandac$ASTNode* $tmp783 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp783->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp783->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp783, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start764.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children780));
    return $tmp783;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start785;
    org$pandalanguage$pandac$ASTNode* test789;
    org$pandalanguage$pandac$ASTNode* body792;
    panda$collections$Array* children795;
    org$pandalanguage$pandac$parser$Token$nullable $tmp788 = (($fn787) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s786);
    start785 = $tmp788;
    if (((panda$core$Bit) { !start785.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp791 = (($fn790) self->$class->vtable[30])(self);
    test789 = $tmp791;
    if (((panda$core$Bit) { test789 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp794 = (($fn793) self->$class->vtable[41])(self);
    body792 = $tmp794;
    if (((panda$core$Bit) { body792 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp796 = (panda$collections$Array*) malloc(40);
    $tmp796->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp796->refCount.value = 1;
    panda$collections$Array$init($tmp796);
    children795 = $tmp796;
    panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) test789));
    panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) body792));
    org$pandalanguage$pandac$ASTNode* $tmp798 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp798->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp798->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp798, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start785.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children795));
    return $tmp798;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start800;
    org$pandalanguage$pandac$ASTNode* body804;
    org$pandalanguage$pandac$ASTNode* test810;
    panda$collections$Array* children813;
    org$pandalanguage$pandac$parser$Token$nullable $tmp803 = (($fn802) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s801);
    start800 = $tmp803;
    if (((panda$core$Bit) { !start800.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp806 = (($fn805) self->$class->vtable[41])(self);
    body804 = $tmp806;
    if (((panda$core$Bit) { body804 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp809 = (($fn808) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s807);
    if (((panda$core$Bit) { !$tmp809.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp812 = (($fn811) self->$class->vtable[30])(self);
    test810 = $tmp812;
    if (((panda$core$Bit) { test810 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp814 = (panda$collections$Array*) malloc(40);
    $tmp814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp814->refCount.value = 1;
    panda$collections$Array$init($tmp814);
    children813 = $tmp814;
    panda$collections$Array$add$panda$collections$Array$T(children813, ((panda$core$Object*) body804));
    panda$collections$Array$add$panda$collections$Array$T(children813, ((panda$core$Object*) test810));
    org$pandalanguage$pandac$ASTNode* $tmp816 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp816->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp816->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp816, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start800.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children813));
    return $tmp816;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start818;
    org$pandalanguage$pandac$ASTNode* body822;
    panda$collections$Array* children825;
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = (($fn820) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s819);
    start818 = $tmp821;
    if (((panda$core$Bit) { !start818.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp824 = (($fn823) self->$class->vtable[41])(self);
    body822 = $tmp824;
    if (((panda$core$Bit) { body822 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp826 = (panda$collections$Array*) malloc(40);
    $tmp826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp826->refCount.value = 1;
    panda$collections$Array$init($tmp826);
    children825 = $tmp826;
    panda$collections$Array$add$panda$collections$Array$T(children825, ((panda$core$Object*) body822));
    org$pandalanguage$pandac$ASTNode* $tmp828 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp828->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp828->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp828, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start818.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children825));
    return $tmp828;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start830;
    org$pandalanguage$pandac$ASTNode* expr834;
    panda$collections$Array* children837;
    org$pandalanguage$pandac$ASTNode* message842;
    org$pandalanguage$pandac$parser$Token$nullable $tmp833 = (($fn832) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s831);
    start830 = $tmp833;
    if (((panda$core$Bit) { !start830.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp836 = (($fn835) self->$class->vtable[30])(self);
    expr834 = $tmp836;
    if (((panda$core$Bit) { expr834 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp838 = (panda$collections$Array*) malloc(40);
    $tmp838->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp838->refCount.value = 1;
    panda$collections$Array$init($tmp838);
    children837 = $tmp838;
    panda$collections$Array$add$panda$collections$Array$T(children837, ((panda$core$Object*) expr834));
    org$pandalanguage$pandac$parser$Token$nullable $tmp841 = (($fn840) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp841.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp844 = (($fn843) self->$class->vtable[30])(self);
        message842 = $tmp844;
        if (((panda$core$Bit) { message842 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children837, ((panda$core$Object*) message842));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp845 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp845->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp845->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp845, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start830.value).offset, ((panda$collections$ListView*) children837));
    return $tmp845;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start847;
    panda$collections$Array* expressions851;
    org$pandalanguage$pandac$ASTNode* expr854;
    panda$collections$Array* children863;
    org$pandalanguage$pandac$ASTNode* stmt875;
    org$pandalanguage$pandac$ASTNode* stmt878;
    org$pandalanguage$pandac$parser$Token$nullable $tmp850 = (($fn849) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s848);
    start847 = $tmp850;
    if (((panda$core$Bit) { !start847.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp852 = (panda$collections$Array*) malloc(40);
    $tmp852->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp852->refCount.value = 1;
    panda$collections$Array$init($tmp852);
    expressions851 = $tmp852;
    org$pandalanguage$pandac$ASTNode* $tmp856 = (($fn855) self->$class->vtable[30])(self);
    expr854 = $tmp856;
    if (((panda$core$Bit) { expr854 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions851, ((panda$core$Object*) expr854));
    $l857:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp860 = (($fn859) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp860.nonnull }).value) goto $l858;
    {
        org$pandalanguage$pandac$ASTNode* $tmp862 = (($fn861) self->$class->vtable[30])(self);
        expr854 = $tmp862;
        if (((panda$core$Bit) { expr854 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions851, ((panda$core$Object*) expr854));
    }
    goto $l857;
    $l858:;
    panda$collections$Array* $tmp864 = (panda$collections$Array*) malloc(40);
    $tmp864->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp864->refCount.value = 1;
    panda$collections$Array$init($tmp864);
    children863 = $tmp864;
    org$pandalanguage$pandac$ASTNode* $tmp866 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp866->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp866->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp866, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start847.value).offset, ((panda$collections$ListView*) expressions851));
    panda$collections$Array$add$panda$collections$Array$T(children863, ((panda$core$Object*) $tmp866));
    org$pandalanguage$pandac$parser$Token$nullable $tmp870 = (($fn869) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s868);
    if (((panda$core$Bit) { !$tmp870.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l871:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp874 = (($fn873) self->$class->vtable[6])(self);
        switch ($tmp874.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l872;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp877 = (($fn876) self->$class->vtable[49])(self);
                stmt875 = $tmp877;
                if (((panda$core$Bit) { stmt875 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children863, ((panda$core$Object*) stmt875));
                goto $l872;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp880 = (($fn879) self->$class->vtable[51])(self);
                    stmt878 = $tmp880;
                    if (((panda$core$Bit) { stmt878 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children863, ((panda$core$Object*) stmt878));
                }
            }
        }
    }
    }
    $l872:;
    org$pandalanguage$pandac$ASTNode* $tmp881 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp881->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp881->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp881, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start847.value).offset, ((panda$collections$ListView*) children863));
    return $tmp881;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start883;
    panda$collections$Array* children887;
    org$pandalanguage$pandac$ASTNode* expr890;
    org$pandalanguage$pandac$parser$Token token898;
    org$pandalanguage$pandac$ASTNode* w901;
    org$pandalanguage$pandac$parser$Token o904;
    panda$collections$Array* statements910;
    org$pandalanguage$pandac$ASTNode* stmt917;
    org$pandalanguage$pandac$ASTNode* stmt920;
    org$pandalanguage$pandac$parser$Token$nullable $tmp886 = (($fn885) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s884);
    start883 = $tmp886;
    if (((panda$core$Bit) { !start883.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp888 = (panda$collections$Array*) malloc(40);
    $tmp888->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp888->refCount.value = 1;
    panda$collections$Array$init($tmp888);
    children887 = $tmp888;
    org$pandalanguage$pandac$ASTNode* $tmp892 = (($fn891) self->$class->vtable[30])(self);
    expr890 = $tmp892;
    if (((panda$core$Bit) { expr890 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children887, ((panda$core$Object*) expr890));
    org$pandalanguage$pandac$parser$Token$nullable $tmp895 = (($fn894) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s893);
    if (((panda$core$Bit) { !$tmp895.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l896:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp900 = (($fn899) self->$class->vtable[6])(self);
        token898 = $tmp900;
        switch (token898.kind.value) {
            case 100:
            {
                goto $l897;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp903 = (($fn902) self->$class->vtable[39])(self);
                w901 = $tmp903;
                if (((panda$core$Bit) { w901 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children887, ((panda$core$Object*) w901));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp906 = (($fn905) self->$class->vtable[4])(self);
                o904 = $tmp906;
                org$pandalanguage$pandac$parser$Token$nullable $tmp909 = (($fn908) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s907);
                if (((panda$core$Bit) { !$tmp909.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp911 = (panda$collections$Array*) malloc(40);
                $tmp911->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp911->refCount.value = 1;
                panda$collections$Array$init($tmp911);
                statements910 = $tmp911;
                $l913:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp916 = (($fn915) self->$class->vtable[6])(self);
                    switch ($tmp916.kind.value) {
                        case 100:
                        {
                            goto $l914;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp919 = (($fn918) self->$class->vtable[49])(self);
                            stmt917 = $tmp919;
                            if (((panda$core$Bit) { stmt917 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements910, ((panda$core$Object*) stmt917));
                            goto $l914;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp922 = (($fn921) self->$class->vtable[51])(self);
                            stmt920 = $tmp922;
                            if (((panda$core$Bit) { stmt920 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements910, ((panda$core$Object*) stmt920));
                        }
                    }
                }
                }
                $l914:;
                org$pandalanguage$pandac$ASTNode* $tmp923 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp923->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp923->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp923, ((panda$core$Int64) { 127 }), o904.offset, ((panda$collections$ListView*) statements910));
                panda$collections$Array$add$panda$collections$Array$T(children887, ((panda$core$Object*) $tmp923));
                goto $l897;
            }
            break;
            default:
            {
                (($fn925) self->$class->vtable[4])(self);
                panda$core$String* $tmp929 = (($fn928) self->$class->vtable[14])(self, token898);
                panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s927, $tmp929);
                panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, &$s931);
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s926, $tmp932);
                (($fn934) self->$class->vtable[9])(self, token898, $tmp933);
            }
        }
    }
    }
    $l897:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp937 = (($fn936) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s935);
    if (((panda$core$Bit) { !$tmp937.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp938 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp938->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp938, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start883.value).offset, ((panda$collections$ListView*) children887));
    return $tmp938;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start940;
    panda$collections$Array* children944;
    org$pandalanguage$pandac$ASTNode* stmt952;
    org$pandalanguage$pandac$ASTNode* stmt958;
    org$pandalanguage$pandac$parser$Token$nullable $tmp943 = (($fn942) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s941);
    start940 = $tmp943;
    if (((panda$core$Bit) { !start940.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp945 = (panda$collections$Array*) malloc(40);
    $tmp945->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp945->refCount.value = 1;
    panda$collections$Array$init($tmp945);
    children944 = $tmp945;
    $l947:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp950 = (($fn949) self->$class->vtable[6])(self);
        switch ($tmp950.kind.value) {
            case 100:
            {
                (($fn951) self->$class->vtable[4])(self);
                goto $l948;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp954 = (($fn953) self->$class->vtable[49])(self);
                stmt952 = $tmp954;
                if (((panda$core$Bit) { stmt952 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp957 = (($fn956) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s955);
                if (((panda$core$Bit) { !$tmp957.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children944, ((panda$core$Object*) stmt952));
                goto $l948;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp960 = (($fn959) self->$class->vtable[51])(self);
                stmt958 = $tmp960;
                if (((panda$core$Bit) { stmt958 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children944, ((panda$core$Object*) stmt958));
            }
        }
    }
    }
    $l948:;
    org$pandalanguage$pandac$ASTNode* $tmp961 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp961->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp961->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp961, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start940.value).offset, ((panda$collections$ListView*) children944));
    return $tmp961;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start963;
    org$pandalanguage$pandac$parser$Token op968;
    org$pandalanguage$pandac$ASTNode* rvalue971;
    panda$collections$Array* children974;
    org$pandalanguage$pandac$parser$Token op983;
    org$pandalanguage$pandac$ASTNode* rvalue986;
    panda$collections$Array* children989;
    org$pandalanguage$pandac$ASTNode* $tmp965 = (($fn964) self->$class->vtable[30])(self);
    start963 = $tmp965;
    if (((panda$core$Bit) { start963 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp967 = (($fn966) self->$class->vtable[6])(self);
    switch ($tmp967.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp970 = (($fn969) self->$class->vtable[4])(self);
            op968 = $tmp970;
            org$pandalanguage$pandac$ASTNode* $tmp973 = (($fn972) self->$class->vtable[30])(self);
            rvalue971 = $tmp973;
            if (((panda$core$Bit) { rvalue971 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp975 = (panda$collections$Array*) malloc(40);
            $tmp975->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp975->refCount.value = 1;
            panda$collections$Array$init($tmp975);
            children974 = $tmp975;
            panda$collections$Array$add$panda$collections$Array$T(children974, ((panda$core$Object*) start963));
            panda$collections$Array$add$panda$collections$Array$T(children974, ((panda$core$Object*) rvalue971));
            org$pandalanguage$pandac$ASTNode* $tmp977 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp977->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp977->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp977, ((panda$core$Int64) { 103 }), start963->offset, ((panda$core$Object*) wrap_panda$core$Int64(op968.kind)), ((panda$collections$ListView*) children974));
            return $tmp977;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp980 = (($fn979) self->$class->vtable[6])(self);
            (($fn982) self->$class->vtable[9])(self, $tmp980, &$s981);
            org$pandalanguage$pandac$parser$Token $tmp985 = (($fn984) self->$class->vtable[4])(self);
            op983 = $tmp985;
            org$pandalanguage$pandac$ASTNode* $tmp988 = (($fn987) self->$class->vtable[30])(self);
            rvalue986 = $tmp988;
            if (((panda$core$Bit) { rvalue986 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp990 = (panda$collections$Array*) malloc(40);
            $tmp990->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp990->refCount.value = 1;
            panda$collections$Array$init($tmp990);
            children989 = $tmp990;
            panda$collections$Array$add$panda$collections$Array$T(children989, ((panda$core$Object*) start963));
            panda$collections$Array$add$panda$collections$Array$T(children989, ((panda$core$Object*) rvalue986));
            org$pandalanguage$pandac$ASTNode* $tmp992 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp992->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp992->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp992, ((panda$core$Int64) { 103 }), start963->offset, ((panda$core$Object*) wrap_panda$core$Int64(op983.kind)), ((panda$collections$ListView*) children989));
            return $tmp992;
        }
        break;
        default:
        {
            return start963;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children994;
    org$pandalanguage$pandac$ASTNode* t997;
    org$pandalanguage$pandac$ASTNode* value1002;
    org$pandalanguage$pandac$ASTNode* value1012;
    panda$collections$Array* $tmp995 = (panda$collections$Array*) malloc(40);
    $tmp995->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp995->refCount.value = 1;
    panda$collections$Array$init($tmp995);
    children994 = $tmp995;
    org$pandalanguage$pandac$ASTNode* $tmp999 = (($fn998) self->$class->vtable[33])(self);
    t997 = $tmp999;
    if (((panda$core$Bit) { t997 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children994, ((panda$core$Object*) t997));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1001 = (($fn1000) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1001.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1004 = (($fn1003) self->$class->vtable[30])(self);
        value1002 = $tmp1004;
        if (((panda$core$Bit) { value1002 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children994, ((panda$core$Object*) value1002));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1006 = (($fn1005) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1006.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1007.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1009 = (($fn1008) self->$class->vtable[4])(self);
        (($fn1011) self->$class->vtable[9])(self, $tmp1009, &$s1010);
        org$pandalanguage$pandac$ASTNode* $tmp1014 = (($fn1013) self->$class->vtable[30])(self);
        value1012 = $tmp1014;
        if (((panda$core$Bit) { value1012 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children994, ((panda$core$Object*) value1012));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1015 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1015->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1015, ((panda$core$Int64) { 129 }), t997->offset, ((panda$collections$ListView*) children994));
    return $tmp1015;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1017;
    panda$core$Int64 kind1020;
    panda$collections$Array* children1023;
    org$pandalanguage$pandac$ASTNode* child1026;
    org$pandalanguage$pandac$ASTNode* child1033;
    org$pandalanguage$pandac$parser$Token $tmp1019 = (($fn1018) self->$class->vtable[4])(self);
    start1017 = $tmp1019;
    switch (start1017.kind.value) {
        case 23:
        {
            kind1020 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1020 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1020 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1020 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1022) self->$class->vtable[9])(self, start1017, &$s1021);
        }
    }
    panda$collections$Array* $tmp1024 = (panda$collections$Array*) malloc(40);
    $tmp1024->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1024->refCount.value = 1;
    panda$collections$Array$init($tmp1024);
    children1023 = $tmp1024;
    org$pandalanguage$pandac$ASTNode* $tmp1028 = (($fn1027) self->$class->vtable[43])(self);
    child1026 = $tmp1028;
    if (((panda$core$Bit) { child1026 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1023, ((panda$core$Object*) child1026));
    $l1029:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = (($fn1031) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1032.nonnull }).value) goto $l1030;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1035 = (($fn1034) self->$class->vtable[43])(self);
        child1033 = $tmp1035;
        if (((panda$core$Bit) { child1033 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1023, ((panda$core$Object*) child1033));
    }
    goto $l1029;
    $l1030:;
    org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1036->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1036->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1036, kind1020, start1017.offset, ((panda$collections$ListView*) children1023));
    return $tmp1036;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1038;
    panda$collections$Array* children1045;
    org$pandalanguage$pandac$ASTNode* expr1054;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = (($fn1040) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1039);
    start1038 = $tmp1041;
    if (((panda$core$Bit) { !start1038.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1044 = (($fn1043) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1042);
    if (((panda$core$Bit) { !$tmp1044.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1046 = (panda$collections$Array*) malloc(40);
    $tmp1046->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1046->refCount.value = 1;
    panda$collections$Array$init($tmp1046);
    children1045 = $tmp1046;
    org$pandalanguage$pandac$ASTNode* $tmp1048 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1048->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1048->refCount.value = 1;
    panda$core$String* $tmp1051 = (($fn1050) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1038.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1048, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1038.value).offset, $tmp1051);
    panda$collections$Array$add$panda$collections$Array$T(children1045, ((panda$core$Object*) $tmp1048));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1053 = (($fn1052) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1053.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1056 = (($fn1055) self->$class->vtable[30])(self);
        expr1054 = $tmp1056;
        if (((panda$core$Bit) { expr1054 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1045, ((panda$core$Object*) expr1054));
        $l1057:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = (($fn1059) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1060.nonnull }).value) goto $l1058;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1062 = (($fn1061) self->$class->vtable[30])(self);
            expr1054 = $tmp1062;
            if (((panda$core$Bit) { expr1054 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1045, ((panda$core$Object*) expr1054));
        }
        goto $l1057;
        $l1058:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1065 = (($fn1064) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1063);
        if (((panda$core$Bit) { !$tmp1065.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1066 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1066->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1066->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1066, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1038.value).offset, ((panda$collections$ListView*) children1045));
    return $tmp1066;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1068;
    org$pandalanguage$pandac$parser$Token$nullable label1072;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1071 = (($fn1070) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1069);
    start1068 = $tmp1071;
    if (((panda$core$Bit) { !start1068.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1074 = (($fn1073) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1072 = $tmp1074;
    if (((panda$core$Bit) { label1072.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1075 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1075->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1075->refCount.value = 1;
        panda$core$String* $tmp1078 = (($fn1077) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1072.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1075, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1068.value).offset, $tmp1078);
        return $tmp1075;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1079 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1079->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1079->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1079, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1068.value).offset);
    return $tmp1079;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1081;
    org$pandalanguage$pandac$parser$Token$nullable label1085;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1084 = (($fn1083) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1082);
    start1081 = $tmp1084;
    if (((panda$core$Bit) { !start1081.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = (($fn1086) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1085 = $tmp1087;
    if (((panda$core$Bit) { label1085.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1088 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1088->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1088->refCount.value = 1;
        panda$core$String* $tmp1091 = (($fn1090) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1085.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1088, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1081.value).offset, $tmp1091);
        return $tmp1088;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1092->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1092->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1092, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1081.value).offset);
    return $tmp1092;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1094;
    panda$collections$Array* children1102;
    org$pandalanguage$pandac$ASTNode* expr1105;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1097 = (($fn1096) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1095);
    start1094 = $tmp1097;
    if (((panda$core$Bit) { !start1094.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1099 = (($fn1098) self->$class->vtable[6])(self);
    switch ($tmp1099.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1100 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1100->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1100->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1100, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1094.value).offset);
            return $tmp1100;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1103 = (panda$collections$Array*) malloc(40);
            $tmp1103->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1103->refCount.value = 1;
            panda$collections$Array$init($tmp1103);
            children1102 = $tmp1103;
            org$pandalanguage$pandac$ASTNode* $tmp1107 = (($fn1106) self->$class->vtable[30])(self);
            expr1105 = $tmp1107;
            if (((panda$core$Bit) { expr1105 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1102, ((panda$core$Object*) expr1105));
            org$pandalanguage$pandac$ASTNode* $tmp1108 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1108->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1108->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1108, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1094.value).offset, ((panda$collections$ListView*) children1102));
            return $tmp1108;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1111 = (($fn1110) self->$class->vtable[6])(self);
    switch ($tmp1111.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1113 = (($fn1112) self->$class->vtable[46])(self);
            return $tmp1113;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1115 = (($fn1114) self->$class->vtable[47])(self);
            return $tmp1115;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1117 = (($fn1116) self->$class->vtable[48])(self);
            return $tmp1117;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1119 = (($fn1118) self->$class->vtable[6])(self);
    switch ($tmp1119.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1121 = (($fn1120) self->$class->vtable[36])(self, p_label);
            return $tmp1121;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1123 = (($fn1122) self->$class->vtable[34])(self, p_label);
            return $tmp1123;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1125 = (($fn1124) self->$class->vtable[37])(self, p_label);
            return $tmp1125;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (($fn1126) self->$class->vtable[35])(self, p_label);
            return $tmp1127;
        }
        break;
        default:
        {
            (($fn1129) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1128);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1148;
    org$pandalanguage$pandac$parser$Token $tmp1131 = (($fn1130) self->$class->vtable[6])(self);
    switch ($tmp1131.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1133 = (($fn1132) self->$class->vtable[31])(self);
            return $tmp1133;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1135 = (($fn1134) self->$class->vtable[34])(self, NULL);
            return $tmp1135;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1137 = (($fn1136) self->$class->vtable[35])(self, NULL);
            return $tmp1137;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1139 = (($fn1138) self->$class->vtable[36])(self, NULL);
            return $tmp1139;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1141 = (($fn1140) self->$class->vtable[37])(self, NULL);
            return $tmp1141;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1143 = (($fn1142) self->$class->vtable[38])(self);
            return $tmp1143;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1145 = (($fn1144) self->$class->vtable[40])(self);
            return $tmp1145;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1147 = (($fn1146) self->$class->vtable[41])(self);
            return $tmp1147;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1150 = (($fn1149) self->$class->vtable[4])(self);
            id1148 = $tmp1150;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = (($fn1151) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1152.nonnull }).value) {
            {
                panda$core$String* $tmp1154 = (($fn1153) self->$class->vtable[14])(self, id1148);
                org$pandalanguage$pandac$ASTNode* $tmp1156 = (($fn1155) self->$class->vtable[50])(self, $tmp1154);
                return $tmp1156;
            }
            }
            (($fn1157) self->$class->vtable[5])(self, id1148);
            org$pandalanguage$pandac$ASTNode* $tmp1159 = (($fn1158) self->$class->vtable[42])(self);
            return $tmp1159;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1161 = (($fn1160) self->$class->vtable[42])(self);
            return $tmp1161;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1163 = (($fn1162) self->$class->vtable[44])(self);
            return $tmp1163;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1165 = (($fn1164) self->$class->vtable[45])(self);
            return $tmp1165;
        }
        break;
        default:
        {
            (($fn1167) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1166);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1168;
    org$pandalanguage$pandac$parser$Token$nullable next1172;
    panda$core$MutableString* name1176;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1171 = (($fn1170) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1169);
    start1168 = $tmp1171;
    if (((panda$core$Bit) { !start1168.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1175 = (($fn1174) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1173);
    next1172 = $tmp1175;
    if (((panda$core$Bit) { !next1172.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1177 = (panda$core$MutableString*) malloc(40);
    $tmp1177->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1177->refCount.value = 1;
    panda$core$String* $tmp1180 = (($fn1179) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1172.value));
    panda$core$MutableString$init$panda$core$String($tmp1177, $tmp1180);
    name1176 = $tmp1177;
    $l1181:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1184 = (($fn1183) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1172 = $tmp1184;
        if (((panda$core$Bit) { !next1172.nonnull }).value) {
        {
            goto $l1182;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1176, &$s1185);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1188 = (($fn1187) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1186);
        next1172 = $tmp1188;
        if (((panda$core$Bit) { !next1172.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1190 = (($fn1189) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1172.value));
        panda$core$MutableString$append$panda$core$String(name1176, $tmp1190);
    }
    }
    $l1182:;
    org$pandalanguage$pandac$ASTNode* $tmp1191 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1191->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1191->refCount.value = 1;
    panda$core$String* $tmp1193 = panda$core$MutableString$convert$R$panda$core$String(name1176);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1191, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1168.value).offset, $tmp1193);
    return $tmp1191;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1194;
    org$pandalanguage$pandac$parser$Token$nullable next1198;
    panda$core$MutableString* name1202;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1197 = (($fn1196) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1195);
    start1194 = $tmp1197;
    if (((panda$core$Bit) { !start1194.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1201 = (($fn1200) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1199);
    next1198 = $tmp1201;
    if (((panda$core$Bit) { !next1198.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1203 = (panda$core$MutableString*) malloc(40);
    $tmp1203->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1203->refCount.value = 1;
    panda$core$String* $tmp1206 = (($fn1205) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1198.value));
    panda$core$MutableString$init$panda$core$String($tmp1203, $tmp1206);
    name1202 = $tmp1203;
    $l1207:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1210 = (($fn1209) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1198 = $tmp1210;
        if (((panda$core$Bit) { !next1198.nonnull }).value) {
        {
            goto $l1208;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1202, &$s1211);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1214 = (($fn1213) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1212);
        next1198 = $tmp1214;
        if (((panda$core$Bit) { !next1198.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1216 = (($fn1215) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1198.value));
        panda$core$MutableString$append$panda$core$String(name1202, $tmp1216);
    }
    }
    $l1208:;
    org$pandalanguage$pandac$ASTNode* $tmp1217 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1217->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1217->refCount.value = 1;
    panda$core$String* $tmp1219 = panda$core$MutableString$convert$R$panda$core$String(name1202);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1217, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1194.value).offset, $tmp1219);
    return $tmp1217;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1220;
    org$pandalanguage$pandac$parser$Token$nullable id1224;
    panda$collections$Array* children1228;
    panda$collections$Array* idChildren1231;
    org$pandalanguage$pandac$ASTNode* t1236;
    org$pandalanguage$pandac$ASTNode* t1252;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1223 = (($fn1222) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1221);
    start1220 = $tmp1223;
    if (((panda$core$Bit) { !start1220.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1227 = (($fn1226) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1225);
    id1224 = $tmp1227;
    if (((panda$core$Bit) { !id1224.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1229 = (panda$collections$Array*) malloc(40);
    $tmp1229->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1229->refCount.value = 1;
    panda$collections$Array$init($tmp1229);
    children1228 = $tmp1229;
    panda$collections$Array* $tmp1232 = (panda$collections$Array*) malloc(40);
    $tmp1232->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1232->refCount.value = 1;
    panda$collections$Array$init($tmp1232);
    idChildren1231 = $tmp1232;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1235 = (($fn1234) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1235.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1238 = (($fn1237) self->$class->vtable[20])(self);
        t1236 = $tmp1238;
        if (((panda$core$Bit) { t1236 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1231, ((panda$core$Object*) t1236));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1239 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1239->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1239->refCount.value = 1;
    panda$core$String* $tmp1242 = (($fn1241) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1224.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1239, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1224.value).offset, ((panda$core$Object*) $tmp1242), ((panda$collections$ListView*) idChildren1231));
    panda$collections$Array$add$panda$collections$Array$T(children1228, ((panda$core$Object*) $tmp1239));
    $l1243:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1246 = (($fn1245) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1246.nonnull }).value) goto $l1244;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1249 = (($fn1248) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1247);
        id1224 = $tmp1249;
        if (((panda$core$Bit) { !id1224.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1231);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1251 = (($fn1250) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1251.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1254 = (($fn1253) self->$class->vtable[20])(self);
            t1252 = $tmp1254;
            if (((panda$core$Bit) { t1252 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1231, ((panda$core$Object*) t1252));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1255 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1255->refCount.value = 1;
        panda$core$String* $tmp1258 = (($fn1257) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1224.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1255, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1224.value).offset, ((panda$core$Object*) $tmp1258), ((panda$collections$ListView*) idChildren1231));
        panda$collections$Array$add$panda$collections$Array$T(children1228, ((panda$core$Object*) $tmp1255));
    }
    goto $l1243;
    $l1244:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1261 = (($fn1260) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1259);
    if (((panda$core$Bit) { !$tmp1261.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1262->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1262->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1262, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1220.value).offset, ((panda$collections$ListView*) children1228));
    return $tmp1262;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1264;
    panda$collections$Array* children1268;
    org$pandalanguage$pandac$ASTNode* t1271;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1267 = (($fn1266) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1265);
    start1264 = $tmp1267;
    if (((panda$core$Bit) { !start1264.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1269 = (panda$collections$Array*) malloc(40);
    $tmp1269->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1269->refCount.value = 1;
    panda$collections$Array$init($tmp1269);
    children1268 = $tmp1269;
    org$pandalanguage$pandac$ASTNode* $tmp1273 = (($fn1272) self->$class->vtable[20])(self);
    t1271 = $tmp1273;
    if (((panda$core$Bit) { t1271 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1268, ((panda$core$Object*) t1271));
    $l1274:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = (($fn1276) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1277.nonnull }).value) goto $l1275;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1279 = (($fn1278) self->$class->vtable[20])(self);
        t1271 = $tmp1279;
        if (((panda$core$Bit) { t1271 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1268, ((panda$core$Object*) t1271));
    }
    goto $l1274;
    $l1275:;
    org$pandalanguage$pandac$ASTNode* $tmp1280 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1280->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1280->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1280, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1264.value).offset, ((panda$collections$ListView*) children1268));
    return $tmp1280;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1282;
    org$pandalanguage$pandac$parser$Token$nullable next1287;
    panda$collections$Array* $tmp1283 = (panda$collections$Array*) malloc(40);
    $tmp1283->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1283->refCount.value = 1;
    panda$collections$Array$init($tmp1283);
    children1282 = $tmp1283;
    $l1285:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1289 = (($fn1288) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1287 = $tmp1289;
        if (((panda$core$Bit) { !next1287.nonnull }).value) {
        {
            goto $l1286;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1290 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1290->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1290->refCount.value = 1;
        panda$core$String* $tmp1293 = (($fn1292) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1287.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1290, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1287.value).offset, $tmp1293);
        panda$collections$Array$add$panda$collections$Array$T(children1282, ((panda$core$Object*) $tmp1290));
    }
    }
    $l1286:;
    org$pandalanguage$pandac$ASTNode* $tmp1294 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1294->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1294->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1294, ((panda$core$Int64) { 144 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) children1282));
    return $tmp1294;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1296;
    panda$core$MutableString* result1300;
    org$pandalanguage$pandac$parser$Token next1305;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1299 = (($fn1298) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1297);
    start1296 = $tmp1299;
    if (((panda$core$Bit) { !start1296.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1301 = (panda$core$MutableString*) malloc(40);
    $tmp1301->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1301->refCount.value = 1;
    panda$core$MutableString$init($tmp1301);
    result1300 = $tmp1301;
    $l1303:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1307 = (($fn1306) self->$class->vtable[3])(self);
        next1305 = $tmp1307;
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1305.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1308.value) {
        {
            goto $l1304;
        }
        }
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1305.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1309.value) {
        {
            (($fn1311) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1296.value), &$s1310);
            return NULL;
        }
        }
        panda$core$String* $tmp1313 = (($fn1312) self->$class->vtable[14])(self, next1305);
        panda$core$MutableString$append$panda$core$String(result1300, $tmp1313);
    }
    }
    $l1304:;
    org$pandalanguage$pandac$ASTNode* $tmp1314 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1314->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1314->refCount.value = 1;
    panda$core$String* $tmp1316 = panda$core$MutableString$convert$R$panda$core$String(result1300);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1314, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1296.value).offset, $tmp1316);
    return $tmp1314;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1317;
    org$pandalanguage$pandac$ASTNode* t1321;
    panda$collections$Array* children1324;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1320 = (($fn1319) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1318);
    id1317 = $tmp1320;
    if (((panda$core$Bit) { !id1317.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1323 = (($fn1322) self->$class->vtable[32])(self);
    t1321 = $tmp1323;
    if (((panda$core$Bit) { t1321 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1325 = (panda$collections$Array*) malloc(40);
    $tmp1325->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1325->refCount.value = 1;
    panda$collections$Array$init($tmp1325);
    children1324 = $tmp1325;
    panda$collections$Array$add$panda$collections$Array$T(children1324, ((panda$core$Object*) t1321));
    org$pandalanguage$pandac$ASTNode* $tmp1327 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1327->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1327->refCount.value = 1;
    panda$core$String* $tmp1330 = (($fn1329) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1317.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1327, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1317.value).offset, ((panda$core$Object*) $tmp1330), ((panda$collections$ListView*) children1324));
    return $tmp1327;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1331;
    panda$collections$Array* children1335;
    org$pandalanguage$pandac$ASTNode* param1340;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1334 = (($fn1333) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1332);
    start1331 = $tmp1334;
    if (((panda$core$Bit) { !start1331.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1336 = (panda$collections$Array*) malloc(40);
    $tmp1336->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1336->refCount.value = 1;
    panda$collections$Array$init($tmp1336);
    children1335 = $tmp1336;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1339 = (($fn1338) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1339.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1342 = (($fn1341) self->$class->vtable[58])(self);
        param1340 = $tmp1342;
        if (((panda$core$Bit) { param1340 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1335, ((panda$core$Object*) param1340));
        $l1343:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1346 = (($fn1345) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1346.nonnull }).value) goto $l1344;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1348 = (($fn1347) self->$class->vtable[58])(self);
            param1340 = $tmp1348;
            if (((panda$core$Bit) { param1340 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1335, ((panda$core$Object*) param1340));
        }
        goto $l1343;
        $l1344:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1351 = (($fn1350) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1349);
        if (((panda$core$Bit) { !$tmp1351.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1352 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1352->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1352->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1352, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1331.value).offset, ((panda$collections$ListView*) children1335));
    return $tmp1352;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1354;
    org$pandalanguage$pandac$parser$Token$nullable start1355;
    panda$core$String* name1361;
    panda$collections$Array* children1364;
    org$pandalanguage$pandac$ASTNode* params1367;
    org$pandalanguage$pandac$ASTNode* returnType1373;
    org$pandalanguage$pandac$ASTNode* b1381;
    org$pandalanguage$pandac$parser$Token token1386;
    panda$core$String* tokenText1389;
    org$pandalanguage$pandac$ASTNode* post1403;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1357 = (($fn1356) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1355 = $tmp1357;
    if (((panda$core$Bit) { !start1355.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1360 = (($fn1359) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1358);
        start1355 = $tmp1360;
        if (((panda$core$Bit) { !start1355.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1354 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1354 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1363 = (($fn1362) self->$class->vtable[19])(self);
    name1361 = $tmp1363;
    if (((panda$core$Bit) { name1361 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1365 = (panda$collections$Array*) malloc(40);
    $tmp1365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1365->refCount.value = 1;
    panda$collections$Array$init($tmp1365);
    children1364 = $tmp1365;
    panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1369 = (($fn1368) self->$class->vtable[59])(self);
    params1367 = $tmp1369;
    if (((panda$core$Bit) { params1367 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) params1367));
    org$pandalanguage$pandac$parser$Token $tmp1371 = (($fn1370) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1371.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1372.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = (($fn1374) self->$class->vtable[32])(self);
        returnType1373 = $tmp1375;
        if (((panda$core$Bit) { returnType1373 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) returnType1373));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1376 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1376->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1376->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1376, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) $tmp1376));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1379 = (($fn1378) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1379.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1380.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1383 = (($fn1382) self->$class->vtable[41])(self);
        b1381 = $tmp1383;
        if (((panda$core$Bit) { b1381 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) b1381));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1384 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1384->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1384->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1384, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) $tmp1384));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1388 = (($fn1387) self->$class->vtable[6])(self);
    token1386 = $tmp1388;
    panda$core$String* $tmp1391 = (($fn1390) self->$class->vtable[14])(self, token1386);
    tokenText1389 = $tmp1391;
    panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1386.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1392 = $tmp1393.value;
    if (!$tmp1392) goto $l1394;
    panda$core$Bit $tmp1397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1389, &$s1396);
    bool $tmp1395 = $tmp1397.value;
    if ($tmp1395) goto $l1398;
    panda$core$Bit $tmp1400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1389, &$s1399);
    $tmp1395 = $tmp1400.value;
    $l1398:;
    panda$core$Bit $tmp1401 = { $tmp1395 };
    $tmp1392 = $tmp1401.value;
    $l1394:;
    panda$core$Bit $tmp1402 = { $tmp1392 };
    if ($tmp1402.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1405 = (($fn1404) self->$class->vtable[60])(self);
        post1403 = $tmp1405;
        if (((panda$core$Bit) { post1403 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) post1403));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1406 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1406->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1406->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1406, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1364, ((panda$core$Object*) $tmp1406));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1408 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1408->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1408->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1408, kind1354, ((org$pandalanguage$pandac$parser$Token) start1355.value).offset, ((panda$core$Object*) name1361), ((panda$collections$ListView*) children1364));
    return $tmp1408;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1410;
    panda$collections$Array* children1414;
    org$pandalanguage$pandac$ASTNode* params1417;
    org$pandalanguage$pandac$ASTNode* b1420;
    org$pandalanguage$pandac$parser$Token token1423;
    panda$core$String* tokenText1426;
    org$pandalanguage$pandac$ASTNode* post1440;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1413 = (($fn1412) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1411);
    start1410 = $tmp1413;
    if (((panda$core$Bit) { !start1410.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1415 = (panda$collections$Array*) malloc(40);
    $tmp1415->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1415->refCount.value = 1;
    panda$collections$Array$init($tmp1415);
    children1414 = $tmp1415;
    panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1419 = (($fn1418) self->$class->vtable[59])(self);
    params1417 = $tmp1419;
    if (((panda$core$Bit) { params1417 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) params1417));
    org$pandalanguage$pandac$ASTNode* $tmp1422 = (($fn1421) self->$class->vtable[41])(self);
    b1420 = $tmp1422;
    if (((panda$core$Bit) { b1420 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) b1420));
    org$pandalanguage$pandac$parser$Token $tmp1425 = (($fn1424) self->$class->vtable[6])(self);
    token1423 = $tmp1425;
    panda$core$String* $tmp1428 = (($fn1427) self->$class->vtable[14])(self, token1423);
    tokenText1426 = $tmp1428;
    panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1423.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1429 = $tmp1430.value;
    if (!$tmp1429) goto $l1431;
    panda$core$Bit $tmp1434 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1426, &$s1433);
    bool $tmp1432 = $tmp1434.value;
    if ($tmp1432) goto $l1435;
    panda$core$Bit $tmp1437 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1426, &$s1436);
    $tmp1432 = $tmp1437.value;
    $l1435:;
    panda$core$Bit $tmp1438 = { $tmp1432 };
    $tmp1429 = $tmp1438.value;
    $l1431:;
    panda$core$Bit $tmp1439 = { $tmp1429 };
    if ($tmp1439.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1442 = (($fn1441) self->$class->vtable[60])(self);
        post1440 = $tmp1442;
        if (((panda$core$Bit) { post1440 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) post1440));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1443 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1443->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1443->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1443, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1414, ((panda$core$Object*) $tmp1443));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1445 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1445->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1445->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1445, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1410.value).offset, ((panda$collections$ListView*) children1414));
    return $tmp1445;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1447;
    panda$collections$Array* children1450;
    org$pandalanguage$pandac$ASTNode* $tmp1449 = (($fn1448) self->$class->vtable[44])(self);
    decl1447 = $tmp1449;
    if (((panda$core$Bit) { decl1447 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1451 = (panda$collections$Array*) malloc(40);
    $tmp1451->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1451->refCount.value = 1;
    panda$collections$Array$init($tmp1451);
    children1450 = $tmp1451;
    panda$collections$Array$add$panda$collections$Array$T(children1450, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1450, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1450, ((panda$core$Object*) decl1447));
    org$pandalanguage$pandac$ASTNode* $tmp1453 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1453->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1453, ((panda$core$Int64) { 148 }), decl1447->offset, ((panda$collections$ListView*) children1450));
    return $tmp1453;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1455;
    org$pandalanguage$pandac$ASTNode* dc1458;
    org$pandalanguage$pandac$ASTNode* a1464;
    org$pandalanguage$pandac$parser$Token $tmp1457 = (($fn1456) self->$class->vtable[6])(self);
    start1455 = $tmp1457;
    panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1455.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1459.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1461 = (($fn1460) self->$class->vtable[57])(self);
        dc1458 = $tmp1461;
        if (((panda$core$Bit) { dc1458 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1462 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1462->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1462->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1462, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        dc1458 = $tmp1462;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1466 = (($fn1465) self->$class->vtable[56])(self);
    a1464 = $tmp1466;
    if (((panda$core$Bit) { a1464 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1468 = (($fn1467) self->$class->vtable[6])(self);
    switch ($tmp1468.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1470 = (($fn1469) self->$class->vtable[65])(self, dc1458, a1464);
            return $tmp1470;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1472 = (($fn1471) self->$class->vtable[66])(self, dc1458, a1464);
            return $tmp1472;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1474 = (($fn1473) self->$class->vtable[61])(self, dc1458, a1464);
            return $tmp1474;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1476 = (($fn1475) self->$class->vtable[62])(self, dc1458, a1464);
            return $tmp1476;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1478 = (($fn1477) self->$class->vtable[63])(self, dc1458, a1464);
            return $tmp1478;
        }
        break;
        default:
        {
            (($fn1480) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1479);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1481;
    org$pandalanguage$pandac$parser$Token$nullable start1484;
    org$pandalanguage$pandac$parser$Token$nullable name1488;
    org$pandalanguage$pandac$ASTNode* generics1495;
    org$pandalanguage$pandac$ASTNode* stypes1503;
    panda$collections$Array* members1511;
    org$pandalanguage$pandac$ASTNode* member1518;
    panda$collections$Array* $tmp1482 = (panda$collections$Array*) malloc(40);
    $tmp1482->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1482->refCount.value = 1;
    panda$collections$Array$init($tmp1482);
    children1481 = $tmp1482;
    panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1487 = (($fn1486) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1485);
    start1484 = $tmp1487;
    if (((panda$core$Bit) { !start1484.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1491 = (($fn1490) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1489);
    name1488 = $tmp1491;
    if (((panda$core$Bit) { !name1488.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1493 = (($fn1492) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1493.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1494.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1497 = (($fn1496) self->$class->vtable[54])(self);
        generics1495 = $tmp1497;
        if (((panda$core$Bit) { generics1495 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) generics1495));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1498 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1498->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1498->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1498, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1498));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1501 = (($fn1500) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1501.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1502.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1505 = (($fn1504) self->$class->vtable[55])(self);
        stypes1503 = $tmp1505;
        if (((panda$core$Bit) { stypes1503 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) stypes1503));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1506 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1506->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1506, ((panda$core$Int64) { 139 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1506));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = (($fn1509) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1508);
    if (((panda$core$Bit) { !$tmp1510.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1512 = (panda$collections$Array*) malloc(40);
    $tmp1512->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1512->refCount.value = 1;
    panda$collections$Array$init($tmp1512);
    members1511 = $tmp1512;
    $l1514:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1517 = (($fn1516) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1517.nonnull }).value) goto $l1515;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1520 = (($fn1519) self->$class->vtable[64])(self);
        member1518 = $tmp1520;
        if (((panda$core$Bit) { member1518 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1511, ((panda$core$Object*) member1518));
    }
    goto $l1514;
    $l1515:;
    org$pandalanguage$pandac$ASTNode* $tmp1521 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1521->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1521->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1521, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1484.value).offset, ((panda$collections$ListView*) members1511));
    panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1521));
    org$pandalanguage$pandac$ASTNode* $tmp1523 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1523->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1523->refCount.value = 1;
    panda$core$String* $tmp1526 = (($fn1525) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1488.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1523, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1484.value).offset, ((panda$core$Object*) $tmp1526), ((panda$collections$ListView*) children1481));
    return $tmp1523;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1527;
    org$pandalanguage$pandac$parser$Token$nullable start1530;
    org$pandalanguage$pandac$parser$Token$nullable name1534;
    org$pandalanguage$pandac$ASTNode* generics1541;
    panda$collections$Array* intfs1546;
    org$pandalanguage$pandac$ASTNode* t1551;
    panda$collections$Array* members1565;
    org$pandalanguage$pandac$ASTNode* member1572;
    panda$collections$Array* $tmp1528 = (panda$collections$Array*) malloc(40);
    $tmp1528->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1528->refCount.value = 1;
    panda$collections$Array$init($tmp1528);
    children1527 = $tmp1528;
    panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1533 = (($fn1532) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1531);
    start1530 = $tmp1533;
    if (((panda$core$Bit) { !start1530.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1537 = (($fn1536) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1535);
    name1534 = $tmp1537;
    if (((panda$core$Bit) { !name1534.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1539 = (($fn1538) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1539.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1540.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1543 = (($fn1542) self->$class->vtable[54])(self);
        generics1541 = $tmp1543;
        if (((panda$core$Bit) { generics1541 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) generics1541));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1544 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1544->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1544->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1544, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) $tmp1544));
    }
    }
    panda$collections$Array* $tmp1547 = (panda$collections$Array*) malloc(40);
    $tmp1547->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1547->refCount.value = 1;
    panda$collections$Array$init($tmp1547);
    intfs1546 = $tmp1547;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1550 = (($fn1549) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1550.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1553 = (($fn1552) self->$class->vtable[20])(self);
        t1551 = $tmp1553;
        if (((panda$core$Bit) { t1551 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1546, ((panda$core$Object*) t1551));
        $l1554:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1557 = (($fn1556) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1557.nonnull }).value) goto $l1555;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1559 = (($fn1558) self->$class->vtable[20])(self);
            t1551 = $tmp1559;
            if (((panda$core$Bit) { t1551 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1546, ((panda$core$Object*) t1551));
        }
        goto $l1554;
        $l1555:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1560 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1560->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1560->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1560, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1530.value).offset, ((panda$collections$ListView*) intfs1546));
    panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) $tmp1560));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1564 = (($fn1563) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1562);
    if (((panda$core$Bit) { !$tmp1564.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1566 = (panda$collections$Array*) malloc(40);
    $tmp1566->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1566->refCount.value = 1;
    panda$collections$Array$init($tmp1566);
    members1565 = $tmp1566;
    $l1568:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1571 = (($fn1570) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1571.nonnull }).value) goto $l1569;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1574 = (($fn1573) self->$class->vtable[64])(self);
        member1572 = $tmp1574;
        if (((panda$core$Bit) { member1572 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1565, ((panda$core$Object*) member1572));
    }
    goto $l1568;
    $l1569:;
    org$pandalanguage$pandac$ASTNode* $tmp1575 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1575->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1575->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1575, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1530.value).offset, ((panda$collections$ListView*) members1565));
    panda$collections$Array$add$panda$collections$Array$T(children1527, ((panda$core$Object*) $tmp1575));
    org$pandalanguage$pandac$ASTNode* $tmp1577 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1577->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1577->refCount.value = 1;
    panda$core$String* $tmp1580 = (($fn1579) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1534.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1577, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1530.value).offset, ((panda$core$Object*) $tmp1580), ((panda$collections$ListView*) children1527));
    return $tmp1577;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1582 = (($fn1581) self->$class->vtable[6])(self);
    switch ($tmp1582.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1584 = (($fn1583) self->$class->vtable[53])(self);
            return $tmp1584;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1586 = (($fn1585) self->$class->vtable[52])(self);
            return $tmp1586;
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
            org$pandalanguage$pandac$ASTNode* $tmp1588 = (($fn1587) self->$class->vtable[64])(self);
            return $tmp1588;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1590 = (($fn1589) self->$class->vtable[51])(self);
            return $tmp1590;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1591;
    org$pandalanguage$pandac$ASTNode* entry1599;
    panda$collections$Array* $tmp1592 = (panda$collections$Array*) malloc(40);
    $tmp1592->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1592->refCount.value = 1;
    panda$collections$Array$init($tmp1592);
    entries1591 = $tmp1592;
    $l1594:;
    org$pandalanguage$pandac$parser$Token $tmp1597 = (($fn1596) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1598 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1597.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1598.value) goto $l1595;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1601 = (($fn1600) self->$class->vtable[67])(self);
        entry1599 = $tmp1601;
        if (((panda$core$Bit) { entry1599 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1602 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1602.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1591, ((panda$core$Object*) entry1599));
    }
    goto $l1594;
    $l1595:;
    org$pandalanguage$pandac$ASTNode* $tmp1603 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1603->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1603->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1603, ((panda$core$Int64) { 152 }), ((panda$core$Int64) { 0 }), ((panda$collections$ListView*) entries1591));
    return $tmp1603;
}

