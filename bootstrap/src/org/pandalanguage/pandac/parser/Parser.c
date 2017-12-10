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
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
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
typedef org$pandalanguage$pandac$ASTNode* (*$fn191)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn193)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn196)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn201)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn206)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn219)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn225)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn252)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn256)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn260)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn264)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn270)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn273)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn279)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn291)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn292)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn295)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn298)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn306)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn314)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn316)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn319)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn323)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn326)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn328)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn333)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn338)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn339)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn343)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn348)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn352)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn356)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn359)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn365)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn369)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn370)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn375)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn377)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn380)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn382)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn384)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn387)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn389)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn394)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn395)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn403)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn408)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn413)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn416)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn420)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn422)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn425)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn433)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn436)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn441)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn444)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn452)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn459)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn466)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn467)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn474)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn476)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn479)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn481)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn483)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn486)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn488)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn492)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn494)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn498)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn499)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn501)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn506)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn509)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn517)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn520)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn527)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn528)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn531)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn536)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn539)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn547)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn551)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn558)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn559)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn560)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn562)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn567)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn570)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn577)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn579)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn584)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn587)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn590)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn602)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn608)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn610)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn622)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn624)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn629)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn632)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn639)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn641)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn646)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn649)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn656)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn658)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn663)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn666)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn675)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn678)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn684)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn686)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn688)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn692)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn695)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn700)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn702)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn706)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn708)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn712)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn719)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn723)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn727)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn730)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn733)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn736)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn739)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn748)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn751)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn754)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn763)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn766)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn769)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn772)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn781)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn784)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn793)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn796)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn801)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn804)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn810)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn816)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn820)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn822)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn830)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn834)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn837)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn840)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn846)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn852)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn855)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn860)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn863)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn866)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn869)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn876)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn879)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn882)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn886)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn889)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn895)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn897)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn903)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn910)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn912)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn914)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn917)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn920)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn925)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn927)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn930)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn933)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn940)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn943)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn945)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn948)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn959)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn961)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn964)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn969)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn972)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn974)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn979)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn983)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn988)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn992)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn995)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1001)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1004)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1011)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1013)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1016)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1020)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1022)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1025)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1031)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1034)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1038)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1044)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1047)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1051)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1057)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1059)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1067)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1071)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1073)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1075)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1077)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1079)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1081)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1083)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1085)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1087)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1090)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1091)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1093)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1095)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1097)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1099)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1101)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1103)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1105)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1107)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1110)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1112)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1116)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1118)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1119)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1121)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1123)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1125)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1128)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1131)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1135)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1140)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1144)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1148)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1150)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1157)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1161)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1166)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1170)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1174)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1176)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1183)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1187)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1195)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1198)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1202)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1206)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1209)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1211)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1214)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1218)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1221)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1227)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1233)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1237)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1239)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1249)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1253)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1260)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1268)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1273)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1274)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1281)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1284)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1291)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1295)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1300)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1303)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1307)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1309)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1312)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1318)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1321)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1324)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1330)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1332)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1336)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1341)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1345)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1351)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1354)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1368)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1377)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1383)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1386)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1389)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1392)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1406)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1414)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1422)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1426)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1432)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1434)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1436)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1438)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1440)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1442)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1444)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1447)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1453)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1457)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1459)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1463)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1468)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1472)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1478)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1485)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1488)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1494)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1501)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1505)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1507)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1511)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1519)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1522)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1526)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1528)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1533)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1540)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1543)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1549)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1551)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1553)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1555)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1557)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1559)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1566)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1570)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, NULL };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, NULL };

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
    panda$collections$Array$clear(self->speculativeBuffer);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp71;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp72 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
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
        panda$core$Object* $tmp92 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->speculativeBuffer, i74);
        panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp92)->value)));
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
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp109, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children106));
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
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp197;
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
    panda$core$MutableString* $tmp128 = (panda$core$MutableString*) malloc(40);
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
                            org$pandalanguage$pandac$ASTNode* $tmp188 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                            $tmp188->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp188->refCount.value = 1;
                            panda$core$String* $tmp190 = panda$core$MutableString$convert$R$panda$core$String(chunk127);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp188, ((panda$core$Int64) { 113 }), start111.position, $tmp190);
                            org$pandalanguage$pandac$ASTNode* $tmp192 = (($fn191) self->$class->vtable[14])(self, result126, $tmp188);
                            result126 = $tmp192;
                            panda$core$MutableString$clear(chunk127);
                            org$pandalanguage$pandac$ASTNode* $tmp194 = (($fn193) self->$class->vtable[14])(self, result126, expr182);
                            result126 = $tmp194;
                        }
                    }
                    }
                    else {
                    {
                        (($fn196) self->$class->vtable[9])(self, token132, &$s195);
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
                panda$core$String$Index $tmp198 = panda$core$String$start$R$panda$core$String$Index(escapeText151);
                panda$core$String$Index $tmp199 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText151, $tmp198);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp197, ((panda$core$String$Index$nullable) { $tmp199, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp200 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText151, $tmp197);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp200);
            }
            break;
            default:
            {
                panda$core$String* $tmp202 = (($fn201) self->$class->vtable[13])(self, token132);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp202);
            }
        }
    }
    }
    $l131:;
    org$pandalanguage$pandac$ASTNode* $tmp203 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp203->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp203->refCount.value = 1;
    panda$core$String* $tmp205 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp203, ((panda$core$Int64) { 113 }), start111.position, $tmp205);
    org$pandalanguage$pandac$ASTNode* $tmp207 = (($fn206) self->$class->vtable[14])(self, result126, $tmp203);
    return $tmp207;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result208;
    panda$collections$Iterator* c$Iter209;
    panda$core$Char8 c222;
    panda$core$UInt64 i228;
    result208 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp210 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp211 = ((panda$collections$Iterable*) $tmp210)->$class->itable;
        while ($tmp211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp211 = $tmp211->next;
        }
        $fn213 $tmp212 = $tmp211->methods[0];
        panda$collections$Iterator* $tmp214 = $tmp212(((panda$collections$Iterable*) $tmp210));
        c$Iter209 = $tmp214;
        $l215:;
        ITable* $tmp217 = c$Iter209->$class->itable;
        while ($tmp217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp217 = $tmp217->next;
        }
        $fn219 $tmp218 = $tmp217->methods[0];
        panda$core$Bit $tmp220 = $tmp218(c$Iter209);
        panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
        if (!$tmp221.value) goto $l216;
        {
            ITable* $tmp223 = c$Iter209->$class->itable;
            while ($tmp223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp223 = $tmp223->next;
            }
            $fn225 $tmp224 = $tmp223->methods[1];
            panda$core$Object* $tmp226 = $tmp224(c$Iter209);
            c222 = ((panda$core$Char8$wrapper*) $tmp226)->value;
            panda$core$UInt64 $tmp227 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result208, p_base);
            result208 = $tmp227;
            panda$core$UInt64 $tmp229 = panda$core$Char8$convert$R$panda$core$UInt64(c222);
            i228 = $tmp229;
            panda$core$Bit $tmp231 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 48 }));
            bool $tmp230 = $tmp231.value;
            if (!$tmp230) goto $l232;
            panda$core$Bit $tmp233 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 57 }));
            $tmp230 = $tmp233.value;
            $l232:;
            panda$core$Bit $tmp234 = { $tmp230 };
            if ($tmp234.value) {
            {
                panda$core$UInt64 $tmp235 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i228, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp236 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result208, $tmp235);
                result208 = $tmp236;
            }
            }
            else {
            panda$core$Bit $tmp238 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 65 }));
            bool $tmp237 = $tmp238.value;
            if (!$tmp237) goto $l239;
            panda$core$Bit $tmp240 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 70 }));
            $tmp237 = $tmp240.value;
            $l239:;
            panda$core$Bit $tmp241 = { $tmp237 };
            if ($tmp241.value) {
            {
                panda$core$UInt64 $tmp242 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i228, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp243 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result208, $tmp242);
                result208 = $tmp243;
            }
            }
            else {
            {
                panda$core$Bit $tmp245 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 97 }));
                bool $tmp244 = $tmp245.value;
                if (!$tmp244) goto $l246;
                panda$core$Bit $tmp247 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i228, ((panda$core$UInt64) { 102 }));
                $tmp244 = $tmp247.value;
                $l246:;
                panda$core$Bit $tmp248 = { $tmp244 };
                PANDA_ASSERT($tmp248.value);
                panda$core$UInt64 $tmp249 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i228, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp250 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result208, $tmp249);
                result208 = $tmp250;
            }
            }
            }
        }
        goto $l215;
        $l216:;
    }
    return result208;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t251;
    panda$core$String* s263;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp268;
    panda$core$String* s272;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp277;
    org$pandalanguage$pandac$ASTNode* result294;
    org$pandalanguage$pandac$parser$Token $tmp253 = (($fn252) self->$class->vtable[4])(self);
    t251 = $tmp253;
    switch (t251.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp254 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp254->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp254->refCount.value = 1;
            panda$core$String* $tmp257 = (($fn256) self->$class->vtable[13])(self, t251);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp254, ((panda$core$Int64) { 106 }), t251.position, $tmp257);
            return $tmp254;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp258->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp258->refCount.value = 1;
            panda$core$String* $tmp261 = (($fn260) self->$class->vtable[13])(self, t251);
            panda$core$UInt64$nullable $tmp262 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp261);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp258, ((panda$core$Int64) { 102 }), t251.position, ((panda$core$UInt64) $tmp262.value));
            return $tmp258;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp265 = (($fn264) self->$class->vtable[13])(self, t251);
            s263 = $tmp265;
            org$pandalanguage$pandac$ASTNode* $tmp266 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp266->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp266->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp268, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp269 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s263, $tmp268);
            panda$core$UInt64 $tmp271 = (($fn270) self->$class->vtable[16])(self, $tmp269, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp266, ((panda$core$Int64) { 102 }), t251.position, $tmp271);
            return $tmp266;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp274 = (($fn273) self->$class->vtable[13])(self, t251);
            s272 = $tmp274;
            org$pandalanguage$pandac$ASTNode* $tmp275 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp275->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp275->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp277, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp278 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s272, $tmp277);
            panda$core$UInt64 $tmp280 = (($fn279) self->$class->vtable[16])(self, $tmp278, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp275, ((panda$core$Int64) { 102 }), t251.position, $tmp280);
            return $tmp275;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp281 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp281->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp281, ((panda$core$Int64) { 114 }), t251.position);
            return $tmp281;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp283 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp283->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp283->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp283, ((panda$core$Int64) { 115 }), t251.position);
            return $tmp283;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp285 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp285->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp285->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp285, ((panda$core$Int64) { 117 }), t251.position);
            return $tmp285;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp287 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp287->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp287->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp287, ((panda$core$Int64) { 116 }), t251.position, ((panda$core$Bit) { true }));
            return $tmp287;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp289 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp289->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp289->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp289, ((panda$core$Int64) { 116 }), t251.position, ((panda$core$Bit) { false }));
            return $tmp289;
        }
        break;
        case 7:
        case 6:
        {
            (($fn291) self->$class->vtable[5])(self, t251);
            org$pandalanguage$pandac$ASTNode* $tmp293 = (($fn292) self->$class->vtable[15])(self);
            return $tmp293;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp296 = (($fn295) self->$class->vtable[29])(self);
            result294 = $tmp296;
            if (((panda$core$Bit) { result294 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp299 = (($fn298) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s297);
            if (((panda$core$Bit) { !$tmp299.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result294;
        }
        break;
        default:
        {
            panda$core$String* $tmp302 = (($fn301) self->$class->vtable[13])(self, t251);
            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp302);
            panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s304);
            (($fn306) self->$class->vtable[9])(self, t251, $tmp305);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result307;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp309 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp308));
            result307 = $tmp309;
            if (((panda$core$Bit) { result307 != NULL }).value) {
            {
                panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s310, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result307, $tmp311);
                result307 = $tmp312;
            }
            }
            return result307;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name313;
    org$pandalanguage$pandac$parser$Token token318;
    org$pandalanguage$pandac$parser$Token $tmp315 = (($fn314) self->$class->vtable[4])(self);
    name313 = $tmp315;
    switch (name313.kind.value) {
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
            panda$core$String* $tmp317 = (($fn316) self->$class->vtable[13])(self, name313);
            return $tmp317;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp320 = (($fn319) self->$class->vtable[3])(self);
            token318 = $tmp320;
            panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token318.kind, ((panda$core$Int64) { 63 }));
            if ($tmp321.value) {
            {
                return &$s322;
            }
            }
            else {
            {
                (($fn323) self->$class->vtable[5])(self, token318);
                return &$s324;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp327 = (($fn326) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s325);
            if (((panda$core$Bit) { !$tmp327.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp329 = (($fn328) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp329.nonnull }).value) {
            {
                return &$s330;
            }
            }
            return &$s331;
        }
        break;
        default:
        {
            panda$core$String* $tmp334 = (($fn333) self->$class->vtable[13])(self, name313);
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s332, $tmp334);
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
            (($fn338) self->$class->vtable[9])(self, name313, $tmp337);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp340 = (($fn339) self->$class->vtable[20])(self, ((panda$core$Bit) { true }));
    return $tmp340;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start341;
    panda$core$MutableString* name345;
    org$pandalanguage$pandac$parser$Token$nullable id354;
    org$pandalanguage$pandac$ASTNode* result361;
    panda$collections$Array* children371;
    org$pandalanguage$pandac$ASTNode* t374;
    panda$collections$Array* children397;
    org$pandalanguage$pandac$parser$Token$nullable $tmp344 = (($fn343) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s342);
    start341 = $tmp344;
    if (((panda$core$Bit) { !start341.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp346 = (panda$core$MutableString*) malloc(40);
    $tmp346->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp346->refCount.value = 1;
    panda$core$String* $tmp349 = (($fn348) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start341.value));
    panda$core$MutableString$init$panda$core$String($tmp346, $tmp349);
    name345 = $tmp346;
    $l350:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp353 = (($fn352) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp353.nonnull }).value) goto $l351;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp357 = (($fn356) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s355);
        id354 = $tmp357;
        if (((panda$core$Bit) { !id354.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name345, &$s358);
        panda$core$String* $tmp360 = (($fn359) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id354.value));
        panda$core$MutableString$append$panda$core$String(name345, $tmp360);
    }
    goto $l350;
    $l351:;
    org$pandalanguage$pandac$ASTNode* $tmp362 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp362->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp362->refCount.value = 1;
    panda$core$String* $tmp364 = panda$core$MutableString$convert$R$panda$core$String(name345);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp362, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start341.value).position, $tmp364);
    result361 = $tmp362;
    org$pandalanguage$pandac$parser$Token $tmp366 = (($fn365) self->$class->vtable[6])(self);
    panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp366.kind, ((panda$core$Int64) { 62 }));
    if ($tmp367.value) {
    {
        panda$core$MutableString$append$panda$core$String(name345, &$s368);
        if (p_needSpeculativeParse.value) {
        {
            (($fn369) self->$class->vtable[10])(self);
        }
        }
        (($fn370) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp372 = (panda$collections$Array*) malloc(40);
        $tmp372->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp372->refCount.value = 1;
        panda$collections$Array$init($tmp372);
        children371 = $tmp372;
        panda$collections$Array$add$panda$collections$Array$T(children371, ((panda$core$Object*) result361));
        org$pandalanguage$pandac$ASTNode* $tmp376 = (($fn375) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
        t374 = $tmp376;
        if (((panda$core$Bit) { t374 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn377) self->$class->vtable[12])(self);
                return result361;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children371, ((panda$core$Object*) t374));
        panda$core$MutableString$append$panda$core$Object(name345, ((panda$core$Object*) t374));
        $l378:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp381 = (($fn380) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp381.nonnull }).value) goto $l379;
        {
            org$pandalanguage$pandac$ASTNode* $tmp383 = (($fn382) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
            t374 = $tmp383;
            if (((panda$core$Bit) { t374 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn384) self->$class->vtable[12])(self);
                    return result361;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children371, ((panda$core$Object*) t374));
            panda$core$MutableString$append$panda$core$String(name345, &$s385);
            panda$core$MutableString$append$panda$core$Object(name345, ((panda$core$Object*) t374));
        }
        goto $l378;
        $l379:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp388 = (($fn387) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s386);
        if (((panda$core$Bit) { !$tmp388.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn389) self->$class->vtable[12])(self);
                return result361;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name345, &$s390);
        org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp391->refCount.value = 1;
        panda$core$String* $tmp393 = panda$core$MutableString$finish$R$panda$core$String(name345);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp391, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start341.value).position, ((panda$core$Object*) $tmp393), ((panda$collections$ListView*) children371));
        result361 = $tmp391;
        (($fn394) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp396 = (($fn395) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp396.nonnull }).value) {
    {
        panda$collections$Array* $tmp398 = (panda$collections$Array*) malloc(40);
        $tmp398->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp398->refCount.value = 1;
        panda$collections$Array$init($tmp398);
        children397 = $tmp398;
        panda$collections$Array$add$panda$collections$Array$T(children397, ((panda$core$Object*) result361));
        org$pandalanguage$pandac$ASTNode* $tmp400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp400->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp400, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start341.value).position, ((panda$collections$ListView*) children397));
        result361 = $tmp400;
    }
    }
    return result361;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result402;
    org$pandalanguage$pandac$parser$Token token407;
    panda$collections$Array* children410;
    org$pandalanguage$pandac$ASTNode* expr415;
    panda$collections$Array* children429;
    org$pandalanguage$pandac$ASTNode* expr432;
    panda$core$String* name440;
    panda$collections$Array* children446;
    org$pandalanguage$pandac$ASTNode* target451;
    panda$collections$Array* children454;
    panda$core$String* name460;
    panda$core$MutableString* finalName462;
    panda$collections$Array* types468;
    org$pandalanguage$pandac$ASTNode* t473;
    panda$core$Bit shouldAccept490;
    org$pandalanguage$pandac$ASTNode* $tmp404 = (($fn403) self->$class->vtable[17])(self);
    result402 = $tmp404;
    if (((panda$core$Bit) { result402 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l405:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp409 = (($fn408) self->$class->vtable[4])(self);
        token407 = $tmp409;
        switch (token407.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp411 = (panda$collections$Array*) malloc(40);
                $tmp411->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp411->refCount.value = 1;
                panda$collections$Array$init($tmp411);
                children410 = $tmp411;
                panda$collections$Array$add$panda$collections$Array$T(children410, ((panda$core$Object*) result402));
                org$pandalanguage$pandac$parser$Token$nullable $tmp414 = (($fn413) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp414.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp417 = (($fn416) self->$class->vtable[29])(self);
                    expr415 = $tmp417;
                    if (((panda$core$Bit) { expr415 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children410, ((panda$core$Object*) expr415));
                    $l418:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp421 = (($fn420) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp421.nonnull }).value) goto $l419;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp423 = (($fn422) self->$class->vtable[29])(self);
                        expr415 = $tmp423;
                        if (((panda$core$Bit) { expr415 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children410, ((panda$core$Object*) expr415));
                    }
                    goto $l418;
                    $l419:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp426 = (($fn425) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s424);
                    if (((panda$core$Bit) { !$tmp426.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp427 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp427->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp427->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp427, ((panda$core$Int64) { 107 }), token407.position, ((panda$collections$ListView*) children410));
                result402 = $tmp427;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp430 = (panda$collections$Array*) malloc(40);
                $tmp430->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp430->refCount.value = 1;
                panda$collections$Array$init($tmp430);
                children429 = $tmp430;
                panda$collections$Array$add$panda$collections$Array$T(children429, ((panda$core$Object*) result402));
                org$pandalanguage$pandac$ASTNode* $tmp434 = (($fn433) self->$class->vtable[29])(self);
                expr432 = $tmp434;
                if (((panda$core$Bit) { expr432 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children429, ((panda$core$Object*) expr432));
                org$pandalanguage$pandac$parser$Token$nullable $tmp437 = (($fn436) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s435);
                if (((panda$core$Bit) { !$tmp437.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp438 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp438->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp438->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp438, ((panda$core$Int64) { 103 }), token407.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children429));
                result402 = $tmp438;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp442 = (($fn441) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp442.nonnull }).value) {
                {
                    name440 = &$s443;
                }
                }
                else {
                {
                    panda$core$String* $tmp445 = (($fn444) self->$class->vtable[18])(self);
                    name440 = $tmp445;
                    if (((panda$core$Bit) { name440 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp447 = (panda$collections$Array*) malloc(40);
                $tmp447->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp447->refCount.value = 1;
                panda$collections$Array$init($tmp447);
                children446 = $tmp447;
                panda$collections$Array$add$panda$collections$Array$T(children446, ((panda$core$Object*) result402));
                org$pandalanguage$pandac$ASTNode* $tmp449 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp449->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp449->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp449, ((panda$core$Int64) { 108 }), token407.position, ((panda$core$Object*) name440), ((panda$collections$ListView*) children446));
                result402 = $tmp449;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp453 = (($fn452) self->$class->vtable[19])(self);
                target451 = $tmp453;
                if (((panda$core$Bit) { target451 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp455 = (panda$collections$Array*) malloc(40);
                $tmp455->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp455->refCount.value = 1;
                panda$collections$Array$init($tmp455);
                children454 = $tmp455;
                panda$collections$Array$add$panda$collections$Array$T(children454, ((panda$core$Object*) result402));
                panda$collections$Array$add$panda$collections$Array$T(children454, ((panda$core$Object*) target451));
                org$pandalanguage$pandac$ASTNode* $tmp457 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp457->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp457->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp457, ((panda$core$Int64) { 111 }), token407.position, ((panda$collections$ListView*) children454));
                result402 = $tmp457;
            }
            break;
            case 62:
            {
                (($fn459) self->$class->vtable[5])(self, token407);
                panda$core$String* $tmp461 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result402);
                name460 = $tmp461;
                if (((panda$core$Bit) { name460 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp463 = (panda$core$MutableString*) malloc(40);
                    $tmp463->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp463->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp463, name460);
                    finalName462 = $tmp463;
                    panda$core$MutableString$append$panda$core$String(finalName462, &$s465);
                    (($fn466) self->$class->vtable[10])(self);
                    (($fn467) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
                    $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp469->refCount.value = 1;
                    panda$collections$Array$init($tmp469);
                    types468 = $tmp469;
                    org$pandalanguage$pandac$ASTNode* $tmp471 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp471->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp471->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp471, ((panda$core$Int64) { 109 }), result402->position, name460);
                    panda$collections$Array$add$panda$collections$Array$T(types468, ((panda$core$Object*) $tmp471));
                    org$pandalanguage$pandac$ASTNode* $tmp475 = (($fn474) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                    t473 = $tmp475;
                    if (((panda$core$Bit) { t473 == NULL }).value) {
                    {
                        (($fn476) self->$class->vtable[12])(self);
                        return result402;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types468, ((panda$core$Object*) t473));
                    panda$core$MutableString$append$panda$core$Object(finalName462, ((panda$core$Object*) t473));
                    $l477:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp480 = (($fn479) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp480.nonnull }).value) goto $l478;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp482 = (($fn481) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                        t473 = $tmp482;
                        if (((panda$core$Bit) { t473 == NULL }).value) {
                        {
                            (($fn483) self->$class->vtable[12])(self);
                            return result402;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types468, ((panda$core$Object*) t473));
                        panda$core$MutableString$append$panda$core$String(finalName462, &$s484);
                        panda$core$MutableString$append$panda$core$Object(finalName462, ((panda$core$Object*) t473));
                    }
                    goto $l477;
                    $l478:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp487 = (($fn486) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s485);
                    if (((panda$core$Bit) { !$tmp487.nonnull }).value) {
                    {
                        (($fn488) self->$class->vtable[12])(self);
                        return result402;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName462, &$s489);
                    panda$core$Object* $tmp491 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp491)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp493 = (($fn492) self->$class->vtable[6])(self);
                        switch ($tmp493.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept490 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept490 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept490 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept490.value) {
                    {
                        (($fn494) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp495 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp495->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp495->refCount.value = 1;
                        panda$core$String* $tmp497 = panda$core$MutableString$convert$R$panda$core$String(finalName462);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp495, ((panda$core$Int64) { 154 }), result402->position, ((panda$core$Object*) $tmp497), ((panda$collections$ListView*) types468));
                        result402 = $tmp495;
                        goto $l405;
                    }
                    }
                    else {
                    {
                        (($fn498) self->$class->vtable[12])(self);
                        return result402;
                    }
                    }
                }
                }
                return result402;
            }
            break;
            default:
            {
                (($fn499) self->$class->vtable[5])(self, token407);
                return result402;
            }
        }
    }
    }
    $l406:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result500;
    org$pandalanguage$pandac$parser$Token$nullable op505;
    org$pandalanguage$pandac$ASTNode* next508;
    panda$collections$Array* children511;
    org$pandalanguage$pandac$ASTNode* $tmp502 = (($fn501) self->$class->vtable[21])(self);
    result500 = $tmp502;
    if (((panda$core$Bit) { result500 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l503:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp507 = (($fn506) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op505 = $tmp507;
        if (((panda$core$Bit) { !op505.nonnull }).value) {
        {
            goto $l504;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp510 = (($fn509) self->$class->vtable[21])(self);
        next508 = $tmp510;
        if (((panda$core$Bit) { next508 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp512 = (panda$collections$Array*) malloc(40);
        $tmp512->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp512->refCount.value = 1;
        panda$collections$Array$init($tmp512);
        children511 = $tmp512;
        panda$collections$Array$add$panda$collections$Array$T(children511, ((panda$core$Object*) result500));
        panda$collections$Array$add$panda$collections$Array$T(children511, ((panda$core$Object*) next508));
        org$pandalanguage$pandac$ASTNode* $tmp514 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp514->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp514->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp514, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op505.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op505.value).kind)), ((panda$collections$ListView*) children511));
        result500 = $tmp514;
    }
    }
    $l504:;
    return result500;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op516;
    org$pandalanguage$pandac$ASTNode* base519;
    panda$collections$Array* children522;
    org$pandalanguage$pandac$parser$Token $tmp518 = (($fn517) self->$class->vtable[4])(self);
    op516 = $tmp518;
    switch (op516.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp521 = (($fn520) self->$class->vtable[22])(self);
            base519 = $tmp521;
            if (((panda$core$Bit) { base519 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp523 = (panda$collections$Array*) malloc(40);
            $tmp523->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp523->refCount.value = 1;
            panda$collections$Array$init($tmp523);
            children522 = $tmp523;
            panda$collections$Array$add$panda$collections$Array$T(children522, ((panda$core$Object*) base519));
            org$pandalanguage$pandac$ASTNode* $tmp525 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp525->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp525->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp525, ((panda$core$Int64) { 112 }), op516.position, ((panda$core$Object*) wrap_panda$core$Int64(op516.kind)), ((panda$collections$ListView*) children522));
            return $tmp525;
        }
        break;
        default:
        {
            (($fn527) self->$class->vtable[5])(self, op516);
            org$pandalanguage$pandac$ASTNode* $tmp529 = (($fn528) self->$class->vtable[22])(self);
            return $tmp529;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result530;
    org$pandalanguage$pandac$parser$Token op535;
    org$pandalanguage$pandac$ASTNode* next538;
    panda$collections$Array* children541;
    org$pandalanguage$pandac$parser$Token nextToken546;
    org$pandalanguage$pandac$ASTNode* next550;
    panda$collections$Array* children553;
    org$pandalanguage$pandac$ASTNode* $tmp532 = (($fn531) self->$class->vtable[23])(self);
    result530 = $tmp532;
    if (((panda$core$Bit) { result530 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l533:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp537 = (($fn536) self->$class->vtable[4])(self);
        op535 = $tmp537;
        switch (op535.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp540 = (($fn539) self->$class->vtable[23])(self);
                next538 = $tmp540;
                if (((panda$core$Bit) { next538 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp542 = (panda$collections$Array*) malloc(40);
                $tmp542->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp542->refCount.value = 1;
                panda$collections$Array$init($tmp542);
                children541 = $tmp542;
                panda$collections$Array$add$panda$collections$Array$T(children541, ((panda$core$Object*) result530));
                panda$collections$Array$add$panda$collections$Array$T(children541, ((panda$core$Object*) next538));
                org$pandalanguage$pandac$ASTNode* $tmp544 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp544->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp544->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp544, ((panda$core$Int64) { 103 }), op535.position, ((panda$core$Object*) wrap_panda$core$Int64(op535.kind)), ((panda$collections$ListView*) children541));
                result530 = $tmp544;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp548 = (($fn547) self->$class->vtable[3])(self);
                nextToken546 = $tmp548;
                panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken546.kind, ((panda$core$Int64) { 63 }));
                if ($tmp549.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp552 = (($fn551) self->$class->vtable[23])(self);
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
                    panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) result530));
                    panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) next550));
                    org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp556->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp556->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp556, ((panda$core$Int64) { 103 }), op535.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children553));
                    result530 = $tmp556;
                }
                }
                else {
                {
                    (($fn558) self->$class->vtable[5])(self, nextToken546);
                    (($fn559) self->$class->vtable[5])(self, op535);
                    return result530;
                }
                }
            }
            break;
            default:
            {
                (($fn560) self->$class->vtable[5])(self, op535);
                return result530;
            }
        }
    }
    }
    $l534:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result561;
    org$pandalanguage$pandac$parser$Token op566;
    org$pandalanguage$pandac$ASTNode* next569;
    panda$collections$Array* children572;
    org$pandalanguage$pandac$ASTNode* $tmp563 = (($fn562) self->$class->vtable[24])(self);
    result561 = $tmp563;
    if (((panda$core$Bit) { result561 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l564:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp568 = (($fn567) self->$class->vtable[4])(self);
        op566 = $tmp568;
        switch (op566.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp571 = (($fn570) self->$class->vtable[24])(self);
                next569 = $tmp571;
                if (((panda$core$Bit) { next569 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp573 = (panda$collections$Array*) malloc(40);
                $tmp573->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp573->refCount.value = 1;
                panda$collections$Array$init($tmp573);
                children572 = $tmp573;
                panda$collections$Array$add$panda$collections$Array$T(children572, ((panda$core$Object*) result561));
                panda$collections$Array$add$panda$collections$Array$T(children572, ((panda$core$Object*) next569));
                org$pandalanguage$pandac$ASTNode* $tmp575 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp575->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp575->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp575, ((panda$core$Int64) { 103 }), op566.position, ((panda$core$Object*) wrap_panda$core$Int64(op566.kind)), ((panda$collections$ListView*) children572));
                result561 = $tmp575;
            }
            break;
            default:
            {
                (($fn577) self->$class->vtable[5])(self, op566);
                return result561;
            }
        }
    }
    }
    $l565:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result578;
    org$pandalanguage$pandac$Position $tmp583;
    org$pandalanguage$pandac$parser$Token op586;
    org$pandalanguage$pandac$parser$Token next589;
    org$pandalanguage$pandac$ASTNode* right592;
    org$pandalanguage$pandac$Position $tmp606;
    org$pandalanguage$pandac$ASTNode* step607;
    org$pandalanguage$pandac$Position $tmp614;
    panda$collections$Array* children615;
    panda$core$Int64 kind618;
    org$pandalanguage$pandac$parser$Token $tmp580 = (($fn579) self->$class->vtable[6])(self);
    switch ($tmp580.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp581 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp581->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp581->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp583);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp581, ((panda$core$Int64) { 138 }), $tmp583);
            result578 = $tmp581;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp585 = (($fn584) self->$class->vtable[25])(self);
            result578 = $tmp585;
            if (((panda$core$Bit) { result578 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp588 = (($fn587) self->$class->vtable[4])(self);
    op586 = $tmp588;
    switch (op586.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp591 = (($fn590) self->$class->vtable[6])(self);
            next589 = $tmp591;
            panda$core$Bit $tmp595 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next589.kind, ((panda$core$Int64) { 102 }));
            bool $tmp594 = $tmp595.value;
            if (!$tmp594) goto $l596;
            panda$core$Bit $tmp597 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next589.kind, ((panda$core$Int64) { 104 }));
            $tmp594 = $tmp597.value;
            $l596:;
            panda$core$Bit $tmp598 = { $tmp594 };
            bool $tmp593 = $tmp598.value;
            if (!$tmp593) goto $l599;
            panda$core$Bit $tmp600 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next589.kind, ((panda$core$Int64) { 33 }));
            $tmp593 = $tmp600.value;
            $l599:;
            panda$core$Bit $tmp601 = { $tmp593 };
            if ($tmp601.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp603 = (($fn602) self->$class->vtable[25])(self);
                right592 = $tmp603;
                if (((panda$core$Bit) { right592 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp604 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp604->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp604->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp606);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp604, ((panda$core$Int64) { 138 }), $tmp606);
                right592 = $tmp604;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp609 = (($fn608) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp609.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp611 = (($fn610) self->$class->vtable[25])(self);
                step607 = $tmp611;
                if (((panda$core$Bit) { step607 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp612 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp612->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp612->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp614);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp612, ((panda$core$Int64) { 138 }), $tmp614);
                step607 = $tmp612;
            }
            }
            panda$collections$Array* $tmp616 = (panda$collections$Array*) malloc(40);
            $tmp616->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp616->refCount.value = 1;
            panda$collections$Array$init($tmp616);
            children615 = $tmp616;
            panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) result578));
            panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) right592));
            panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) step607));
            panda$core$Bit $tmp619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op586.kind, ((panda$core$Int64) { 97 }));
            if ($tmp619.value) {
            {
                kind618 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind618 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp620 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp620->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp620->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp620, kind618, op586.position, ((panda$collections$ListView*) children615));
            return $tmp620;
        }
        break;
        default:
        {
            (($fn622) self->$class->vtable[5])(self, op586);
            return result578;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result623;
    org$pandalanguage$pandac$parser$Token op628;
    org$pandalanguage$pandac$ASTNode* next631;
    panda$collections$Array* children634;
    org$pandalanguage$pandac$ASTNode* $tmp625 = (($fn624) self->$class->vtable[26])(self);
    result623 = $tmp625;
    if (((panda$core$Bit) { result623 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l626:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp630 = (($fn629) self->$class->vtable[4])(self);
        op628 = $tmp630;
        switch (op628.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp633 = (($fn632) self->$class->vtable[26])(self);
                next631 = $tmp633;
                if (((panda$core$Bit) { next631 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp635 = (panda$collections$Array*) malloc(40);
                $tmp635->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp635->refCount.value = 1;
                panda$collections$Array$init($tmp635);
                children634 = $tmp635;
                panda$collections$Array$add$panda$collections$Array$T(children634, ((panda$core$Object*) result623));
                panda$collections$Array$add$panda$collections$Array$T(children634, ((panda$core$Object*) next631));
                org$pandalanguage$pandac$ASTNode* $tmp637 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp637->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp637->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp637, ((panda$core$Int64) { 103 }), op628.position, ((panda$core$Object*) wrap_panda$core$Int64(op628.kind)), ((panda$collections$ListView*) children634));
                result623 = $tmp637;
            }
            break;
            default:
            {
                (($fn639) self->$class->vtable[5])(self, op628);
                return result623;
            }
        }
    }
    }
    $l627:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result640;
    org$pandalanguage$pandac$parser$Token op645;
    org$pandalanguage$pandac$ASTNode* next648;
    panda$collections$Array* children651;
    org$pandalanguage$pandac$ASTNode* $tmp642 = (($fn641) self->$class->vtable[27])(self);
    result640 = $tmp642;
    if (((panda$core$Bit) { result640 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l643:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp647 = (($fn646) self->$class->vtable[4])(self);
        op645 = $tmp647;
        switch (op645.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp650 = (($fn649) self->$class->vtable[27])(self);
                next648 = $tmp650;
                if (((panda$core$Bit) { next648 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp652 = (panda$collections$Array*) malloc(40);
                $tmp652->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp652->refCount.value = 1;
                panda$collections$Array$init($tmp652);
                children651 = $tmp652;
                panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) result640));
                panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) next648));
                org$pandalanguage$pandac$ASTNode* $tmp654 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp654->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp654->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp654, ((panda$core$Int64) { 103 }), op645.position, ((panda$core$Object*) wrap_panda$core$Int64(op645.kind)), ((panda$collections$ListView*) children651));
                result640 = $tmp654;
            }
            break;
            default:
            {
                (($fn656) self->$class->vtable[5])(self, op645);
                return result640;
            }
        }
    }
    }
    $l644:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result657;
    org$pandalanguage$pandac$parser$Token$nullable op662;
    org$pandalanguage$pandac$ASTNode* next665;
    panda$collections$Array* children668;
    org$pandalanguage$pandac$ASTNode* $tmp659 = (($fn658) self->$class->vtable[28])(self);
    result657 = $tmp659;
    if (((panda$core$Bit) { result657 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l660:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp664 = (($fn663) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op662 = $tmp664;
        if (((panda$core$Bit) { !op662.nonnull }).value) {
        {
            goto $l661;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp667 = (($fn666) self->$class->vtable[28])(self);
        next665 = $tmp667;
        if (((panda$core$Bit) { next665 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp669 = (panda$collections$Array*) malloc(40);
        $tmp669->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp669->refCount.value = 1;
        panda$collections$Array$init($tmp669);
        children668 = $tmp669;
        panda$collections$Array$add$panda$collections$Array$T(children668, ((panda$core$Object*) result657));
        panda$collections$Array$add$panda$collections$Array$T(children668, ((panda$core$Object*) next665));
        org$pandalanguage$pandac$ASTNode* $tmp671 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp671->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp671->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp671, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op662.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op662.value).kind)), ((panda$collections$ListView*) children668));
        result657 = $tmp671;
    }
    }
    $l661:;
    return result657;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start673;
    org$pandalanguage$pandac$ASTNode* test677;
    panda$collections$Array* children680;
    org$pandalanguage$pandac$ASTNode* ifTrue683;
    org$pandalanguage$pandac$ASTNode* ifFalse691;
    org$pandalanguage$pandac$ASTNode* ifFalse694;
    org$pandalanguage$pandac$parser$Token$nullable $tmp676 = (($fn675) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s674);
    start673 = $tmp676;
    if (((panda$core$Bit) { !start673.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp679 = (($fn678) self->$class->vtable[29])(self);
    test677 = $tmp679;
    if (((panda$core$Bit) { test677 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp681 = (panda$collections$Array*) malloc(40);
    $tmp681->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp681->refCount.value = 1;
    panda$collections$Array$init($tmp681);
    children680 = $tmp681;
    panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) test677));
    org$pandalanguage$pandac$ASTNode* $tmp685 = (($fn684) self->$class->vtable[40])(self);
    ifTrue683 = $tmp685;
    if (((panda$core$Bit) { ifTrue683 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) ifTrue683));
    org$pandalanguage$pandac$parser$Token$nullable $tmp687 = (($fn686) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp687.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp689 = (($fn688) self->$class->vtable[6])(self);
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp689.kind, ((panda$core$Int64) { 36 }));
        if ($tmp690.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp693 = (($fn692) self->$class->vtable[30])(self);
            ifFalse691 = $tmp693;
            if (((panda$core$Bit) { ifFalse691 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) ifFalse691));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp696 = (($fn695) self->$class->vtable[40])(self);
            ifFalse694 = $tmp696;
            if (((panda$core$Bit) { ifFalse694 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) ifFalse694));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp697->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp697->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp697, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start673.value).position, ((panda$collections$ListView*) children680));
    return $tmp697;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp701 = (($fn700) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s699);
    if (((panda$core$Bit) { !$tmp701.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp703 = (($fn702) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
    return $tmp703;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id704;
    org$pandalanguage$pandac$ASTNode* type711;
    panda$collections$Array* children714;
    org$pandalanguage$pandac$parser$Token$nullable $tmp707 = (($fn706) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s705);
    id704 = $tmp707;
    if (((panda$core$Bit) { !id704.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp709 = (($fn708) self->$class->vtable[6])(self);
    panda$core$Bit $tmp710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp709.kind, ((panda$core$Int64) { 95 }));
    if ($tmp710.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp713 = (($fn712) self->$class->vtable[31])(self);
        type711 = $tmp713;
        if (((panda$core$Bit) { type711 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp715 = (panda$collections$Array*) malloc(40);
        $tmp715->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp715->refCount.value = 1;
        panda$collections$Array$init($tmp715);
        children714 = $tmp715;
        panda$collections$Array$add$panda$collections$Array$T(children714, ((panda$core$Object*) type711));
        org$pandalanguage$pandac$ASTNode* $tmp717 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp717->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp717->refCount.value = 1;
        panda$core$String* $tmp720 = (($fn719) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id704.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp717, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id704.value).position, ((panda$core$Object*) $tmp720), ((panda$collections$ListView*) children714));
        return $tmp717;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp721 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp721->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp721->refCount.value = 1;
    panda$core$String* $tmp724 = (($fn723) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id704.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp721, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id704.value).position, $tmp724);
    return $tmp721;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start725;
    org$pandalanguage$pandac$ASTNode* t729;
    org$pandalanguage$pandac$ASTNode* list735;
    org$pandalanguage$pandac$ASTNode* block738;
    panda$collections$Array* children741;
    org$pandalanguage$pandac$parser$Token$nullable $tmp728 = (($fn727) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s726);
    start725 = $tmp728;
    if (((panda$core$Bit) { !start725.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp731 = (($fn730) self->$class->vtable[32])(self);
    t729 = $tmp731;
    if (((panda$core$Bit) { t729 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp734 = (($fn733) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s732);
    if (((panda$core$Bit) { !$tmp734.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp737 = (($fn736) self->$class->vtable[29])(self);
    list735 = $tmp737;
    if (((panda$core$Bit) { list735 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp740 = (($fn739) self->$class->vtable[40])(self);
    block738 = $tmp740;
    if (((panda$core$Bit) { block738 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp742 = (panda$collections$Array*) malloc(40);
    $tmp742->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp742->refCount.value = 1;
    panda$collections$Array$init($tmp742);
    children741 = $tmp742;
    panda$collections$Array$add$panda$collections$Array$T(children741, ((panda$core$Object*) t729));
    panda$collections$Array$add$panda$collections$Array$T(children741, ((panda$core$Object*) list735));
    panda$collections$Array$add$panda$collections$Array$T(children741, ((panda$core$Object*) block738));
    org$pandalanguage$pandac$ASTNode* $tmp744 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp744->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp744->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp744, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start725.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children741));
    return $tmp744;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start746;
    org$pandalanguage$pandac$ASTNode* test750;
    org$pandalanguage$pandac$ASTNode* body753;
    panda$collections$Array* children756;
    org$pandalanguage$pandac$parser$Token$nullable $tmp749 = (($fn748) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s747);
    start746 = $tmp749;
    if (((panda$core$Bit) { !start746.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp752 = (($fn751) self->$class->vtable[29])(self);
    test750 = $tmp752;
    if (((panda$core$Bit) { test750 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp755 = (($fn754) self->$class->vtable[40])(self);
    body753 = $tmp755;
    if (((panda$core$Bit) { body753 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp757 = (panda$collections$Array*) malloc(40);
    $tmp757->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp757->refCount.value = 1;
    panda$collections$Array$init($tmp757);
    children756 = $tmp757;
    panda$collections$Array$add$panda$collections$Array$T(children756, ((panda$core$Object*) test750));
    panda$collections$Array$add$panda$collections$Array$T(children756, ((panda$core$Object*) body753));
    org$pandalanguage$pandac$ASTNode* $tmp759 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp759->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp759->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp759, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start746.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children756));
    return $tmp759;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start761;
    org$pandalanguage$pandac$ASTNode* body765;
    org$pandalanguage$pandac$ASTNode* test771;
    panda$collections$Array* children774;
    org$pandalanguage$pandac$parser$Token$nullable $tmp764 = (($fn763) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s762);
    start761 = $tmp764;
    if (((panda$core$Bit) { !start761.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp767 = (($fn766) self->$class->vtable[40])(self);
    body765 = $tmp767;
    if (((panda$core$Bit) { body765 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp770 = (($fn769) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s768);
    if (((panda$core$Bit) { !$tmp770.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp773 = (($fn772) self->$class->vtable[29])(self);
    test771 = $tmp773;
    if (((panda$core$Bit) { test771 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp775 = (panda$collections$Array*) malloc(40);
    $tmp775->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp775->refCount.value = 1;
    panda$collections$Array$init($tmp775);
    children774 = $tmp775;
    panda$collections$Array$add$panda$collections$Array$T(children774, ((panda$core$Object*) body765));
    panda$collections$Array$add$panda$collections$Array$T(children774, ((panda$core$Object*) test771));
    org$pandalanguage$pandac$ASTNode* $tmp777 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp777->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp777->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp777, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start761.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children774));
    return $tmp777;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start779;
    org$pandalanguage$pandac$ASTNode* body783;
    panda$collections$Array* children786;
    org$pandalanguage$pandac$parser$Token$nullable $tmp782 = (($fn781) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s780);
    start779 = $tmp782;
    if (((panda$core$Bit) { !start779.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp785 = (($fn784) self->$class->vtable[40])(self);
    body783 = $tmp785;
    if (((panda$core$Bit) { body783 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp787 = (panda$collections$Array*) malloc(40);
    $tmp787->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp787->refCount.value = 1;
    panda$collections$Array$init($tmp787);
    children786 = $tmp787;
    panda$collections$Array$add$panda$collections$Array$T(children786, ((panda$core$Object*) body783));
    org$pandalanguage$pandac$ASTNode* $tmp789 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp789->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp789->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp789, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start779.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children786));
    return $tmp789;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start791;
    org$pandalanguage$pandac$ASTNode* expr795;
    panda$collections$Array* children798;
    org$pandalanguage$pandac$ASTNode* message803;
    org$pandalanguage$pandac$parser$Token$nullable $tmp794 = (($fn793) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s792);
    start791 = $tmp794;
    if (((panda$core$Bit) { !start791.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp797 = (($fn796) self->$class->vtable[29])(self);
    expr795 = $tmp797;
    if (((panda$core$Bit) { expr795 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp799 = (panda$collections$Array*) malloc(40);
    $tmp799->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp799->refCount.value = 1;
    panda$collections$Array$init($tmp799);
    children798 = $tmp799;
    panda$collections$Array$add$panda$collections$Array$T(children798, ((panda$core$Object*) expr795));
    org$pandalanguage$pandac$parser$Token$nullable $tmp802 = (($fn801) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp802.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp805 = (($fn804) self->$class->vtable[29])(self);
        message803 = $tmp805;
        if (((panda$core$Bit) { message803 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children798, ((panda$core$Object*) message803));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp806->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp806->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp806, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start791.value).position, ((panda$collections$ListView*) children798));
    return $tmp806;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start808;
    panda$collections$Array* expressions812;
    org$pandalanguage$pandac$ASTNode* expr815;
    panda$collections$Array* children824;
    org$pandalanguage$pandac$ASTNode* stmt836;
    org$pandalanguage$pandac$ASTNode* stmt839;
    org$pandalanguage$pandac$parser$Token$nullable $tmp811 = (($fn810) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s809);
    start808 = $tmp811;
    if (((panda$core$Bit) { !start808.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp813 = (panda$collections$Array*) malloc(40);
    $tmp813->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp813->refCount.value = 1;
    panda$collections$Array$init($tmp813);
    expressions812 = $tmp813;
    org$pandalanguage$pandac$ASTNode* $tmp817 = (($fn816) self->$class->vtable[29])(self);
    expr815 = $tmp817;
    if (((panda$core$Bit) { expr815 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions812, ((panda$core$Object*) expr815));
    $l818:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = (($fn820) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp821.nonnull }).value) goto $l819;
    {
        org$pandalanguage$pandac$ASTNode* $tmp823 = (($fn822) self->$class->vtable[29])(self);
        expr815 = $tmp823;
        if (((panda$core$Bit) { expr815 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions812, ((panda$core$Object*) expr815));
    }
    goto $l818;
    $l819:;
    panda$collections$Array* $tmp825 = (panda$collections$Array*) malloc(40);
    $tmp825->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp825->refCount.value = 1;
    panda$collections$Array$init($tmp825);
    children824 = $tmp825;
    org$pandalanguage$pandac$ASTNode* $tmp827 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp827->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp827->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp827, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start808.value).position, ((panda$collections$ListView*) expressions812));
    panda$collections$Array$add$panda$collections$Array$T(children824, ((panda$core$Object*) $tmp827));
    org$pandalanguage$pandac$parser$Token$nullable $tmp831 = (($fn830) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s829);
    if (((panda$core$Bit) { !$tmp831.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l832:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp835 = (($fn834) self->$class->vtable[6])(self);
        switch ($tmp835.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l833;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp838 = (($fn837) self->$class->vtable[48])(self);
                stmt836 = $tmp838;
                if (((panda$core$Bit) { stmt836 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children824, ((panda$core$Object*) stmt836));
                goto $l833;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp841 = (($fn840) self->$class->vtable[50])(self);
                    stmt839 = $tmp841;
                    if (((panda$core$Bit) { stmt839 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children824, ((panda$core$Object*) stmt839));
                }
            }
        }
    }
    }
    $l833:;
    org$pandalanguage$pandac$ASTNode* $tmp842 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp842->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp842->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp842, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start808.value).position, ((panda$collections$ListView*) children824));
    return $tmp842;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start844;
    panda$collections$Array* children848;
    org$pandalanguage$pandac$ASTNode* expr851;
    org$pandalanguage$pandac$parser$Token token859;
    org$pandalanguage$pandac$ASTNode* w862;
    org$pandalanguage$pandac$parser$Token o865;
    panda$collections$Array* statements871;
    org$pandalanguage$pandac$ASTNode* stmt878;
    org$pandalanguage$pandac$ASTNode* stmt881;
    org$pandalanguage$pandac$parser$Token$nullable $tmp847 = (($fn846) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s845);
    start844 = $tmp847;
    if (((panda$core$Bit) { !start844.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp849 = (panda$collections$Array*) malloc(40);
    $tmp849->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp849->refCount.value = 1;
    panda$collections$Array$init($tmp849);
    children848 = $tmp849;
    org$pandalanguage$pandac$ASTNode* $tmp853 = (($fn852) self->$class->vtable[29])(self);
    expr851 = $tmp853;
    if (((panda$core$Bit) { expr851 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children848, ((panda$core$Object*) expr851));
    org$pandalanguage$pandac$parser$Token$nullable $tmp856 = (($fn855) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s854);
    if (((panda$core$Bit) { !$tmp856.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l857:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp861 = (($fn860) self->$class->vtable[6])(self);
        token859 = $tmp861;
        switch (token859.kind.value) {
            case 100:
            {
                goto $l858;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp864 = (($fn863) self->$class->vtable[38])(self);
                w862 = $tmp864;
                if (((panda$core$Bit) { w862 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children848, ((panda$core$Object*) w862));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp867 = (($fn866) self->$class->vtable[4])(self);
                o865 = $tmp867;
                org$pandalanguage$pandac$parser$Token$nullable $tmp870 = (($fn869) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s868);
                if (((panda$core$Bit) { !$tmp870.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp872 = (panda$collections$Array*) malloc(40);
                $tmp872->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp872->refCount.value = 1;
                panda$collections$Array$init($tmp872);
                statements871 = $tmp872;
                $l874:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp877 = (($fn876) self->$class->vtable[6])(self);
                    switch ($tmp877.kind.value) {
                        case 100:
                        {
                            goto $l875;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp880 = (($fn879) self->$class->vtable[48])(self);
                            stmt878 = $tmp880;
                            if (((panda$core$Bit) { stmt878 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements871, ((panda$core$Object*) stmt878));
                            goto $l875;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp883 = (($fn882) self->$class->vtable[50])(self);
                            stmt881 = $tmp883;
                            if (((panda$core$Bit) { stmt881 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements871, ((panda$core$Object*) stmt881));
                        }
                    }
                }
                }
                $l875:;
                org$pandalanguage$pandac$ASTNode* $tmp884 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp884->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp884->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp884, ((panda$core$Int64) { 127 }), o865.position, ((panda$collections$ListView*) statements871));
                panda$collections$Array$add$panda$collections$Array$T(children848, ((panda$core$Object*) $tmp884));
                goto $l858;
            }
            break;
            default:
            {
                (($fn886) self->$class->vtable[4])(self);
                panda$core$String* $tmp890 = (($fn889) self->$class->vtable[13])(self, token859);
                panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s888, $tmp890);
                panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s892);
                panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s887, $tmp893);
                (($fn895) self->$class->vtable[9])(self, token859, $tmp894);
            }
        }
    }
    }
    $l858:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp898 = (($fn897) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s896);
    if (((panda$core$Bit) { !$tmp898.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp899 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp899->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp899->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp899, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start844.value).position, ((panda$collections$ListView*) children848));
    return $tmp899;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start901;
    panda$collections$Array* children905;
    org$pandalanguage$pandac$ASTNode* stmt913;
    org$pandalanguage$pandac$ASTNode* stmt919;
    org$pandalanguage$pandac$parser$Token$nullable $tmp904 = (($fn903) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s902);
    start901 = $tmp904;
    if (((panda$core$Bit) { !start901.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp906 = (panda$collections$Array*) malloc(40);
    $tmp906->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp906->refCount.value = 1;
    panda$collections$Array$init($tmp906);
    children905 = $tmp906;
    $l908:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp911 = (($fn910) self->$class->vtable[6])(self);
        switch ($tmp911.kind.value) {
            case 100:
            {
                (($fn912) self->$class->vtable[4])(self);
                goto $l909;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp915 = (($fn914) self->$class->vtable[48])(self);
                stmt913 = $tmp915;
                if (((panda$core$Bit) { stmt913 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp918 = (($fn917) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s916);
                if (((panda$core$Bit) { !$tmp918.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children905, ((panda$core$Object*) stmt913));
                goto $l909;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp921 = (($fn920) self->$class->vtable[50])(self);
                stmt919 = $tmp921;
                if (((panda$core$Bit) { stmt919 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children905, ((panda$core$Object*) stmt919));
            }
        }
    }
    }
    $l909:;
    org$pandalanguage$pandac$ASTNode* $tmp922 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp922->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp922->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp922, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start901.value).position, ((panda$collections$ListView*) children905));
    return $tmp922;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start924;
    org$pandalanguage$pandac$parser$Token op929;
    org$pandalanguage$pandac$ASTNode* rvalue932;
    panda$collections$Array* children935;
    org$pandalanguage$pandac$parser$Token op944;
    org$pandalanguage$pandac$ASTNode* rvalue947;
    panda$collections$Array* children950;
    org$pandalanguage$pandac$ASTNode* $tmp926 = (($fn925) self->$class->vtable[29])(self);
    start924 = $tmp926;
    if (((panda$core$Bit) { start924 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp928 = (($fn927) self->$class->vtable[6])(self);
    switch ($tmp928.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp931 = (($fn930) self->$class->vtable[4])(self);
            op929 = $tmp931;
            org$pandalanguage$pandac$ASTNode* $tmp934 = (($fn933) self->$class->vtable[29])(self);
            rvalue932 = $tmp934;
            if (((panda$core$Bit) { rvalue932 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp936 = (panda$collections$Array*) malloc(40);
            $tmp936->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp936->refCount.value = 1;
            panda$collections$Array$init($tmp936);
            children935 = $tmp936;
            panda$collections$Array$add$panda$collections$Array$T(children935, ((panda$core$Object*) start924));
            panda$collections$Array$add$panda$collections$Array$T(children935, ((panda$core$Object*) rvalue932));
            org$pandalanguage$pandac$ASTNode* $tmp938 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp938->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp938, ((panda$core$Int64) { 103 }), start924->position, ((panda$core$Object*) wrap_panda$core$Int64(op929.kind)), ((panda$collections$ListView*) children935));
            return $tmp938;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp941 = (($fn940) self->$class->vtable[6])(self);
            (($fn943) self->$class->vtable[9])(self, $tmp941, &$s942);
            org$pandalanguage$pandac$parser$Token $tmp946 = (($fn945) self->$class->vtable[4])(self);
            op944 = $tmp946;
            org$pandalanguage$pandac$ASTNode* $tmp949 = (($fn948) self->$class->vtable[29])(self);
            rvalue947 = $tmp949;
            if (((panda$core$Bit) { rvalue947 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp951 = (panda$collections$Array*) malloc(40);
            $tmp951->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp951->refCount.value = 1;
            panda$collections$Array$init($tmp951);
            children950 = $tmp951;
            panda$collections$Array$add$panda$collections$Array$T(children950, ((panda$core$Object*) start924));
            panda$collections$Array$add$panda$collections$Array$T(children950, ((panda$core$Object*) rvalue947));
            org$pandalanguage$pandac$ASTNode* $tmp953 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp953->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp953->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp953, ((panda$core$Int64) { 103 }), start924->position, ((panda$core$Object*) wrap_panda$core$Int64(op944.kind)), ((panda$collections$ListView*) children950));
            return $tmp953;
        }
        break;
        default:
        {
            return start924;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children955;
    org$pandalanguage$pandac$ASTNode* t958;
    org$pandalanguage$pandac$ASTNode* value963;
    org$pandalanguage$pandac$ASTNode* value973;
    panda$collections$Array* $tmp956 = (panda$collections$Array*) malloc(40);
    $tmp956->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp956->refCount.value = 1;
    panda$collections$Array$init($tmp956);
    children955 = $tmp956;
    org$pandalanguage$pandac$ASTNode* $tmp960 = (($fn959) self->$class->vtable[32])(self);
    t958 = $tmp960;
    if (((panda$core$Bit) { t958 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children955, ((panda$core$Object*) t958));
    org$pandalanguage$pandac$parser$Token$nullable $tmp962 = (($fn961) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp962.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp965 = (($fn964) self->$class->vtable[29])(self);
        value963 = $tmp965;
        if (((panda$core$Bit) { value963 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children955, ((panda$core$Object*) value963));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp967 = (($fn966) self->$class->vtable[6])(self);
    panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp967.kind, ((panda$core$Int64) { 58 }));
    if ($tmp968.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp970 = (($fn969) self->$class->vtable[4])(self);
        (($fn972) self->$class->vtable[9])(self, $tmp970, &$s971);
        org$pandalanguage$pandac$ASTNode* $tmp975 = (($fn974) self->$class->vtable[29])(self);
        value973 = $tmp975;
        if (((panda$core$Bit) { value973 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children955, ((panda$core$Object*) value973));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp976 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp976->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp976->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp976, ((panda$core$Int64) { 129 }), t958->position, ((panda$collections$ListView*) children955));
    return $tmp976;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start978;
    panda$core$Int64 kind981;
    panda$collections$Array* children984;
    org$pandalanguage$pandac$ASTNode* child987;
    org$pandalanguage$pandac$ASTNode* child994;
    org$pandalanguage$pandac$parser$Token $tmp980 = (($fn979) self->$class->vtable[4])(self);
    start978 = $tmp980;
    switch (start978.kind.value) {
        case 23:
        {
            kind981 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind981 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind981 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind981 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn983) self->$class->vtable[9])(self, start978, &$s982);
        }
    }
    panda$collections$Array* $tmp985 = (panda$collections$Array*) malloc(40);
    $tmp985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp985->refCount.value = 1;
    panda$collections$Array$init($tmp985);
    children984 = $tmp985;
    org$pandalanguage$pandac$ASTNode* $tmp989 = (($fn988) self->$class->vtable[42])(self);
    child987 = $tmp989;
    if (((panda$core$Bit) { child987 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children984, ((panda$core$Object*) child987));
    $l990:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp993 = (($fn992) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp993.nonnull }).value) goto $l991;
    {
        org$pandalanguage$pandac$ASTNode* $tmp996 = (($fn995) self->$class->vtable[42])(self);
        child994 = $tmp996;
        if (((panda$core$Bit) { child994 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children984, ((panda$core$Object*) child994));
    }
    goto $l990;
    $l991:;
    org$pandalanguage$pandac$ASTNode* $tmp997 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp997->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp997->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp997, kind981, start978.position, ((panda$collections$ListView*) children984));
    return $tmp997;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start999;
    panda$collections$Array* children1006;
    org$pandalanguage$pandac$ASTNode* expr1015;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1002 = (($fn1001) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1000);
    start999 = $tmp1002;
    if (((panda$core$Bit) { !start999.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1005 = (($fn1004) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1003);
    if (((panda$core$Bit) { !$tmp1005.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1007 = (panda$collections$Array*) malloc(40);
    $tmp1007->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1007->refCount.value = 1;
    panda$collections$Array$init($tmp1007);
    children1006 = $tmp1007;
    org$pandalanguage$pandac$ASTNode* $tmp1009 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1009->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1009->refCount.value = 1;
    panda$core$String* $tmp1012 = (($fn1011) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start999.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1009, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, $tmp1012);
    panda$collections$Array$add$panda$collections$Array$T(children1006, ((panda$core$Object*) $tmp1009));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1014 = (($fn1013) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1014.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1017 = (($fn1016) self->$class->vtable[29])(self);
        expr1015 = $tmp1017;
        if (((panda$core$Bit) { expr1015 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1006, ((panda$core$Object*) expr1015));
        $l1018:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1021 = (($fn1020) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1021.nonnull }).value) goto $l1019;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1023 = (($fn1022) self->$class->vtable[29])(self);
            expr1015 = $tmp1023;
            if (((panda$core$Bit) { expr1015 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1006, ((panda$core$Object*) expr1015));
        }
        goto $l1018;
        $l1019:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1026 = (($fn1025) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1024);
        if (((panda$core$Bit) { !$tmp1026.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1027 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1027->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1027->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1027, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, ((panda$collections$ListView*) children1006));
    return $tmp1027;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1029;
    org$pandalanguage$pandac$parser$Token$nullable label1033;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = (($fn1031) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1030);
    start1029 = $tmp1032;
    if (((panda$core$Bit) { !start1029.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1035 = (($fn1034) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1033 = $tmp1035;
    if (((panda$core$Bit) { label1033.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1036->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1036->refCount.value = 1;
        panda$core$String* $tmp1039 = (($fn1038) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1033.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1036, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1029.value).position, $tmp1039);
        return $tmp1036;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1040 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1040->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1040->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1040, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1029.value).position);
    return $tmp1040;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1042;
    org$pandalanguage$pandac$parser$Token$nullable label1046;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1045 = (($fn1044) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1043);
    start1042 = $tmp1045;
    if (((panda$core$Bit) { !start1042.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1048 = (($fn1047) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1046 = $tmp1048;
    if (((panda$core$Bit) { label1046.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1049 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1049->refCount.value = 1;
        panda$core$String* $tmp1052 = (($fn1051) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1046.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1049, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1042.value).position, $tmp1052);
        return $tmp1049;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1053 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1053->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1053->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1053, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1042.value).position);
    return $tmp1053;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1055;
    panda$collections$Array* children1063;
    org$pandalanguage$pandac$ASTNode* expr1066;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1058 = (($fn1057) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1056);
    start1055 = $tmp1058;
    if (((panda$core$Bit) { !start1055.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1060 = (($fn1059) self->$class->vtable[6])(self);
    switch ($tmp1060.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1061 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1061->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1061->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1061, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1055.value).position);
            return $tmp1061;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1064 = (panda$collections$Array*) malloc(40);
            $tmp1064->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1064->refCount.value = 1;
            panda$collections$Array$init($tmp1064);
            children1063 = $tmp1064;
            org$pandalanguage$pandac$ASTNode* $tmp1068 = (($fn1067) self->$class->vtable[29])(self);
            expr1066 = $tmp1068;
            if (((panda$core$Bit) { expr1066 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1063, ((panda$core$Object*) expr1066));
            org$pandalanguage$pandac$ASTNode* $tmp1069 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1069->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1069->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1069, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1055.value).position, ((panda$collections$ListView*) children1063));
            return $tmp1069;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1072 = (($fn1071) self->$class->vtable[6])(self);
    switch ($tmp1072.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1074 = (($fn1073) self->$class->vtable[45])(self);
            return $tmp1074;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1076 = (($fn1075) self->$class->vtable[46])(self);
            return $tmp1076;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1078 = (($fn1077) self->$class->vtable[47])(self);
            return $tmp1078;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1080 = (($fn1079) self->$class->vtable[6])(self);
    switch ($tmp1080.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1082 = (($fn1081) self->$class->vtable[35])(self, p_label);
            return $tmp1082;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1084 = (($fn1083) self->$class->vtable[33])(self, p_label);
            return $tmp1084;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1086 = (($fn1085) self->$class->vtable[36])(self, p_label);
            return $tmp1086;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1088 = (($fn1087) self->$class->vtable[34])(self, p_label);
            return $tmp1088;
        }
        break;
        default:
        {
            (($fn1090) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1089);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1109;
    org$pandalanguage$pandac$parser$Token $tmp1092 = (($fn1091) self->$class->vtable[6])(self);
    switch ($tmp1092.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1094 = (($fn1093) self->$class->vtable[30])(self);
            return $tmp1094;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1096 = (($fn1095) self->$class->vtable[33])(self, NULL);
            return $tmp1096;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1098 = (($fn1097) self->$class->vtable[34])(self, NULL);
            return $tmp1098;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1100 = (($fn1099) self->$class->vtable[35])(self, NULL);
            return $tmp1100;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1102 = (($fn1101) self->$class->vtable[36])(self, NULL);
            return $tmp1102;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1104 = (($fn1103) self->$class->vtable[37])(self);
            return $tmp1104;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1106 = (($fn1105) self->$class->vtable[39])(self);
            return $tmp1106;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1108 = (($fn1107) self->$class->vtable[40])(self);
            return $tmp1108;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1111 = (($fn1110) self->$class->vtable[4])(self);
            id1109 = $tmp1111;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1113 = (($fn1112) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1113.nonnull }).value) {
            {
                panda$core$String* $tmp1115 = (($fn1114) self->$class->vtable[13])(self, id1109);
                org$pandalanguage$pandac$ASTNode* $tmp1117 = (($fn1116) self->$class->vtable[49])(self, $tmp1115);
                return $tmp1117;
            }
            }
            (($fn1118) self->$class->vtable[5])(self, id1109);
            org$pandalanguage$pandac$ASTNode* $tmp1120 = (($fn1119) self->$class->vtable[41])(self);
            return $tmp1120;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (($fn1121) self->$class->vtable[41])(self);
            return $tmp1122;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1124 = (($fn1123) self->$class->vtable[43])(self);
            return $tmp1124;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1126 = (($fn1125) self->$class->vtable[44])(self);
            return $tmp1126;
        }
        break;
        default:
        {
            (($fn1128) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1127);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1129;
    org$pandalanguage$pandac$parser$Token$nullable next1133;
    panda$core$MutableString* name1137;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1132 = (($fn1131) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1130);
    start1129 = $tmp1132;
    if (((panda$core$Bit) { !start1129.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1136 = (($fn1135) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1134);
    next1133 = $tmp1136;
    if (((panda$core$Bit) { !next1133.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1138 = (panda$core$MutableString*) malloc(40);
    $tmp1138->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1138->refCount.value = 1;
    panda$core$String* $tmp1141 = (($fn1140) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1133.value));
    panda$core$MutableString$init$panda$core$String($tmp1138, $tmp1141);
    name1137 = $tmp1138;
    $l1142:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1145 = (($fn1144) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1133 = $tmp1145;
        if (((panda$core$Bit) { !next1133.nonnull }).value) {
        {
            goto $l1143;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1137, &$s1146);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1149 = (($fn1148) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1147);
        next1133 = $tmp1149;
        if (((panda$core$Bit) { !next1133.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1151 = (($fn1150) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1133.value));
        panda$core$MutableString$append$panda$core$String(name1137, $tmp1151);
    }
    }
    $l1143:;
    org$pandalanguage$pandac$ASTNode* $tmp1152 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1152->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1152->refCount.value = 1;
    panda$core$String* $tmp1154 = panda$core$MutableString$finish$R$panda$core$String(name1137);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1152, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1129.value).position, $tmp1154);
    return $tmp1152;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1155;
    org$pandalanguage$pandac$parser$Token$nullable next1159;
    panda$core$MutableString* name1163;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1158 = (($fn1157) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1156);
    start1155 = $tmp1158;
    if (((panda$core$Bit) { !start1155.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1162 = (($fn1161) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1160);
    next1159 = $tmp1162;
    if (((panda$core$Bit) { !next1159.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1164 = (panda$core$MutableString*) malloc(40);
    $tmp1164->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1164->refCount.value = 1;
    panda$core$String* $tmp1167 = (($fn1166) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1159.value));
    panda$core$MutableString$init$panda$core$String($tmp1164, $tmp1167);
    name1163 = $tmp1164;
    $l1168:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1171 = (($fn1170) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1159 = $tmp1171;
        if (((panda$core$Bit) { !next1159.nonnull }).value) {
        {
            goto $l1169;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1163, &$s1172);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1175 = (($fn1174) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1173);
        next1159 = $tmp1175;
        if (((panda$core$Bit) { !next1159.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1177 = (($fn1176) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1159.value));
        panda$core$MutableString$append$panda$core$String(name1163, $tmp1177);
    }
    }
    $l1169:;
    org$pandalanguage$pandac$ASTNode* $tmp1178 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1178->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1178->refCount.value = 1;
    panda$core$String* $tmp1180 = panda$core$MutableString$finish$R$panda$core$String(name1163);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1178, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1155.value).position, $tmp1180);
    return $tmp1178;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1181;
    org$pandalanguage$pandac$parser$Token$nullable id1185;
    panda$collections$Array* children1189;
    panda$collections$Array* idChildren1192;
    org$pandalanguage$pandac$ASTNode* t1197;
    org$pandalanguage$pandac$ASTNode* t1213;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1184 = (($fn1183) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1182);
    start1181 = $tmp1184;
    if (((panda$core$Bit) { !start1181.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1188 = (($fn1187) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1186);
    id1185 = $tmp1188;
    if (((panda$core$Bit) { !id1185.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1190 = (panda$collections$Array*) malloc(40);
    $tmp1190->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1190->refCount.value = 1;
    panda$collections$Array$init($tmp1190);
    children1189 = $tmp1190;
    panda$collections$Array* $tmp1193 = (panda$collections$Array*) malloc(40);
    $tmp1193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1193->refCount.value = 1;
    panda$collections$Array$init($tmp1193);
    idChildren1192 = $tmp1193;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1196 = (($fn1195) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1196.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1199 = (($fn1198) self->$class->vtable[19])(self);
        t1197 = $tmp1199;
        if (((panda$core$Bit) { t1197 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1192, ((panda$core$Object*) t1197));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1200 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1200->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1200->refCount.value = 1;
    panda$core$String* $tmp1203 = (($fn1202) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1185.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1200, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1185.value).position, ((panda$core$Object*) $tmp1203), ((panda$collections$ListView*) idChildren1192));
    panda$collections$Array$add$panda$collections$Array$T(children1189, ((panda$core$Object*) $tmp1200));
    $l1204:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1207 = (($fn1206) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1207.nonnull }).value) goto $l1205;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1210 = (($fn1209) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1208);
        id1185 = $tmp1210;
        if (((panda$core$Bit) { !id1185.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1192);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1212 = (($fn1211) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1212.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1215 = (($fn1214) self->$class->vtable[19])(self);
            t1213 = $tmp1215;
            if (((panda$core$Bit) { t1213 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1192, ((panda$core$Object*) t1213));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1216 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1216->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1216->refCount.value = 1;
        panda$core$String* $tmp1219 = (($fn1218) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1185.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1216, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1185.value).position, ((panda$core$Object*) $tmp1219), ((panda$collections$ListView*) idChildren1192));
        panda$collections$Array$add$panda$collections$Array$T(children1189, ((panda$core$Object*) $tmp1216));
    }
    goto $l1204;
    $l1205:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1222 = (($fn1221) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1220);
    if (((panda$core$Bit) { !$tmp1222.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1223 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1223->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1223, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1181.value).position, ((panda$collections$ListView*) children1189));
    return $tmp1223;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1225;
    panda$collections$Array* children1229;
    org$pandalanguage$pandac$ASTNode* t1232;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1228 = (($fn1227) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1226);
    start1225 = $tmp1228;
    if (((panda$core$Bit) { !start1225.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1230 = (panda$collections$Array*) malloc(40);
    $tmp1230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1230->refCount.value = 1;
    panda$collections$Array$init($tmp1230);
    children1229 = $tmp1230;
    org$pandalanguage$pandac$ASTNode* $tmp1234 = (($fn1233) self->$class->vtable[19])(self);
    t1232 = $tmp1234;
    if (((panda$core$Bit) { t1232 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) t1232));
    $l1235:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1238 = (($fn1237) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1238.nonnull }).value) goto $l1236;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1240 = (($fn1239) self->$class->vtable[19])(self);
        t1232 = $tmp1240;
        if (((panda$core$Bit) { t1232 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) t1232));
    }
    goto $l1235;
    $l1236:;
    org$pandalanguage$pandac$ASTNode* $tmp1241 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1241->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1241, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1225.value).position, ((panda$collections$ListView*) children1229));
    return $tmp1241;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1243;
    org$pandalanguage$pandac$parser$Token$nullable next1248;
    org$pandalanguage$pandac$Position $tmp1257;
    panda$collections$Array* $tmp1244 = (panda$collections$Array*) malloc(40);
    $tmp1244->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1244->refCount.value = 1;
    panda$collections$Array$init($tmp1244);
    children1243 = $tmp1244;
    $l1246:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = (($fn1249) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1248 = $tmp1250;
        if (((panda$core$Bit) { !next1248.nonnull }).value) {
        {
            goto $l1247;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1251 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1251->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1251->refCount.value = 1;
        panda$core$String* $tmp1254 = (($fn1253) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1248.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1251, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1248.value).position, $tmp1254);
        panda$collections$Array$add$panda$collections$Array$T(children1243, ((panda$core$Object*) $tmp1251));
    }
    }
    $l1247:;
    org$pandalanguage$pandac$ASTNode* $tmp1255 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1255->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1257);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1255, ((panda$core$Int64) { 144 }), $tmp1257, ((panda$collections$ListView*) children1243));
    return $tmp1255;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1258;
    panda$core$MutableString* result1262;
    org$pandalanguage$pandac$parser$Token next1267;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1261 = (($fn1260) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1259);
    start1258 = $tmp1261;
    if (((panda$core$Bit) { !start1258.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1263 = (panda$core$MutableString*) malloc(40);
    $tmp1263->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1263->refCount.value = 1;
    panda$core$MutableString$init($tmp1263);
    result1262 = $tmp1263;
    $l1265:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1269 = (($fn1268) self->$class->vtable[3])(self);
        next1267 = $tmp1269;
        panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1267.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1270.value) {
        {
            goto $l1266;
        }
        }
        panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1267.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1271.value) {
        {
            (($fn1273) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1258.value), &$s1272);
            return NULL;
        }
        }
        panda$core$String* $tmp1275 = (($fn1274) self->$class->vtable[13])(self, next1267);
        panda$core$MutableString$append$panda$core$String(result1262, $tmp1275);
    }
    }
    $l1266:;
    org$pandalanguage$pandac$ASTNode* $tmp1276 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1276->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1276->refCount.value = 1;
    panda$core$String* $tmp1278 = panda$core$MutableString$finish$R$panda$core$String(result1262);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1276, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1258.value).position, $tmp1278);
    return $tmp1276;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1279;
    org$pandalanguage$pandac$ASTNode* t1283;
    panda$collections$Array* children1286;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1282 = (($fn1281) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1280);
    id1279 = $tmp1282;
    if (((panda$core$Bit) { !id1279.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1285 = (($fn1284) self->$class->vtable[31])(self);
    t1283 = $tmp1285;
    if (((panda$core$Bit) { t1283 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1287 = (panda$collections$Array*) malloc(40);
    $tmp1287->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1287->refCount.value = 1;
    panda$collections$Array$init($tmp1287);
    children1286 = $tmp1287;
    panda$collections$Array$add$panda$collections$Array$T(children1286, ((panda$core$Object*) t1283));
    org$pandalanguage$pandac$ASTNode* $tmp1289 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1289->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1289->refCount.value = 1;
    panda$core$String* $tmp1292 = (($fn1291) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1279.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1289, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1279.value).position, ((panda$core$Object*) $tmp1292), ((panda$collections$ListView*) children1286));
    return $tmp1289;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1293;
    panda$collections$Array* children1297;
    org$pandalanguage$pandac$ASTNode* param1302;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1296 = (($fn1295) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1294);
    start1293 = $tmp1296;
    if (((panda$core$Bit) { !start1293.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1298 = (panda$collections$Array*) malloc(40);
    $tmp1298->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1298->refCount.value = 1;
    panda$collections$Array$init($tmp1298);
    children1297 = $tmp1298;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1301 = (($fn1300) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1301.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1304 = (($fn1303) self->$class->vtable[57])(self);
        param1302 = $tmp1304;
        if (((panda$core$Bit) { param1302 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1297, ((panda$core$Object*) param1302));
        $l1305:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1308 = (($fn1307) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1308.nonnull }).value) goto $l1306;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1310 = (($fn1309) self->$class->vtable[57])(self);
            param1302 = $tmp1310;
            if (((panda$core$Bit) { param1302 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1297, ((panda$core$Object*) param1302));
        }
        goto $l1305;
        $l1306:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1313 = (($fn1312) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1311);
        if (((panda$core$Bit) { !$tmp1313.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1314 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1314->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1314->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1314, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1293.value).position, ((panda$collections$ListView*) children1297));
    return $tmp1314;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1316;
    org$pandalanguage$pandac$parser$Token$nullable start1317;
    panda$core$String* name1323;
    panda$collections$Array* children1326;
    org$pandalanguage$pandac$ASTNode* params1329;
    org$pandalanguage$pandac$ASTNode* returnType1335;
    org$pandalanguage$pandac$Position $tmp1340;
    org$pandalanguage$pandac$ASTNode* b1344;
    org$pandalanguage$pandac$Position $tmp1349;
    org$pandalanguage$pandac$parser$Token token1350;
    panda$core$String* tokenText1353;
    org$pandalanguage$pandac$ASTNode* post1367;
    org$pandalanguage$pandac$Position $tmp1372;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1319 = (($fn1318) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1317 = $tmp1319;
    if (((panda$core$Bit) { !start1317.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1322 = (($fn1321) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1320);
        start1317 = $tmp1322;
        if (((panda$core$Bit) { !start1317.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1316 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1316 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1325 = (($fn1324) self->$class->vtable[18])(self);
    name1323 = $tmp1325;
    if (((panda$core$Bit) { name1323 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1327 = (panda$collections$Array*) malloc(40);
    $tmp1327->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1327->refCount.value = 1;
    panda$collections$Array$init($tmp1327);
    children1326 = $tmp1327;
    panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1331 = (($fn1330) self->$class->vtable[58])(self);
    params1329 = $tmp1331;
    if (((panda$core$Bit) { params1329 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) params1329));
    org$pandalanguage$pandac$parser$Token $tmp1333 = (($fn1332) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1333.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1334.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1337 = (($fn1336) self->$class->vtable[31])(self);
        returnType1335 = $tmp1337;
        if (((panda$core$Bit) { returnType1335 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) returnType1335));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1338 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1338->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1338->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1340);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1338, ((panda$core$Int64) { 138 }), $tmp1340);
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) $tmp1338));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1342 = (($fn1341) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1342.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1343.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1346 = (($fn1345) self->$class->vtable[40])(self);
        b1344 = $tmp1346;
        if (((panda$core$Bit) { b1344 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) b1344));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1347 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1347->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1347->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1349);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1347, ((panda$core$Int64) { 138 }), $tmp1349);
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) $tmp1347));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1352 = (($fn1351) self->$class->vtable[6])(self);
    token1350 = $tmp1352;
    panda$core$String* $tmp1355 = (($fn1354) self->$class->vtable[13])(self, token1350);
    tokenText1353 = $tmp1355;
    panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1350.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1356 = $tmp1357.value;
    if (!$tmp1356) goto $l1358;
    panda$core$Bit $tmp1361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1353, &$s1360);
    bool $tmp1359 = $tmp1361.value;
    if ($tmp1359) goto $l1362;
    panda$core$Bit $tmp1364 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1353, &$s1363);
    $tmp1359 = $tmp1364.value;
    $l1362:;
    panda$core$Bit $tmp1365 = { $tmp1359 };
    $tmp1356 = $tmp1365.value;
    $l1358:;
    panda$core$Bit $tmp1366 = { $tmp1356 };
    if ($tmp1366.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1369 = (($fn1368) self->$class->vtable[59])(self);
        post1367 = $tmp1369;
        if (((panda$core$Bit) { post1367 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) post1367));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1370 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1370->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1370->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1372);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1370, ((panda$core$Int64) { 138 }), $tmp1372);
        panda$collections$Array$add$panda$collections$Array$T(children1326, ((panda$core$Object*) $tmp1370));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1373 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1373->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1373->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1373, kind1316, ((org$pandalanguage$pandac$parser$Token) start1317.value).position, ((panda$core$Object*) name1323), ((panda$collections$ListView*) children1326));
    return $tmp1373;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1375;
    panda$collections$Array* children1379;
    org$pandalanguage$pandac$ASTNode* params1382;
    org$pandalanguage$pandac$ASTNode* b1385;
    org$pandalanguage$pandac$parser$Token token1388;
    panda$core$String* tokenText1391;
    org$pandalanguage$pandac$ASTNode* post1405;
    org$pandalanguage$pandac$Position $tmp1410;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1378 = (($fn1377) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1376);
    start1375 = $tmp1378;
    if (((panda$core$Bit) { !start1375.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1380 = (panda$collections$Array*) malloc(40);
    $tmp1380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1380->refCount.value = 1;
    panda$collections$Array$init($tmp1380);
    children1379 = $tmp1380;
    panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1384 = (($fn1383) self->$class->vtable[58])(self);
    params1382 = $tmp1384;
    if (((panda$core$Bit) { params1382 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) params1382));
    org$pandalanguage$pandac$ASTNode* $tmp1387 = (($fn1386) self->$class->vtable[40])(self);
    b1385 = $tmp1387;
    if (((panda$core$Bit) { b1385 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) b1385));
    org$pandalanguage$pandac$parser$Token $tmp1390 = (($fn1389) self->$class->vtable[6])(self);
    token1388 = $tmp1390;
    panda$core$String* $tmp1393 = (($fn1392) self->$class->vtable[13])(self, token1388);
    tokenText1391 = $tmp1393;
    panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1388.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1394 = $tmp1395.value;
    if (!$tmp1394) goto $l1396;
    panda$core$Bit $tmp1399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1391, &$s1398);
    bool $tmp1397 = $tmp1399.value;
    if ($tmp1397) goto $l1400;
    panda$core$Bit $tmp1402 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1391, &$s1401);
    $tmp1397 = $tmp1402.value;
    $l1400:;
    panda$core$Bit $tmp1403 = { $tmp1397 };
    $tmp1394 = $tmp1403.value;
    $l1396:;
    panda$core$Bit $tmp1404 = { $tmp1394 };
    if ($tmp1404.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1407 = (($fn1406) self->$class->vtable[59])(self);
        post1405 = $tmp1407;
        if (((panda$core$Bit) { post1405 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) post1405));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1408 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1408->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1408->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1410);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1408, ((panda$core$Int64) { 138 }), $tmp1410);
        panda$collections$Array$add$panda$collections$Array$T(children1379, ((panda$core$Object*) $tmp1408));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1411 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1411->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1411->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1411, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1375.value).position, ((panda$collections$ListView*) children1379));
    return $tmp1411;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1413;
    panda$collections$Array* children1416;
    org$pandalanguage$pandac$ASTNode* $tmp1415 = (($fn1414) self->$class->vtable[43])(self);
    decl1413 = $tmp1415;
    if (((panda$core$Bit) { decl1413 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1417 = (panda$collections$Array*) malloc(40);
    $tmp1417->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1417->refCount.value = 1;
    panda$collections$Array$init($tmp1417);
    children1416 = $tmp1417;
    panda$collections$Array$add$panda$collections$Array$T(children1416, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1416, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1416, ((panda$core$Object*) decl1413));
    org$pandalanguage$pandac$ASTNode* $tmp1419 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1419->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1419, ((panda$core$Int64) { 148 }), decl1413->position, ((panda$collections$ListView*) children1416));
    return $tmp1419;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1421;
    org$pandalanguage$pandac$ASTNode* dc1424;
    org$pandalanguage$pandac$Position $tmp1430;
    org$pandalanguage$pandac$ASTNode* a1431;
    org$pandalanguage$pandac$parser$Token $tmp1423 = (($fn1422) self->$class->vtable[6])(self);
    start1421 = $tmp1423;
    panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1421.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1425.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1427 = (($fn1426) self->$class->vtable[56])(self);
        dc1424 = $tmp1427;
        if (((panda$core$Bit) { dc1424 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1428 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1428->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1428->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1430);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1428, ((panda$core$Int64) { 138 }), $tmp1430);
        dc1424 = $tmp1428;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1433 = (($fn1432) self->$class->vtable[55])(self);
    a1431 = $tmp1433;
    if (((panda$core$Bit) { a1431 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1435 = (($fn1434) self->$class->vtable[6])(self);
    switch ($tmp1435.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1437 = (($fn1436) self->$class->vtable[64])(self, dc1424, a1431);
            return $tmp1437;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1439 = (($fn1438) self->$class->vtable[65])(self, dc1424, a1431);
            return $tmp1439;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1441 = (($fn1440) self->$class->vtable[60])(self, dc1424, a1431);
            return $tmp1441;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1443 = (($fn1442) self->$class->vtable[61])(self, dc1424, a1431);
            return $tmp1443;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1445 = (($fn1444) self->$class->vtable[62])(self, dc1424, a1431);
            return $tmp1445;
        }
        break;
        default:
        {
            (($fn1447) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1446);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1448;
    org$pandalanguage$pandac$parser$Token$nullable start1451;
    org$pandalanguage$pandac$parser$Token$nullable name1455;
    org$pandalanguage$pandac$ASTNode* generics1462;
    org$pandalanguage$pandac$Position $tmp1467;
    org$pandalanguage$pandac$ASTNode* stypes1471;
    org$pandalanguage$pandac$Position $tmp1476;
    panda$collections$Array* members1480;
    org$pandalanguage$pandac$ASTNode* member1487;
    panda$collections$Array* $tmp1449 = (panda$collections$Array*) malloc(40);
    $tmp1449->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1449->refCount.value = 1;
    panda$collections$Array$init($tmp1449);
    children1448 = $tmp1449;
    panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1454 = (($fn1453) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1452);
    start1451 = $tmp1454;
    if (((panda$core$Bit) { !start1451.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1458 = (($fn1457) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1456);
    name1455 = $tmp1458;
    if (((panda$core$Bit) { !name1455.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1460 = (($fn1459) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1461.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1464 = (($fn1463) self->$class->vtable[53])(self);
        generics1462 = $tmp1464;
        if (((panda$core$Bit) { generics1462 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) generics1462));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1465 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1465->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1465->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1467);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1465, ((panda$core$Int64) { 138 }), $tmp1467);
        panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) $tmp1465));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1469 = (($fn1468) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1470.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1473 = (($fn1472) self->$class->vtable[54])(self);
        stypes1471 = $tmp1473;
        if (((panda$core$Bit) { stypes1471 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) stypes1471));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1474 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1474->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1476);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1474, ((panda$core$Int64) { 139 }), $tmp1476);
        panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) $tmp1474));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1479 = (($fn1478) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1477);
    if (((panda$core$Bit) { !$tmp1479.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1481 = (panda$collections$Array*) malloc(40);
    $tmp1481->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1481->refCount.value = 1;
    panda$collections$Array$init($tmp1481);
    members1480 = $tmp1481;
    $l1483:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1486 = (($fn1485) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1486.nonnull }).value) goto $l1484;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1489 = (($fn1488) self->$class->vtable[63])(self);
        member1487 = $tmp1489;
        if (((panda$core$Bit) { member1487 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1480, ((panda$core$Object*) member1487));
    }
    goto $l1483;
    $l1484:;
    org$pandalanguage$pandac$ASTNode* $tmp1490 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1490->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1490->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1490, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1451.value).position, ((panda$collections$ListView*) members1480));
    panda$collections$Array$add$panda$collections$Array$T(children1448, ((panda$core$Object*) $tmp1490));
    org$pandalanguage$pandac$ASTNode* $tmp1492 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1492->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1492->refCount.value = 1;
    panda$core$String* $tmp1495 = (($fn1494) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1455.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1492, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1451.value).position, ((panda$core$Object*) $tmp1495), ((panda$collections$ListView*) children1448));
    return $tmp1492;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1496;
    org$pandalanguage$pandac$parser$Token$nullable start1499;
    org$pandalanguage$pandac$parser$Token$nullable name1503;
    org$pandalanguage$pandac$ASTNode* generics1510;
    org$pandalanguage$pandac$Position $tmp1515;
    panda$collections$Array* intfs1516;
    org$pandalanguage$pandac$ASTNode* t1521;
    panda$collections$Array* members1535;
    org$pandalanguage$pandac$ASTNode* member1542;
    panda$collections$Array* $tmp1497 = (panda$collections$Array*) malloc(40);
    $tmp1497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1497->refCount.value = 1;
    panda$collections$Array$init($tmp1497);
    children1496 = $tmp1497;
    panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1502 = (($fn1501) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1500);
    start1499 = $tmp1502;
    if (((panda$core$Bit) { !start1499.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1506 = (($fn1505) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1504);
    name1503 = $tmp1506;
    if (((panda$core$Bit) { !name1503.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1508 = (($fn1507) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1508.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1509.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1512 = (($fn1511) self->$class->vtable[53])(self);
        generics1510 = $tmp1512;
        if (((panda$core$Bit) { generics1510 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) generics1510));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1513 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1513->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1513->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1515);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1513, ((panda$core$Int64) { 138 }), $tmp1515);
        panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) $tmp1513));
    }
    }
    panda$collections$Array* $tmp1517 = (panda$collections$Array*) malloc(40);
    $tmp1517->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1517->refCount.value = 1;
    panda$collections$Array$init($tmp1517);
    intfs1516 = $tmp1517;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1520 = (($fn1519) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1520.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1523 = (($fn1522) self->$class->vtable[19])(self);
        t1521 = $tmp1523;
        if (((panda$core$Bit) { t1521 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1516, ((panda$core$Object*) t1521));
        $l1524:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1527 = (($fn1526) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1527.nonnull }).value) goto $l1525;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1529 = (($fn1528) self->$class->vtable[19])(self);
            t1521 = $tmp1529;
            if (((panda$core$Bit) { t1521 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1516, ((panda$core$Object*) t1521));
        }
        goto $l1524;
        $l1525:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1530 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1530->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1530->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1530, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1499.value).position, ((panda$collections$ListView*) intfs1516));
    panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) $tmp1530));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1534 = (($fn1533) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1532);
    if (((panda$core$Bit) { !$tmp1534.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1536 = (panda$collections$Array*) malloc(40);
    $tmp1536->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1536->refCount.value = 1;
    panda$collections$Array$init($tmp1536);
    members1535 = $tmp1536;
    $l1538:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1541 = (($fn1540) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1541.nonnull }).value) goto $l1539;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1544 = (($fn1543) self->$class->vtable[63])(self);
        member1542 = $tmp1544;
        if (((panda$core$Bit) { member1542 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1535, ((panda$core$Object*) member1542));
    }
    goto $l1538;
    $l1539:;
    org$pandalanguage$pandac$ASTNode* $tmp1545 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1545->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1545->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1545, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1499.value).position, ((panda$collections$ListView*) members1535));
    panda$collections$Array$add$panda$collections$Array$T(children1496, ((panda$core$Object*) $tmp1545));
    org$pandalanguage$pandac$ASTNode* $tmp1547 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1547->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1547->refCount.value = 1;
    panda$core$String* $tmp1550 = (($fn1549) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1503.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1547, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1499.value).position, ((panda$core$Object*) $tmp1550), ((panda$collections$ListView*) children1496));
    return $tmp1547;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1552 = (($fn1551) self->$class->vtable[6])(self);
    switch ($tmp1552.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1554 = (($fn1553) self->$class->vtable[52])(self);
            return $tmp1554;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1556 = (($fn1555) self->$class->vtable[51])(self);
            return $tmp1556;
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
            org$pandalanguage$pandac$ASTNode* $tmp1558 = (($fn1557) self->$class->vtable[63])(self);
            return $tmp1558;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1560 = (($fn1559) self->$class->vtable[50])(self);
            return $tmp1560;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1561;
    org$pandalanguage$pandac$ASTNode* entry1569;
    org$pandalanguage$pandac$Position $tmp1575;
    panda$collections$Array* $tmp1562 = (panda$collections$Array*) malloc(40);
    $tmp1562->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1562->refCount.value = 1;
    panda$collections$Array$init($tmp1562);
    entries1561 = $tmp1562;
    $l1564:;
    org$pandalanguage$pandac$parser$Token $tmp1567 = (($fn1566) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1568 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1567.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1568.value) goto $l1565;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1571 = (($fn1570) self->$class->vtable[66])(self);
        entry1569 = $tmp1571;
        if (((panda$core$Bit) { entry1569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1572 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1572.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1561, ((panda$core$Object*) entry1569));
    }
    goto $l1564;
    $l1565:;
    org$pandalanguage$pandac$ASTNode* $tmp1573 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1573->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1573->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1575, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1573, ((panda$core$Int64) { 152 }), $tmp1575, ((panda$collections$ListView*) entries1561));
    return $tmp1573;
}

